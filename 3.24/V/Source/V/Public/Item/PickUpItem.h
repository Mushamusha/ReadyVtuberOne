// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickUpItem.generated.h"

USTRUCT(BlueprintType)
struct FItemStruct
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float Weight;
};
UCLASS()
class V_API APickUpItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUpItem();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<FItemStruct> ItemData;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
