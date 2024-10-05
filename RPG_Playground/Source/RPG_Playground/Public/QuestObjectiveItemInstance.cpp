#include "QuestObjectiveItemInstance.h"

void UQuestObjectiveItemInstance::SetObjectiveAsset(UQuestObjectiveItemAsset* ObjectiveAsset)
{
	ItemObjectiveAsset = ObjectiveAsset;
}

void UQuestObjectiveItemInstance::OnQuestEvent(const FQuestEvent& event)
{
	if (event.Type != EQuestEventType::ItemPicked ||
		ItemObjectiveAsset->ItemToCollect == nullptr ||
		event.ItemPickedData.ItemPicked == nullptr ||
		event.ItemPickedData.Amount <= 0 ||
		!ItemObjectiveAsset->ItemToCollect->IsSameItem(*event.ItemPickedData.ItemPicked))
	{
		return;
	}

	CurrentItemCount += event.ItemPickedData.Amount;

	UE_LOG(LogTemp, Warning, TEXT("Objective: %i/%i"), CurrentItemCount, ItemObjectiveAsset->ItemAmount);
}

bool UQuestObjectiveItemInstance::IsCompleted()
{
	return CurrentItemCount >= ItemObjectiveAsset->ItemAmount;
}
