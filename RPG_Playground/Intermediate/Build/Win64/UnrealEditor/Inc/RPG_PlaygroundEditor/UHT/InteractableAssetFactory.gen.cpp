// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableAssetFactory() {}
// Cross Module References
	RPG_PLAYGROUNDEDITOR_API UClass* Z_Construct_UClass_UInteractableAssetFactory();
	RPG_PLAYGROUNDEDITOR_API UClass* Z_Construct_UClass_UInteractableAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_RPG_PlaygroundEditor();
// End Cross Module References
	void UInteractableAssetFactory::StaticRegisterNativesUInteractableAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableAssetFactory);
	UClass* Z_Construct_UClass_UInteractableAssetFactory_NoRegister()
	{
		return UInteractableAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_PlaygroundEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableAssetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableAssetFactory.h" },
		{ "ModuleRelativePath", "Public/InteractableAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableAssetFactory_Statics::ClassParams = {
		&UInteractableAssetFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableAssetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractableAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UInteractableAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableAssetFactory.OuterSingleton, Z_Construct_UClass_UInteractableAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractableAssetFactory.OuterSingleton;
	}
	template<> RPG_PLAYGROUNDEDITOR_API UClass* StaticClass<UInteractableAssetFactory>()
	{
		return UInteractableAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableAssetFactory);
	UInteractableAssetFactory::~UInteractableAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_InteractableAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_InteractableAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableAssetFactory, UInteractableAssetFactory::StaticClass, TEXT("UInteractableAssetFactory"), &Z_Registration_Info_UClass_UInteractableAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableAssetFactory), 1016405354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_InteractableAssetFactory_h_1143768857(TEXT("/Script/RPG_PlaygroundEditor"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_InteractableAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_PlaygroundEditor_Public_InteractableAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
