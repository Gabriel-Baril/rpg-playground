
#include "QuestAsset.h"
#include "Kismet/GameplayStatics.h"
#include "QuestProgressData.h"
#include "QuestInstance.h"

UQuestInstance* UQuestAsset::Instanciate(const FQuestProgressData* QuestData)
{
	UE_LOG(LogTemp, Warning, TEXT("UQuestAsset::Instanciate"));
	UQuestInstance* questInstance = NewObject<UQuestInstance>(this);
	questInstance->SetQuestAsset(this);
	for (UQuestObjectiveAsset* objective : QuestObjectives)
	{
		UQuestObjectiveInstance* instance = objective->InstanciateObjective();
		questInstance->AddObjectiveInstance(instance);
	}
	if (QuestData != nullptr)
	{
		FMemoryReader reader(QuestData->SerializedData, true);
		questInstance->Load(reader);
	}
	return questInstance;
}
