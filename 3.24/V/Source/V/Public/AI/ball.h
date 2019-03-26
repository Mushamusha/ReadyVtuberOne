// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ball.generated.h"

class UHealthComponent;
class USphereComponent;
class USoundCue;
UCLASS()
class V_API Aball : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	Aball();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	//��̬������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComp;

	FVector GetNextPathPoint();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "health")
	UHealthComponent* HealthComp;

	UFUNCTION()
	void HandleTakeDamage(UHealthComponent* OwingHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	
	FVector NextPathPoint;

	UPROPERTY(EditDefaultsOnly,Category = "Components")
	USphereComponent* SphrerComp;

	UMaterialInstanceDynamic* MatInst;

	UPROPERTY(EditDefaultsOnly,Category = "AI")
	float MovementForce;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	float RequiredDistanceToTarget;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	bool bUseVelocityChange;

	void SelfDestruct();

	bool bDestruct;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UParticleSystem* ExplosionEffect;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	float ExplosionRadius;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	float ExplosionDamage;

	void SelfDamage();

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	USoundCue* ExplodeSound;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	USoundCue* SelfDestructSound;

	FTimerHandle TimerHandle_SelfDamage;

	bool bCanSelfDamage;

	void RefreshPath();

	FTimerHandle TimerHandle_RefreshPathPoint;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};
