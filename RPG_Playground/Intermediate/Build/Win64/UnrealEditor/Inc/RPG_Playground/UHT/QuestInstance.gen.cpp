// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Playground/Public/QuestInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestInstance();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UQuestInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPG_Playground();
// End Cross Module References
	void UQuestInstance::StaticRegisterNativesUQuestInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestInstance);
	UClass* Z_Construct_UClass_UQuestInstance_NoRegister()
	{
		return UQuestInstance::StaticClass();
	}
	struct Z_Construct_UClass_UQuestInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_Playground,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestInstance.h" },
		{ "ModuleRelativePath", "Public/QuestInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestInstance_Statics::ClassParams = {
		&UQuestInstance::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuestInstance()
	{
		if (!Z_Registration_Info_UClass_UQuestInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestInstance.OuterSingleton, Z_Construct_UClass_UQuestInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestInstance.OuterSingleton;
	}
	template<> RPG_PLAYGROUND_API UClass* StaticClass<UQuestInstance>()
	{
		return UQuestInstance::StaticClass();
	}
	UQuestInstance::UQuestInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestInstance);
	UQuestInstance::~UQuestInstance() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestInstance, UQuestInstance::StaticClass, TEXT("UQuestInstance"), &Z_Registration_Info_UClass_UQuestInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestInstance), 905117685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestInstance_h_750680588(TEXT("/Script/RPG_Playground"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_QuestInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
