// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DragonBall.h"
#include "ItemIntegral.generated.h"

/**
 * 
 */
UCLASS()
class V_API AItemIntegral : public ADragonBall
{
	GENERATED_BODY()
	
public:

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
	
};
