#pragma once
#include "InteractableAsset.h"
#include "AssetTypeActions_Base.h"

class FAssetTypeActions_InteractableAsset : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_InteractableAsset(EAssetTypeCategories::Type InAssetCategory) : MyAssetCategory(InAssetCategory) {}

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "FAssetTypeActions_InteractableAsset", "Interactable Asset"); }
	virtual FColor GetTypeColor() const override { return FColor(255, 255, 0); }
	virtual UClass* GetSupportedClass() const override { return UInteractableAsset::StaticClass(); }
	virtual uint32 GetCategories() override { return MyAssetCategory; }

private:
	EAssetTypeCategories::Type MyAssetCategory;
};