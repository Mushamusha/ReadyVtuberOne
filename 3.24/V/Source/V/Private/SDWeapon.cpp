// Fill out your copyright notice in the Description page of Project Settings.

#include "SDWeapon.h"
#include "Kismet/GameplayStatics.h"
#include "particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "V.h"



void ASDWeapon::Fire()
{


	FireOne();
	FireOne();
	FireOne();
	FireOne();
	FireOne();
	FireOne();
	FireOne();
	FireOne();
	FireOne();
	FireOne();
	FireOne();
	FireOne();
	FireOne();
	FireOne();
	FireOne();

	if (MuzzleEffect)
	{

		UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
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
	
	LastFireSecond = GetWorld()->TimeSeconds;

}

void ASDWeapon::FireOne()
{
	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);
		FVector ShotDirection = EyeRotation.Vector();


		float HalfRad = FMath::DegreesToRadians(BulletSpread);
		ShotDirection = FMath::VRandCone(ShotDirection, HalfRad, HalfRad);

		FHitResult Hit;
		FVector TraceEnd = EyeLocation + (ShotDirection * 100000);

		FVector TracePoint = TraceEnd;

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(MyOwner);
		QueryParams.AddIgnoredActor(this);
		QueryParams.bTraceComplex = true;
		QueryParams.bReturnPhysicalMaterial = true; //�����������

		EPhysicalSurface SurfaceType = SurfaceType_Default;

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

			if (TranceEffect)
			{
				FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
				UParticleSystemComponent* TranComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TranceEffect, MuzzleLocation);
				TranComp->SetVectorParameter("Target", TracePoint);
			}
		}

		if (TranceEffect)
		{
			FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
			UParticleSystemComponent* TranComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TranceEffect, MuzzleLocation);
			TranComp->SetVectorParameter("Target", TracePoint);
		}
	}

}

void ASDWeapon::StartFire()
{
	float FirstDelay = FMath::Max(LastFireSecond + TimeBetweenShot - GetWorld()->TimeSeconds, 0.0f);
	GetWorldTimerManager().SetTimer(TimeHandle_TimeBetweenShots, this, &ASDWeapon::Fire, TimeBetweenShot, false, FirstDelay);
}
