// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequences/Players/PaperZDPlaybackHandle.h"

#ifdef PAPERZD_PaperZDPlaybackHandle_generated_h
#error "PaperZDPlaybackHandle.generated.h already included, missing '#pragma once' in PaperZDPlaybackHandle.h"
#endif
#define PAPERZD_PaperZDPlaybackHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPaperZDPlaybackHandle ***************************************************
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaybackHandle_NoRegister();

#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperZDPlaybackHandle(); \
	friend struct Z_Construct_UClass_UPaperZDPlaybackHandle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaybackHandle_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperZDPlaybackHandle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PaperZD"), Z_Construct_UClass_UPaperZDPlaybackHandle_NoRegister) \
	DECLARE_SERIALIZER(UPaperZDPlaybackHandle)


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperZDPlaybackHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperZDPlaybackHandle(UPaperZDPlaybackHandle&&) = delete; \
	UPaperZDPlaybackHandle(const UPaperZDPlaybackHandle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDPlaybackHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDPlaybackHandle); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperZDPlaybackHandle) \
	NO_API virtual ~UPaperZDPlaybackHandle();


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h_16_PROLOG
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperZDPlaybackHandle;

// ********** End Class UPaperZDPlaybackHandle *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
