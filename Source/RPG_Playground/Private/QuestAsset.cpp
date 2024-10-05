
#include "QuestAsset.h"
#include "QuestInstance.h"

UQuestInstance* UQuestAsset::Instanciate()
{
	UE_LOG(LogTemp, Warning, TEXT("UQuestAsset::Instanciate"));
	UQuestInstance* questInstance = NewObject<UQuestInstance>();

	questInstance->SetQuestAsset(this);
	for (UQuestObjectiveAsset* objective : QuestObjectives)
	{
		UQuestObjectiveInstance* instance = objective->InstanciateObjective();
		questInstance->AddObjectiveInstance(instance);
	}
	return questInstance;
}
