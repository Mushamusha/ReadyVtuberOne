// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "VGameMode.h"
#include "SCharacter.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	DefaultHealth = 100.0f;
	SetIsReplicated(true);
	TeamNum = 1;
	bIsDead = false;
	Armor = 0;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GetOwnerRole() == ROLE_Authority)
	{
		AActor* MyOwner = GetOwner();
		if (MyOwner)
		{
			MyOwner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::HandleTakeAnyDamage);
		}

	}

	Health = DefaultHealth;
}

void UHealthComponent::OnRep_Health(float OlHealth)
{
	float Damage = Health - OlHealth;
	OnHealthChanged.Broadcast(this, Health,Damage , nullptr, nullptr, nullptr);
}

void UHealthComponent::HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0 ||bIsDead)
	{
		return;
	}

	if (DamageCauser !=DamagedActor && IsFriendly(DamagedActor,DamageCauser))
	{
		return;
	}

	ASCharacter* MyPlayer = Cast<ASCharacter>(GetOwner());

	if (MyPlayer)
	{
		Armor = MyPlayer->PlayerArmor;
	}

	
	Dmagescale = 10 / (10 + Armor);

	float ActuallyDamage = Damage * Dmagescale;

	Health = FMath::Clamp(Health - ActuallyDamage, 0.0f, 300.0f);

	UE_LOG(LogTemp, Log, TEXT("Health Change:%s"), *FString::SanitizeFloat(Health));

	bIsDead = Health <= 0.0f;

	OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);
	
	if (bIsDead)
	{
		AVGameMode* GM = Cast<AVGameMode>(GetWorld()->GetAuthGameMode());

		if (GM)
		{
			GM->OnActorKilled.Broadcast(GetOwner(), DamageCauser,InstigatedBy);
		}
	}

}

void UHealthComponent::AHealth()
{
	if (Health > 0)
	{
		float AddHealthNum = FMath::Min(300 - Health,50.0f);
		Health = Health + AddHealthNum;
		UE_LOG(LogTemp, Log, TEXT("Health Change:%s"), *FString::SanitizeFloat(Health));
		OnHealthChanged.Broadcast(this, Health, -50, nullptr, nullptr, nullptr);
	}
	

}

void UHealthComponent::ContinuousHealth(float Healthamount)
{
	if (Health <= 0 ||Healthamount <= 0 )
	{
		return;
	}
	else
	{
		Health = FMath::Clamp(Health + Healthamount, 0.0f, 300.0f);

		UE_LOG(LogTemp, Log, TEXT("Health Change:%s"), *FString::SanitizeFloat(Health));

		OnHealthChanged.Broadcast(this, Health, -Healthamount, nullptr, nullptr, nullptr);
	}
}

float UHealthComponent::GetHealth() const
{
	return Health;
}

void UHealthComponent::MinusHP()
{
	if (Health > 0)
	{
		Health--;
		OnHealthChanged.Broadcast(this, Health, 1, nullptr, nullptr, nullptr);
	}

}

bool UHealthComponent::IsFriendly(AActor* ActorA, AActor* ActorB)
{
	if (ActorB == nullptr || ActorA == nullptr)
	{
		return false;
	}
	UHealthComponent* HealthCompA = Cast<UHealthComponent>(ActorA->GetComponentByClass(UHealthComponent::StaticClass()));
	UHealthComponent* HealthCompB = Cast<UHealthComponent>(ActorB->GetComponentByClass(UHealthComponent::StaticClass()));

	if (HealthCompA == nullptr || HealthCompB == nullptr)
	{
		return false;
	}

	return HealthCompA->TeamNum == HealthCompB->TeamNum;
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UHealthComponent, Health);
}
