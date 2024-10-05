// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Playground/Public/QuestObjectiveItemAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestObjectiveItemAsset() {}
// Cross Module References
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UItemDefAsset_NoRegister();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestObjectiveAsset();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestObjectiveItemAsset();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestObjectiveItemAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPG_Playground();
// End Cross Module References
	void UQuestObjectiveItemAsset::StaticRegisterNativesUQuestObjectiveItemAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestObjectiveItemAsset);
	UClass* Z_Construct_UClass_UQuestObjectiveItemAsset_NoRegister()
	{
		return UQuestObjectiveItemAsset::StaticClass();
	}
	struct Z_Construct_UClass_UQuestObjectiveItemAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemToCollect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToCollect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestObjectiveAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_Playground,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestObjectiveItemAsset.h" },
		{ "ModuleRelativePath", "Public/QuestObjectiveItemAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::NewProp_ItemToCollect_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestObjectiveItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::NewProp_ItemToCollect = { "ItemToCollect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestObjectiveItemAsset, ItemToCollect), Z_Construct_UClass_UItemDefAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::NewProp_ItemToCollect_MetaData), Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::NewProp_ItemToCollect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::NewProp_ItemAmount_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestObjectiveItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::NewProp_ItemAmount = { "ItemAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestObjectiveItemAsset, ItemAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::NewProp_ItemAmount_MetaData), Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::NewProp_ItemAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::NewProp_ItemToCollect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::NewProp_ItemAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestObjectiveItemAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::ClassParams = {
		&UQuestObjectiveItemAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuestObjectiveItemAsset()
	{
		if (!Z_Registration_Info_UClass_UQuestObjectiveItemAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestObjectiveItemAsset.OuterSingleton, Z_Construct_UClass_UQuestObjectiveItemAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestObjectiveItemAsset.OuterSingleton;
	}
	template<> RPG_PLAYGROUND_API UClass* StaticClass<UQuestObjectiveItemAsset>()
	{
		return UQuestObjectiveItemAsset::StaticClass();
	}
	UQuestObjectiveItemAsset::UQuestObjectiveItemAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestObjectiveItemAsset);
	UQuestObjectiveItemAsset::~UQuestObjectiveItemAsset() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveItemAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveItemAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestObjectiveItemAsset, UQuestObjectiveItemAsset::StaticClass, TEXT("UQuestObjectiveItemAsset"), &Z_Registration_Info_UClass_UQuestObjectiveItemAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestObjectiveItemAsset), 3762638370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveItemAsset_h_1527614915(TEXT("/Script/RPG_Playground"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveItemAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveItemAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
