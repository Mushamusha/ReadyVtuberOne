// Fill out your copyright notice in the Description page of Project Settings.

#include "TB.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "SCharacter.h"

// Sets default values
ATB::ATB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	OverLap = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	RootComponent = OverLap;
	OverLap->SetBoxExtent(FVector(60, 60, 60));

	OverLap->OnComponentBeginOverlap.AddDynamic(this, &ATB::OverLapBOX);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);

	Strength = 600.0f;
	PitchAngle = 90.0f;
}

// Called when the game starts or when spawned
void ATB::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATB::OverLapBOX(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	ASCharacter* OtherCharacter = Cast<ASCharacter>(OtherActor);
	FRotator LaunchDirection = OtherCharacter->GetActorRotation();
	LaunchDirection.Pitch += PitchAngle;

	FVector LaunchVelocity = LaunchDirection.Vector() * Strength;
	if (OtherCharacter)
	{
		OtherCharacter->LaunchCharacter(LaunchVelocity,false,true);
	}else if (OtherComp && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulse(LaunchVelocity, NAME_None, true);
	}
}

// Called every frame
void ATB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

