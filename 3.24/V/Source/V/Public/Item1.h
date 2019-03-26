// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DragonBall.h"
#include "Item1.generated.h"

/**
 * 
 */
UCLASS()
class V_API AItem1 : public ADragonBall
{
	GENERATED_BODY()
	
	
public:

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};
