// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Notifies/PaperZDAnimNotify.h"

#ifdef PAPERZD_PaperZDAnimNotify_generated_h
#error "PaperZDAnimNotify.generated.h already included, missing '#pragma once' in PaperZDAnimNotify.h"
#endif
#define PAPERZD_PaperZDAnimNotify_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPaperZDAnimInstance;

// ********** Begin Class UPaperZDAnimNotify *******************************************************
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h_10_RPC_WRAPPERS \
	virtual void OnReceiveNotify_Implementation(UPaperZDAnimInstance* OwningInstance) const; \
	DECLARE_FUNCTION(execOnReceiveNotify);


#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h_10_CALLBACK_WRAPPERS
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_NoRegister();

#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPaperZDAnimNotify(); \
	friend struct Z_Construct_UClass_UPaperZDAnimNotify_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperZDAnimNotify, UPaperZDAnimNotify_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PaperZD"), Z_Construct_UClass_UPaperZDAnimNotify_NoRegister) \
	DECLARE_SERIALIZER(UPaperZDAnimNotify)


#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperZDAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperZDAnimNotify) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimNotify); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperZDAnimNotify(UPaperZDAnimNotify&&) = delete; \
	UPaperZDAnimNotify(const UPaperZDAnimNotify&) = delete; \
	NO_API virtual ~UPaperZDAnimNotify();


#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h_7_PROLOG
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h_10_RPC_WRAPPERS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h_10_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h_10_INCLASS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperZDAnimNotify;

// ********** End Class UPaperZDAnimNotify *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
