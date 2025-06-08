// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDStateGraphNode_Root.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDStateGraphNode_Root() {}

// ********** Begin Cross Module References ********************************************************
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Root();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Root_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDStateGraphNode_Root **********************************************
void UPaperZDStateGraphNode_Root::StaticRegisterNativesUPaperZDStateGraphNode_Root()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root;
UClass* UPaperZDStateGraphNode_Root::GetPrivateStaticClass()
{
	using TClass = UPaperZDStateGraphNode_Root;
	if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDStateGraphNode_Root"),
			Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root.InnerSingleton,
			StaticRegisterNativesUPaperZDStateGraphNode_Root,
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
	return Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Root_NoRegister()
{
	return UPaperZDStateGraphNode_Root::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Entry point of the state machine.\n */" },
#endif
		{ "IncludePath", "Graphs/Nodes/PaperZDStateGraphNode_Root.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Root.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry point of the state machine." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateGraphNode_Root>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDStateGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::ClassParams = {
	&UPaperZDStateGraphNode_Root::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Root()
{
	if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root.OuterSingleton, Z_Construct_UClass_UPaperZDStateGraphNode_Root_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateGraphNode_Root);
UPaperZDStateGraphNode_Root::~UPaperZDStateGraphNode_Root() {}
// ********** End Class UPaperZDStateGraphNode_Root ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Root_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateGraphNode_Root, UPaperZDStateGraphNode_Root::StaticClass, TEXT("UPaperZDStateGraphNode_Root"), &Z_Registration_Info_UClass_UPaperZDStateGraphNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateGraphNode_Root), 400877295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Root_h__Script_PaperZDEditor_4071465991(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Root_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Root_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
