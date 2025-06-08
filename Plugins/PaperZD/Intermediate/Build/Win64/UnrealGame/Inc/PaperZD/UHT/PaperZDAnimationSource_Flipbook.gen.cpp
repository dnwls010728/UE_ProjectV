// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimSequences/Sources/PaperZDAnimationSource_Flipbook.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimationSource_Flipbook() {}

// ********** Begin Cross Module References ********************************************************
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationSource();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationSource_Flipbook();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationSource_Flipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimationSource_Flipbook *****************************************
void UPaperZDAnimationSource_Flipbook::StaticRegisterNativesUPaperZDAnimationSource_Flipbook()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimationSource_Flipbook;
UClass* UPaperZDAnimationSource_Flipbook::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimationSource_Flipbook;
	if (!Z_Registration_Info_UClass_UPaperZDAnimationSource_Flipbook.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimationSource_Flipbook"),
			Z_Registration_Info_UClass_UPaperZDAnimationSource_Flipbook.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimationSource_Flipbook,
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
	return Z_Registration_Info_UClass_UPaperZDAnimationSource_Flipbook.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimationSource_Flipbook_NoRegister()
{
	return UPaperZDAnimationSource_Flipbook::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimationSource_Flipbook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An animation source to be used with Flipbook components.\n */" },
		{ "IncludePath", "AnimSequences/Sources/PaperZDAnimationSource_Flipbook.h" },
		{ "ModuleRelativePath", "Public/AnimSequences/Sources/PaperZDAnimationSource_Flipbook.h" },
		{ "ToolTip", "An animation source to be used with Flipbook components." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimationSource_Flipbook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDAnimationSource_Flipbook_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimationSource,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationSource_Flipbook_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimationSource_Flipbook_Statics::ClassParams = {
	&UPaperZDAnimationSource_Flipbook::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationSource_Flipbook_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimationSource_Flipbook_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimationSource_Flipbook()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimationSource_Flipbook.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimationSource_Flipbook.OuterSingleton, Z_Construct_UClass_UPaperZDAnimationSource_Flipbook_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimationSource_Flipbook.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimationSource_Flipbook);
UPaperZDAnimationSource_Flipbook::~UPaperZDAnimationSource_Flipbook() {}
// ********** End Class UPaperZDAnimationSource_Flipbook *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Sources_PaperZDAnimationSource_Flipbook_h__Script_PaperZD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimationSource_Flipbook, UPaperZDAnimationSource_Flipbook::StaticClass, TEXT("UPaperZDAnimationSource_Flipbook"), &Z_Registration_Info_UClass_UPaperZDAnimationSource_Flipbook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimationSource_Flipbook), 2803989153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Sources_PaperZDAnimationSource_Flipbook_h__Script_PaperZD_3150968982(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Sources_PaperZDAnimationSource_Flipbook_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Sources_PaperZDAnimationSource_Flipbook_h__Script_PaperZD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
