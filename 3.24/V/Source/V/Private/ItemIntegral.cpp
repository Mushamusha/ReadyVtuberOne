// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemIntegral.h"
#include "SCharacter.h"




void AItemIntegral::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	ASCharacter* MyCharacter = Cast<ASCharacter>(OtherActor);
	if (MyCharacter)
	{
		MyCharacter->DragonBallNumber++;
		Destroy();
	}
}
