// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDNotifyGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDNotifyGraph() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDNotifyGraph();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDNotifyGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDNotifyGraph ******************************************************
void UPaperZDNotifyGraph::StaticRegisterNativesUPaperZDNotifyGraph()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDNotifyGraph;
UClass* UPaperZDNotifyGraph::GetPrivateStaticClass()
{
	using TClass = UPaperZDNotifyGraph;
	if (!Z_Registration_Info_UClass_UPaperZDNotifyGraph.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDNotifyGraph"),
			Z_Registration_Info_UClass_UPaperZDNotifyGraph.InnerSingleton,
			StaticRegisterNativesUPaperZDNotifyGraph,
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
	return Z_Registration_Info_UClass_UPaperZDNotifyGraph.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDNotifyGraph_NoRegister()
{
	return UPaperZDNotifyGraph::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDNotifyGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A graph that represents an implementation of an Animation Source \"Custom notify\", on the parent AnimBP.\n */" },
#endif
		{ "IncludePath", "Graphs/PaperZDNotifyGraph.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDNotifyGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A graph that represents an implementation of an Animation Source \"Custom notify\", on the parent AnimBP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The name of the notify we're implementing. */" },
#endif
		{ "ModuleRelativePath", "Private/Graphs/PaperZDNotifyGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the notify we're implementing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRegistered_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* True if the notify graph belongs to a valid registered notify, otherwise it belongs to an unregistered notify that hasn't been removed yet. */" },
#endif
		{ "ModuleRelativePath", "Private/Graphs/PaperZDNotifyGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the notify graph belongs to a valid registered notify, otherwise it belongs to an unregistered notify that hasn't been removed yet." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static void NewProp_bRegistered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegistered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDNotifyGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyGraph, NotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyName_MetaData), NewProp_NotifyName_MetaData) };
void Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_bRegistered_SetBit(void* Obj)
{
	((UPaperZDNotifyGraph*)Obj)->bRegistered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_bRegistered = { "bRegistered", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDNotifyGraph), &Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_bRegistered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRegistered_MetaData), NewProp_bRegistered_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDNotifyGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_bRegistered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDNotifyGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDNotifyGraph_Statics::ClassParams = {
	&UPaperZDNotifyGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDNotifyGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyGraph_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDNotifyGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDNotifyGraph()
{
	if (!Z_Registration_Info_UClass_UPaperZDNotifyGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDNotifyGraph.OuterSingleton, Z_Construct_UClass_UPaperZDNotifyGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDNotifyGraph.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDNotifyGraph);
UPaperZDNotifyGraph::~UPaperZDNotifyGraph() {}
// ********** End Class UPaperZDNotifyGraph ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraph_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDNotifyGraph, UPaperZDNotifyGraph::StaticClass, TEXT("UPaperZDNotifyGraph"), &Z_Registration_Info_UClass_UPaperZDNotifyGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDNotifyGraph), 402803897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraph_h__Script_PaperZDEditor_3933845677(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraph_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraph_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
