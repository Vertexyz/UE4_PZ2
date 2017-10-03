// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"
#include "InventoryItem.h"

UInventoryItem* UMyBlueprintFunctionLibrary::AddItemToInventory(int32 IdParam, TEnumAsByte<CategoryEnum> CategoryParam, FString NameParam, float PriceParam)
{
	return UInventoryItem::MAKE(IdParam, CategoryParam, NameParam, PriceParam);
}




