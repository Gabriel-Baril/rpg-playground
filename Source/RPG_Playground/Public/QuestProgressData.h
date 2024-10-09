#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestAsset.h"
#include "QuestProgressData.generated.h"

USTRUCT()
struct FQuestProgressData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TObjectPtr<UQuestAsset> QuestAsset;

	UPROPERTY()
	TArray<uint8> SerializedData;

	FQuestProgressData() {}
};