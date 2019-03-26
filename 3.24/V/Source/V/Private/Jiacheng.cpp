// Fill out your copyright notice in the Description page of Project Settings.

#include "Jiacheng.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AJiacheng::AJiacheng()
{
	SetReplicates(true);

	bIsActive = false;
}



void AJiacheng::ActivatePower(AActor* OtherActor)
{
	OnActivated(OtherActor);

	bIsActive = true;
	OnRep_Active();

	if (ChiXuShiJian >= 0)
	{
		GetWorldTimerManager().SetTimer(TimeHandle_OnActivated, this, &AJiacheng::OnTickPowerUp, ChiXuShiJian, true);
	}
	else
	{
		OnTickPowerUp();
	}
}

void AJiacheng::OnTickPowerUp()
{
	JiHuoChiShu++;

	OnPowerUpTick();

	if (JiHuoChiShu >= ZongCiShu)
	{
		OnExpired();

		bIsActive = false;
		OnRep_Active();

		GetWorldTimerManager().ClearTimer(TimeHandle_OnActivated);
	}
}
 
void AJiacheng::OnRep_Active()
{
	OnStateChange(bIsActive);
}



void AJiacheng::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AJiacheng, bIsActive);

}