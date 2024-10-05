// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Playground/Public/QuestObjectiveItemInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestObjectiveItemInstance() {}
// Cross Module References
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestObjectiveInstance();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestObjectiveItemAsset_NoRegister();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestObjectiveItemInstance();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestObjectiveItemInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPG_Playground();
// End Cross Module References
	void UQuestObjectiveItemInstance::StaticRegisterNativesUQuestObjectiveItemInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestObjectiveItemInstance);
	UClass* Z_Construct_UClass_UQuestObjectiveItemInstance_NoRegister()
	{
		return UQuestObjectiveItemInstance::StaticClass();
	}
	struct Z_Construct_UClass_UQuestObjectiveItemInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemObjectiveAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemObjectiveAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentItemCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentItemCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestObjectiveInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_Playground,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestObjectiveItemInstance.h" },
		{ "ModuleRelativePath", "Public/QuestObjectiveItemInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::NewProp_ItemObjectiveAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestObjectiveItemInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::NewProp_ItemObjectiveAsset = { "ItemObjectiveAsset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestObjectiveItemInstance, ItemObjectiveAsset), Z_Construct_UClass_UQuestObjectiveItemAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::NewProp_ItemObjectiveAsset_MetaData), Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::NewProp_ItemObjectiveAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::NewProp_CurrentItemCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestObjectiveItemInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::NewProp_CurrentItemCount = { "CurrentItemCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestObjectiveItemInstance, CurrentItemCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::NewProp_CurrentItemCount_MetaData), Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::NewProp_CurrentItemCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::NewProp_ItemObjectiveAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::NewProp_CurrentItemCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestObjectiveItemInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::ClassParams = {
		&UQuestObjectiveItemInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuestObjectiveItemInstance()
	{
		if (!Z_Registration_Info_UClass_UQuestObjectiveItemInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestObjectiveItemInstance.OuterSingleton, Z_Construct_UClass_UQuestObjectiveItemInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestObjectiveItemInstance.OuterSingleton;
	}
	template<> RPG_PLAYGROUND_API UClass* StaticClass<UQuestObjectiveItemInstance>()
	{
		return UQuestObjectiveItemInstance::StaticClass();
	}
	UQuestObjectiveItemInstance::UQuestObjectiveItemInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestObjectiveItemInstance);
	UQuestObjectiveItemInstance::~UQuestObjectiveItemInstance() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveItemInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveItemInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestObjectiveItemInstance, UQuestObjectiveItemInstance::StaticClass, TEXT("UQuestObjectiveItemInstance"), &Z_Registration_Info_UClass_UQuestObjectiveItemInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestObjectiveItemInstance), 2062259167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveItemInstance_h_1001272539(TEXT("/Script/RPG_Playground"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveItemInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestObjectiveItemInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
