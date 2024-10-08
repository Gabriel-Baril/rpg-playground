#include "QuestInstance.h"

void UQuestInstance::SetQuestAsset(UQuestAsset* InQuestAsset)
{
	QuestAsset = InQuestAsset;
}

UQuestAsset* UQuestInstance::GetQuestAsset() const
{
	return QuestAsset;
}

void UQuestInstance::AddObjectiveInstance(UQuestObjectiveInstance* objectiveInstance)
{
	QuestObjectiveInstances.Add(objectiveInstance);
}

void UQuestInstance::OnQuestEvent(const FQuestEvent& event)
{
	// if (!IsValid(QuestAsset))
	// {
	// 	UE_LOG(LogTemp, Warning, TEXT("Invalid QuestAsset Object"));
	// 	return;
	// }

	// const bool validQuestAsset = QuestAsset != nullptr;
	// const bool validQuestObjectiveInstances = QuestObjectiveInstances.Num() > 0;
	// 
	// if (validQuestAsset && validQuestObjectiveInstances)
	// {
	// 	UE_LOG(LogTemp, Warning, TEXT("Invalid Quest Instance Object"));
	// 	return;
	// }

	for (auto& objectiveInstance : QuestObjectiveInstances)
	{
		objectiveInstance->OnQuestEvent(event);
	}
}

bool UQuestInstance::IsCompleted()
{
	for (auto& objectiveInstance : QuestObjectiveInstances)
	{
		if (!objectiveInstance->IsCompleted())
		{
			return false;
		}
	}
	return true;
}