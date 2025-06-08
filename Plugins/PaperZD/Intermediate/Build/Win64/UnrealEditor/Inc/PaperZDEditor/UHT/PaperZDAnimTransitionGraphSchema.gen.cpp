// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDAnimTransitionGraphSchema.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimTransitionGraphSchema() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimTransitionGraphSchema ****************************************
void UPaperZDAnimTransitionGraphSchema::StaticRegisterNativesUPaperZDAnimTransitionGraphSchema()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema;
UClass* UPaperZDAnimTransitionGraphSchema::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimTransitionGraphSchema;
	if (!Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimTransitionGraphSchema"),
			Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimTransitionGraphSchema,
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
	return Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_NoRegister()
{
	return UPaperZDAnimTransitionGraphSchema::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/PaperZDAnimTransitionGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDAnimTransitionGraphSchema.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimTransitionGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::ClassParams = {
	&UPaperZDAnimTransitionGraphSchema::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema.OuterSingleton, Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimTransitionGraphSchema);
UPaperZDAnimTransitionGraphSchema::~UPaperZDAnimTransitionGraphSchema() {}
// ********** End Class UPaperZDAnimTransitionGraphSchema ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraphSchema_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimTransitionGraphSchema, UPaperZDAnimTransitionGraphSchema::StaticClass, TEXT("UPaperZDAnimTransitionGraphSchema"), &Z_Registration_Info_UClass_UPaperZDAnimTransitionGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimTransitionGraphSchema), 400308289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraphSchema_h__Script_PaperZDEditor_3473987768(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraphSchema_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraphSchema_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
