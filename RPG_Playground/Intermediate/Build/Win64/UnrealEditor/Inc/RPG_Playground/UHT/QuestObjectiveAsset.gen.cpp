// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Playground/Public/QuestObjectiveAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestObjectiveAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestObjectiveAsset();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestObjectiveAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPG_Playground();
// End Cross Module References
	void UQuestObjectiveAsset::StaticRegisterNativesUQuestObjectiveAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestObjectiveAsset);
	UClass* Z_Construct_UClass_UQuestObjectiveAsset_NoRegister()
	{
		return UQuestObjectiveAsset::StaticClass();
	}
	struct Z_Construct_UClass_UQuestObjectiveAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestObjectiveAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_Playground,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestObjectiveAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestObjectiveAsset.h" },
		{ "ModuleRelativePath", "Public/QuestObjectiveAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestObjectiveAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestObjectiveAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestObjectiveAsset_Statics::ClassParams = {
		&UQuestObjectiveAsset::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestObjectiveAsset_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuestObjectiveAsset()
	{
		if (!Z_Registration_Info_UClass_UQuestObjectiveAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestObjectiveAsset.OuterSingleton, Z_Construct_UClass_UQuestObjectiveAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestObjectiveAsset.OuterSingleton;
	}
	template<> RPG_PLAYGROUND_API UClass* StaticClass<UQuestObjectiveAsset>()
	{
		return UQuestObjectiveAsset::StaticClass();
	}
	UQuestObjectiveAsset::UQuestObjectiveAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestObjectiveAsset);
	UQuestObjectiveAsset::~UQuestObjectiveAsset() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestObjectiveAsset, UQuestObjectiveAsset::StaticClass, TEXT("UQuestObjectiveAsset"), &Z_Registration_Info_UClass_UQuestObjectiveAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestObjectiveAsset), 1416290251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveAsset_h_3777868075(TEXT("/Script/RPG_Playground"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
