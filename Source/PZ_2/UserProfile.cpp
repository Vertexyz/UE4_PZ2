// Fill out your copyright notice in the Description page of Project Settings.

#include "UserProfile.h"
#include "Inventory.h"
#include "InventoryItem.h"

UUserProfile::UUserProfile()
{
	PlayerName = TEXT("Eric");
	Armor = 10.0f;
	HP = 100.0f;

	Inventory = NewObject<UInventory>();

	Inventory->InventoryItemList.Add(UInventoryItem::MAKE(1, CategoryEnum::Armor, "Helm", 1.0f));
	Inventory->InventoryItemList.Add(UInventoryItem::MAKE(2, CategoryEnum::Wearpon, "Sword", 2.0f));
	Inventory->InventoryItemList.Add(UInventoryItem::MAKE(3, CategoryEnum::Armor, "Shield", 2.0f));
	Inventory->InventoryItemList.Add(UInventoryItem::MAKE(4, CategoryEnum::Spell, "Fire", 3.0f));
}


