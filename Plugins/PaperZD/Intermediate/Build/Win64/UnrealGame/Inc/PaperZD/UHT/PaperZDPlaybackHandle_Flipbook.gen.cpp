// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimSequences/Players/PaperZDPlaybackHandle_Flipbook.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDPlaybackHandle_Flipbook() {}

// ********** Begin Cross Module References ********************************************************
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaybackHandle();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDPlaybackHandle_Flipbook ******************************************
void UPaperZDPlaybackHandle_Flipbook::StaticRegisterNativesUPaperZDPlaybackHandle_Flipbook()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDPlaybackHandle_Flipbook;
UClass* UPaperZDPlaybackHandle_Flipbook::GetPrivateStaticClass()
{
	using TClass = UPaperZDPlaybackHandle_Flipbook;
	if (!Z_Registration_Info_UClass_UPaperZDPlaybackHandle_Flipbook.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDPlaybackHandle_Flipbook"),
			Z_Registration_Info_UClass_UPaperZDPlaybackHandle_Flipbook.InnerSingleton,
			StaticRegisterNativesUPaperZDPlaybackHandle_Flipbook,
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
	return Z_Registration_Info_UClass_UPaperZDPlaybackHandle_Flipbook.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook_NoRegister()
{
	return UPaperZDPlaybackHandle_Flipbook::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Playback handle that manages rendering of Paper2D flipbook components.\n */" },
		{ "IncludePath", "AnimSequences/Players/PaperZDPlaybackHandle_Flipbook.h" },
		{ "ModuleRelativePath", "Public/AnimSequences/Players/PaperZDPlaybackHandle_Flipbook.h" },
		{ "ToolTip", "Playback handle that manages rendering of Paper2D flipbook components." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDPlaybackHandle_Flipbook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDPlaybackHandle,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook_Statics::ClassParams = {
	&UPaperZDPlaybackHandle_Flipbook::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook()
{
	if (!Z_Registration_Info_UClass_UPaperZDPlaybackHandle_Flipbook.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDPlaybackHandle_Flipbook.OuterSingleton, Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDPlaybackHandle_Flipbook.OuterSingleton;
}
UPaperZDPlaybackHandle_Flipbook::UPaperZDPlaybackHandle_Flipbook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDPlaybackHandle_Flipbook);
UPaperZDPlaybackHandle_Flipbook::~UPaperZDPlaybackHandle_Flipbook() {}
// ********** End Class UPaperZDPlaybackHandle_Flipbook ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_Flipbook_h__Script_PaperZD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDPlaybackHandle_Flipbook, UPaperZDPlaybackHandle_Flipbook::StaticClass, TEXT("UPaperZDPlaybackHandle_Flipbook"), &Z_Registration_Info_UClass_UPaperZDPlaybackHandle_Flipbook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDPlaybackHandle_Flipbook), 2683107392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_Flipbook_h__Script_PaperZD_3219655500(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_Flipbook_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_Flipbook_h__Script_PaperZD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
