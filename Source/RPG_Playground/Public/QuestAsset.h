#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestObjectiveAsset.h"
#include "QuestAsset.generated.h"

class UQuestInstance;

UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UQuestAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int QuestID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<TObjectPtr<UQuestObjectiveAsset>> QuestObjectives;

	UQuestInstance* Instanciate();
};
