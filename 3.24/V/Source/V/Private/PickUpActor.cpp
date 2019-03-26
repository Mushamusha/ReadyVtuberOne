// Fill out your copyright notice in the Description page of Project Settings.

#include "PickUpActor.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "Jiacheng.h"

// Sets default values
APickUpActor::APickUpActor()
{
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetSphereRadius(60.0f);
	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	DecalComp->SetRelativeRotation(FRotator(90, 0.0f, 0.0f));
	DecalComp->DecalSize = FVector(60, 60, 60);
	RootComponent = SphereComp;

	DecalComp->SetupAttachment(RootComponent);

	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	//����ѯ������ײ
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	CD = 10.0f;

	SetReplicates(true);
}

// Called when the game starts or when spawned
void APickUpActor::BeginPlay()
{
	Super::BeginPlay();
	if (Role ==ROLE_Authority)
	{
		Respawn();
	}

}

void APickUpActor::Respawn()
{
	if (JiachengClass == nullptr)
	{
		return;
	}
	else
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		JiachengInstance = GetWorld()->SpawnActor<AJiacheng>(JiachengClass, GetTransform(), SpawnParams);

	}

}

void APickUpActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (Role == ROLE_Authority && JiachengInstance)
	{
		JiachengInstance->ActivatePower(OtherActor);
		JiachengInstance = nullptr;

		GetWorldTimerManager().SetTimer(TimerHandle_RespawnTimer, this, &APickUpActor::Respawn, CD);
	}
}

