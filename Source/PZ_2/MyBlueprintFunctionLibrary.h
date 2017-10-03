// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InventoryItem.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PZ_2_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:	

		UFUNCTION(BlueprintCallable, Category = "MyLibrary")
		static UInventoryItem* AddItemToInventory(int32 IdParam, TEnumAsByte<CategoryEnum> CategoryParam, FString NameParam, float PriceParam);
	
	
};
