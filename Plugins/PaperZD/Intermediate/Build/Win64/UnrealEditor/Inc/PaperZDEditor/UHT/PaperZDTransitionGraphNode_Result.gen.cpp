// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDTransitionGraphNode_Result.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDTransitionGraphNode_Result() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDTransitionGraphNode_Result ***************************************
void UPaperZDTransitionGraphNode_Result::StaticRegisterNativesUPaperZDTransitionGraphNode_Result()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result;
UClass* UPaperZDTransitionGraphNode_Result::GetPrivateStaticClass()
{
	using TClass = UPaperZDTransitionGraphNode_Result;
	if (!Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDTransitionGraphNode_Result"),
			Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.InnerSingleton,
			StaticRegisterNativesUPaperZDTransitionGraphNode_Result,
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
	return Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_NoRegister()
{
	return UPaperZDTransitionGraphNode_Result::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/Nodes/PaperZDTransitionGraphNode_Result.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDTransitionGraphNode_Result.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanEnterTransition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Variable only meant to be shown as a pin. */" },
#endif
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDTransitionGraphNode_Result.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable only meant to be shown as a pin." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bCanEnterTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEnterTransition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDTransitionGraphNode_Result>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition_SetBit(void* Obj)
{
	((UPaperZDTransitionGraphNode_Result*)Obj)->bCanEnterTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition = { "bCanEnterTransition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDTransitionGraphNode_Result), &Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanEnterTransition_MetaData), NewProp_bCanEnterTransition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::ClassParams = {
	&UPaperZDTransitionGraphNode_Result::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result()
{
	if (!Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.OuterSingleton, Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDTransitionGraphNode_Result);
UPaperZDTransitionGraphNode_Result::~UPaperZDTransitionGraphNode_Result() {}
// ********** End Class UPaperZDTransitionGraphNode_Result *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDTransitionGraphNode_Result, UPaperZDTransitionGraphNode_Result::StaticClass, TEXT("UPaperZDTransitionGraphNode_Result"), &Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDTransitionGraphNode_Result), 3640459545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h__Script_PaperZDEditor_2562184151(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
