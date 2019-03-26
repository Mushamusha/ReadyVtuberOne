// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "VGameState.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EWaveStae : uint8
{
	WaitingToStart,

	WaveInPRogeress,

	WaitingToComplete,

	WaveComplete,

	GameOver,
};

UCLASS()
class V_API AVGameState : public AGameStateBase
{
	GENERATED_BODY()
	
protected:
	UFUNCTION()
	void OnRep_WaveState(EWaveStae OldState);
	
	UFUNCTION(BlueprintImplementableEvent,Category = "GameState")
	void WaveStateChanged(EWaveStae NewState, EWaveStae OldState);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_WaveState, Category = "GameState")
	EWaveStae WaveState;

public:

	void SetWaveState(EWaveStae NewState);

};
