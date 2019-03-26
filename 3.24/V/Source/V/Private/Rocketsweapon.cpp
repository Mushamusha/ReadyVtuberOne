// Fill out your copyright notice in the Description page of Project Settings.

#include "Rocketsweapon.h"
#include "SCharacter.h"
#include "Camera/CameraComponent.h"
#include "V.h"
#include "TimerManager.h"




void ARocketsweapon::Fire()
{

		AActor* MyOwner = GetOwner();
		if (MyOwner && projectile)
		{


			ASCharacter* MyPlayer = Cast<ASCharacter>(MyOwner);
			FVector EyeLocation;
			FRotator EyeRotation;

			FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
			CameraComp = Cast<UCameraComponent>(MyPlayer->GetComponentByClass(UCameraComponent::StaticClass()));

			EyeRotation = CameraComp->GetComponentRotation();
			EyeLocation = CameraComp->GetComponentLocation();

			FVector ShotDirection = EyeRotation.Vector();
			FVector TraceEnd = EyeLocation + (ShotDirection * 100000);
			FHitResult Hit;
			FVector TracePoint = TraceEnd;
			FCollisionQueryParams QueryParams;
			QueryParams.AddIgnoredActor(MyOwner);
			QueryParams.AddIgnoredActor(this);
			QueryParams.bTraceComplex = true;
			QueryParams.bReturnPhysicalMaterial = true;

			FVector TargetPoint;

			if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, COLLISION_WEAPON, QueryParams))
			{
				TracePoint = Hit.ImpactPoint;
				TargetPoint = TracePoint - MuzzleLocation;

				FRotator MuzzleRotation = TargetPoint.Rotation();
				FActorSpawnParameters SpawnParam;
				SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

				FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);

				GetWorld()->SpawnActor<AActor>(projectile, MuzzleLocation, MuzzleRotation, SpawnParam);
			}
			else
			{
				TargetPoint = TracePoint - MuzzleLocation;
				FRotator MuzzleRotation = TargetPoint.Rotation();



				FActorSpawnParameters SpawnParam;
				SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

				GetWorld()->SpawnActor<AActor>(projectile, MuzzleLocation, MuzzleRotation, SpawnParam);
			}



		}

		LastFireSecond = GetWorld()->TimeSeconds;

}

void ARocketsweapon::BeginPlay()
{
	Super::BeginPlay();
}

void ARocketsweapon::StartFire()
{
	float FirstDelay = FMath::Max(LastFireSecond + TimeBetweenShot - GetWorld()->TimeSeconds, 0.0f);
	GetWorldTimerManager().SetTimer(TimeHandle_TimeBetweenShots, this, &ARocketsweapon::Fire, TimeBetweenShot, false, FirstDelay);
}
