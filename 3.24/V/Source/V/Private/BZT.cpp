// Fill out your copyright notice in the Description page of Project Settings.

#include "BZT.h"
#include "Components/StaticMeshComponent.h"
#include "HealthComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABZT::ABZT()
{

	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ABZT::OHealthChanged);
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	MeshComp->SetCollisionObjectType(ECC_PhysicsBody);
	MeshComp->SetSimulatePhysics(true);

	RadialComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialComp"));
	RadialComp->SetupAttachment(RootComponent);
	RadialComp->bAutoActivate = false;
	RadialComp->bImpulseVelChange = true;
	RadialComp->bIgnoreOwningActor = true;
	RadialComp->Radius = 400.0f;

	ExplosionImpulse = 400;

}

// Called when the game starts or when spawned
void ABZT::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABZT::OHealthChanged(UHealthComponent* OwingHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (bExploded)
	{
		return;
	}

	if (Health <= 0)
	{
		bExploded = true;
		FVector BoostIntensity = FVector::UpVector*ExplosionImpulse;

		MeshComp->AddImpulse(BoostIntensity, NAME_None, true);
		
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());

		MeshComp->SetMaterial(0, ExplodedMaterial);

		TArray<AActor*> IgnoredActors;

		UGameplayStatics::ApplyRadialDamage(this, 200, GetActorLocation(), 400, nullptr,IgnoredActors, this, GetInstigatorController(), true);

		RadialComp->FireImpulse();
	}
}

// Called every frame
void ABZT::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

