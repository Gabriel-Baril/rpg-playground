// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Playground/Public/QuestRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestRegistry() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestInstance_NoRegister();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestLog();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestLog_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPG_Playground();
// End Cross Module References
	void UQuestLog::StaticRegisterNativesUQuestLog()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestLog);
	UClass* Z_Construct_UClass_UQuestLog_NoRegister()
	{
		return UQuestLog::StaticClass();
	}
	struct Z_Construct_UClass_UQuestLog_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InProgressQuests_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InProgressQuests_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProgressQuests_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InProgressQuests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestLog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_Playground,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLog_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestLog_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestRegistry.h" },
		{ "ModuleRelativePath", "Public/QuestRegistry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestLog_Statics::NewProp_InProgressQuests_ValueProp = { "InProgressQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UQuestInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestLog_Statics::NewProp_InProgressQuests_Key_KeyProp = { "InProgressQuests_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestLog_Statics::NewProp_InProgressQuests_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestRegistry.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestLog_Statics::NewProp_InProgressQuests = { "InProgressQuests", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestLog, InProgressQuests), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLog_Statics::NewProp_InProgressQuests_MetaData), Z_Construct_UClass_UQuestLog_Statics::NewProp_InProgressQuests_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLog_Statics::NewProp_InProgressQuests_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLog_Statics::NewProp_InProgressQuests_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLog_Statics::NewProp_InProgressQuests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestLog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestLog>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestLog_Statics::ClassParams = {
		&UQuestLog::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestLog_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLog_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLog_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestLog_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLog_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQuestLog()
	{
		if (!Z_Registration_Info_UClass_UQuestLog.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestLog.OuterSingleton, Z_Construct_UClass_UQuestLog_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestLog.OuterSingleton;
	}
	template<> RPG_PLAYGROUND_API UClass* StaticClass<UQuestLog>()
	{
		return UQuestLog::StaticClass();
	}
	UQuestLog::UQuestLog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestLog);
	UQuestLog::~UQuestLog() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestLog, UQuestLog::StaticClass, TEXT("UQuestLog"), &Z_Registration_Info_UClass_UQuestLog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestLog), 1048372134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestRegistry_h_3423545944(TEXT("/Script/RPG_Playground"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
