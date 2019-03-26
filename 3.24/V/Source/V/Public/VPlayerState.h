// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "VPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class V_API AVPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable,Category = "PlayerState")
	void AddScore(float ScoreDelta);
	
	
};
