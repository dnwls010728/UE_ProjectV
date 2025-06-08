// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Notifies/PaperZDAnimNotifyState.h"

#ifdef PAPERZD_PaperZDAnimNotifyState_generated_h
#error "PaperZDAnimNotifyState.generated.h already included, missing '#pragma once' in PaperZDAnimNotifyState.h"
#endif
#define PAPERZD_PaperZDAnimNotifyState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPaperZDAnimInstance;

// ********** Begin Class UPaperZDAnimNotifyState **************************************************
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_RPC_WRAPPERS \
	virtual void OnNotifyEnd_Implementation(UPaperZDAnimInstance* OwningInstance) const; \
	virtual void OnNotifyTick_Implementation(float DeltaTime, UPaperZDAnimInstance* OwningInstance) const; \
	virtual void OnNotifyBegin_Implementation(UPaperZDAnimInstance* OwningInstance) const; \
	DECLARE_FUNCTION(execOnNotifyEnd); \
	DECLARE_FUNCTION(execOnNotifyTick); \
	DECLARE_FUNCTION(execOnNotifyBegin);


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_CALLBACK_WRAPPERS
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotifyState_NoRegister();

#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPaperZDAnimNotifyState(); \
	friend struct Z_Construct_UClass_UPaperZDAnimNotifyState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotifyState_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperZDAnimNotifyState, UPaperZDAnimNotify_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PaperZD"), Z_Construct_UClass_UPaperZDAnimNotifyState_NoRegister) \
	DECLARE_SERIALIZER(UPaperZDAnimNotifyState)


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperZDAnimNotifyState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperZDAnimNotifyState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimNotifyState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimNotifyState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperZDAnimNotifyState(UPaperZDAnimNotifyState&&) = delete; \
	UPaperZDAnimNotifyState(const UPaperZDAnimNotifyState&) = delete; \
	NO_API virtual ~UPaperZDAnimNotifyState();


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_8_PROLOG
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_RPC_WRAPPERS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_INCLASS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperZDAnimNotifyState;

// ********** End Class UPaperZDAnimNotifyState ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
