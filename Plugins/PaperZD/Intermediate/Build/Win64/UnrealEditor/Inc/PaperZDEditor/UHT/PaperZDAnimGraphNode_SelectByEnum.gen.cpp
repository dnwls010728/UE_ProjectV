// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDAnimGraphNode_SelectByEnum.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_SelectByEnum.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimGraphNode_SelectByEnum() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByEnum();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_Base();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimGraphNode_SelectByEnum ***************************************
void UPaperZDAnimGraphNode_SelectByEnum::StaticRegisterNativesUPaperZDAnimGraphNode_SelectByEnum()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByEnum;
UClass* UPaperZDAnimGraphNode_SelectByEnum::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimGraphNode_SelectByEnum;
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByEnum.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimGraphNode_SelectByEnum"),
			Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByEnum.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimGraphNode_SelectByEnum,
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
	return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByEnum.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_NoRegister()
{
	return UPaperZDAnimGraphNode_SelectByEnum::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Selects between two animations depending on a given Enum value.\n */" },
#endif
		{ "IncludePath", "Graphs/Nodes/PaperZDAnimGraphNode_SelectByEnum.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_SelectByEnum.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects between two animations depending on a given Enum value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNode_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Runtime node. */" },
#endif
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_SelectByEnum.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundEnum_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Enum being switched on */" },
#endif
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_SelectByEnum.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum being switched on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleEnumEntries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* List of enum entries this graph is exposing. */" },
#endif
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_SelectByEnum.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of enum entries this graph is exposing." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundEnum;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VisibleEnumEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VisibleEnumEntries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimGraphNode_SelectByEnum>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::NewProp_AnimNode = { "AnimNode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimGraphNode_SelectByEnum, AnimNode), Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNode_MetaData), NewProp_AnimNode_MetaData) }; // 2654215077
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::NewProp_BoundEnum = { "BoundEnum", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimGraphNode_SelectByEnum, BoundEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundEnum_MetaData), NewProp_BoundEnum_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::NewProp_VisibleEnumEntries_Inner = { "VisibleEnumEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::NewProp_VisibleEnumEntries = { "VisibleEnumEntries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimGraphNode_SelectByEnum, VisibleEnumEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleEnumEntries_MetaData), NewProp_VisibleEnumEntries_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::NewProp_AnimNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::NewProp_BoundEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::NewProp_VisibleEnumEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::NewProp_VisibleEnumEntries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::ClassParams = {
	&UPaperZDAnimGraphNode_SelectByEnum::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByEnum.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByEnum.OuterSingleton, Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByEnum.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimGraphNode_SelectByEnum);
UPaperZDAnimGraphNode_SelectByEnum::~UPaperZDAnimGraphNode_SelectByEnum() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperZDAnimGraphNode_SelectByEnum)
// ********** End Class UPaperZDAnimGraphNode_SelectByEnum *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_SelectByEnum_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimGraphNode_SelectByEnum, UPaperZDAnimGraphNode_SelectByEnum::StaticClass, TEXT("UPaperZDAnimGraphNode_SelectByEnum"), &Z_Registration_Info_UClass_UPaperZDAnimGraphNode_SelectByEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimGraphNode_SelectByEnum), 1735830120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_SelectByEnum_h__Script_PaperZDEditor_2670004185(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_SelectByEnum_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_SelectByEnum_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
