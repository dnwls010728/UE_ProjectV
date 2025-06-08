// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequences/PaperZDAnimSequence.h"

#ifdef PAPERZD_PaperZDAnimSequence_generated_h
#error "PaperZDAnimSequence.generated.h already included, missing '#pragma once' in PaperZDAnimSequence.h"
#endif
#define PAPERZD_PaperZDAnimSequence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPaperZDAnimTrackMetadata *****************************************
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics; \
	PAPERZD_API static class UScriptStruct* StaticStruct();


struct FPaperZDAnimTrackMetadata;
// ********** End ScriptStruct FPaperZDAnimTrackMetadata *******************************************

// ********** Begin Class UPaperZDAnimSequence *****************************************************
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_69_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetFramesPerSecond); \
	DECLARE_FUNCTION(execGetTotalDuration);


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_69_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperZDAnimSequence, NO_API)


PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();

#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUPaperZDAnimSequence(); \
	friend struct Z_Construct_UClass_UPaperZDAnimSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperZDAnimSequence, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PaperZD"), Z_Construct_UClass_UPaperZDAnimSequence_NoRegister) \
	DECLARE_SERIALIZER(UPaperZDAnimSequence) \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_69_ARCHIVESERIALIZER


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperZDAnimSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperZDAnimSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimSequence); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperZDAnimSequence(UPaperZDAnimSequence&&) = delete; \
	UPaperZDAnimSequence(const UPaperZDAnimSequence&) = delete; \
	NO_API virtual ~UPaperZDAnimSequence();


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_66_PROLOG
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_69_RPC_WRAPPERS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_69_INCLASS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperZDAnimSequence;

// ********** End Class UPaperZDAnimSequence *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
