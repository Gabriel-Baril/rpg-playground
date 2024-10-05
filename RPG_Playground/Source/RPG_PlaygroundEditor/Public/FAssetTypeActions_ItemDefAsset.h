#pragma once
#include "ItemDefAsset.h"
#include "AssetTypeActions_Base.h"

class FAssetTypeActions_ItemDefAsset : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_ItemDefAsset(EAssetTypeCategories::Type InAssetCategory) : MyAssetCategory(InAssetCategory) {}

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "FAssetTypeActions_ItemDefAsset", "Item Definition Asset"); }
	virtual FColor GetTypeColor() const override { return FColor(255, 255, 255); }
	virtual UClass* GetSupportedClass() const override { return UItemDefAsset::StaticClass(); }
	virtual uint32 GetCategories() override { return MyAssetCategory; }

private:
	EAssetTypeCategories::Type MyAssetCategory;
};