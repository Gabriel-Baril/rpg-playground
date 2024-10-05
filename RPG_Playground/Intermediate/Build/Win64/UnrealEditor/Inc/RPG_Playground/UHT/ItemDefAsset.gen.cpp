// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Playground/Public/ItemDefAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDefAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UItemDefAsset();
	RPG_PLAYGROUND_API UClass* Z_Construct_UClass_UItemDefAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPG_Playground();
// End Cross Module References
	void UItemDefAsset::StaticRegisterNativesUItemDefAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemDefAsset);
	UClass* Z_Construct_UClass_UItemDefAsset_NoRegister()
	{
		return UItemDefAsset::StaticClass();
	}
	struct Z_Construct_UClass_UItemDefAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemDefAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_Playground,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDefAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemDefAsset.h" },
		{ "ModuleRelativePath", "Public/ItemDefAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDefAsset_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/ItemDefAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemDefAsset_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDefAsset, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefAsset_Statics::NewProp_ItemID_MetaData), Z_Construct_UClass_UItemDefAsset_Statics::NewProp_ItemID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDefAsset_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/ItemDefAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItemDefAsset_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDefAsset, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefAsset_Statics::NewProp_ItemName_MetaData), Z_Construct_UClass_UItemDefAsset_Statics::NewProp_ItemName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemDefAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefAsset_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefAsset_Statics::NewProp_ItemName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemDefAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDefAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDefAsset_Statics::ClassParams = {
		&UItemDefAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemDefAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDefAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemDefAsset()
	{
		if (!Z_Registration_Info_UClass_UItemDefAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDefAsset.OuterSingleton, Z_Construct_UClass_UItemDefAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemDefAsset.OuterSingleton;
	}
	template<> RPG_PLAYGROUND_API UClass* StaticClass<UItemDefAsset>()
	{
		return UItemDefAsset::StaticClass();
	}
	UItemDefAsset::UItemDefAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDefAsset);
	UItemDefAsset::~UItemDefAsset() {}
	struct Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_ItemDefAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_ItemDefAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemDefAsset, UItemDefAsset::StaticClass, TEXT("UItemDefAsset"), &Z_Registration_Info_UClass_UItemDefAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDefAsset), 456760616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_ItemDefAsset_h_3954679652(TEXT("/Script/RPG_Playground"),
		Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_ItemDefAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_Playground_Source_RPG_Playground_Public_ItemDefAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
