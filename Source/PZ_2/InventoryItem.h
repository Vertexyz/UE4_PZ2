// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItem.generated.h"

UENUM()
enum CategoryEnum
{
	None UMETA(DisplayName = "None"),
	Armor UMETA(DisplayName = "Armor"),
	Wearpon UMETA(DisplayName = "Wearpon"),
	Spell UMETA(DisplayName = "Spell")
};

UCLASS()
class PZ_2_API UInventoryItem : public UObject
{
	GENERATED_BODY()

public:
	UInventoryItem();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int32 Id;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TEnumAsByte<CategoryEnum> Category;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FString Name;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float Price;

	static UInventoryItem* MAKE(int32 IdParam, TEnumAsByte<CategoryEnum> CategoryParam, FString NameParam, float PriceParam);

protected:

	virtual void Init(int32 IdParam, TEnumAsByte<CategoryEnum> CategoryParam, FString NameParam, float PriceParam);

};
