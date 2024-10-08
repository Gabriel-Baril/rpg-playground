#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestObjectiveInstance.h"
#include "QuestObjectiveItemAsset.h"
#include "QuestObjectiveItemInstance.generated.h"

UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UQuestObjectiveItemInstance : public UQuestObjectiveInstance
{
	GENERATED_BODY()
private:
	UPROPERTY(SaveGame)
	TObjectPtr<UQuestObjectiveItemAsset> ItemObjectiveAsset;

	UPROPERTY(SaveGame)
	int CurrentItemCount = 0;
public:
	void SetObjectiveAsset(UQuestObjectiveItemAsset* ObjectiveAsset);
	virtual void OnQuestEvent(const FQuestEvent& event) override;
	virtual bool IsCompleted() override;
};
