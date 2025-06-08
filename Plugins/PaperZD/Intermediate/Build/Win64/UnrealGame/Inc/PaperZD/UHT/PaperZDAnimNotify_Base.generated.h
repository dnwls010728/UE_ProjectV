// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Notifies/PaperZDAnimNotify_Base.h"

#ifdef PAPERZD_PaperZDAnimNotify_Base_generated_h
#error "PaperZDAnimNotify_Base.generated.h already included, missing '#pragma once' in PaperZDAnimNotify_Base.h"
#endif
#define PAPERZD_PaperZDAnimNotify_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPaperZDAnimNotify_Base **************************************************
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_16_RPC_WRAPPERS \
	virtual FName GetDisplayName_Implementation() const; \
	DECLARE_FUNCTION(execGetDisplayName);


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_16_CALLBACK_WRAPPERS
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base_NoRegister();

#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPaperZDAnimNotify_Base(); \
	friend struct Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperZDAnimNotify_Base, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PaperZD"), Z_Construct_UClass_UPaperZDAnimNotify_Base_NoRegister) \
	DECLARE_SERIALIZER(UPaperZDAnimNotify_Base)


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperZDAnimNotify_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperZDAnimNotify_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimNotify_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimNotify_Base); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperZDAnimNotify_Base(UPaperZDAnimNotify_Base&&) = delete; \
	UPaperZDAnimNotify_Base(const UPaperZDAnimNotify_Base&) = delete; \
	NO_API virtual ~UPaperZDAnimNotify_Base();


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_13_PROLOG
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_16_RPC_WRAPPERS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_16_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_16_INCLASS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperZDAnimNotify_Base;

// ********** End Class UPaperZDAnimNotify_Base ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
