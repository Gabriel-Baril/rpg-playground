#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestEvent.h"
#include "GameFramework/SaveGame.h"
#include "Containers/Array.h"
#include "QuestRegistry.generated.h"

class UQuestAsset;
class UQuestInstance;

UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UQuestLog : public USaveGame
{
	GENERATED_BODY()
private:
	UPROPERTY()
	TMap<int, TObjectPtr<UQuestInstance>> InProgressQuests;

	UPROPERTY()
	TMap<int, bool> CompletedQuests; /*Later we could have a QuestCompletedData struct instead of bool*/
public:

	void OnQuestEvent(const FQuestEvent& event);
	void BeginQuest(UQuestAsset* Quest);
};
