// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TB.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
UCLASS()
class V_API ATB : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATB();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Box")
	UBoxComponent* OverLap;

	UPROPERTY(VisibleAnywhere,Category = "Meshcomp")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(EditInstanceOnly, Category = "Components")
	float Strength;

	UPROPERTY(EditInstanceOnly, Category = "Components")
	float PitchAngle;

	UFUNCTION()
	void OverLapBOX(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
