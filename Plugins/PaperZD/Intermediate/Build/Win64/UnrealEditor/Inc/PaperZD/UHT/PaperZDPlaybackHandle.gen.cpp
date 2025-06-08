// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimSequences/Players/PaperZDPlaybackHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDPlaybackHandle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaybackHandle();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaybackHandle_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDPlaybackHandle ***************************************************
void UPaperZDPlaybackHandle::StaticRegisterNativesUPaperZDPlaybackHandle()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDPlaybackHandle;
UClass* UPaperZDPlaybackHandle::GetPrivateStaticClass()
{
	using TClass = UPaperZDPlaybackHandle;
	if (!Z_Registration_Info_UClass_UPaperZDPlaybackHandle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDPlaybackHandle"),
			Z_Registration_Info_UClass_UPaperZDPlaybackHandle.InnerSingleton,
			StaticRegisterNativesUPaperZDPlaybackHandle,
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
	return Z_Registration_Info_UClass_UPaperZDPlaybackHandle.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDPlaybackHandle_NoRegister()
{
	return UPaperZDPlaybackHandle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDPlaybackHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Object that manages the playback of a certain AnimSequence type and ensures that it renders with the given playback data given by the AnimPlayer.\n * The handle should support the same features as the AnimSequence it serves specifies.\n */" },
#endif
		{ "IncludePath", "AnimSequences/Players/PaperZDPlaybackHandle.h" },
		{ "ModuleRelativePath", "Public/AnimSequences/Players/PaperZDPlaybackHandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object that manages the playback of a certain AnimSequence type and ensures that it renders with the given playback data given by the AnimPlayer.\nThe handle should support the same features as the AnimSequence it serves specifies." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDPlaybackHandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::ClassParams = {
	&UPaperZDPlaybackHandle::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDPlaybackHandle()
{
	if (!Z_Registration_Info_UClass_UPaperZDPlaybackHandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDPlaybackHandle.OuterSingleton, Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDPlaybackHandle.OuterSingleton;
}
UPaperZDPlaybackHandle::UPaperZDPlaybackHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDPlaybackHandle);
UPaperZDPlaybackHandle::~UPaperZDPlaybackHandle() {}
// ********** End Class UPaperZDPlaybackHandle *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h__Script_PaperZD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDPlaybackHandle, UPaperZDPlaybackHandle::StaticClass, TEXT("UPaperZDPlaybackHandle"), &Z_Registration_Info_UClass_UPaperZDPlaybackHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDPlaybackHandle), 2716340342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h__Script_PaperZD_1921317560(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h__Script_PaperZD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
