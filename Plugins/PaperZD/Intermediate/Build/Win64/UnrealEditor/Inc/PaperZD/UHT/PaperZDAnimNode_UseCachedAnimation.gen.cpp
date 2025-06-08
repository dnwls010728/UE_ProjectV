// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_UseCachedAnimation.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_Base.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_UseCachedAnimation() {}

// ********** Begin Cross Module References ********************************************************
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPaperZDAnimNode_UseCachedAnimation *******************************
static_assert(std::is_polymorphic<FPaperZDAnimNode_UseCachedAnimation>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_UseCachedAnimation cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation;
class UScriptStruct* FPaperZDAnimNode_UseCachedAnimation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_UseCachedAnimation"));
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Reads from a cached animation node.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_UseCachedAnimation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reads from a cached animation node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedCacheNode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Link to the CacheAnimation data link. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_UseCachedAnimation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Link to the CacheAnimation data link." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedCacheNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_UseCachedAnimation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode = { "LinkedCacheNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimNode_UseCachedAnimation, LinkedCacheNode), Z_Construct_UScriptStruct_FPaperZDAnimDataLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedCacheNode_MetaData), NewProp_LinkedCacheNode_MetaData) }; // 2516805643
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
	&NewStructOps,
	"PaperZDAnimNode_UseCachedAnimation",
	Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::PropPointers),
	sizeof(FPaperZDAnimNode_UseCachedAnimation),
	alignof(FPaperZDAnimNode_UseCachedAnimation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation.InnerSingleton;
}
// ********** End ScriptStruct FPaperZDAnimNode_UseCachedAnimation *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_UseCachedAnimation_h__Script_PaperZD_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperZDAnimNode_UseCachedAnimation::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::NewStructOps, TEXT("PaperZDAnimNode_UseCachedAnimation"), &Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_UseCachedAnimation), 1960623064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_UseCachedAnimation_h__Script_PaperZD_1632645301(TEXT("/Script/PaperZD"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_UseCachedAnimation_h__Script_PaperZD_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_UseCachedAnimation_h__Script_PaperZD_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
