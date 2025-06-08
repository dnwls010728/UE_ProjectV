// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/PaperZDAnimationComponent.h"
#include "Engine/EngineTypes.h"
#include "PaperZD/Public/PaperZDComponentReference.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimationComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationComponent();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstance_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstanceManager_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDSequencerSource_NoRegister();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDComponentReference();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimationComponent Function SetAnimInstanceClass *****************
struct Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics
{
	struct PaperZDAnimationComponent_eventSetAnimInstanceClass_Parms
	{
		TSubclassOf<UPaperZDAnimInstance> InAnimInstanceClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PaperZD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Sets the AnimInstanceClass to use, replacing any AnimInstane that could already be running. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the AnimInstanceClass to use, replacing any AnimInstane that could already be running." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InAnimInstanceClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::NewProp_InAnimInstanceClass = { "InAnimInstanceClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperZDAnimationComponent_eventSetAnimInstanceClass_Parms, InAnimInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::NewProp_InAnimInstanceClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPaperZDAnimationComponent, nullptr, "SetAnimInstanceClass", Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::PaperZDAnimationComponent_eventSetAnimInstanceClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::PaperZDAnimationComponent_eventSetAnimInstanceClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperZDAnimationComponent::execSetAnimInstanceClass)
{
	P_GET_OBJECT(UClass,Z_Param_InAnimInstanceClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimInstanceClass(Z_Param_InAnimInstanceClass);
	P_NATIVE_END;
}
// ********** End Class UPaperZDAnimationComponent Function SetAnimInstanceClass *******************

// ********** Begin Class UPaperZDAnimationComponent ***********************************************
void UPaperZDAnimationComponent::StaticRegisterNativesUPaperZDAnimationComponent()
{
	UClass* Class = UPaperZDAnimationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAnimInstanceClass", &UPaperZDAnimationComponent::execSetAnimInstanceClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimationComponent;
UClass* UPaperZDAnimationComponent::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimationComponent;
	if (!Z_Registration_Info_UClass_UPaperZDAnimationComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimationComponent"),
			Z_Registration_Info_UClass_UPaperZDAnimationComponent.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimationComponent,
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
	return Z_Registration_Info_UClass_UPaperZDAnimationComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister()
{
	return UPaperZDAnimationComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "PaperZD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Provides an interface for running an Animation Blueprint on any actor.\n */" },
#endif
		{ "DisplayName", "PaperZD Animation" },
		{ "IncludePath", "PaperZDAnimationComponent.h" },
		{ "ModuleRelativePath", "Public/PaperZDAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides an interface for running an Animation Blueprint on any actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceClass_MetaData[] = {
		{ "Category", "PaperZD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Animation blueprint class to use. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation blueprint class to use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED: Render component to update when using the animation blueprints. Superseded by the new component ref. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED: Render component to update when using the animation blueprints. Superseded by the new component ref." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderComponentRef_MetaData[] = {
		{ "AllowAnyComponent", "" },
		{ "AllowedClasses", "/Script/Engine.PrimitiveComponent" },
		{ "Category", "PaperZD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Render component to update when using the animation blueprints. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render component to update when using the animation blueprints." },
#endif
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PaperZD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The animation instance used for managing the animation. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The animation instance used for managing the animation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AnimInstanceClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderComponentRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperZDAnimationComponent_SetAnimInstanceClass, "SetAnimInstanceClass" }, // 2859258091
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPaperZDAnimationComponent_Statics::NewProp_AnimInstanceClass = { "AnimInstanceClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimationComponent, AnimInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstanceClass_MetaData), NewProp_AnimInstanceClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimationComponent_Statics::NewProp_RenderComponent = { "RenderComponent", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimationComponent, RenderComponent_DEPRECATED), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderComponent_MetaData), NewProp_RenderComponent_MetaData) }; // 2130483024
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimationComponent_Statics::NewProp_RenderComponentRef = { "RenderComponentRef", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimationComponent, RenderComponentRef), Z_Construct_UScriptStruct_FPaperZDComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderComponentRef_MetaData), NewProp_RenderComponentRef_MetaData) }; // 1757370081
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimationComponent_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0144000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimationComponent, AnimInstance), Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimationComponent_Statics::NewProp_AnimInstanceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimationComponent_Statics::NewProp_RenderComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimationComponent_Statics::NewProp_RenderComponentRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimationComponent_Statics::NewProp_AnimInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPaperZDAnimationComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPaperZDAnimInstanceManager_NoRegister, (int32)VTABLE_OFFSET(UPaperZDAnimationComponent, IPaperZDAnimInstanceManager), false },  // 613759229
	{ Z_Construct_UClass_UPaperZDSequencerSource_NoRegister, (int32)VTABLE_OFFSET(UPaperZDAnimationComponent, IPaperZDSequencerSource), false },  // 618497923
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimationComponent_Statics::ClassParams = {
	&UPaperZDAnimationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPaperZDAnimationComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimationComponent()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimationComponent.OuterSingleton, Z_Construct_UClass_UPaperZDAnimationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimationComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimationComponent);
UPaperZDAnimationComponent::~UPaperZDAnimationComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperZDAnimationComponent)
// ********** End Class UPaperZDAnimationComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h__Script_PaperZD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimationComponent, UPaperZDAnimationComponent::StaticClass, TEXT("UPaperZDAnimationComponent"), &Z_Registration_Info_UClass_UPaperZDAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimationComponent), 3483372444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h__Script_PaperZD_2139014641(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimationComponent_h__Script_PaperZD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
