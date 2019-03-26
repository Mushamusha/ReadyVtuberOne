// Fill out your copyright notice in the Description page of Project Settings.

#include "Item1.h"
#include "SCharacter.h"




void AItem1::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	ASCharacter* MyCharacter = Cast<ASCharacter>(OtherActor);
	if (MyCharacter)
	{
		MyCharacter->IsCarryItem1 = true;
	//	Destroy();
	}
}
