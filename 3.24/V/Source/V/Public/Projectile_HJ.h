// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile_HJ.generated.h"

class UStaticMesh;
class USphereComponent;
class UParticleSystem;
class USoundCue;
UCLASS()
class V_API AProjectile_HJ : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile_HJ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere,Category = "Component")
	USphereComponent* SphereComp;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	void Explode(FVector ImpactPoint);

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundCue* ExplodeSound;

	UPROPERTY(EditDefaultsOnly,Category = "FX")
	UParticleSystem* ExplodeEffect;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
