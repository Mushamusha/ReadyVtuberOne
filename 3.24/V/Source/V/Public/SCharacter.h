// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Item/PickUpItem.h"
#include "SCharacter.generated.h"



class UCameraComponent;
class USpringArmComponent;
class AWeapon;
class UHealthComponent;
UCLASS()
class V_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter(const class FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);

	void MoveRight(float Value);

	void OnCrouchToggle();

	float DefaultFOV;

	UPROPERTY(EditDefaultsOnly,Category = "player")
	float ZoomFOV;

	bool bWantZoom;

	UPROPERTY(EditDefaultsOnly, Category = "player",meta=(ClampMin = 1,ClampMax = 100))
	float ZoomSpeed;

	void BeginZoom();

	void EndZoom();

	UFUNCTION()
	void OnHealthChanged(UHealthComponent* OwingHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UPROPERTY(Replicated,BlueprintReadOnly,Category = "player")
	bool bDie;

	UPROPERTY(VisibleDefaultsOnly,Category = "player")
	FName WeaponAttachSocketName;

	UPROPERTY(Replicated)
	AWeapon* CurrentWeapon;

	UPROPERTY(EditDefaultsOnly,Category = "player")
	TSubclassOf<AWeapon> StarWeapon;

	UPROPERTY(EditDefaultsOnly, Category = "player")
	TSubclassOf<AWeapon> Weapon2;

	UPROPERTY(EditDefaultsOnly, Category = "player")
	TSubclassOf<AWeapon> Weapon3;

	UPROPERTY(EditDefaultsOnly, Category = "player")
	TSubclassOf<AWeapon> Weapon4;

	UPROPERTY(EditDefaultsOnly, Category = "player")
	TSubclassOf<AWeapon> Weapon5;

	void AddHealth();

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Components")
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SAC;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "health")
	UHealthComponent* HealthComp;

	void GetWeapon();

	void GetWeaponTwo();

	void GetWeaponThree();

	void GetWeaponFour();

	void GetWeaponFive();

	void Cheat();

	void Zero();

	void Reload();

	UPROPERTY(Transient, Replicated)
	bool bWantsToRun;

	UPROPERTY(Transient, Replicated)
	bool bIsSprinting;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float SprintingSpeedModifier;

	UPROPERTY(Transient, Replicated)
	bool bIsTargeting;

	UPROPERTY(EditDefaultsOnly, Category = "Targeting")
	float TargetingSpeedModifier;
	
	UPROPERTY(Transient, Replicated)
	bool bIsFiring;

	UPROPERTY(BlueprintReadOnly)
	float CurrentFood;

	float MaxFood;

	void Hunger();

	void EatFood();

	FTimerHandle TimerHandle_MinusFood;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual FVector GetPawnViewLocation() const override;

	UFUNCTION(BlueprintCallable)
	void UseItem(int Number);

	UPROPERTY(BlueprintReadOnly,Category = "Gameplay")
	int32 DragonBallNumber;
	
	UPROPERTY(BlueprintReadOnly, Category = "Gameplay")
	bool IsCarryItem1;

	UPROPERTY(EditDefaultsOnly, Category = "player")
	bool IsCarryWeapon1;

	UPROPERTY(EditDefaultsOnly, Category = "player")
	bool IsCarryWeapon2;

	UPROPERTY(EditDefaultsOnly, Category = "player")
	bool IsCarryWeapon3;

	UPROPERTY(EditDefaultsOnly, Category = "player")
	bool IsCarryWeapon4;

	UPROPERTY(EditDefaultsOnly, Category = "player")
	bool IsCarryWeapon5;

	int32 PlayerArmor;

	void SetSprinting(bool NewSprinting);

	UFUNCTION(BlueprintCallable, Category = "player")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "player")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "Targeting")
	bool IsTargeting() const;

	UFUNCTION(BlueprintCallable, Category = "Targeting")
	bool IsFiring() const;

	UPROPERTY(Transient, Replicated)
	bool bIsJumping;

	virtual void OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode = 0) override;
	
	void OnJump();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	bool IsInitiatedJump() const;

	void OnStartSprinting();

	void OnStopSprinting();

	void SetIsJumping(bool NewJumping);

	float GetTargetingSpeedModifier() const;

	/* Retrieve Pitch/Yaw from current camera */
	UFUNCTION(BlueprintCallable, Category = "Targeting")
	FRotator GetAimOffsets() const;

	float GetSprintingSpeedModifier() const;

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual bool IsSprinting() const;

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SetCanFire(bool NewFire);

	UPROPERTY(BlueprintReadWrite)
	bool bCanFire;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	int32 TotalBullet;

	UPROPERTY(BlueprintReadWrite)
	int CurrentBullet;

	UPROPERTY(EditDefaultsOnly, Category = "Bullet")
	int MaxBuulet;
};
