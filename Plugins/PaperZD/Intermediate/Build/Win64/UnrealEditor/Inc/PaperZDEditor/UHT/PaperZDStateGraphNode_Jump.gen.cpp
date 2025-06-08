// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDStateGraphNode_Jump.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDStateGraphNode_Jump() {}

// ********** Begin Cross Module References ********************************************************
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Jump();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Jump_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDStateGraphNode_Jump **********************************************
void UPaperZDStateGraphNode_Jump::StaticRegisterNativesUPaperZDStateGraphNode_Jump()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump;
UClass* UPaperZDStateGraphNode_Jump::GetPrivateStaticClass()
{
	using TClass = UPaperZDStateGraphNode_Jump;
	if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDStateGraphNode_Jump"),
			Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump.InnerSingleton,
			StaticRegisterNativesUPaperZDStateGraphNode_Jump,
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
	return Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Jump_NoRegister()
{
	return UPaperZDStateGraphNode_Jump::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Specialized node that works as a secondary root and can be called from the AnimInstance to force change the flow of the state machine.\n * Will keep connected nodes to it for being cleaned up on the compile process, like the root node.\n */" },
#endif
		{ "IncludePath", "Graphs/Nodes/PaperZDStateGraphNode_Jump.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Jump.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specialized node that works as a secondary root and can be called from the AnimInstance to force change the flow of the state machine.\nWill keep connected nodes to it for being cleaned up on the compile process, like the root node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Name for this redirector, will be indexed on the StateMachine. */" },
#endif
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Jump.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name for this redirector, will be indexed on the StateMachine." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateGraphNode_Jump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDStateGraphNode_Jump, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDStateGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::ClassParams = {
	&UPaperZDStateGraphNode_Jump::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Jump()
{
	if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump.OuterSingleton, Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateGraphNode_Jump);
UPaperZDStateGraphNode_Jump::~UPaperZDStateGraphNode_Jump() {}
// ********** End Class UPaperZDStateGraphNode_Jump ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Jump_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateGraphNode_Jump, UPaperZDStateGraphNode_Jump::StaticClass, TEXT("UPaperZDStateGraphNode_Jump"), &Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateGraphNode_Jump), 985598525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Jump_h__Script_PaperZDEditor_2013426026(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Jump_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Jump_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
