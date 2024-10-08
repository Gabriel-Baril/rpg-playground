#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestObjectiveInstance.h"
#include "QuestObjectiveAsset.generated.h"

UCLASS(Abstract)
class RPG_PLAYGROUND_API UQuestObjectiveAsset : public UObject
{
	GENERATED_BODY()
public:
	virtual UQuestObjectiveInstance* InstanciateObjective()
	{
		return nullptr;
	}

	void Serialize(FArchive& Ar) override
	{
		Super::Serialize(Ar);
		// PolymorphicSerializeDispatch<UQuestObjectiveAsset>(Ar, GetClass(), this);
	}
};
