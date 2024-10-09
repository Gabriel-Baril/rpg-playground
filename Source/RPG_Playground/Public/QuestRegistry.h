#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestEvent.h"
#include "GameFramework/SaveGame.h"
#include "QuestProgressData.h"
#include "Containers/Array.h"
#include "QuestRegistry.generated.h"

class UQuestAsset;
class UQuestInstance;

UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UQuestProgressSave : public USaveGame
{
	GENERATED_BODY()
private:
	UPROPERTY(SaveGame)
	TMap<int, FQuestProgressData> InProgressQuests;

	UPROPERTY(SaveGame)
	TMap<int, bool> CompletedQuests; /*Later we could have a QuestCompletedData struct instead of bool*/
public:
	const TMap<int, FQuestProgressData>& GetInProgressQuests()
	{
		return InProgressQuests;
	}

	bool IsQuestCompleted(int QID)
	{
		return CompletedQuests.Contains(QID);
	}

	bool IsQuestInProgress(int QID)
	{
		return InProgressQuests.Contains(QID);
	}

	void CompleteQuest(int QID)
	{
		InProgressQuests.Remove(QID);
		CompletedQuests.Add(QID, true);
	}

	void SaveQuest(int QID, const FQuestProgressData& data)
	{
		InProgressQuests.Add(QID, data); // If the key already exist, the value will be automatically updated
	}
};


UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UQuestLog : public UObject
{
	GENERATED_BODY()
private:
	TMap<int, TObjectPtr<UQuestInstance>> InProgressQuests;
private:
	void Instanciate(int QID, const FQuestProgressData* questData);
public:
	void OnQuestEvent(const FQuestEvent& event, UQuestProgressSave* QuestProgress);
	void BeginQuest(UQuestAsset* Quest, UQuestProgressSave* QuestProgress);
	void Init(UQuestProgressSave* QuestProgress);
	void Save(UQuestProgressSave* QuestProgress);
};
