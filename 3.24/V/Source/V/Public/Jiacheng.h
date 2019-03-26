// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Jiacheng.generated.h"

UCLASS()
class V_API AJiacheng : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJiacheng();

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Jiacheng")
	float ChiXuShiJian;

	UPROPERTY(EditDefaultsOnly, Category = "Jiacheng")
	int32 ZongCiShu;

	int32 JiHuoChiShu;



	FTimerHandle TimeHandle_OnActivated;

	UFUNCTION()
	void OnTickPowerUp();

	UPROPERTY(ReplicatedUsing=OnRep_Active)
	bool bIsActive;

	UFUNCTION()
	void OnRep_Active();

	UFUNCTION(BlueprintImplementableEvent, Category = "Xiaoguo")
	void OnStateChange(bool bNewIsActive);

public:	
	
	UFUNCTION(BlueprintImplementableEvent,Category = "Xiaoguo")
	void OnActivated(AActor* OtherActor);

	UFUNCTION(BlueprintImplementableEvent, Category = "Xiaoguo")
	void OnExpired();
	
	void ActivatePower(AActor* OtherActor);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Xiaoguo")
	void OnPowerUpTick();
};
