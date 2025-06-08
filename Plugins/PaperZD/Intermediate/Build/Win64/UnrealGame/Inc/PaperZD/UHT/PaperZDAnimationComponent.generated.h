// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperZDAnimationComponent.h"

#ifdef PAPERZD_PaperZDAnimationComponent_generated_h
#error "PaperZDAnimationComponent.generated.h already included, missing '#pragma once' in PaperZDAnimationComponent.h"
#endif
#define PAPERZD_PaperZDAnimationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPaperZDAnimInstance;

// ********** Begin Class UPaperZDAnimationComponent ***********************************************
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAnimInstanceClass);


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperZDAnimationComponent, NO_API)


PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister();

#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperZDAnimationComponent(); \
	friend struct Z_Construct_UClass_UPaperZDAnimationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperZDAnimationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PaperZD"), Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister) \
	DECLARE_SERIALIZER(UPaperZDAnimationComponent) \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h_21_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPaperZDAnimationComponent*>(this); }


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperZDAnimationComponent(UPaperZDAnimationComponent&&) = delete; \
	UPaperZDAnimationComponent(const UPaperZDAnimationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPaperZDAnimationComponent) \
	NO_API virtual ~UPaperZDAnimationComponent();


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h_18_PROLOG
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperZDAnimationComponent;

// ********** End Class UPaperZDAnimationComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
