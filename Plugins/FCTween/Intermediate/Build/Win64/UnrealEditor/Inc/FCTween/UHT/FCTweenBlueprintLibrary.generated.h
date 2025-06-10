// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/FCTweenBlueprintLibrary.h"

#ifdef FCTWEEN_FCTweenBlueprintLibrary_generated_h
#error "FCTweenBlueprintLibrary.generated.h already included, missing '#pragma once' in FCTweenBlueprintLibrary.h"
#endif
#define FCTWEEN_FCTweenBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EFCEase : uint8;

// ********** Begin Class UFCTweenBlueprintLibrary *************************************************
#define FID_Unreal_Projects_UE_ProjectV_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnsureTweenCapacity); \
	DECLARE_FUNCTION(execEaseWithParams); \
	DECLARE_FUNCTION(execEase);


FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBlueprintLibrary_NoRegister();

#define FID_Unreal_Projects_UE_ProjectV_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCTweenBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UFCTweenBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UFCTweenBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), Z_Construct_UClass_UFCTweenBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UFCTweenBlueprintLibrary)


#define FID_Unreal_Projects_UE_ProjectV_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFCTweenBlueprintLibrary(UFCTweenBlueprintLibrary&&) = delete; \
	UFCTweenBlueprintLibrary(const UFCTweenBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBlueprintLibrary) \
	NO_API virtual ~UFCTweenBlueprintLibrary();


#define FID_Unreal_Projects_UE_ProjectV_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_8_PROLOG
#define FID_Unreal_Projects_UE_ProjectV_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE_ProjectV_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFCTweenBlueprintLibrary;

// ********** End Class UFCTweenBlueprintLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE_ProjectV_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
