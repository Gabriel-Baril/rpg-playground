// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Playground/RPG_PlaygroundGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPG_PlaygroundGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_ARPG_PlaygroundGameMode();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_ARPG_PlaygroundGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPG_Playground();
// End Cross Module References
	void ARPG_PlaygroundGameMode::StaticRegisterNativesARPG_PlaygroundGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPG_PlaygroundGameMode);
	UClass* Z_Construct_UClass_ARPG_PlaygroundGameMode_NoRegister()
	{
		return ARPG_PlaygroundGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARPG_PlaygroundGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPG_PlaygroundGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_Playground,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPG_PlaygroundGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPG_PlaygroundGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RPG_PlaygroundGameMode.h" },
		{ "ModuleRelativePath", "RPG_PlaygroundGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPG_PlaygroundGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPG_PlaygroundGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPG_PlaygroundGameMode_Statics::ClassParams = {
		&ARPG_PlaygroundGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPG_PlaygroundGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPG_PlaygroundGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARPG_PlaygroundGameMode()
	{
		if (!Z_Registration_Info_UClass_ARPG_PlaygroundGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPG_PlaygroundGameMode.OuterSingleton, Z_Construct_UClass_ARPG_PlaygroundGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPG_PlaygroundGameMode.OuterSingleton;
	}
	template<> RPG_PLAYGROUND_API UClass* StaticClass<ARPG_PlaygroundGameMode>()
	{
		return ARPG_PlaygroundGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPG_PlaygroundGameMode);
	ARPG_PlaygroundGameMode::~ARPG_PlaygroundGameMode() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_RPG_PlaygroundGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_RPG_PlaygroundGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPG_PlaygroundGameMode, ARPG_PlaygroundGameMode::StaticClass, TEXT("ARPG_PlaygroundGameMode"), &Z_Registration_Info_UClass_ARPG_PlaygroundGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPG_PlaygroundGameMode), 2378254309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_RPG_PlaygroundGameMode_h_455537906(TEXT("/Script/RPG_Playground"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_RPG_PlaygroundGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_RPG_PlaygroundGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
