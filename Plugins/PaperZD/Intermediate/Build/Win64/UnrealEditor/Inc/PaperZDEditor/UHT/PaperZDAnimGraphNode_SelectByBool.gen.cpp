// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDAnimGraphNode_SelectByBool.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_SelectByBool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimGraphNode_SelectByBool() {}

// ********** Begin Cross Module References ********************************************************
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_Base();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimGraphNode_SelectByBool ***************************************
void UPaperZDAnimGraphNode_SelectByBool::StaticRegisterNativesUPaperZDAnimGraphNode_SelectByBool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByBool;
UClass* UPaperZDAnimGraphNode_SelectByBool::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimGraphNode_SelectByBool;
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByBool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimGraphNode_SelectByBool"),
			Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByBool.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimGraphNode_SelectByBool,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByBool.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_NoRegister()
{
	return UPaperZDAnimGraphNode_SelectByBool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Selects between two animations depending on a given boolean value.\n */" },
#endif
		{ "IncludePath", "Graphs/Nodes/PaperZDAnimGraphNode_SelectByBool.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_SelectByBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects between two animations depending on a given boolean value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNode_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Runtime node. */" },
#endif
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_SelectByBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimGraphNode_SelectByBool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::NewProp_AnimNode = { "AnimNode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimGraphNode_SelectByBool, AnimNode), Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNode_MetaData), NewProp_AnimNode_MetaData) }; // 669080395
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::NewProp_AnimNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::ClassParams = {
	&UPaperZDAnimGraphNode_SelectByBool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByBool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByBool.OuterSingleton, Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByBool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimGraphNode_SelectByBool);
UPaperZDAnimGraphNode_SelectByBool::~UPaperZDAnimGraphNode_SelectByBool() {}
// ********** End Class UPaperZDAnimGraphNode_SelectByBool *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_SelectByBool_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByBool, UPaperZDAnimGraphNode_SelectByBool::StaticClass, TEXT("UPaperZDAnimGraphNode_SelectByBool"), &Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimGraphNode_SelectByBool), 1113774811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_SelectByBool_h__Script_PaperZDEditor_2703743292(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_SelectByBool_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_SelectByBool_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
