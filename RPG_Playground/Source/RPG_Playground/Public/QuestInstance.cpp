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