// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Playground/Public/RPGGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UItemDefAsset_NoRegister();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestAsset_NoRegister();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestLog_NoRegister();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_URPGGameInstance();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_URPGGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPG_Playground();
// End Cross Module References
	DEFINE_FUNCTION(URPGGameInstance::execOnItemPickedEvent)
	{
		P_GET_OBJECT(UItemDefAsset,Z_Param_ItemDef);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemPickedEvent(Z_Param_ItemDef,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameInstance::execBeginQuest)
	{
		P_GET_OBJECT(UQuestAsset,Z_Param_QuestAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginQuest(Z_Param_QuestAsset);
		P_NATIVE_END;
	}
	void URPGGameInstance::StaticRegisterNativesURPGGameInstance()
	{
		UClass* Class = URPGGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginQuest", &URPGGameInstance::execBeginQuest },
			{ "OnItemPickedEvent", &URPGGameInstance::execOnItemPickedEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics
	{
		struct RPGGameInstance_eventBeginQuest_Parms
		{
			UQuestAsset* QuestAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::NewProp_QuestAsset = { "QuestAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGGameInstance_eventBeginQuest_Parms, QuestAsset), Z_Construct_UClass_UQuestAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::NewProp_QuestAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Event" },
		{ "ModuleRelativePath", "Public/RPGGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameInstance, nullptr, "BeginQuest", nullptr, nullptr, Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::RPGGameInstance_eventBeginQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::RPGGameInstance_eventBeginQuest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URPGGameInstance_BeginQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGGameInstance_BeginQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics
	{
		struct RPGGameInstance_eventOnItemPickedEvent_Parms
		{
			UItemDefAsset* ItemDef;
			int32 Amount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGGameInstance_eventOnItemPickedEvent_Parms, ItemDef), Z_Construct_UClass_UItemDefAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGGameInstance_eventOnItemPickedEvent_Parms, Amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Event" },
		{ "ModuleRelativePath", "Public/RPGGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameInstance, nullptr, "OnItemPickedEvent", nullptr, nullptr, Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::RPGGameInstance_eventOnItemPickedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::RPGGameInstance_eventOnItemPickedEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPGGameInstance);
	UClass* Z_Construct_UClass_URPGGameInstance_NoRegister()
	{
		return URPGGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_URPGGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestLog_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_Playground,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGGameInstance_BeginQuest, "BeginQuest" }, // 2805719580
		{ &Z_Construct_UFunction_URPGGameInstance_OnItemPickedEvent, "OnItemPickedEvent" }, // 917408590
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RPGGameInstance.h" },
		{ "ModuleRelativePath", "Public/RPGGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstance_Statics::NewProp_QuestLog_MetaData[] = {
		{ "ModuleRelativePath", "Public/RPGGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGGameInstance_Statics::NewProp_QuestLog = { "QuestLog", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGGameInstance, QuestLog), Z_Construct_UClass_UQuestLog_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstance_Statics::NewProp_QuestLog_MetaData), Z_Construct_UClass_URPGGameInstance_Statics::NewProp_QuestLog_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstance_Statics::NewProp_QuestLog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGGameInstance_Statics::ClassParams = {
		&URPGGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URPGGameInstance()
	{
		if (!Z_Registration_Info_UClass_URPGGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGGameInstance.OuterSingleton, Z_Construct_UClass_URPGGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URPGGameInstance.OuterSingleton;
	}
	template<> RPG_PLAYGROUND_API UClass* StaticClass<URPGGameInstance>()
	{
		return URPGGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGGameInstance);
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URPGGameInstance, URPGGameInstance::StaticClass, TEXT("URPGGameInstance"), &Z_Registration_Info_UClass_URPGGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGGameInstance), 3062709559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_398422507(TEXT("/Script/RPG_Playground"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
