// Fill out your copyright notice in the Description page of Project Settings.

#include "DragonBall.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SCharacter.h"
#include "Components/DecalComponent.h"


// Sets default values
ADragonBall::ADragonBall()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetSphereRadius(60.0f);
//	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
//	DecalComp->SetRelativeRotation(FRotator(90,0.0f, 0.0f));
//	DecalComp->DecalSize = FVector(60, 60, 60);
	RootComponent = MeshComp;
	SetReplicates(true);

//	DecalComp->SetupAttachment(RootComponent);

	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	//����ѯ������ײ
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

}

void ADragonBall::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	TouchEffect();
}

// Called when the game starts or when spawned
void ADragonBall::BeginPlay()
{
	Super::BeginPlay();
	TouchEffect();	
}

void ADragonBall::TouchEffect()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, Effects, GetActorLocation());
}


