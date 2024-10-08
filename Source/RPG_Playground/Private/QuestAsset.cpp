
#include "QuestAsset.h"
#include "Kismet/GameplayStatics.h"
#include "QuestInstance.h"

UQuestInstance* UQuestAsset::Instanciate()
{
	UE_LOG(LogTemp, Warning, TEXT("UQuestAsset::Instanciate"));
	UQuestInstance* questInstance = NewObject<UQuestInstance>(this); // UGameplayStatics::GetGameInstance(GetWorld())

	questInstance->SetQuestAsset(this);
	for (UQuestObjectiveAsset* objective : QuestObjectives)
	{
		UQuestObjectiveInstance* instance = objective->InstanciateObjective();
		questInstance->AddObjectiveInstance(instance);
	}
	return questInstance;
}
