// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPaperZDAnimInstanceManager.h"

#ifdef PAPERZD_IPaperZDAnimInstanceManager_generated_h
#error "IPaperZDAnimInstanceManager.generated.h already included, missing '#pragma once' in IPaperZDAnimInstanceManager.h"
#endif
#define PAPERZD_IPaperZDAnimInstanceManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPaperZDAnimInstanceManager ******************************************
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstanceManager_NoRegister();

#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperZDAnimInstanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperZDAnimInstanceManager(UPaperZDAnimInstanceManager&&) = delete; \
	UPaperZDAnimInstanceManager(const UPaperZDAnimInstanceManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimInstanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimInstanceManager); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperZDAnimInstanceManager) \
	virtual ~UPaperZDAnimInstanceManager() = default;


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPaperZDAnimInstanceManager(); \
	friend struct Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstanceManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperZDAnimInstanceManager, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PaperZD"), Z_Construct_UClass_UPaperZDAnimInstanceManager_NoRegister) \
	DECLARE_SERIALIZER(UPaperZDAnimInstanceManager)


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_17_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPaperZDAnimInstanceManager() {} \
public: \
	typedef UPaperZDAnimInstanceManager UClassType; \
	typedef IPaperZDAnimInstanceManager ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_14_PROLOG
#define FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperZDAnimInstanceManager;

// ********** End Interface UPaperZDAnimInstanceManager ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
