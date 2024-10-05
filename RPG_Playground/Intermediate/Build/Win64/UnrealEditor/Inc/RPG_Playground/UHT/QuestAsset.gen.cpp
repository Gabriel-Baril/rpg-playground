// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Playground/Public/QuestAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestAsset();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestAsset_NoRegister();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestObjectiveAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPG_Playground();
// End Cross Module References
	void UQuestAsset::StaticRegisterNativesUQuestAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestAsset);
	UClass* Z_Construct_UClass_UQuestAsset_NoRegister()
	{
		return UQuestAsset::StaticClass();
	}
	struct Z_Construct_UClass_UQuestAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QuestID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestObjectives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestObjectives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestObjectives;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_Playground,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestAsset.h" },
		{ "ModuleRelativePath", "Public/QuestAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestID_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestAsset, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestID_MetaData), Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestID_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestObjectives_Inner = { "QuestObjectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestObjectiveAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestObjectives_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestObjectives = { "QuestObjectives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestAsset, QuestObjectives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestObjectives_MetaData), Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestObjectives_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestObjectives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestAsset_Statics::NewProp_QuestObjectives,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestAsset_Statics::ClassParams = {
		&UQuestAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuestAsset()
	{
		if (!Z_Registration_Info_UClass_UQuestAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestAsset.OuterSingleton, Z_Construct_UClass_UQuestAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestAsset.OuterSingleton;
	}
	template<> RPG_PLAYGROUND_API UClass* StaticClass<UQuestAsset>()
	{
		return UQuestAsset::StaticClass();
	}
	UQuestAsset::UQuestAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestAsset);
	UQuestAsset::~UQuestAsset() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestAsset, UQuestAsset::StaticClass, TEXT("UQuestAsset"), &Z_Registration_Info_UClass_UQuestAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestAsset), 133514212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestAsset_h_2567899105(TEXT("/Script/RPG_Playground"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
