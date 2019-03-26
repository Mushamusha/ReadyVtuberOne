// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile_HJ.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "HealthComponent.h"
#include "Sound/SoundCue.h"


// Sets default values
AProjectile_HJ::AProjectile_HJ()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->OnComponentHit.AddDynamic(this, &AProjectile_HJ::OnHit);
	RootComponent = SphereComp;
	SphereComp->SetSphereRadius(30.0f);



}

// Called when the game starts or when spawned
void AProjectile_HJ::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(10.0f);
	
}

void AProjectile_HJ::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	if (OtherActor && !UHealthComponent::IsFriendly(this, OtherActor))
	{
		Explode(Hit.ImpactPoint);
	}
}

void AProjectile_HJ::Explode(FVector ImpactPoint)
{
	TArray<AActor*> IgnoredActors;

	AController* PlayerController = this->GetInstigatorController();
	
	UGameplayStatics::ApplyRadialDamage(this, 80, GetActorLocation(), 200, nullptr, IgnoredActors, this, PlayerController, true);
	UGameplayStatics::ApplyRadialDamage(this, 60, GetActorLocation(), 400, nullptr, IgnoredActors, this, PlayerController, true);


	if (ExplodeEffect)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplodeEffect, ImpactPoint, ImpactPoint.Rotation());
	}

	if (ExplodeSound)
	{
		UGameplayStatics::SpawnSoundAtLocation(this, ExplodeSound, GetActorLocation());
	}

	Destroy();
}

// Called every frame
void AProjectile_HJ::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

