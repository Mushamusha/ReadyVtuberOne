// Fill out your copyright notice in the Description page of Project Settings.

#include "SCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Weapon.h"
#include "V.h"
#include "TimerManager.h"
#include "Components/CapsuleComponent.h"
#include "HealthComponent.h"
#include "SCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ASCharacter::ASCharacter(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<USCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SAC = CreateDefaultSubobject<USpringArmComponent>(TEXT("SAC"));
	SAC->bUsePawnControlRotation = true;
	SAC->SetupAttachment(RootComponent);

	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	GetMovementComponent()->GetNavAgentPropertiesRef().bCanFly = true;

	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Ignore);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SAC);

	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComp"));

	bCanFire = true;

	ZoomFOV = 75.0f;
	ZoomSpeed = 50;

	MaxFood = 100;

	TargetingSpeedModifier = 0.5f;
	SprintingSpeedModifier = 2.0f;

	WeaponAttachSocketName = "WeaponSocket";
	IsCarryWeapon1 = true;

	TotalBullet = 1000;
	MaxBuulet = 30;

}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
	DefaultFOV = CameraComp->FieldOfView;

	HealthComp->OnHealthChanged.AddDynamic(this, &ASCharacter::OnHealthChanged);

	CurrentFood = MaxFood;
	GetWeapon();
	CurrentBullet = MaxBuulet;
	GetWorldTimerManager().SetTimer(TimerHandle_MinusFood,this,&ASCharacter::Hunger,1.0f,true);
}

void ASCharacter::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector()*Value);
}

void ASCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector()*Value);
}


void ASCharacter::OnCrouchToggle()
{
	if (IsSprinting())
	{
		SetSprinting(false);
	}

	if (CanCrouch())
	{
		Crouch();
	}
	else
	{
		UnCrouch();
	}
}

void ASCharacter::BeginZoom()
{
	bIsTargeting = true;
	bWantZoom = true;
}

void ASCharacter::EndZoom()
{
	bIsTargeting = false;
	bWantZoom = false;
}

void ASCharacter::SetSprinting(bool NewSprinting)
{
	bWantsToRun = NewSprinting;

	if (bIsCrouched)
	{
		UnCrouch();
	}
}

void ASCharacter::StartFire()
{
	if (bCanFire)
	{
		bIsFiring = true;

		if (CurrentWeapon)
		{
			CurrentWeapon->StartFire();
		}
	}

}

void ASCharacter::StopFire()
{
	bIsFiring = false;

	if (CurrentWeapon)
	{
		CurrentWeapon->StopFire();
	}
}


bool ASCharacter::IsTargeting() const
{
	return bIsTargeting;
}


bool ASCharacter::IsFiring() const
{
	return bIsFiring;
}

void ASCharacter::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode /*= 0*/)
{
	Super::OnMovementModeChanged(PrevMovementMode, PreviousCustomMode);

	/* Check if we are no longer falling/jumping */
	if (PrevMovementMode == EMovementMode::MOVE_Falling &&
		GetCharacterMovement()->MovementMode != EMovementMode::MOVE_Falling)
	{
		SetIsJumping(false);
		SetCanFire(true);
	}
}

void ASCharacter::OnJump()
{
	SetIsJumping(true);
	SetCanFire(false);
}

bool ASCharacter::IsInitiatedJump() const
{
	return bIsJumping;
}

void ASCharacter::OnStartSprinting()
{
	SetCanFire(false);
	SetSprinting(true);
}

void ASCharacter::OnStopSprinting()
{
	SetCanFire(true);
	SetSprinting(false);
}

void ASCharacter::SetIsJumping(bool NewJumping)
{
	if (bIsCrouched && NewJumping)
	{
		UnCrouch();
	}
	else if (NewJumping != bIsJumping)
	{
		bIsJumping = NewJumping;

		if (bIsJumping)
		{
			/* Perform the built-in Jump on the character */
			Jump();
		}
	}
}

float ASCharacter::GetTargetingSpeedModifier() const
{
	return TargetingSpeedModifier;
}

FRotator ASCharacter::GetAimOffsets() const
{
	const FVector AimDirWS = GetBaseAimRotation().Vector();
	const FVector AimDirLS = ActorToWorld().InverseTransformVectorNoScale(AimDirWS);
	const FRotator AimRotLS = AimDirLS.Rotation();

	return AimRotLS;
}

float ASCharacter::GetSprintingSpeedModifier() const
{
	return SprintingSpeedModifier;
}

bool ASCharacter::IsSprinting() const
{
	if (!GetCharacterMovement())
	{
		return false;
	}

	return bWantsToRun&&CurrentFood > 30 && !IsTargeting() && !GetVelocity().IsZero() && (FVector::DotProduct(GetVelocity().GetSafeNormal2D(), GetActorRotation().Vector()) > 0.8);
}

void ASCharacter::SetCanFire(bool NewFire)
{
	bCanFire = NewFire;
}

void ASCharacter::OnHealthChanged(UHealthComponent* OwingHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Health <= 0 && !bDie)
	{
		bDie = true;
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		DetachFromControllerPendingDestroy();
		CurrentWeapon->Destroy();
		SetLifeSpan(1.5f);
	}
}

void ASCharacter::AddHealth()
{	
	HealthComp->AHealth();
}

