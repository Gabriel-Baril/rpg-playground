#include "QuestObjectiveItemAsset.h"
#include "QuestObjectiveItemInstance.h"
#include <Kismet/GameplayStatics.h>

UQuestObjectiveInstance* UQuestObjectiveItemAsset::InstanciateObjective()
{
	UQuestObjectiveItemInstance* instance = NewObject<UQuestObjectiveItemInstance>(this);
	instance->SetObjectiveAsset(this);
	return instance;
}
