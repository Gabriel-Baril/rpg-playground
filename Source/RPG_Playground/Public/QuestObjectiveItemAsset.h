#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestObjectiveAsset.h"
#include "ItemDefAsset.h"
#include "QuestObjectiveItemAsset.generated.h"

class UQuestObjectiveInstance;

UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UQuestObjectiveItemAsset : public UQuestObjectiveAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TObjectPtr<UItemDefAsset> ItemToCollect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int ItemAmount;

	UQuestObjectiveInstance* InstanciateObjective() override;
};
