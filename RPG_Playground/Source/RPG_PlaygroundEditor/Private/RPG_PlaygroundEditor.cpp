#include "RPG_PlaygroundEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"
#include "AssetToolsModule.h"

#include "FAssetTypeActions_InteractableAsset.h"
#include "FAssetTypeActions_ItemDefAsset.h"
#include "FAssetTypeActions_QuestAsset.h"
#include "FAssetTypeActions_QuestObjectiveItemAsset.h"

IMPLEMENT_GAME_MODULE(FRPG_PlaygroundEditorModule, RPG_PlaygroundEditor);

DEFINE_LOG_CATEGORY(RPG_PlaygroundEditor)

#define LOCTEXT_NAMESPACE "MyGameEditor"

void FRPG_PlaygroundEditorModule::StartupModule()
{
    UE_LOG(RPG_PlaygroundEditor, Warning, TEXT("RPG_PlaygroundEditor: Log Started"));

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	EAssetTypeCategories::Type MyAssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("CUSTOM_ASSET")), LOCTEXT("CustomAssetCategory", "RPG Assets"));

	{
		TSharedRef<IAssetTypeActions> Action = MakeShareable(new FAssetTypeActions_InteractableAsset(MyAssetCategory));
		AssetTools.RegisterAssetTypeActions(Action);
	}

	{
		TSharedRef<IAssetTypeActions> Action = MakeShareable(new FAssetTypeActions_ItemDefAsset(MyAssetCategory));
		AssetTools.RegisterAssetTypeActions(Action);
	}

	{
		TSharedRef<IAssetTypeActions> Action = MakeShareable(new FAssetTypeActions_QuestAsset(MyAssetCategory));
		AssetTools.RegisterAssetTypeActions(Action);
	}

	{
		TSharedRef<IAssetTypeActions> Action = MakeShareable(new FAssetTypeActions_QuestObjectiveItemAsset(MyAssetCategory));
		AssetTools.RegisterAssetTypeActions(Action);
	}
}

void FRPG_PlaygroundEditorModule::ShutdownModule()
{
	UE_LOG(RPG_PlaygroundEditor, Warning, TEXT("RPG_PlaygroundEditor: Log Ended"));
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		// IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		// AssetTools.UnregisterAssetTypeActions(Action);
	}
}

#undef LOCTEXT_NAMESPACE