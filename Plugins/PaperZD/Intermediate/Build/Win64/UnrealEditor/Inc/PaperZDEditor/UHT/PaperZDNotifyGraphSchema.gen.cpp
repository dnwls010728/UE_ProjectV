// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDNotifyGraphSchema.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDNotifyGraphSchema() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDNotifyGraphSchema();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDNotifyGraphSchema_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDNotifyGraphSchema ************************************************
void UPaperZDNotifyGraphSchema::StaticRegisterNativesUPaperZDNotifyGraphSchema()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema;
UClass* UPaperZDNotifyGraphSchema::GetPrivateStaticClass()
{
	using TClass = UPaperZDNotifyGraphSchema;
	if (!Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDNotifyGraphSchema"),
			Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema.InnerSingleton,
			StaticRegisterNativesUPaperZDNotifyGraphSchema,
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
	return Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDNotifyGraphSchema_NoRegister()
{
	return UPaperZDNotifyGraphSchema::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Schema for the AnimNotify graph\n */" },
#endif
		{ "IncludePath", "Graphs/PaperZDNotifyGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDNotifyGraphSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Schema for the AnimNotify graph" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDNotifyGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::ClassParams = {
	&UPaperZDNotifyGraphSchema::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDNotifyGraphSchema()
{
	if (!Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema.OuterSingleton, Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDNotifyGraphSchema);
UPaperZDNotifyGraphSchema::~UPaperZDNotifyGraphSchema() {}
// ********** End Class UPaperZDNotifyGraphSchema **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraphSchema_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDNotifyGraphSchema, UPaperZDNotifyGraphSchema::StaticClass, TEXT("UPaperZDNotifyGraphSchema"), &Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDNotifyGraphSchema), 4052397704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraphSchema_h__Script_PaperZDEditor_3932461524(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraphSchema_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraphSchema_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
