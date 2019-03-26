// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "SDWeapon.generated.h"

/**
 * 
 */
UCLASS()
class V_API ASDWeapon : public AWeapon
{
	GENERATED_BODY()
	
	
protected:


	virtual void Fire() override;


	void FireOne();

public:

	virtual void StartFire() override;

	
};
