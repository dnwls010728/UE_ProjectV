// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDAnimGraphSchema_Transitional.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimGraphSchema_Transitional() {}

// ********** Begin Cross Module References ********************************************************
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphSchema();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimGraphSchema_Transitional *************************************
void UPaperZDAnimGraphSchema_Transitional::StaticRegisterNativesUPaperZDAnimGraphSchema_Transitional()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimGraphSchema_Transitional;
UClass* UPaperZDAnimGraphSchema_Transitional::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimGraphSchema_Transitional;
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphSchema_Transitional.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimGraphSchema_Transitional"),
			Z_Registration_Info_UClass_UPaperZDAnimGraphSchema_Transitional.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimGraphSchema_Transitional,
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
	return Z_Registration_Info_UClass_UPaperZDAnimGraphSchema_Transitional.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional_NoRegister()
{
	return UPaperZDAnimGraphSchema_Transitional::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/PaperZDAnimGraphSchema_Transitional.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDAnimGraphSchema_Transitional.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimGraphSchema_Transitional>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional_Statics::ClassParams = {
	&UPaperZDAnimGraphSchema_Transitional::StaticClass,
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
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimGraphSchema_Transitional.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimGraphSchema_Transitional.OuterSingleton, Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimGraphSchema_Transitional.OuterSingleton;
}
UPaperZDAnimGraphSchema_Transitional::UPaperZDAnimGraphSchema_Transitional(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimGraphSchema_Transitional);
UPaperZDAnimGraphSchema_Transitional::~UPaperZDAnimGraphSchema_Transitional() {}
// ********** End Class UPaperZDAnimGraphSchema_Transitional ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraphSchema_Transitional_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimGraphSchema_Transitional, UPaperZDAnimGraphSchema_Transitional::StaticClass, TEXT("UPaperZDAnimGraphSchema_Transitional"), &Z_Registration_Info_UClass_UPaperZDAnimGraphSchema_Transitional, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimGraphSchema_Transitional), 1319310536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraphSchema_Transitional_h__Script_PaperZDEditor_2533731535(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraphSchema_Transitional_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimGraphSchema_Transitional_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
