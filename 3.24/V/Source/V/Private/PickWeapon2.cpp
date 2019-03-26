// Fill out your copyright notice in the Description page of Project Settings.

#include "PickWeapon2.h"
#include "SCharacter.h"



void APickWeapon2::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	ASCharacter* MyCharacter = Cast<ASCharacter>(OtherActor);
	if (MyCharacter)
	{
		MyCharacter->IsCarryWeapon2 = true;
		Destroy();
	}
}
