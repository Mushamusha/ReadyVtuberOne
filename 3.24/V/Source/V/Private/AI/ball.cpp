// Fill out your copyright notice in the Description page of Project Settings.

#include "ball.h"
#include "Components/StaticMeshComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "HealthComponent.h"
#include "Components/SphereComponent.h"
#include "SCharacter.h"
#include "Sound/SoundCue.h"


// Sets default values
Aball::Aball()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Component"));
	MeshComp->SetCanEverAffectNavigation(false);
	MeshComp->SetSimulatePhysics(true);
	RootComponent = MeshComp;
	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &Aball::HandleTakeDamage);
	SphrerComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphrerComp"));
	SphrerComp->SetSphereRadius(200.0f);
	SphrerComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphrerComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphrerComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphrerComp->SetupAttachment(RootComponent);


	bUseVelocityChange = false;
	MovementForce = 10000.0f;
	RequiredDistanceToTarget = 100.0f;

	ExplosionDamage = 100.0f;
	ExplosionRadius = 200.0f;

	

}

// Called when the game starts or when spawned
void Aball::BeginPlay()
{
	Super::BeginPlay();

	if (Role == ROLE_Authority)
	{
		NextPathPoint = GetNextPathPoint();
	}


}

FVector Aball::GetNextPathPoint()
{
	//��ȡ���λ��
	float NearestPlayerDistance = 100000.0f;
	APawn* PlayerPawn = nullptr;
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* PC = It->Get();
		if (PC &&PC->GetPawn())
		{
			APawn* MyPawn = PC->GetPawn();
			UHealthComponent* PlayerHealComp = Cast<UHealthComponent>(MyPawn->GetComponentByClass(UHealthComponent::StaticClass()));
			if (ensure(PlayerHealComp) && PlayerHealComp->GetHealth() > 0)
			{
				float Distance = (MyPawn->GetActorLocation() - GetActorLocation()).Size();
				if (Distance < NearestPlayerDistance)
				{
					NearestPlayerDistance = Distance;
					PlayerPawn = MyPawn;
				}
			}
		}
	}
	if (PlayerPawn)
	{
		UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayerPawn);
		GetWorldTimerManager().ClearTimer(TimerHandle_RefreshPathPoint);
		GetWorldTimerManager().SetTimer(TimerHandle_RefreshPathPoint, this, &Aball::RefreshPath, 2.0f, false);
		if (NavPath&&NavPath->PathPoints.Num() > 1)
		{
			return NavPath->PathPoints[1];
		}
	}

	return GetActorLocation();
}

void Aball::HandleTakeDamage(UHealthComponent* OwingHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	//�����˺�
	if (MatInst == nullptr)
	{
		MatInst = MeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MeshComp->GetMaterial(0));
	}

	if (MatInst)
	{
		MatInst->SetScalarParameterValue("Last", GetWorld()->TimeSeconds);
	}


	UE_LOG(LogTemp, Log, TEXT("Health %s of %s"), *FString::SanitizeFloat(Health), *GetName());
	if (Health <= 0.0f)
	{
		SelfDestruct();
	}

}

void Aball::SelfDestruct()
{
	if (bDestruct)
	{
		return;
	}
	bDestruct = true;

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());

	UGameplayStatics::SpawnSoundAtLocation(this, ExplodeSound, GetActorLocation());

	MeshComp->SetVisibility(false, true);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if (Role == ROLE_Authority)
	{
		TArray<AActor*> IgnoredActors;

		IgnoredActors.Add(this);

		UGameplayStatics::ApplyRadialDamage(this, ExplosionDamage, GetActorLocation(), ExplosionRadius, nullptr, IgnoredActors, this, GetInstigatorController(), true);

	//	DrawDebugSphere(GetWorld(), GetActorLocation(), ExplosionRadius, 12, FColor::Yellow, false, 2.0f, 1.0f);

	//	Destroy();

		

		SetLifeSpan(1.0f);
	}

}

void Aball::SelfDamage()
{
	UGameplayStatics::ApplyDamage(this, 50, GetInstigatorController(), this, nullptr);
}

void Aball::RefreshPath()
{
	NextPathPoint = GetNextPathPoint();
}

// Called every frame
void Aball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bDestruct&&Role == ROLE_Authority)
	{
		float DistanceToTarget = (GetActorLocation() - NextPathPoint).Size();

		if (DistanceToTarget <= RequiredDistanceToTarget)
		{
			NextPathPoint = GetNextPathPoint();

		//	DrawDebugString(GetWorld(), GetActorLocation(), "Reach");
		}
		else
		{
			FVector ForceDirection = NextPathPoint - GetActorLocation();
			ForceDirection.Normalize();
			ForceDirection *= MovementForce;

			MeshComp->AddForce(ForceDirection, NAME_None, bUseVelocityChange);

	//		DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + ForceDirection, 20, FColor::Yellow, false, 0.0f, 1.0f);
		}
	//	DrawDebugSphere(GetWorld(), NextPathPoint, 20.0f, 12, FColor::Yellow, false, 2.0f, 1.0f);
	}

	//�����

}

void Aball::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	ASCharacter* PlayerPawn = Cast<ASCharacter>(OtherActor);
	if (!bCanSelfDamage&&!bDestruct&&!UHealthComponent::IsFriendly(this, OtherActor))
	{
		if (PlayerPawn)
		{

			if (Role == ROLE_Authority)
			{
				GetWorldTimerManager().SetTimer(TimerHandle_SelfDamage, this, &Aball::SelfDamage, 0.5, true, 0.0f);
			}

			bCanSelfDamage = true;

			UGameplayStatics::SpawnSoundAttached(SelfDestructSound, RootComponent);
		}
	}

}

