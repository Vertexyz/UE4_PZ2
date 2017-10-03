// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Inventory.h"
#include "UObject/NoExportTypes.h"
#include "UserProfile.generated.h"

/**
 * 
 */
UCLASS()
class PZ_2_API UUserProfile : public UObject
{
	GENERATED_BODY()

public:

	UUserProfile();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player Stats")
		float HP;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player Stats")
		float Armor;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player Stats")
		FString PlayerName;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player Stats")
		UInventory* Inventory;
};
