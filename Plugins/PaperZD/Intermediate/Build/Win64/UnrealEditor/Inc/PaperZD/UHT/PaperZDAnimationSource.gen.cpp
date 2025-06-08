// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimSequences/Sources/PaperZDAnimationSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimationSource() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationSource();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationSource_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimationSource **************************************************
void UPaperZDAnimationSource::StaticRegisterNativesUPaperZDAnimationSource()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimationSource;
UClass* UPaperZDAnimationSource::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimationSource;
	if (!Z_Registration_Info_UClass_UPaperZDAnimationSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimationSource"),
			Z_Registration_Info_UClass_UPaperZDAnimationSource.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimationSource,
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
	return Z_Registration_Info_UClass_UPaperZDAnimationSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimationSource_NoRegister()
{
	return UPaperZDAnimationSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimationSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An animation source is an object that serves as a root for AnimSequences to be grouped and shared through Animation Blueprints.\n * The animation source contains information regarding how to render the Animation Sequence family and any data required for correct initialization of the animation render component.\n * (i.e. Skeleton information in skeletal animation sources).\n */" },
#endif
		{ "IncludePath", "AnimSequences/Sources/PaperZDAnimationSource.h" },
		{ "ModuleRelativePath", "Public/AnimSequences/Sources/PaperZDAnimationSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An animation source is an object that serves as a root for AnimSequences to be grouped and shared through Animation Blueprints.\nThe animation source contains information regarding how to render the Animation Sequence family and any data required for correct initialization of the animation render component.\n(i.e. Skeleton information in skeletal animation sources)." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredNotifyNames_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Names of the registered notifies that the Animation blueprints that use this source should implement. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimSequences/Sources/PaperZDAnimationSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Names of the registered notifies that the Animation blueprints that use this source should implement." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAnimSequenceClass_MetaData[] = {
		{ "Category", "Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The supported AnimSequence class that we build by default when creating a new sequence for this source. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimSequences/Sources/PaperZDAnimationSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The supported AnimSequence class that we build by default when creating a new sequence for this source." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsBlending_MetaData[] = {
		{ "Category", "Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Whether the animation source supports blending based animations (2d skeletal animations). */" },
#endif
		{ "ModuleRelativePath", "Public/AnimSequences/Sources/PaperZDAnimationSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the animation source supports blending based animations (2d skeletal animations)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAnimationLayers_MetaData[] = {
		{ "Category", "Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Whether the animation source supports animation layers. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimSequences/Sources/PaperZDAnimationSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the animation source supports animation layers." },
#endif
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RegisteredNotifyNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredNotifyNames;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SupportedAnimSequenceClass;
	static void NewProp_bSupportsBlending_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsBlending;
	static void NewProp_bSupportsAnimationLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAnimationLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimationSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_RegisteredNotifyNames_Inner = { "RegisteredNotifyNames", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_RegisteredNotifyNames = { "RegisteredNotifyNames", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimationSource, RegisteredNotifyNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredNotifyNames_MetaData), NewProp_RegisteredNotifyNames_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_SupportedAnimSequenceClass = { "SupportedAnimSequenceClass", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimationSource, SupportedAnimSequenceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPaperZDAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedAnimSequenceClass_MetaData), NewProp_SupportedAnimSequenceClass_MetaData) };
void Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_bSupportsBlending_SetBit(void* Obj)
{
	((UPaperZDAnimationSource*)Obj)->bSupportsBlending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_bSupportsBlending = { "bSupportsBlending", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDAnimationSource), &Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_bSupportsBlending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsBlending_MetaData), NewProp_bSupportsBlending_MetaData) };
void Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_bSupportsAnimationLayers_SetBit(void* Obj)
{
	((UPaperZDAnimationSource*)Obj)->bSupportsAnimationLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_bSupportsAnimationLayers = { "bSupportsAnimationLayers", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDAnimationSource), &Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_bSupportsAnimationLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAnimationLayers_MetaData), NewProp_bSupportsAnimationLayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimationSource_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_RegisteredNotifyNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_RegisteredNotifyNames,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_SupportedAnimSequenceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_bSupportsBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimationSource_Statics::NewProp_bSupportsAnimationLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimationSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimationSource_Statics::ClassParams = {
	&UPaperZDAnimationSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimationSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationSource_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimationSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimationSource()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimationSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimationSource.OuterSingleton, Z_Construct_UClass_UPaperZDAnimationSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimationSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimationSource);
UPaperZDAnimationSource::~UPaperZDAnimationSource() {}
// ********** End Class UPaperZDAnimationSource ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Sources_PaperZDAnimationSource_h__Script_PaperZD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimationSource, UPaperZDAnimationSource::StaticClass, TEXT("UPaperZDAnimationSource"), &Z_Registration_Info_UClass_UPaperZDAnimationSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimationSource), 1429677110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Sources_PaperZDAnimationSource_h__Script_PaperZD_3356099924(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Sources_PaperZDAnimationSource_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Sources_PaperZDAnimationSource_h__Script_PaperZD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
