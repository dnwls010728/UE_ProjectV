// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_StateMachine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_StateMachine() {}

// ********** Begin Cross Module References ********************************************************
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPaperZDAnimNode_StateMachine *************************************
static_assert(std::is_polymorphic<FPaperZDAnimNode_StateMachine>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_StateMachine cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_StateMachine;
class UScriptStruct* FPaperZDAnimNode_StateMachine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_StateMachine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_StateMachine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_StateMachine"));
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_StateMachine.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manages a FSM that can drive animations depending of different states and transition rules.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_StateMachine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages a FSM that can drive animations depending of different states and transition rules." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Index of the baked state machine definition on the generated class. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_StateMachine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the baked state machine definition on the generated class." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StateMachineIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_StateMachine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::NewProp_StateMachineIndex = { "StateMachineIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimNode_StateMachine, StateMachineIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachineIndex_MetaData), NewProp_StateMachineIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::NewProp_StateMachineIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
	&NewStructOps,
	"PaperZDAnimNode_StateMachine",
	Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::PropPointers),
	sizeof(FPaperZDAnimNode_StateMachine),
	alignof(FPaperZDAnimNode_StateMachine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_StateMachine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_StateMachine.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_StateMachine.InnerSingleton;
}
// ********** End ScriptStruct FPaperZDAnimNode_StateMachine ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_StateMachine_h__Script_PaperZD_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperZDAnimNode_StateMachine::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::NewStructOps, TEXT("PaperZDAnimNode_StateMachine"), &Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_StateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_StateMachine), 1094154433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_StateMachine_h__Script_PaperZD_293779514(TEXT("/Script/PaperZD"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_StateMachine_h__Script_PaperZD_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_StateMachine_h__Script_PaperZD_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
