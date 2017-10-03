// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryItem.h"

UInventoryItem::UInventoryItem():Id(0),Category(None),Name(TEXT("None")),Price(0.0f)
{
	/*
	Id = 0;
	Category = CategoryEnum::None;
	Name = "Default";
	Price = 0.0f;
	*/
}

UInventoryItem* UInventoryItem::MAKE(int32 IdParam, TEnumAsByte<CategoryEnum> CategoryParam, FString NameParam, float PriceParam)
{
	UInventoryItem* InventoryItemTemp = NewObject<UInventoryItem>();

	InventoryItemTemp->Init(IdParam, CategoryParam, NameParam, PriceParam);

	return InventoryItemTemp;
}

void UInventoryItem::Init(int32 IdParam, TEnumAsByte<CategoryEnum> CategoryParam, FString NameParam, float PriceParam)
{
	Id = IdParam;
	Category = CategoryParam;
	Name = NameParam;
	Price = PriceParam;
}
