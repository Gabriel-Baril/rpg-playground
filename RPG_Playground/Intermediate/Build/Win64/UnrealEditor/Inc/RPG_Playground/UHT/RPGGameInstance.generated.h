// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemDefAsset;
class UQuestAsset;
#ifdef RPG_PLAYGROUND_RPGGameInstance_generated_h
#error "RPGGameInstance.generated.h already included, missing '#pragma once' in RPGGameInstance.h"
#endif
#define RPG_PLAYGROUND_RPGGameInstance_generated_h

#define FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_SPARSE_DATA
#define FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnItemPickedEvent); \
	DECLARE_FUNCTION(execBeginQuest);


#define FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_ACCESSORS
#define FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGGameInstance(); \
	friend struct Z_Construct_UClass_URPGGameInstance_Statics; \
public: \
	DECLARE_CLASS(URPGGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RPG_Playground"), NO_API) \
	DECLARE_SERIALIZER(URPGGameInstance)


#define FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGGameInstance(URPGGameInstance&&); \
	NO_API URPGGameInstance(const URPGGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGGameInstance)


#define FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_12_PROLOG
#define FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_SPARSE_DATA \
	FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_ACCESSORS \
	FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_PLAYGROUND_API UClass* StaticClass<class URPGGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RPG_Playground_Source_RPG_Playground_Public_RPGGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
