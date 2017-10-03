// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"


// Sets default values
APlayerActor::APlayerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerActor::PostInitProperties()
{
	Super::PostInitProperties();
	CalculateDamage();
}

void APlayerActor::PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	CalculateDamage();
}

void APlayerActor::CalculateDamage()
{
	totalDamage = damage*damagePerSecond;
}

// Called every frame
void APlayerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

