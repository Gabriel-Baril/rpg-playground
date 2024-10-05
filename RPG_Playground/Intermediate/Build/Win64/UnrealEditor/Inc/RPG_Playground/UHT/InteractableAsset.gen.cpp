// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Playground/Public/InteractableAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UInteractableAsset();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UInteractableAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPG_Playground();
// End Cross Module References
	void UInteractableAsset::StaticRegisterNativesUInteractableAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableAsset);
	UClass* Z_Construct_UClass_UInteractableAsset_NoRegister()
	{
		return UInteractableAsset::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OutlineMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_Playground,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InteractableAsset.h" },
		{ "ModuleRelativePath", "Public/InteractableAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableAsset_Statics::NewProp_OutlineMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/InteractableAsset.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UInteractableAsset_Statics::NewProp_OutlineMaterial = { "OutlineMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractableAsset, OutlineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableAsset_Statics::NewProp_OutlineMaterial_MetaData), Z_Construct_UClass_UInteractableAsset_Statics::NewProp_OutlineMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractableAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableAsset_Statics::NewProp_OutlineMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableAsset_Statics::ClassParams = {
		&UInteractableAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractableAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInteractableAsset()
	{
		if (!Z_Registration_Info_UClass_UInteractableAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableAsset.OuterSingleton, Z_Construct_UClass_UInteractableAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractableAsset.OuterSingleton;
	}
	template<> RPG_PLAYGROUND_API UClass* StaticClass<UInteractableAsset>()
	{
		return UInteractableAsset::StaticClass();
	}
	UInteractableAsset::UInteractableAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableAsset);
	UInteractableAsset::~UInteractableAsset() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_InteractableAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_InteractableAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableAsset, UInteractableAsset::StaticClass, TEXT("UInteractableAsset"), &Z_Registration_Info_UClass_UInteractableAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableAsset), 1850260245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_InteractableAsset_h_2775237711(TEXT("/Script/RPG_Playground"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_InteractableAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_InteractableAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
