#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestAsset.h"
#include "C:\Program Files\Epic Games\UE_5.3\Engine\Source\Runtime\Engine\Classes\Engine\DataTable.h"
#include "FQuestData.generated.h"

USTRUCT(BlueprintType)
struct FQuestData : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int QuestIdentifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UQuestAsset* QuestAsset;
};