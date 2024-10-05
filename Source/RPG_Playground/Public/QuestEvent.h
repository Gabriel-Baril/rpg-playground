#pragma once
#include "CoreMinimal.h"
#include "ItemDefAsset.h"

enum class EQuestEventType
{
	ItemPicked UMETA(DisplayName = "Item Picked"),
};

struct FQuestEvent
{
	EQuestEventType Type;
	union
	{
		struct FItemPickedData
		{
			UItemDefAsset* ItemPicked;
			int Amount;
		} ItemPickedData;
	};
};