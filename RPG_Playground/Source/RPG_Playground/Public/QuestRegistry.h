#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestEvent.h"
#include "C:\Program Files\Epic Games\UE_5.3\Engine\Source\Runtime\Engine\Classes\GameFramework\SaveGame.h"
#include "QuestRegistry.generated.h"

class UQuestAsset;
class UQuestInstance;

UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UQuestLog : public USaveGame
{
	GENERATED_BODY()
private:
	UPROPERTY()
	TMap<int, UQuestInstance*> InProgressQuests;

public:

	void OnQuestEvent(const FQuestEvent& event);
	void BeginQuest(UQuestAsset* Quest);
};
