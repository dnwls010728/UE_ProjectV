// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperZDCharacter.h"

#ifdef PAPERZD_PaperZDCharacter_generated_h
#error "PaperZDCharacter.generated.h already included, missing '#pragma once' in PaperZDCharacter.h"
#endif
#define PAPERZD_PaperZDCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPaperZDAnimInstance;

// ********** Begin Class APaperZDCharacter ********************************************************
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetAnimInstance);


#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(APaperZDCharacter, NO_API)


PAPERZD_API UClass* Z_Construct_UClass_APaperZDCharacter_NoRegister();

#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPaperZDCharacter(); \
	friend struct Z_Construct_UClass_APaperZDCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZD_API UClass* Z_Construct_UClass_APaperZDCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APaperZDCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PaperZD"), Z_Construct_UClass_APaperZDCharacter_NoRegister) \
	DECLARE_SERIALIZER(APaperZDCharacter) \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<APaperZDCharacter*>(this); }


#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperZDCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperZDCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperZDCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperZDCharacter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APaperZDCharacter(APaperZDCharacter&&) = delete; \
	APaperZDCharacter(const APaperZDCharacter&) = delete; \
	NO_API virtual ~APaperZDCharacter();


#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_16_PROLOG
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_RPC_WRAPPERS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_INCLASS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APaperZDCharacter;

// ********** End Class APaperZDCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
