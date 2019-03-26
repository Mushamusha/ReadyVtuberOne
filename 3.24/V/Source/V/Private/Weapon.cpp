// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "V.h"
#include"SCharacter.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"
#include "Sound/SoundCue.h"

static int32 DebugWeaponDrawing = 0;
FAutoConsoleVariableRef CVARDebugWeaponDrawing(TEXT("FUCK"), DebugWeaponDrawing, TEXT("Draw Debug Line"), ECVF_Cheat);


// Sets default values
AWeapon::AWeapon()
{

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	MuzzleSocketName = "MuzzleSocket";
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BaseDamage = 10.0f;
	RateOfFire = 600.0f;

	SetReplicates(true);

	NetUpdateFrequency = 66.0f;
	MinNetUpdateFrequency = 33.0f;

	BulletSpread = 1.0f;
	CurrentState = EWeaponState::Idle;
}



void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	TimeBetweenShot = 60 / RateOfFire;
}

void AWeapon::Fire()
{
	if (Role < ROLE_Authority)
	{
		ServerFire();
	}

	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);
		FVector ShotDirection = EyeRotation.Vector();
		//��ȡĿ��λ�ú�����λ��

		float HalfRad = FMath::DegreesToRadians(BulletSpread);
		ShotDirection = FMath::VRandCone(ShotDirection, HalfRad, HalfRad);
		//������ɢ�Ƕ�
		FHitResult Hit;
		FVector TraceEnd = EyeLocation + (ShotDirection * 100000);
		//��ȡ���е�  Ŀ���
		FVector TracePoint = TraceEnd;
		//��ײ��ѯ��������ȷ��ײλ��
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(MyOwner);
		QueryParams.AddIgnoredActor(this);
		QueryParams.bTraceComplex = true;
		QueryParams.bReturnPhysicalMaterial = true; //�����������

		EPhysicalSurface SurfaceType = SurfaceType_Default;
		//�������ʱ�������˺�����
		if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, COLLISION_WEAPON, QueryParams))
		{
			AActor* HitActor = Hit.GetActor();
			//PhysicalMaterial �������  DetermineSurfaceType��ȡ��������
			SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());

			float ActualDamage = BaseDamage;

			switch (SurfaceType)
			{
			case SURFACE_HEAD:
				ActualDamage *= 4.0f;
				break;
			case SURFACE_BODY:
				ActualDamage *= 2.0f;
				break;
			case SURFACE_HANDLEG:
				ActualDamage = BaseDamage;
				break;
			default:
				ActualDamage = 50.0f;
				break;
			}
			//����˺�

			UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShotDirection, Hit, MyOwner->GetInstigatorController(), MyOwner, DamageType);

			TracePoint = Hit.ImpactPoint;
			PlayImpactEffects(SurfaceType, TracePoint);
			PlayFireEffects(TracePoint);
			PlayHitSound(TracePoint);
			PlayFireSound();

		}

		PlayFireSound();
		PlayFireEffects(TracePoint);
		if (DebugWeaponDrawing > 0)
		{
			DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::Black, false, 1.0f, 0, 1.0f);
		}
		//�������˸��Ƶ��ͻ���
		if (Role == ROLE_Authority)
		{
			HitScanTrace.TraceTo = TracePoint;
			HitScanTrace.SurfaceType = SurfaceType;
		}


		APawn* TheOwner = Cast<APawn>(GetOwner());
		if (TheOwner)
		{
			APlayerController* PC = Cast<APlayerController>(TheOwner->GetController());
			if (PC)
			{
				PC->ClientPlayCameraShake(FireCamShake);
			}
		}
	}
	LastFireSecond = GetWorld()->TimeSeconds;

}



void AWeapon::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
{
	UParticleSystem* SelectedEffect = nullptr;
	switch (SurfaceType)
	{
	case SURFACE_HEAD:
	case SURFACE_BODY:
	case SURFACE_HANDLEG:
		SelectedEffect = FleshImpactEffect;
		break;
	default:
		SelectedEffect = DefaultImpactEffect;
		break;
	}
	if (SelectedEffect)
	{
		FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);

		FVector ShotDirection = ImpactPoint - MuzzleLocation;
		ShotDirection.Normalize();
		//spawnEmitter ���ɷ�����
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedEffect, ImpactPoint, ShotDirection.Rotation());
	}
}

void AWeapon::PlayFireEffects(FVector TranceEnd)
{
	if (MuzzleEffect)
	{
		//�ڸ��ŵ����ɷ�����
		UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
	}

	if (TranceEffect)
	{
		FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
		FVector ShootDirection = TranceEnd - MuzzleLocation;
		UGameplayStatics::SpawnEmitterAtLocation(this, TranceEffect, MuzzleLocation, ShootDirection.Rotation());
	}

}

void AWeapon::ServerFire_Implementation()
{
	Fire();
}

