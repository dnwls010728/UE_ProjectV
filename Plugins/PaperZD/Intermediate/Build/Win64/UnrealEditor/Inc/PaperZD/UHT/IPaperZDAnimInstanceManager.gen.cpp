// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/IPaperZDAnimInstanceManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIPaperZDAnimInstanceManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstanceManager();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstanceManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPaperZDAnimInstanceManager ******************************************
void UPaperZDAnimInstanceManager::StaticRegisterNativesUPaperZDAnimInstanceManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimInstanceManager;
UClass* UPaperZDAnimInstanceManager::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimInstanceManager;
	if (!Z_Registration_Info_UClass_UPaperZDAnimInstanceManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimInstanceManager"),
			Z_Registration_Info_UClass_UPaperZDAnimInstanceManager.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimInstanceManager,
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
	return Z_Registration_Info_UClass_UPaperZDAnimInstanceManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimInstanceManager_NoRegister()
{
	return UPaperZDAnimInstanceManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IPaperZDAnimInstanceManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPaperZDAnimInstanceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::ClassParams = {
	&UPaperZDAnimInstanceManager::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimInstanceManager()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimInstanceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimInstanceManager.OuterSingleton, Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimInstanceManager.OuterSingleton;
}
UPaperZDAnimInstanceManager::UPaperZDAnimInstanceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimInstanceManager);
// ********** End Interface UPaperZDAnimInstanceManager ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h__Script_PaperZD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimInstanceManager, UPaperZDAnimInstanceManager::StaticClass, TEXT("UPaperZDAnimInstanceManager"), &Z_Registration_Info_UClass_UPaperZDAnimInstanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimInstanceManager), 613759229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h__Script_PaperZD_541642497(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h__Script_PaperZD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
