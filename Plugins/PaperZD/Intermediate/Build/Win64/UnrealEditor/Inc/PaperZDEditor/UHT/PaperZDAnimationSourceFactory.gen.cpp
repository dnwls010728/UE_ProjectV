// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDAnimationSourceFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimationSourceFactory() {}

// ********** Begin Cross Module References ********************************************************
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimationSourceFactory();
PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimationSourceFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimationSourceFactory *******************************************
void UPaperZDAnimationSourceFactory::StaticRegisterNativesUPaperZDAnimationSourceFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimationSourceFactory;
UClass* UPaperZDAnimationSourceFactory::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimationSourceFactory;
	if (!Z_Registration_Info_UClass_UPaperZDAnimationSourceFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimationSourceFactory"),
			Z_Registration_Info_UClass_UPaperZDAnimationSourceFactory.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimationSourceFactory,
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
	return Z_Registration_Info_UClass_UPaperZDAnimationSourceFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimationSourceFactory_NoRegister()
{
	return UPaperZDAnimationSourceFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimationSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Factory for PaperZD Animation Source objects.\n */" },
#endif
		{ "IncludePath", "Factories/PaperZDAnimationSourceFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/PaperZDAnimationSourceFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory for PaperZD Animation Source objects." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimationSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDAnimationSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimationSourceFactory_Statics::ClassParams = {
	&UPaperZDAnimationSourceFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimationSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimationSourceFactory()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimationSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimationSourceFactory.OuterSingleton, Z_Construct_UClass_UPaperZDAnimationSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimationSourceFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimationSourceFactory);
UPaperZDAnimationSourceFactory::~UPaperZDAnimationSourceFactory() {}
// ********** End Class UPaperZDAnimationSourceFactory *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Factories_PaperZDAnimationSourceFactory_h__Script_PaperZDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimationSourceFactory, UPaperZDAnimationSourceFactory::StaticClass, TEXT("UPaperZDAnimationSourceFactory"), &Z_Registration_Info_UClass_UPaperZDAnimationSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimationSourceFactory), 3941006099U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Factories_PaperZDAnimationSourceFactory_h__Script_PaperZDEditor_2053337591(TEXT("/Script/PaperZDEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Factories_PaperZDAnimationSourceFactory_h__Script_PaperZDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZDEditor_Private_Factories_PaperZDAnimationSourceFactory_h__Script_PaperZDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
