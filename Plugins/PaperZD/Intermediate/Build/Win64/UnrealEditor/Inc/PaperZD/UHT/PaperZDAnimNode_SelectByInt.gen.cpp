// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_SelectByInt.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_Base.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_SelectByInt() {}

// ********** Begin Cross Module References ********************************************************
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPaperZDAnimNode_SelectByInt **************************************
static_assert(std::is_polymorphic<FPaperZDAnimNode_SelectByInt>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_SelectByInt cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_SelectByInt;
class UScriptStruct* FPaperZDAnimNode_SelectByInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_SelectByInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_SelectByInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_SelectByInt"));
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_SelectByInt.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Selects between a list of animations depending on a given integer value.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByInt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects between a list of animations depending on a given integer value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectValue_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The value that drives the selection. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByInt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The value that drives the selection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInactiveAnimations_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, the inactive animations will still update its playback progress as if its still running.\n\x09 * Switching between animations will not reset them and they will just take from where they were.\n\x09 * Disabling this pauses animations update and the inactive animations will be \"frozen in time\" until selected again.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByInt.h" },
		{ "NeverAsPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the inactive animations will still update its playback progress as if its still running.\nSwitching between animations will not reset them and they will just take from where they were.\nDisabling this pauses animations update and the inactive animations will be \"frozen in time\" until selected again." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnChange_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If animation aren't updating while inactive this value will force them to \"reset\" to 0 when they become relevant again. */" },
#endif
		{ "EditCondition", "!bUpdateInactiveAnimation" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByInt.h" },
		{ "NeverAsPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If animation aren't updating while inactive this value will force them to \"reset\" to 0 when they become relevant again." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Animation entry. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByInt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation entry." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectValue;
	static void NewProp_bUpdateInactiveAnimations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInactiveAnimations;
	static void NewProp_bResetOnChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Animation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_SelectByInt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_SelectValue = { "SelectValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimNode_SelectByInt, SelectValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectValue_MetaData), NewProp_SelectValue_MetaData) };
void Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bUpdateInactiveAnimations_SetBit(void* Obj)
{
	((FPaperZDAnimNode_SelectByInt*)Obj)->bUpdateInactiveAnimations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bUpdateInactiveAnimations = { "bUpdateInactiveAnimations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPaperZDAnimNode_SelectByInt), &Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bUpdateInactiveAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateInactiveAnimations_MetaData), NewProp_bUpdateInactiveAnimations_MetaData) };
void Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bResetOnChange_SetBit(void* Obj)
{
	((FPaperZDAnimNode_SelectByInt*)Obj)->bResetOnChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bResetOnChange = { "bResetOnChange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPaperZDAnimNode_SelectByInt), &Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bResetOnChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetOnChange_MetaData), NewProp_bResetOnChange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_Animation_Inner = { "Animation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperZDAnimDataLink, METADATA_PARAMS(0, nullptr) }; // 2516805643
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimNode_SelectByInt, Animation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) }; // 2516805643
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_SelectValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bUpdateInactiveAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bResetOnChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_Animation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_Animation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
	&NewStructOps,
	"PaperZDAnimNode_SelectByInt",
	Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::PropPointers),
	sizeof(FPaperZDAnimNode_SelectByInt),
	alignof(FPaperZDAnimNode_SelectByInt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_SelectByInt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_SelectByInt.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_SelectByInt.InnerSingleton;
}
// ********** End ScriptStruct FPaperZDAnimNode_SelectByInt ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByInt_h__Script_PaperZD_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperZDAnimNode_SelectByInt::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewStructOps, TEXT("PaperZDAnimNode_SelectByInt"), &Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_SelectByInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_SelectByInt), 2803368944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByInt_h__Script_PaperZD_238865(TEXT("/Script/PaperZD"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByInt_h__Script_PaperZD_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByInt_h__Script_PaperZD_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
