#include "QuestRegistry.h"
#include "QuestAsset.h"
#include "QuestInstance.h"

void UQuestLog::OnQuestEvent(const FQuestEvent& event)
{
	for (auto& [key, questInstance] : InProgressQuests)
	{
		questInstance->OnQuestEvent(event);
		if (questInstance->IsCompleted())
		{
			UE_LOG(LogTemp, Warning, TEXT("Quest Completed: %i"), questInstance->GetQuestAsset()->QuestID);
		}
	}
}

void UQuestLog::BeginQuest(UQuestAsset* Quest)
{
	int QID = Quest->QuestID;
	if (InProgressQuests.Contains(QID))
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot start a quest currently in progress!"));
		return;
	}
	UQuestInstance* instance = Quest->Instanciate();
	InProgressQuests.Add(QID, instance);
}
