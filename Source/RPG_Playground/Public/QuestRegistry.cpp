#include "QuestRegistry.h"
#include "QuestAsset.h"
#include "QuestInstance.h"

void UQuestLog::OnQuestEvent(const FQuestEvent& event)
{
	if (InProgressQuests.IsEmpty())
	{
		return;
	}

	TArray<int> QuestsFlaggedAsCompleted;

	for (auto& [key, questInstance] : InProgressQuests)
	{
		questInstance->OnQuestEvent(event);
		if (questInstance->IsCompleted())
		{
			QuestsFlaggedAsCompleted.Add(key);
		}
	}

	for (const auto& QuestCompletedID : QuestsFlaggedAsCompleted)
	{
		UE_LOG(LogTemp, Warning, TEXT("Quest Completed: %i"), QuestCompletedID);
		InProgressQuests.Remove(QuestCompletedID);
		CompletedQuests.Add(QuestCompletedID, true);
	}
}

void UQuestLog::BeginQuest(UQuestAsset* Quest)
{
	int QID = Quest->QuestID;
	if (CompletedQuests.Contains(QID))
	{
		UE_LOG(LogTemp, Warning, TEXT("Quest '%i' is already completed!"), QID);
		return;
	}
	if (InProgressQuests.Contains(QID))
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot start a quest currently in progress!"));
		return;
	}
	UQuestInstance* instance = Quest->Instanciate();
	InProgressQuests.Add(QID, instance);
}
