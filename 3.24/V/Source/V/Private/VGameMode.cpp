// Fill out your copyright notice in the Description page of Project Settings.

#include "VGameMode.h"
#include "TimerManager.h"
#include "HealthComponent.h"
#include "VGameState.h"
#include "VPlayerState.h"

static int32 SpawnAI = 2;
FAutoConsoleVariableRef CVARSpawnAI(TEXT("Shit"), SpawnAI, TEXT("Spawn AI"), ECVF_Cheat);


AVGameMode::AVGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.0f;

	GameStateClass = AVGameState::StaticClass();
	PlayerStateClass = AVPlayerState::StaticClass();

	TimeBetweenWave = 5.0f;
	CurrentWave = 0;
}


void AVGameMode::StartWave()
{
	CurrentWave++;

	NumberOfWave = 2 * CurrentWave;

	GetWorldTimerManager().SetTimer(TimerHanle_SpawnBot, this, &AVGameMode::SpawnOneBot, 1.0f, true, 0.0f);

	SetWaveState(EWaveStae::WaveInPRogeress);
}


void AVGameMode::RespawnPlayer()
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* PC = It->Get();
		if (PC &&PC->GetPawn() == nullptr)
		{
			RestartPlayer(PC);
		}
	}
}

void AVGameMode::StartPlay()
{
	Super::StartPlay();

	PrepareNextWave();
}

void AVGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (SpawnAI >= 1)
	{
		CheckBotAlive();
	}

	CheckPlayerAlive();
}

void AVGameMode::EndWave()
{
	GetWorldTimerManager().ClearTimer(TimerHanle_SpawnBot);

	SetWaveState(EWaveStae::WaitingToComplete);
}

void AVGameMode::PrepareNextWave()
{
	GetWorldTimerManager().SetTimer(TimerHandle_Between, this, &AVGameMode::StartWave, TimeBetweenWave, false);

	SetWaveState(EWaveStae::WaitingToStart);

	RespawnPlayer();
}

void AVGameMode::SpawnOneBot()
{
	NumberOfWave--;

	SpawnNewBot();

	if (NumberOfWave <= 0)
	{
		EndWave();
	}
}

void AVGameMode::CheckBotAlive()
{
	bool IsPrepareIng = GetWorldTimerManager().IsTimerActive(TimerHandle_Between);
	if (NumberOfWave > 0 || IsPrepareIng)
	{
		return;
	}

	bool IsAnyBotAlive = false;

	for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; ++It)
	{
		APawn* TestPawn = It->Get();
		if (TestPawn == nullptr || TestPawn->IsPlayerControlled())
		{
			continue;
		}
		UHealthComponent* HealComp = Cast<UHealthComponent>(TestPawn->GetComponentByClass(UHealthComponent::StaticClass()));

		if (HealComp &&HealComp->GetHealth() > 0)
		{

			IsAnyBotAlive = true;
			break;
		}
	}
	if (!IsAnyBotAlive)
	{
		SetWaveState(EWaveStae::WaveComplete);
		PrepareNextWave();
	}
}

void AVGameMode::CheckPlayerAlive()
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* PC = It->Get();
		if (PC &&PC->GetPawn())
		{
			APawn* MyPawn = PC->GetPawn();

			UHealthComponent* HealComp = Cast<UHealthComponent>(MyPawn->GetComponentByClass(UHealthComponent::StaticClass()));
			if (ensure(HealComp) && HealComp > 0)
			{
				return;
			}
		}

	}

	GmaeOver();
}

void AVGameMode::GmaeOver()
{
	EndWave();

	SetWaveState(EWaveStae::GameOver);

	UE_LOG(LogTemp, Log, TEXT("Your palyer died"));
}

void AVGameMode::SetWaveState(EWaveStae NewState)
{
	AVGameState* GS = GetGameState<AVGameState>();
	if (ensureAlways(GS))
	{
		GS->SetWaveState(NewState);
	}
}
