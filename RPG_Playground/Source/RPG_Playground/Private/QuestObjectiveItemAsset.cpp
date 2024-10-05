#include "QuestObjectiveItemAsset.h"
#include "QuestObjectiveItemInstance.h"

UQuestObjectiveInstance* UQuestObjectiveItemAsset::InstanciateObjective()
{
	UQuestObjectiveItemInstance* instance = NewObject<UQuestObjectiveItemInstance>();
	instance->SetObjectiveAsset(this);
	return instance;
}
