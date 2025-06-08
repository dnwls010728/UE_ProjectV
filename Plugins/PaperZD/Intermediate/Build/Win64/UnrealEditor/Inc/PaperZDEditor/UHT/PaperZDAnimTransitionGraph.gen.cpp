// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDAnimTransitionGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimTransitionGraph() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraph();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimTransitionGraph **********************************************
void UPaperZDAnimTransitionGraph::StaticRegisterNativesUPaperZDAnimTransitionGraph()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph;
UClass* UPaperZDAnimTransitionGraph::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimTransitionGraph;
	if (!Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimTransitionGraph"),
			Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimTransitionGraph,
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
	return Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraph_NoRegister()
{
	return UPaperZDAnimTransitionGraph::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A graph used for evaluating the State machine transition rules.\n */" },
#endif
		{ "IncludePath", "Graphs/PaperZDAnimTransitionGraph.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDAnimTransitionGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A graph used for evaluating the State machine transition rules." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimTransitionGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::ClassParams = {
	&UPaperZDAnimTransitionGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraph()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph.OuterSingleton, Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimTransitionGraph);
UPaperZDAnimTransitionGraph::~UPaperZDAnimTransitionGraph() {}
// ********** End Class UPaperZDAnimTransitionGraph ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraph_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimTransitionGraph, UPaperZDAnimTransitionGraph::StaticClass, TEXT("UPaperZDAnimTransitionGraph"), &Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimTransitionGraph), 1643811697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraph_h__Script_PaperZDEditor_1685666879(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraph_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraph_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
