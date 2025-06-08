// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editors/Util/PaperZDEditorSettings.h"

#ifdef PAPERZDEDITOR_PaperZDEditorSettings_generated_h
#error "PaperZDEditorSettings.generated.h already included, missing '#pragma once' in PaperZDEditorSettings.h"
#endif
#define PAPERZDEDITOR_PaperZDEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPaperZDEditorSettings ***************************************************
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDEditorSettings_NoRegister();

#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperZDEditorSettings(); \
	friend struct Z_Construct_UClass_UPaperZDEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperZDEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PaperZDEditor"), Z_Construct_UClass_UPaperZDEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPaperZDEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperZDEditorSettings(UPaperZDEditorSettings&&) = delete; \
	UPaperZDEditorSettings(const UPaperZDEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPaperZDEditorSettings) \
	NO_API virtual ~UPaperZDEditorSettings();


#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_22_PROLOG
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperZDEditorSettings;

// ********** End Class UPaperZDEditorSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h

// ********** Begin Enum EAnimSequencePlacementPolicy **********************************************
#define FOREACH_ENUM_EANIMSEQUENCEPLACEMENTPOLICY(op) \
	op(EAnimSequencePlacementPolicy::AlwaysAsk) \
	op(EAnimSequencePlacementPolicy::SameFolder) \
	op(EAnimSequencePlacementPolicy::SubFolder) 

enum class EAnimSequencePlacementPolicy : uint8;
template<> struct TIsUEnumClass<EAnimSequencePlacementPolicy> { enum { Value = true }; };
template<> PAPERZDEDITOR_API UEnum* StaticEnum<EAnimSequencePlacementPolicy>();
// ********** End Enum EAnimSequencePlacementPolicy ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
