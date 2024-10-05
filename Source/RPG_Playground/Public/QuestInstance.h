#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestAsset.h"
#include "QuestObjectiveInstance.h"
#include "QuestInstance.generated.h"


UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UQuestInstance : public UObject
{
	GENERATED_BODY()
private:
	UPROPERTY()
	TObjectPtr<UQuestAsset> QuestAsset;

	UPROPERTY()
	TArray<TObjectPtr<UQuestObjectiveInstance>> QuestObjectiveInstances;

public:
	void SetQuestAsset(UQuestAsset* InQuestAsset);
	UQuestAsset* GetQuestAsset() const;
	void AddObjectiveInstance(UQuestObjectiveInstance* objectiveInstance);
	void OnQuestEvent(const FQuestEvent& event);
	bool IsCompleted();
};
