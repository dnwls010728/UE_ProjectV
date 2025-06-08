// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperZDPlaySlotOverrideAction.h"

#ifdef PAPERZD_PaperZDPlaySlotOverrideAction_generated_h
#error "PaperZDPlaySlotOverrideAction.generated.h already included, missing '#pragma once' in PaperZDPlaySlotOverrideAction.h"
#endif
#define PAPERZD_PaperZDPlaySlotOverrideAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UPaperZDAnimInstance;
class UPaperZDAnimSequence;
class UPaperZDPlaySlotOverrideAction;

// ********** Begin Delegate FPaperZDPlaySlotOverrideOutputSignature *******************************
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_14_DELEGATE \
PAPERZD_API void FPaperZDPlaySlotOverrideOutputSignature_DelegateWrapper(const FMulticastScriptDelegate& PaperZDPlaySlotOverrideOutputSignature);


// ********** End Delegate FPaperZDPlaySlotOverrideOutputSignature *********************************

// ********** Begin Class UPaperZDPlaySlotOverrideAction *******************************************
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAnimationOverrideEnd); \
	DECLARE_FUNCTION(execPlayAnimationOverrideWithCallbacks);


PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_NoRegister();

#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperZDPlaySlotOverrideAction(); \
	friend struct Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperZDPlaySlotOverrideAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PaperZD"), Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_NoRegister) \
	DECLARE_SERIALIZER(UPaperZDPlaySlotOverrideAction)


#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperZDPlaySlotOverrideAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperZDPlaySlotOverrideAction(UPaperZDPlaySlotOverrideAction&&) = delete; \
	UPaperZDPlaySlotOverrideAction(const UPaperZDPlaySlotOverrideAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDPlaySlotOverrideAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDPlaySlotOverrideAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperZDPlaySlotOverrideAction) \
	NO_API virtual ~UPaperZDPlaySlotOverrideAction();


#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_19_PROLOG
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperZDPlaySlotOverrideAction;

// ********** End Class UPaperZDPlaySlotOverrideAction *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
