// Fill out your copyright notice in the Description page of Project Settings.

#include "PickWeapon1.h"
#include "SCharacter.h"




void APickWeapon1::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	ASCharacter* MyCharacter = Cast<ASCharacter>(OtherActor);
	if (MyCharacter)
	{
		MyCharacter->IsCarryWeapon1 = true;
		Destroy();
	}
}
