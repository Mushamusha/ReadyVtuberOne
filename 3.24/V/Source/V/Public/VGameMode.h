// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "VGameMode.generated.h"

/**
 * 
 */
enum class EWaveStae : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled, AActor*, VictmActor, AActor*, KillerActor,AController*, KillerController);

UCLASS()
class V_API AVGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:

	int32 CurrentWave;

	UPROPERTY(EditDefaultsOnly,Category = "Wave")
	int32 TimeBetweenWave;

	int32 NumberOfWave;

	FTimerHandle TimerHanle_SpawnBot;

	FTimerHandle TimerHandle_Between;

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void SpawnNewBot();
	
	void StartWave();

	void RespawnPlayer();

public:

	AVGameMode();

	virtual void StartPlay() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintAssignable,Category = "GameMode")
	FOnActorKilled OnActorKilled;

protected:

	void EndWave();

	void PrepareNextWave();

	void SpawnOneBot();

	void CheckBotAlive();

	void CheckPlayerAlive();

	void GmaeOver();

	void SetWaveState(EWaveStae NewState);

};
