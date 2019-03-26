// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DragonBall.generated.h"

class UParticleSystem;
class USphereComponent;
class UDecalComponent;
UCLASS()
class V_API ADragonBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADragonBall();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	void TouchEffect();

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent * SphereComp;

//	UPROPERTY(VisibleAnywhere, Category = "Components")
//	UDecalComponent* DecalComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Effects")
	UParticleSystem* Effects;

public:	

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
