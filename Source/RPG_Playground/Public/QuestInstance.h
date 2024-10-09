#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestAsset.h"
#include "GameFramework/SaveGame.h"
#include "QuestObjectiveInstance.h"
#include "QuestInstance.generated.h"


UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UQuestInstance : public UObject
{
	GENERATED_BODY()
private:
	TObjectPtr<UQuestAsset> QuestAsset = nullptr;
	TArray<TObjectPtr<UQuestObjectiveInstance>> QuestObjectiveInstances;

public:
	void SetQuestAsset(UQuestAsset* InQuestAsset);
	UQuestAsset* GetQuestAsset() const;
	void AddObjectiveInstance(UQuestObjectiveInstance* objectiveInstance);
	void OnQuestEvent(const FQuestEvent& event);
	bool IsCompleted();

	void Save(FMemoryWriter& writer)
	{
		for (UQuestObjectiveInstance* Objective : QuestObjectiveInstances)
		{
			Objective->Save(writer);
		}
	}

	void Load(FMemoryReader& reader)
	{
		for (UQuestObjectiveInstance* Objective : QuestObjectiveInstances)
		{
			Objective->Load(reader);
		}
	}

	void Serialize(FArchive& Ar) override
	{
		Super::Serialize(Ar);

		UE_LOG(LogTemp, Warning, TEXT("Loading UQuestInstance"));

		int32 NumObjectives = QuestObjectiveInstances.Num();
		Ar << NumObjectives;

		if (Ar.IsSaving())
		{
			for (UQuestObjectiveInstance* Objective : QuestObjectiveInstances)
			{
				// Serialize the class type so we know what to load later
				UClass* ObjectiveClass = Objective->GetClass();
				Ar << ObjectiveClass;

				// Serialize the actual objective object
				Objective->Serialize(Ar);
			}
		}
		else if (Ar.IsLoading())
		{
			QuestObjectiveInstances.Empty();

			for (int32 i = 0; i < NumObjectives; ++i)
			{
				UClass* ObjectiveClass;
				Ar << ObjectiveClass;

				// Create the appropriate object based on the saved class
				UQuestObjectiveInstance* NewObjective = NewObject<UQuestObjectiveInstance>(this, ObjectiveClass);
				NewObjective->Serialize(Ar);
				QuestObjectiveInstances.Add(NewObjective);
			}
		}
	}
};
