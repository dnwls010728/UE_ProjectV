// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/IPaperZDSequencerSource.h"

#ifdef PAPERZD_IPaperZDSequencerSource_generated_h
#error "IPaperZDSequencerSource.generated.h already included, missing '#pragma once' in IPaperZDSequencerSource.h"
#endif
#define PAPERZD_IPaperZDSequencerSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPaperZDSequencerSource **********************************************
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDSequencerSource_NoRegister();

#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PAPERZD_API UPaperZDSequencerSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperZDSequencerSource(UPaperZDSequencerSource&&) = delete; \
	UPaperZDSequencerSource(const UPaperZDSequencerSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PAPERZD_API, UPaperZDSequencerSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDSequencerSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperZDSequencerSource) \
	virtual ~UPaperZDSequencerSource() = default;


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPaperZDSequencerSource(); \
	friend struct Z_Construct_UClass_UPaperZDSequencerSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZD_API UClass* Z_Construct_UClass_UPaperZDSequencerSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperZDSequencerSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PaperZD"), Z_Construct_UClass_UPaperZDSequencerSource_NoRegister) \
	DECLARE_SERIALIZER(UPaperZDSequencerSource)


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_16_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPaperZDSequencerSource() {} \
public: \
	typedef UPaperZDSequencerSource UClassType; \
	typedef IPaperZDSequencerSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_13_PROLOG
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperZDSequencerSource;

// ********** End Interface UPaperZDSequencerSource ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
