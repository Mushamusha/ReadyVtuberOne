// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

class USkeletalMeshComponent;
class UDamageType;
class UParticleSystem;
class USoundCue;
UENUM()
enum class EWeaponState
{
	Idle,
	Firing,
	Equipping,
	Reloading
};
USTRUCT()
struct FHitScanTrace
{
	GENERATED_BODY()

public:
	
	UPROPERTY()
	TEnumAsByte<EPhysicalSurface> SurfaceType;

	UPROPERTY()
	FVector_NetQuantize TraceTo;
};
UCLASS()
class V_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

protected:
	virtual void BeginPlay() override;

	//����������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MeshComp;



	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "weapon")
	FName MuzzleSocketName;
	
	//�������ϵͳ
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "weapon")
	UParticleSystem* MuzzleEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "weapon")
	UParticleSystem* DefaultImpactEffect;

	TSubclassOf<UDamageType> DamageType;

	UPROPERTY(EditDefaultsOnly,Category = "weapon")
	TSubclassOf<UCameraShake> FireCamShake;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "weapon")
	UParticleSystem* FleshImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "weapon")
	UParticleSystem* TranceEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "weapon")
	float BaseDamage;
	
	virtual void Fire();

	void PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint);

	void PlayFireEffects(FVector TranceEnd);

	UFUNCTION(Server,Reliable,WithValidation)
	void ServerFire();

	//���ƫת�Ƕ�
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "weapon",meta=(ClampMin = 0.0f))
	float BulletSpread;

	FTimerHandle TimeHandle_TimeBetweenShots;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "weapon")
	float RateOfFire;

	float TimeBetweenShot;

	float LastFireSecond;

	void PlayFireSound();

	void PlayHitSound(FVector SoundLocation);


	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundCue* FireCue;;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundCue* ReloadCue;
	
	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundCue* HitCue;;

	UPROPERTY(ReplicatedUsing=OnRep_HitScanTrace)
	FHitScanTrace HitScanTrace;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* ReloadAnim;
	
	UFUNCTION()
	void OnRep_HitScanTrace();

	void OpenFire();

	bool CanReload();

	void PlayReloadCue();

	void ReloadWeapon();

	float PlayWeaponAnimation(UAnimMontage* Animation, float InPlayRate = 1.f, FName StartSectionName = NAME_None);

	void StopWeaponAnimation(UAnimMontage* Animation);

	void StopReload();

	void OnReloading();

	FTimerHandle TimerHandle_ReloadWeapon;

	FTimerHandle TimerHandle_StopReload;

public:	

	virtual void StartFire();

	void StopFire();

	EWeaponState CurrentState;

	void SetCurrentState(EWeaponState NewState);

	void StartReloadWeapon();

	EWeaponState GetCurrentState() const;
	
};
