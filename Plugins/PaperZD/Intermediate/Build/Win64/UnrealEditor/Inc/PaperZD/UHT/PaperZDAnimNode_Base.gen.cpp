// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_Base.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_Base() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDExposedValueHandler();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPaperZDAnimDataLink **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPaperZDAnimDataLink;
class UScriptStruct* FPaperZDAnimDataLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimDataLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPaperZDAnimDataLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimDataLink, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimDataLink"));
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimDataLink.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a link to another Animation Node.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a link to another Animation Node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Target ID that this link points to*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target ID that this link points to" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLinkID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Source ID that this link comes from */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source ID that this link comes from" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LinkID;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceLinkID;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimDataLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_LinkID = { "LinkID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimDataLink, LinkID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkID_MetaData), NewProp_LinkID_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_SourceLinkID = { "SourceLinkID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimDataLink, SourceLinkID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLinkID_MetaData), NewProp_SourceLinkID_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_LinkID,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_SourceLinkID,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	nullptr,
	&NewStructOps,
	"PaperZDAnimDataLink",
	Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::PropPointers),
	sizeof(FPaperZDAnimDataLink),
	alignof(FPaperZDAnimDataLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimDataLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPaperZDAnimDataLink.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimDataLink.InnerSingleton;
}
// ********** End ScriptStruct FPaperZDAnimDataLink ************************************************

// ********** Begin ScriptStruct FPaperZDExposedValueHandler ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPaperZDExposedValueHandler;
class UScriptStruct* FPaperZDExposedValueHandler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDExposedValueHandler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPaperZDExposedValueHandler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDExposedValueHandler"));
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDExposedValueHandler.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An exposed value updater\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An exposed value updater" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundFunction_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The function to call to update associated properties (can be NULL). */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The function to call to update associated properties (can be NULL)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cached UFunction. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached UFunction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueHandlerNodeProperty_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Node property that this value handler is associated with, when the node\n// is instantiated from this property the node's ExposedValueHandler will \n// point back to this FExposedValueHandler:\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Node property that this value handler is associated with, when the node\nis instantiated from this property the node's ExposedValueHandler will\npoint back to this FExposedValueHandler:" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoundFunction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_ValueHandlerNodeProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDExposedValueHandler>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_BoundFunction = { "BoundFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDExposedValueHandler, BoundFunction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundFunction_MetaData), NewProp_BoundFunction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDExposedValueHandler, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) };
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_ValueHandlerNodeProperty = { "ValueHandlerNodeProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDExposedValueHandler, ValueHandlerNodeProperty), &FStructProperty::StaticClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueHandlerNodeProperty_MetaData), NewProp_ValueHandlerNodeProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_BoundFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_ValueHandlerNodeProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	nullptr,
	&NewStructOps,
	"PaperZDExposedValueHandler",
	Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::PropPointers),
	sizeof(FPaperZDExposedValueHandler),
	alignof(FPaperZDExposedValueHandler),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDExposedValueHandler()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDExposedValueHandler.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPaperZDExposedValueHandler.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDExposedValueHandler.InnerSingleton;
}
// ********** End ScriptStruct FPaperZDExposedValueHandler *****************************************

// ********** Begin ScriptStruct FPaperZDAnimNode_Base *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_Base;
class UScriptStruct* FPaperZDAnimNode_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_Base, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_Base"));
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_Base.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Runtime implementation of an Animation Node.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime implementation of an Animation Node." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_Base>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	nullptr,
	&NewStructOps,
	"PaperZDAnimNode_Base",
	nullptr,
	0,
	sizeof(FPaperZDAnimNode_Base),
	alignof(FPaperZDAnimNode_Base),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_Base.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_Base.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_Base.InnerSingleton;
}
// ********** End ScriptStruct FPaperZDAnimNode_Base ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Base_h__Script_PaperZD_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperZDAnimDataLink::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewStructOps, TEXT("PaperZDAnimDataLink"), &Z_Registration_Info_UScriptStruct_FPaperZDAnimDataLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimDataLink), 2516805643U) },
		{ FPaperZDExposedValueHandler::StaticStruct, Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewStructOps, TEXT("PaperZDExposedValueHandler"), &Z_Registration_Info_UScriptStruct_FPaperZDExposedValueHandler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDExposedValueHandler), 3902176395U) },
		{ FPaperZDAnimNode_Base::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::NewStructOps, TEXT("PaperZDAnimNode_Base"), &Z_Registration_Info_UScriptStruct_FPaperZDAnimNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_Base), 2443773344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Base_h__Script_PaperZD_3101202736(TEXT("/Script/PaperZD"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Base_h__Script_PaperZD_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Base_h__Script_PaperZD_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
