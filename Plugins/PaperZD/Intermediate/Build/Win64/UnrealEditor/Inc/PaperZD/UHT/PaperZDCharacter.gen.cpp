// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/PaperZDCharacter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDCharacter() {}

// ********** Begin Cross Module References ********************************************************
PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
PAPERZD_API UClass* Z_Construct_UClass_APaperZDCharacter();
PAPERZD_API UClass* Z_Construct_UClass_APaperZDCharacter_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimBP_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstance_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDSequencerSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APaperZDCharacter Function GetAnimInstance *******************************
struct Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics
{
	struct PaperZDCharacter_eventGetAnimInstance_Parms
	{
		UPaperZDAnimInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PaperZD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Obtain the AnimInstance that drives this character. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Obtain the AnimInstance that drives this character." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperZDCharacter_eventGetAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APaperZDCharacter, nullptr, "GetAnimInstance", Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::PaperZDCharacter_eventGetAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::PaperZDCharacter_eventGetAnimInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APaperZDCharacter::execGetAnimInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPaperZDAnimInstance**)Z_Param__Result=P_THIS->GetAnimInstance();
	P_NATIVE_END;
}
// ********** End Class APaperZDCharacter Function GetAnimInstance *********************************

// ********** Begin Class APaperZDCharacter ********************************************************
void APaperZDCharacter::StaticRegisterNativesAPaperZDCharacter()
{
	UClass* Class = APaperZDCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAnimInstance", &APaperZDCharacter::execGetAnimInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APaperZDCharacter;
UClass* APaperZDCharacter::GetPrivateStaticClass()
{
	using TClass = APaperZDCharacter;
	if (!Z_Registration_Info_UClass_APaperZDCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDCharacter"),
			Z_Registration_Info_UClass_APaperZDCharacter.InnerSingleton,
			StaticRegisterNativesAPaperZDCharacter,
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
	return Z_Registration_Info_UClass_APaperZDCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APaperZDCharacter_NoRegister()
{
	return APaperZDCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APaperZDCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "PaperZD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A PaperZD character inherits from the Paper2D character and sets up the animation blueprint to manage its main flipbook component.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PaperZDCharacter.h" },
		{ "ModuleRelativePath", "Public/PaperZDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A PaperZD character inherits from the Paper2D character and sets up the animation blueprint to manage its main flipbook component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PaperZD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Animation component that manages the AnimBP. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PaperZDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation component that manages the AnimBP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "BlueprintGetter", "GetAnimInstance" },
		{ "Category", "PaperZD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The AnimInstance that drives this character, maintained for backwards compatibility. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The AnimInstance that drives this character, maintained for backwards compatibility." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationBlueprint_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Deprecated: AnimationBlueprint used for animating the character, required for backwards support. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated: AnimationBlueprint used for animating the character, required for backwards support." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationBlueprint;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance, "GetAnimInstance" }, // 1327834265
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperZDCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationComponent = { "AnimationComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperZDCharacter, AnimationComponent), Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationComponent_MetaData), NewProp_AnimationComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0144000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperZDCharacter, AnimInstance), Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationBlueprint = { "AnimationBlueprint", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperZDCharacter, AnimationBlueprint_DEPRECATED), Z_Construct_UClass_UPaperZDAnimBP_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationBlueprint_MetaData), NewProp_AnimationBlueprint_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperZDCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimInstance,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationBlueprint,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APaperZDCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APaperCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaperZDCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPaperZDSequencerSource_NoRegister, (int32)VTABLE_OFFSET(APaperZDCharacter, IPaperZDSequencerSource), false },  // 618497923
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APaperZDCharacter_Statics::ClassParams = {
	&APaperZDCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APaperZDCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APaperZDCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APaperZDCharacter()
{
	if (!Z_Registration_Info_UClass_APaperZDCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaperZDCharacter.OuterSingleton, Z_Construct_UClass_APaperZDCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APaperZDCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APaperZDCharacter);
APaperZDCharacter::~APaperZDCharacter() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(APaperZDCharacter)
// ********** End Class APaperZDCharacter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h__Script_PaperZD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaperZDCharacter, APaperZDCharacter::StaticClass, TEXT("APaperZDCharacter"), &Z_Registration_Info_UClass_APaperZDCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperZDCharacter), 2474944041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h__Script_PaperZD_3244924030(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h__Script_PaperZD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
