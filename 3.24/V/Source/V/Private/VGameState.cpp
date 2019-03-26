// Fill out your copyright notice in the Description page of Project Settings.

#include "VGameState.h"
#include "Net/UnrealNetwork.h"



void AVGameState::OnRep_WaveState(EWaveStae OldState)
{
	WaveStateChanged(WaveState,OldState);
}


void AVGameState::SetWaveState(EWaveStae NewState)
{
	if (Role ==ROLE_Authority)
	{
		EWaveStae OldState = WaveState;

		WaveState = NewState;

		OnRep_WaveState(OldState);
	}
}

void AVGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AVGameState, WaveState);
}
