#include "QuestRegistry.h"
#include "QuestAsset.h"
#include "QuestInstance.h"

void UQuestLog::OnQuestEvent(const FQuestEvent& event, UQuestProgressSave* QuestProgress)
{
	UE_LOG(LogTemp, Warning, TEXT("InProgressQuests: %i"), InProgressQuests.Num());
	if (InProgressQuests.IsEmpty())
	{
		return;
	}

	TArray<int> QuestsFlaggedAsCompleted;

	for (auto& [key, questInstance] : InProgressQuests)
	{
		UE_LOG(LogTemp, Warning, TEXT("Quest Instance Address: %p"), static_cast<void*>(questInstance));
		UE_LOG(LogTemp, Warning, TEXT("Quest Log Address: %p"), static_cast<void*>(this));
		
		questInstance->OnQuestEvent(event);
		if (questInstance->IsCompleted())
		{
			QuestsFlaggedAsCompleted.Add(key);
		}
	}

	for (const auto& QuestCompletedID : QuestsFlaggedAsCompleted)
	{
		UE_LOG(LogTemp, Warning, TEXT("Quest Completed: %i"), QuestCompletedID);
		QuestProgress->CompleteQuest(QuestCompletedID);
		InProgressQuests.Remove(QuestCompletedID);
	}
}


void UQuestLog::Instanciate(int QID, const FQuestProgressData* QuestData)
{
	UQuestInstance* instance = QuestData->QuestAsset->Instanciate(QuestData);
	InProgressQuests.Add(QID, instance);
}

void UQuestLog::BeginQuest(UQuestAsset* Quest, UQuestProgressSave* QuestProgress)
{
	int QID = Quest->QuestID;
	if (QuestProgress->IsQuestCompleted(QID))
	{
		UE_LOG(LogTemp, Warning, TEXT("Quest '%i' is already completed!"), QID);
		return;
	}
	if (QuestProgress->IsQuestInProgress(QID))
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot start a quest currently in progress!"));
		return;
	}
	UQuestInstance* instance = Quest->Instanciate(nullptr);
	InProgressQuests.Add(QID, instance);
}

void UQuestLog::Init(UQuestProgressSave* QuestProgress)
{
	UE_LOG(LogTemp, Warning, TEXT("UQuestLog::Init"));
	for (const auto& InProgressQuest : QuestProgress->GetInProgressQuests())
	{
		Instanciate(InProgressQuest.Key, &InProgressQuest.Value);
	}
}

void UQuestLog::Save(UQuestProgressSave* QuestProgress)
{
	for (auto& [QID, QuestInstance] : InProgressQuests)
	{
		FQuestProgressData data;
		data.QuestAsset = QuestInstance->GetQuestAsset();
		TArray<uint8> ByteArray;
		FMemoryWriter writer(ByteArray, true);
		QuestInstance->Save(writer);
		data.SerializedData = ByteArray;

		QuestProgress->SaveQuest(QID, data);
	}
}
