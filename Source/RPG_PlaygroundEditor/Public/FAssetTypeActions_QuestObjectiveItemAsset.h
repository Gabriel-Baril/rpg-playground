#pragma once
#include "QuestObjectiveItemAsset.h"
#include "AssetTypeActions_Base.h"

class FAssetTypeActions_QuestObjectiveItemAsset : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_QuestObjectiveItemAsset(EAssetTypeCategories::Type InAssetCategory) : MyAssetCategory(InAssetCategory) {}

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "FAssetTypeActions_QuestObjectiveItemAsset", "Quest Objective Item Asset"); }
	virtual FColor GetTypeColor() const override { return FColor(255, 0, 0); }
	virtual UClass* GetSupportedClass() const override { return UQuestObjectiveItemAsset::StaticClass(); }
	virtual uint32 GetCategories() override { return MyAssetCategory; }

private:
	EAssetTypeCategories::Type MyAssetCategory;
};