void ASCharacter::GetWeaponTwo()
{
	if (IsCarryWeapon2)
	{
		if (Role == ROLE_Authority)
		{
			if (CurrentWeapon)
			{
				CurrentWeapon->Destroy();
			}
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			CurrentWeapon = GetWorld()->SpawnActor<AWeapon>(Weapon2, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParameters);
			if (CurrentWeapon)
			{
				CurrentWeapon->SetOwner(this);
				CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttachSocketName);
			}

		}

	}
}

void ASCharacter::GetWeaponThree()
{
	if (IsCarryWeapon3)
	{
		if (Role == ROLE_Authority)
		{
			if (CurrentWeapon)
			{
				CurrentWeapon->Destroy();
			}
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			CurrentWeapon = GetWorld()->SpawnActor<AWeapon>(Weapon3, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParameters);
			if (CurrentWeapon)
			{
				CurrentWeapon->SetOwner(this);
				CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttachSocketName);
			}

		}

	}
}

void ASCharacter::GetWeaponFour()
{
	if (IsCarryWeapon4)
	{
		if (Role == ROLE_Authority)
		{
			if (CurrentWeapon)
			{
				CurrentWeapon->Destroy();
			}
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			CurrentWeapon = GetWorld()->SpawnActor<AWeapon>(Weapon4, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParameters);
			if (CurrentWeapon)
			{
				CurrentWeapon->SetOwner(this);
				CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttachSocketName);
			}

		}

	}
}

void ASCharacter::GetWeaponFive()
{
	if (IsCarryWeapon5)
	{
		if (Role == ROLE_Authority)
		{
			if (CurrentWeapon)
			{
				CurrentWeapon->Destroy();
			}
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			CurrentWeapon = GetWorld()->SpawnActor<AWeapon>(Weapon5, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParameters);
			if (CurrentWeapon)
			{
				CurrentWeapon->SetOwner(this);
				CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttachSocketName);
			}

		}

	}
}

void ASCharacter::Cheat()
{
	PlayerArmor += 2000;
}

void ASCharacter::Zero()
{
	PlayerArmor = 0;
}

void ASCharacter::Reload()
{
	CurrentWeapon->StartReloadWeapon();
}

void ASCharacter::Hunger()
{
	if (CurrentFood > 0)
	{
		CurrentFood--;
	}
	else if (CurrentFood == 0)
	{
		HealthComp->MinusHP();
	}
}

void ASCharacter::EatFood()
{
	CurrentFood = FMath::Clamp(CurrentFood + 50.0f, 0.0f, 100.0f);
}

void ASCharacter::GetWeapon()
{
	if (IsCarryWeapon1)
	{
		if (Role == ROLE_Authority)
		{
			if (CurrentWeapon)
			{
				CurrentWeapon->Destroy();
			}
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			CurrentWeapon = GetWorld()->SpawnActor<AWeapon>(StarWeapon, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParameters);
			if (CurrentWeapon)
			{
				CurrentWeapon->SetOwner(this);
				CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttachSocketName);
			}

		}

	}

}

// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float TargetFOV = bWantZoom ? ZoomFOV : DefaultFOV;
	float NewFOV = FMath::FInterpTo(DefaultFOV, TargetFOV, DeltaTime, ZoomSpeed);
	CameraComp->SetFieldOfView(NewFOV);

}

// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ASCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookRight", this, &ASCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAction("CrouchToggle", IE_Released, this, &ASCharacter::OnCrouchToggle);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASCharacter::OnJump);
	PlayerInputComponent->BindAction("Zoom", IE_Pressed, this, &ASCharacter::BeginZoom);
	PlayerInputComponent->BindAction("Zoom", IE_Released, this, &ASCharacter::EndZoom);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ASCharacter::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ASCharacter::StopFire);
	PlayerInputComponent->BindAction("GetWeapon", IE_Pressed, this, &ASCharacter::GetWeapon);
	PlayerInputComponent->BindAction("GetWeapon2", IE_Pressed, this, &ASCharacter::GetWeaponTwo);
	PlayerInputComponent->BindAction("GetWeapon3", IE_Pressed, this, &ASCharacter::GetWeaponThree);
	PlayerInputComponent->BindAction("GetWeapon4", IE_Pressed, this, &ASCharacter::GetWeaponFour);
	PlayerInputComponent->BindAction("GetWeapon5", IE_Pressed, this, &ASCharacter::GetWeaponFive);
	PlayerInputComponent->BindAction("Cheat", IE_Pressed, this, &ASCharacter::Cheat);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ASCharacter::Reload);
	PlayerInputComponent->BindAction("Zero", IE_Pressed, this, &ASCharacter::Zero);
	PlayerInputComponent->BindAction("SprintHold", IE_Pressed, this, &ASCharacter::OnStartSprinting);
	PlayerInputComponent->BindAction("SprintHold", IE_Released, this, &ASCharacter::OnStopSprinting);

}

void ASCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASCharacter, CurrentWeapon);
	DOREPLIFETIME(ASCharacter, bDie);
	DOREPLIFETIME(ASCharacter, IsCarryWeapon1);
	DOREPLIFETIME(ASCharacter, IsCarryWeapon2);
}


FVector ASCharacter::GetPawnViewLocation() const
{
	if (CameraComp)
	{
		return CameraComp->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}

void ASCharacter::UseItem(int Number)
{
	switch (Number)
	{
	case 1:
		EatFood();
		break;
	case 2:
		AddHealth();
		break;
	default:
		break;
	}
}