bool AWeapon::ServerFire_Validate()
{
	return true;
}

void AWeapon::PlayFireSound()
{
	UGameplayStatics::SpawnSoundAttached(FireCue, MeshComp, MuzzleSocketName);
}

void AWeapon::PlayHitSound(FVector SoundLocation)
{
	UGameplayStatics::SpawnSoundAtLocation(this, HitCue, SoundLocation);
}

void AWeapon::OnRep_HitScanTrace()
{
	PlayFireEffects(HitScanTrace.TraceTo);
	PlayImpactEffects(HitScanTrace.SurfaceType, HitScanTrace.TraceTo);
}

void AWeapon::OpenFire()
{
	ASCharacter* Owner = Cast<ASCharacter>(GetOwner());
	if (Owner->bCanFire)
	{
		if (Owner->CurrentBullet > 0)
		{
			Fire();
			Owner->CurrentBullet--;
		}
		else
		{
			StartReloadWeapon();
		}
	}
}

bool AWeapon::CanReload()
{
	ASCharacter* Owner = Cast<ASCharacter>(GetOwner());
	bool BulletNum = (Owner->CurrentBullet < Owner->MaxBuulet) && (Owner->TotalBullet > 0);
	bool WeaponStateCanReload = (CurrentState == EWeaponState::Firing) || (CurrentState == EWeaponState::Idle);
	return (BulletNum && WeaponStateCanReload);
}

void AWeapon::PlayReloadCue()
{
	UGameplayStatics::SpawnSoundAtLocation(this, ReloadCue, GetActorLocation());
}

void AWeapon::ReloadWeapon()
{
	ASCharacter* Owner = Cast<ASCharacter>(GetOwner());
	int DetalBullet = FMath::Min(Owner->MaxBuulet - Owner->CurrentBullet, Owner->TotalBullet);
	
		Owner->CurrentBullet += DetalBullet;
		Owner->TotalBullet -= DetalBullet;
		GetWorldTimerManager().ClearTimer(TimerHandle_ReloadWeapon);
		Owner->SetCanFire(true);
	
}

float AWeapon::PlayWeaponAnimation(UAnimMontage* Animation, float InPlayRate, FName StartSectionName)
{
	ASCharacter* Owner = Cast<ASCharacter>(GetOwner());
	float Duration = 0.0f;
	if (Owner)
	{
		if (Animation)
		{
			Duration = Owner->PlayAnimMontage(Animation, InPlayRate, StartSectionName);
		}

	}


	return Duration;
}

void AWeapon::StopWeaponAnimation(UAnimMontage* Animation)
{
	ASCharacter* Owner = Cast<ASCharacter>(GetOwner());
	if (Owner)
	{
		if (Animation)
		{
			Owner->StopAnimMontage(Animation);
		}
	}
}

void AWeapon::StopReload()
{
	if (CurrentState == EWeaponState::Reloading)
	{
		SetCurrentState(EWeaponState::Idle);
		StopWeaponAnimation(ReloadAnim);
		GetWorldTimerManager().ClearTimer(TimerHandle_StopReload);
	}
}

void AWeapon::OnReloading()
{
	float Duration;
	if (CurrentState == EWeaponState::Reloading)
	{
		if (ReloadAnim)
		{
			Duration = PlayWeaponAnimation(ReloadAnim);
		}
		else
		{
			Duration = 1.5f;
		}

		GetWorldTimerManager().SetTimer(TimerHandle_StopReload, this, &AWeapon::StopReload, Duration, false, Duration);
		GetWorldTimerManager().SetTimer(TimerHandle_ReloadWeapon, this, &AWeapon::ReloadWeapon, Duration, false, Duration);
	}

}

void AWeapon::StartFire()
{
	SetCurrentState(EWeaponState::Firing);
	float FirstDelay = FMath::Max(LastFireSecond + TimeBetweenShot - GetWorld()->TimeSeconds, 0.0f);
	GetWorldTimerManager().SetTimer(TimeHandle_TimeBetweenShots, this, &AWeapon::OpenFire, TimeBetweenShot, true, FirstDelay);
}

void AWeapon::StopFire()
{
	SetCurrentState(EWeaponState::Idle);
	GetWorldTimerManager().ClearTimer(TimeHandle_TimeBetweenShots);
}


void AWeapon::SetCurrentState(EWeaponState NewState)
{
	CurrentState = NewState;
}



void AWeapon::StartReloadWeapon()
{
	ASCharacter* Owner = Cast<ASCharacter>(GetOwner());
	if (CanReload())
	{		
		SetCurrentState(EWeaponState::Reloading);
		Owner->SetCanFire(false);
		OnReloading();
		PlayReloadCue();
	}


}

EWeaponState AWeapon::GetCurrentState() const
{
	return CurrentState;
}

void AWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AWeapon, HitScanTrace, COND_SkipOwner);
}


// Called every frame



