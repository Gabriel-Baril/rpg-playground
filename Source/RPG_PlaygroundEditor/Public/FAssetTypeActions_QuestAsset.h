#pragma once
#include "QuestAsset.h"
#include "AssetTypeActions_Base.h"

class FAssetTypeActions_QuestAsset : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_QuestAsset(EAssetTypeCategories::Type InAssetCategory) : MyAssetCategory(InAssetCategory) {}

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "FAssetTypeActions_QuestAsset", "Quest Asset"); }
	virtual FColor GetTypeColor() const override { return FColor(255, 255, 0); }
	virtual UClass* GetSupportedClass() const override { return UQuestAsset::StaticClass(); }
	virtual uint32 GetCategories() override { return MyAssetCategory; }

private:
	EAssetTypeCategories::Type MyAssetCategory;
};