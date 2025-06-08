// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Notifies/PaperZDNotifyState_NiagaraEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDNotifyState_NiagaraEffect() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotifyState();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDNotifyState_NiagaraEffect ****************************************
void UPaperZDNotifyState_NiagaraEffect::StaticRegisterNativesUPaperZDNotifyState_NiagaraEffect()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDNotifyState_NiagaraEffect;
UClass* UPaperZDNotifyState_NiagaraEffect::GetPrivateStaticClass()
{
	using TClass = UPaperZDNotifyState_NiagaraEffect;
	if (!Z_Registration_Info_UClass_UPaperZDNotifyState_NiagaraEffect.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDNotifyState_NiagaraEffect"),
			Z_Registration_Info_UClass_UPaperZDNotifyState_NiagaraEffect.InnerSingleton,
			StaticRegisterNativesUPaperZDNotifyState_NiagaraEffect,
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
	return Z_Registration_Info_UClass_UPaperZDNotifyState_NiagaraEffect.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_NoRegister()
{
	return UPaperZDNotifyState_NiagaraEffect::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Spawns a one shot particle effect on a given location around the RenderComponent.\n */" },
#endif
		{ "DisplayName", "Timed Niagara Effect" },
		{ "HideCategories", "Object UObject" },
		{ "IncludePath", "Notifies/PaperZDNotifyState_NiagaraEffect.h" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_NiagaraEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawns a one shot particle effect on a given location around the RenderComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PSTemplate_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Particle System to Spawn\n" },
#endif
		{ "DisplayName", "Niagara System" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_NiagaraEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle System to Spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Location offset from the socket\n" },
#endif
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_NiagaraEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location offset from the socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation offset from socket\n" },
#endif
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_NiagaraEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation offset from socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scale to spawn the particle system at\n" },
#endif
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_NiagaraEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale to spawn the particle system at" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SocketName to attach to\n" },
#endif
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_NiagaraEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SocketName to attach to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyAtEnd_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "DisplayName", "Destroy Immediately" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_NiagaraEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the particle system should be immediately destroyed at the end of the notify state or be allowed to finish" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PSTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static void NewProp_bDestroyAtEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyAtEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDNotifyState_NiagaraEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_PSTemplate = { "PSTemplate", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_NiagaraEffect, PSTemplate), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PSTemplate_MetaData), NewProp_PSTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_NiagaraEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_NiagaraEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_NiagaraEffect, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_NiagaraEffect, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
void Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_bDestroyAtEnd_SetBit(void* Obj)
{
	((UPaperZDNotifyState_NiagaraEffect*)Obj)->bDestroyAtEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_bDestroyAtEnd = { "bDestroyAtEnd", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDNotifyState_NiagaraEffect), &Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_bDestroyAtEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyAtEnd_MetaData), NewProp_bDestroyAtEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_PSTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::NewProp_bDestroyAtEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::ClassParams = {
	&UPaperZDNotifyState_NiagaraEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::PropPointers),
	0,
	0x009120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect()
{
	if (!Z_Registration_Info_UClass_UPaperZDNotifyState_NiagaraEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDNotifyState_NiagaraEffect.OuterSingleton, Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDNotifyState_NiagaraEffect.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDNotifyState_NiagaraEffect);
UPaperZDNotifyState_NiagaraEffect::~UPaperZDNotifyState_NiagaraEffect() {}
// ********** End Class UPaperZDNotifyState_NiagaraEffect ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDNotifyState_NiagaraEffect_h__Script_PaperZD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDNotifyState_NiagaraEffect, UPaperZDNotifyState_NiagaraEffect::StaticClass, TEXT("UPaperZDNotifyState_NiagaraEffect"), &Z_Registration_Info_UClass_UPaperZDNotifyState_NiagaraEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDNotifyState_NiagaraEffect), 1008946260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDNotifyState_NiagaraEffect_h__Script_PaperZD_3906379077(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDNotifyState_NiagaraEffect_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDNotifyState_NiagaraEffect_h__Script_PaperZD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
