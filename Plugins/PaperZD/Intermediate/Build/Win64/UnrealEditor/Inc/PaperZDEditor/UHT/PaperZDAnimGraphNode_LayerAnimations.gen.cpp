// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDAnimGraphNode_LayerAnimations.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_LayerAnimations.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimGraphNode_LayerAnimations() {}

// ********** Begin Cross Module References ********************************************************
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_LayerAnimations();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_Base();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimGraphNode_LayerAnimations ************************************
void UPaperZDAnimGraphNode_LayerAnimations::StaticRegisterNativesUPaperZDAnimGraphNode_LayerAnimations()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimGraphNode_LayerAnimations;
UClass* UPaperZDAnimGraphNode_LayerAnimations::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimGraphNode_LayerAnimations;
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_LayerAnimations.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimGraphNode_LayerAnimations"),
			Z_Registration_Info_UClass_UPaperZDAnimGraphNode_LayerAnimations.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimGraphNode_LayerAnimations,
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
	return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_LayerAnimations.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_NoRegister()
{
	return UPaperZDAnimGraphNode_LayerAnimations::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Sets the animations in different weighted layers, running parallel and independent to each other.\n */" },
#endif
		{ "IncludePath", "Graphs/Nodes/PaperZDAnimGraphNode_LayerAnimations.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_LayerAnimations.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the animations in different weighted layers, running parallel and independent to each other." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNode_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Runtime node. */" },
#endif
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_LayerAnimations.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimGraphNode_LayerAnimations>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::NewProp_AnimNode = { "AnimNode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimGraphNode_LayerAnimations, AnimNode), Z_Construct_UScriptStruct_FPaperZDAnimNode_LayerAnimations, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNode_MetaData), NewProp_AnimNode_MetaData) }; // 2588233579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::NewProp_AnimNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::ClassParams = {
	&UPaperZDAnimGraphNode_LayerAnimations::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_LayerAnimations.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimGraphNode_LayerAnimations.OuterSingleton, Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_LayerAnimations.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimGraphNode_LayerAnimations);
UPaperZDAnimGraphNode_LayerAnimations::~UPaperZDAnimGraphNode_LayerAnimations() {}
// ********** End Class UPaperZDAnimGraphNode_LayerAnimations **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_LayerAnimations_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimGraphNode_LayerAnimations, UPaperZDAnimGraphNode_LayerAnimations::StaticClass, TEXT("UPaperZDAnimGraphNode_LayerAnimations"), &Z_Registration_Info_UClass_UPaperZDAnimGraphNode_LayerAnimations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimGraphNode_LayerAnimations), 571828105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_LayerAnimations_h__Script_PaperZDEditor_251050194(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_LayerAnimations_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_LayerAnimations_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
