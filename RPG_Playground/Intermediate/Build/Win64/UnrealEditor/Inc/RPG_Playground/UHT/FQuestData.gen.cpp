// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Playground/Public/FQuestData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFQuestData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestAsset_NoRegister();
	RPG_PLAYGROUND_API UScriptStruct* Z_Construct_UScriptStruct_FQuestData();
	UPackage* Z_Construct_UPackage__Script_RPG_Playground();
// End Cross Module References

static_assert(std::is_polymorphic<FQuestData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestData;
class UScriptStruct* FQuestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestData, (UObject*)Z_Construct_UPackage__Script_RPG_Playground(), TEXT("QuestData"));
	}
	return Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton;
}
template<> RPG_PLAYGROUND_API UScriptStruct* StaticStruct<FQuestData>()
{
	return FQuestData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QuestIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FQuestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestIdentifier_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/FQuestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestIdentifier = { "QuestIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestIdentifier_MetaData), Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestIdentifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestAsset_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/FQuestData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestAsset = { "QuestAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestAsset), Z_Construct_UClass_UQuestAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestAsset_MetaData), Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_Playground,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestData",
		Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers),
		sizeof(FQuestData),
		alignof(FQuestData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FQuestData()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton, Z_Construct_UScriptStruct_FQuestData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_FQuestData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_FQuestData_h_Statics::ScriptStructInfo[] = {
		{ FQuestData::StaticStruct, Z_Construct_UScriptStruct_FQuestData_Statics::NewStructOps, TEXT("QuestData"), &Z_Registration_Info_UScriptStruct_QuestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestData), 914437548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_FQuestData_h_2233964125(TEXT("/Script/RPG_Playground"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_FQuestData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_FQuestData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
