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
	// Back Reference
	TObjectPtr<UQuestObjectiveItemAsset> ItemObjectiveAsset;

	// State
	int CurrentItemCount = 0;
public:
	void SetObjectiveAsset(UQuestObjectiveItemAsset* ObjectiveAsset);
	virtual void OnQuestEvent(const FQuestEvent& event) override;
	virtual bool IsCompleted() override;

	virtual void Save(FMemoryWriter& writer) override;
	virtual void Load(FMemoryReader& reader) override;
};
