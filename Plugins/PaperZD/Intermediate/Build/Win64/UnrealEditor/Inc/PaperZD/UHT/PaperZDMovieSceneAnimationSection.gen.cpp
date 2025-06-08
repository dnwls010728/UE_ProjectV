// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Sequencer/PaperZDMovieSceneAnimationSection.h"
#include "Channels/MovieSceneFloatChannel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDMovieSceneAnimationSection() {}

// ********** Begin Cross Module References ********************************************************
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationSection();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_NoRegister();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPaperZDMovieSceneAnimationParams *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPaperZDMovieSceneAnimationParams;
class UScriptStruct* FPaperZDMovieSceneAnimationParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDMovieSceneAnimationParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPaperZDMovieSceneAnimationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDMovieSceneAnimationParams"));
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDMovieSceneAnimationParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Parameters for the Animation Section\n */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameters for the Animation Section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The offset into the beginning of the animation clip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The offset into the end of the animation clip */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The offset into the end of the animation clip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The playback rate of the animation clip */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The playback rate of the animation clip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reverse the playback of the animation clip */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reverse the playback of the animation clip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the slot that the animation will be overriding on the AnimationBlueprint. */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the slot that the animation will be overriding on the AnimationBlueprint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The weight curve for this animation section */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The weight curve for this animation section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Animation sequence to use. */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation sequence to use." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDMovieSceneAnimationParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDMovieSceneAnimationParams, StartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDMovieSceneAnimationParams, EndOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOffset_MetaData), NewProp_EndOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDMovieSceneAnimationParams, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
void Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((FPaperZDMovieSceneAnimationParams*)Obj)->bReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPaperZDMovieSceneAnimationParams), &Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDMovieSceneAnimationParams, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDMovieSceneAnimationParams, Weight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) }; // 3091113066
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDMovieSceneAnimationParams, Animation), Z_Construct_UClass_UPaperZDAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_EndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_bReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Animation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	nullptr,
	&NewStructOps,
	"PaperZDMovieSceneAnimationParams",
	Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::PropPointers),
	sizeof(FPaperZDMovieSceneAnimationParams),
	alignof(FPaperZDMovieSceneAnimationParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDMovieSceneAnimationParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPaperZDMovieSceneAnimationParams.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDMovieSceneAnimationParams.InnerSingleton;
}
// ********** End ScriptStruct FPaperZDMovieSceneAnimationParams ***********************************

// ********** Begin Class UPaperZDMovieSceneAnimationSection ***************************************
void UPaperZDMovieSceneAnimationSection::StaticRegisterNativesUPaperZDMovieSceneAnimationSection()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection;
UClass* UPaperZDMovieSceneAnimationSection::GetPrivateStaticClass()
{
	using TClass = UPaperZDMovieSceneAnimationSection;
	if (!Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDMovieSceneAnimationSection"),
			Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection.InnerSingleton,
			StaticRegisterNativesUPaperZDMovieSceneAnimationSection,
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
	return Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_NoRegister()
{
	return UPaperZDMovieSceneAnimationSection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Movie scene section that controls PaperZD Sequence animations\n*/" },
#endif
		{ "IncludePath", "Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movie scene section that controls PaperZD Sequence animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Parameters that define the section. */" },
#endif
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameters that define the section." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDMovieSceneAnimationSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDMovieSceneAnimationSection, Params), Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 1287918878
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::ClassParams = {
	&UPaperZDMovieSceneAnimationSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationSection()
{
	if (!Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection.OuterSingleton, Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDMovieSceneAnimationSection);
UPaperZDMovieSceneAnimationSection::~UPaperZDMovieSceneAnimationSection() {}
// ********** End Class UPaperZDMovieSceneAnimationSection *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h__Script_PaperZD_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperZDMovieSceneAnimationParams::StaticStruct, Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewStructOps, TEXT("PaperZDMovieSceneAnimationParams"), &Z_Registration_Info_UScriptStruct_FPaperZDMovieSceneAnimationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDMovieSceneAnimationParams), 1287918878U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDMovieSceneAnimationSection, UPaperZDMovieSceneAnimationSection::StaticClass, TEXT("UPaperZDMovieSceneAnimationSection"), &Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDMovieSceneAnimationSection), 2130008827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h__Script_PaperZD_3144021335(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h__Script_PaperZD_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h__Script_PaperZD_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h__Script_PaperZD_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
