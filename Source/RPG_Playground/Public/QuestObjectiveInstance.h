#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Core/CoreUtil.h"
#include "QuestEvent.h"
#include "QuestObjectiveInstance.generated.h"

UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UQuestObjectiveInstance : public UObject
{
	GENERATED_BODY()
public:
	virtual void OnQuestEvent(const FQuestEvent& event) { }
	virtual bool IsCompleted() { return true; }

	void Serialize(FArchive& Ar) override
	{
		Super::Serialize(Ar);
		PolymorphicSerializeDispatch<UQuestObjectiveInstance>(Ar, GetClass(), this);
	}
};
