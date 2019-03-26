// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "Rocketsweapon.generated.h"

/**
 * 
 */
class UCameraComponent;
UCLASS()
class V_API ARocketsweapon : public AWeapon
{
	GENERATED_BODY()
	

protected:

	virtual void Fire();

	virtual void BeginPlay();

	UCameraComponent* CameraComp;
	
	UPROPERTY(EditDefaultsOnly, Category = "projectile")
	TSubclassOf<AActor> projectile;

public:

	virtual void StartFire();
	
};
