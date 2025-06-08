// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Notifies/PaperZDAnimNotifyCustom.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimNotifyCustom() {}

// ********** Begin Cross Module References ********************************************************
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotifyCustom();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotifyCustom_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimNotifyCustom *************************************************
void UPaperZDAnimNotifyCustom::StaticRegisterNativesUPaperZDAnimNotifyCustom()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimNotifyCustom;
UClass* UPaperZDAnimNotifyCustom::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimNotifyCustom;
	if (!Z_Registration_Info_UClass_UPaperZDAnimNotifyCustom.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimNotifyCustom"),
			Z_Registration_Info_UClass_UPaperZDAnimNotifyCustom.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimNotifyCustom,
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
	return Z_Registration_Info_UClass_UPaperZDAnimNotifyCustom.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimNotifyCustom_NoRegister()
{
	return UPaperZDAnimNotifyCustom::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimNotifyCustom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A Custom notify gets compiled and can only be used inside the AnimBP that registered it.\n */" },
#endif
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Notifies/PaperZDAnimNotifyCustom.h" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotifyCustom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Custom notify gets compiled and can only be used inside the AnimBP that registered it." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimNotifyCustom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDAnimNotifyCustom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotifyCustom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimNotifyCustom_Statics::ClassParams = {
	&UPaperZDAnimNotifyCustom::StaticClass,
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
	0x009020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotifyCustom_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimNotifyCustom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimNotifyCustom()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimNotifyCustom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimNotifyCustom.OuterSingleton, Z_Construct_UClass_UPaperZDAnimNotifyCustom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimNotifyCustom.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimNotifyCustom);
UPaperZDAnimNotifyCustom::~UPaperZDAnimNotifyCustom() {}
// ********** End Class UPaperZDAnimNotifyCustom ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyCustom_h__Script_PaperZD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimNotifyCustom, UPaperZDAnimNotifyCustom::StaticClass, TEXT("UPaperZDAnimNotifyCustom"), &Z_Registration_Info_UClass_UPaperZDAnimNotifyCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimNotifyCustom), 4058557611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyCustom_h__Script_PaperZD_3801899301(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyCustom_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyCustom_h__Script_PaperZD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
