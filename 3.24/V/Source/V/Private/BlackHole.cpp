// Fill out your copyright notice in the Description page of Project Settings.

#include "BlackHole.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HealthComponent.h"

// Sets default values
ABlackHole::ABlackHole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
//	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Meshcomp"));
//	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
//	RootComponent = MeshComp;

	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComp"));

	InnerSphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("InnerSphere"));
	InnerSphereComp->SetSphereRadius(100.0f);
//	InnerSphereComp->SetupAttachment(RootComponent);

	InnerSphereComp->OnComponentBeginOverlap.AddDynamic(this, &ABlackHole::InnerSphereBeginOverlap);

	OuterSphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("OuterSphere"));
	OuterSphereComp->SetSphereRadius(300.0f);
//	OuterSphereComp->SetupAttachment(RootComponent);
}


void ABlackHole::InnerSphereBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	
	if (OtherActor&&!UHealthComponent::IsFriendly(this,OtherActor))
	{
		OtherActor->Destroy();		
	}
}

void ABlackHole::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(5.0f);
}

// Called every frame
void ABlackHole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<UPrimitiveComponent*> OverlappingComps;

	OuterSphereComp->GetOverlappingComponents(OverlappingComps);

	for (int i = 0; i < OverlappingComps.Num(); i++)
	{
		UPrimitiveComponent* PrimComp = OverlappingComps[i];

		if (PrimComp&&PrimComp->IsSimulatingPhysics())
		{
			const float Radius = OuterSphereComp->GetScaledSphereRadius();
			const float Powers = -20000.0f;

			PrimComp->AddRadialForce(GetActorLocation(), Radius, Powers, ERadialImpulseFalloff::RIF_Constant, true);
		}

	}

}

