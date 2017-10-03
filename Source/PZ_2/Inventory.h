// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "UObject/NoExportTypes.h"
#include "Inventory.generated.h"

UCLASS()
class PZ_2_API UInventory : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory Items")
		TArray<UInventoryItem*> InventoryItemList;
};
