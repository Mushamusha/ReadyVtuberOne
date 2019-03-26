// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHealthChangedSignature, UHealthComponent*, HealthComp, float, Health, float, HealthDelta, const class UDamageType*, DamageType, class AController*, InstigatedBy, AActor*, DamageCauser);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class V_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(ReplicatedUsing=OnRep_Health,BlueprintReadOnly, Category = "HealthComponent")
	float Health;

	bool bIsDead;

	UPROPERTY(EditDefaultsOnly,Replicated,Category = "HealthComponent")
	uint8 TeamNum;

	float Dmagescale;

	
	UFUNCTION()
	void OnRep_Health(float OlHealth);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthComponent")
	float DefaultHealth;

	UFUNCTION()
	void HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);


public:	

	UPROPERTY(BlueprintAssignable,Category = "Events")
	FOnHealthChangedSignature OnHealthChanged;
	
	UFUNCTION()
	void AHealth();

	int32 Armor;

	UFUNCTION(BlueprintCallable,Category = "HealthComponent")
	void ContinuousHealth(float Healthamount);

	UFUNCTION(BlueprintCallable, Category = "HealthComponent")
	float GetHealth() const;

	void MinusHP();

	UFUNCTION(BlueprintCallable,BlueprintPure,Category ="HealthComponent")
	static bool IsFriendly(AActor* ActorA,AActor* ActorB);

};
