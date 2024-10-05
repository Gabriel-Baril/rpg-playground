// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestObjectiveItemAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestObjectiveItemAssetFactory() {}
// Cross Module References
	RPG_PLAYGROUNDEDITOR_API UClass* Z_Construct_UClass_UQuestObjectiveItemAssetFactory();
	RPG_PLAYGROUNDEDITOR_API UClass* Z_Construct_UClass_UQuestObjectiveItemAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_RPG_PlaygroundEditor();
// End Cross Module References
	void UQuestObjectiveItemAssetFactory::StaticRegisterNativesUQuestObjectiveItemAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestObjectiveItemAssetFactory);
	UClass* Z_Construct_UClass_UQuestObjectiveItemAssetFactory_NoRegister()
	{
		return UQuestObjectiveItemAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UQuestObjectiveItemAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestObjectiveItemAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_PlaygroundEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemAssetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestObjectiveItemAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestObjectiveItemAssetFactory.h" },
		{ "ModuleRelativePath", "Public/QuestObjectiveItemAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestObjectiveItemAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestObjectiveItemAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestObjectiveItemAssetFactory_Statics::ClassParams = {
		&UQuestObjectiveItemAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestObjectiveItemAssetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuestObjectiveItemAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UQuestObjectiveItemAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestObjectiveItemAssetFactory.OuterSingleton, Z_Construct_UClass_UQuestObjectiveItemAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestObjectiveItemAssetFactory.OuterSingleton;
	}
	template<> RPG_PLAYGROUNDEDITOR_API UClass* StaticClass<UQuestObjectiveItemAssetFactory>()
	{
		return UQuestObjectiveItemAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestObjectiveItemAssetFactory);
	UQuestObjectiveItemAssetFactory::~UQuestObjectiveItemAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_QuestObjectiveItemAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_QuestObjectiveItemAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestObjectiveItemAssetFactory, UQuestObjectiveItemAssetFactory::StaticClass, TEXT("UQuestObjectiveItemAssetFactory"), &Z_Registration_Info_UClass_UQuestObjectiveItemAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestObjectiveItemAssetFactory), 1275483037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_QuestObjectiveItemAssetFactory_h_2341823394(TEXT("/Script/RPG_PlaygroundEditor"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_QuestObjectiveItemAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_QuestObjectiveItemAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
