// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemDefAsset.generated.h"

UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UItemDefAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FName ItemName;

	bool IsSameItem(const UItemDefAsset& item)
	{
		return ItemID == item.ItemID;
	}
};
