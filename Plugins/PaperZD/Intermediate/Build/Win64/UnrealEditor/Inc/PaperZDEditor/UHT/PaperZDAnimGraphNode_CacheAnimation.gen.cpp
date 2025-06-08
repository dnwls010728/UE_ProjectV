// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDAnimGraphNode_CacheAnimation.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_CacheAnimation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimGraphNode_CacheAnimation() {}

// ********** Begin Cross Module References ********************************************************
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_Base();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimGraphNode_CacheAnimation *************************************
void UPaperZDAnimGraphNode_CacheAnimation::StaticRegisterNativesUPaperZDAnimGraphNode_CacheAnimation()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation;
UClass* UPaperZDAnimGraphNode_CacheAnimation::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimGraphNode_CacheAnimation;
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimGraphNode_CacheAnimation"),
			Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimGraphNode_CacheAnimation,
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
	return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_NoRegister()
{
	return UPaperZDAnimGraphNode_CacheAnimation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Caches the animation data enabling it to be read from multiple nodes at a time, making sure the animation sub-tree is only updated and evaluated once per frame.\n * To access the data use the \"Use Cached Animation\" node.\n */" },
#endif
		{ "IncludePath", "Graphs/Nodes/PaperZDAnimGraphNode_CacheAnimation.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_CacheAnimation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Caches the animation data enabling it to be read from multiple nodes at a time, making sure the animation sub-tree is only updated and evaluated once per frame.\nTo access the data use the \"Use Cached Animation\" node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNode_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Runtime node. */" },
#endif
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_CacheAnimation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Name of the cache node. */" },
#endif
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_CacheAnimation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the cache node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CacheName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimGraphNode_CacheAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_AnimNode = { "AnimNode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimGraphNode_CacheAnimation, AnimNode), Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNode_MetaData), NewProp_AnimNode_MetaData) }; // 3582598885
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_CacheName = { "CacheName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimGraphNode_CacheAnimation, CacheName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheName_MetaData), NewProp_CacheName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_AnimNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_CacheName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::ClassParams = {
	&UPaperZDAnimGraphNode_CacheAnimation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation.OuterSingleton, Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimGraphNode_CacheAnimation);
UPaperZDAnimGraphNode_CacheAnimation::~UPaperZDAnimGraphNode_CacheAnimation() {}
// ********** End Class UPaperZDAnimGraphNode_CacheAnimation ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_CacheAnimation_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation, UPaperZDAnimGraphNode_CacheAnimation::StaticClass, TEXT("UPaperZDAnimGraphNode_CacheAnimation"), &Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimGraphNode_CacheAnimation), 769587551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_CacheAnimation_h__Script_PaperZDEditor_19474416(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_CacheAnimation_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_CacheAnimation_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
