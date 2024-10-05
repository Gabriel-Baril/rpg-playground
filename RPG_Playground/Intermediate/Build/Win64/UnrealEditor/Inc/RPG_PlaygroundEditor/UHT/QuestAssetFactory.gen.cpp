// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestAssetFactory() {}
// Cross Module References
	RPG_PLAYGROUNDEDITOR_API UClass* Z_Construct_UClass_UQuestAssetFactory();
	RPG_PLAYGROUNDEDITOR_API UClass* Z_Construct_UClass_UQuestAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_RPG_PlaygroundEditor();
// End Cross Module References
	void UQuestAssetFactory::StaticRegisterNativesUQuestAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestAssetFactory);
	UClass* Z_Construct_UClass_UQuestAssetFactory_NoRegister()
	{
		return UQuestAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UQuestAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_PlaygroundEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestAssetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestAssetFactory.h" },
		{ "ModuleRelativePath", "Public/QuestAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestAssetFactory_Statics::ClassParams = {
		&UQuestAssetFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestAssetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuestAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UQuestAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestAssetFactory.OuterSingleton, Z_Construct_UClass_UQuestAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestAssetFactory.OuterSingleton;
	}
	template<> RPG_PLAYGROUNDEDITOR_API UClass* StaticClass<UQuestAssetFactory>()
	{
		return UQuestAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestAssetFactory);
	UQuestAssetFactory::~UQuestAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_QuestAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_QuestAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestAssetFactory, UQuestAssetFactory::StaticClass, TEXT("UQuestAssetFactory"), &Z_Registration_Info_UClass_UQuestAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestAssetFactory), 3634267958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_QuestAssetFactory_h_2041586008(TEXT("/Script/RPG_PlaygroundEditor"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_QuestAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_QuestAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
