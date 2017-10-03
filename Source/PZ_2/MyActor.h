// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class PZ_2_API APlayerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitProperties() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	virtual void CalculateDamage();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		int32 damage = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		int32 damagePerSecond = 20;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Damage")
		int32 totalDamage;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Units")
		//TSubclassOf <APlayerActor> Units;
};
