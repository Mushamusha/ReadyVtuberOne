// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickUpActor.generated.h"

class USphereComponent;
class UDecalComponent;
class AJiacheng;
UCLASS()
class V_API APickUpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUpActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent * SphereComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UDecalComponent* DecalComp;

	UPROPERTY(EditInstanceOnly, Category = "Components")
	TSubclassOf<AJiacheng> JiachengClass;

	AJiacheng* JiachengInstance;

	UFUNCTION()
	void Respawn();

	FTimerHandle TimerHandle_RespawnTimer;

	UPROPERTY(EditInstanceOnly, Category = "Jiacheng")
	float CD;

public:	

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};
