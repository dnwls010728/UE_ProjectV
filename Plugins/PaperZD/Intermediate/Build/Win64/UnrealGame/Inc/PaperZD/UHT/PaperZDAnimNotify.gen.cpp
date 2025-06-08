// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Notifies/PaperZDAnimNotify.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimNotify() {}

// ********** Begin Cross Module References ********************************************************
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstance_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPaperZDAnimNotify Function OnReceiveNotify ******************************
struct PaperZDAnimNotify_eventOnReceiveNotify_Parms
{
	UPaperZDAnimInstance* OwningInstance;
};
static FName NAME_UPaperZDAnimNotify_OnReceiveNotify = FName(TEXT("OnReceiveNotify"));
void UPaperZDAnimNotify::OnReceiveNotify(UPaperZDAnimInstance* OwningInstance) const
{
	UFunction* Func = FindFunctionChecked(NAME_UPaperZDAnimNotify_OnReceiveNotify);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		PaperZDAnimNotify_eventOnReceiveNotify_Parms Parms;
		Parms.OwningInstance=OwningInstance;
		const_cast<UPaperZDAnimNotify*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UPaperZDAnimNotify*>(this)->OnReceiveNotify_Implementation(OwningInstance);
	}
}
struct Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PaperZD" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify_Statics::NewProp_OwningInstance = { "OwningInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperZDAnimNotify_eventOnReceiveNotify_Parms, OwningInstance), Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify_Statics::NewProp_OwningInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPaperZDAnimNotify, nullptr, "OnReceiveNotify", Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify_Statics::PropPointers), sizeof(PaperZDAnimNotify_eventOnReceiveNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PaperZDAnimNotify_eventOnReceiveNotify_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperZDAnimNotify::execOnReceiveNotify)
{
	P_GET_OBJECT(UPaperZDAnimInstance,Z_Param_OwningInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReceiveNotify_Implementation(Z_Param_OwningInstance);
	P_NATIVE_END;
}
// ********** End Class UPaperZDAnimNotify Function OnReceiveNotify ********************************

// ********** Begin Class UPaperZDAnimNotify *******************************************************
void UPaperZDAnimNotify::StaticRegisterNativesUPaperZDAnimNotify()
{
	UClass* Class = UPaperZDAnimNotify::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnReceiveNotify", &UPaperZDAnimNotify::execOnReceiveNotify },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimNotify;
UClass* UPaperZDAnimNotify::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimNotify;
	if (!Z_Registration_Info_UClass_UPaperZDAnimNotify.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimNotify"),
			Z_Registration_Info_UClass_UPaperZDAnimNotify.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimNotify,
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
	return Z_Registration_Info_UClass_UPaperZDAnimNotify.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimNotify_NoRegister()
{
	return UPaperZDAnimNotify::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Notifies/PaperZDAnimNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperZDAnimNotify_OnReceiveNotify, "OnReceiveNotify" }, // 3270463939
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPaperZDAnimNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimNotify_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimNotify_Statics::ClassParams = {
	&UPaperZDAnimNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009020A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimNotify()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimNotify.OuterSingleton, Z_Construct_UClass_UPaperZDAnimNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimNotify.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimNotify);
UPaperZDAnimNotify::~UPaperZDAnimNotify() {}
// ********** End Class UPaperZDAnimNotify *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h__Script_PaperZD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimNotify, UPaperZDAnimNotify::StaticClass, TEXT("UPaperZDAnimNotify"), &Z_Registration_Info_UClass_UPaperZDAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimNotify), 2198045064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h__Script_PaperZD_1410551047(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_h__Script_PaperZD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
