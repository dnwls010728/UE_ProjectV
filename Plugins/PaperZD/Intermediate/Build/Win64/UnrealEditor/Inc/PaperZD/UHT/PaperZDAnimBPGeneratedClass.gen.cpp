// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/PaperZDAnimBPGeneratedClass.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_Base.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimStateMachine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePaperZDAnimBPGeneratedClass() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationSource_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimBPGeneratedClass();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_NoRegister();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimBPDebugData();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachine();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDExposedValueHandler();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPaperZDAnimBPDebugData *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPaperZDAnimBPDebugData;
class UScriptStruct* FPaperZDAnimBPDebugData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimBPDebugData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPaperZDAnimBPDebugData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimBPDebugData, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimBPDebugData"));
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimBPDebugData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPaperZDAnimBPDebugData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure that holds the debug data for a given AnimBP class\n */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimBPGeneratedClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure that holds the debug data for a given AnimBP class" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimBPDebugData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimBPDebugData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	nullptr,
	&NewStructOps,
	"PaperZDAnimBPDebugData",
	nullptr,
	0,
	sizeof(FPaperZDAnimBPDebugData),
	alignof(FPaperZDAnimBPDebugData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimBPDebugData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimBPDebugData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimBPDebugData()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDAnimBPDebugData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPaperZDAnimBPDebugData.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimBPDebugData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDAnimBPDebugData.InnerSingleton;
}
// ********** End ScriptStruct FPaperZDAnimBPDebugData *********************************************

// ********** Begin ScriptStruct FPaperZDOverrideSlotDescriptor ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPaperZDOverrideSlotDescriptor;
class UScriptStruct* FPaperZDOverrideSlotDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDOverrideSlotDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPaperZDOverrideSlotDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDOverrideSlotDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDOverrideSlotDescriptor.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Holds the descriptor for a slot override that has been registered to the class. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimBPGeneratedClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the descriptor for a slot override that has been registered to the class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Name of the slot, unique. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimBPGeneratedClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the slot, unique." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Name of the group that the slot belongs to. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimBPGeneratedClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the group that the slot belongs to." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDOverrideSlotDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDOverrideSlotDescriptor, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDOverrideSlotDescriptor, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::NewProp_GroupName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	nullptr,
	&NewStructOps,
	"PaperZDOverrideSlotDescriptor",
	Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::PropPointers),
	sizeof(FPaperZDOverrideSlotDescriptor),
	alignof(FPaperZDOverrideSlotDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_FPaperZDOverrideSlotDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPaperZDOverrideSlotDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPaperZDOverrideSlotDescriptor.InnerSingleton;
}
// ********** End ScriptStruct FPaperZDOverrideSlotDescriptor **************************************

// ********** Begin Class UPaperZDAnimBPGeneratedClass *********************************************
void UPaperZDAnimBPGeneratedClass::StaticRegisterNativesUPaperZDAnimBPGeneratedClass()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPaperZDAnimBPGeneratedClass;
UClass* UPaperZDAnimBPGeneratedClass::GetPrivateStaticClass()
{
	using TClass = UPaperZDAnimBPGeneratedClass;
	if (!Z_Registration_Info_UClass_UPaperZDAnimBPGeneratedClass.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PaperZDAnimBPGeneratedClass"),
			Z_Registration_Info_UClass_UPaperZDAnimBPGeneratedClass.InnerSingleton,
			StaticRegisterNativesUPaperZDAnimBPGeneratedClass,
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
	return Z_Registration_Info_UClass_UPaperZDAnimBPGeneratedClass.InnerSingleton;
}
UClass* Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_NoRegister()
{
	return UPaperZDAnimBPGeneratedClass::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Generated class for the PaperZDAnimBP.\n */" },
#endif
		{ "IncludePath", "PaperZDAnimBPGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/PaperZDAnimBPGeneratedClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generated class for the PaperZDAnimBP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAnimationSource_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The animation source that the class has been compiled to support. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimBPGeneratedClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The animation source that the class has been compiled to support." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluateGraphExposedInputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* List of the exposed value handlers. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimBPGeneratedClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of the exposed value handlers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachines_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* List of state machine definitions. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimBPGeneratedClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of state machine definitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotifyFunctionMapping_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Mapping between Custom AnimNotify name to function name. */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimBPGeneratedClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping between Custom AnimNotify name to function name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredOverrideSlots_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* List of registered override animation slots for this class, keyed by the slot name */" },
#endif
		{ "ModuleRelativePath", "Public/PaperZDAnimBPGeneratedClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of registered override animation slots for this class, keyed by the slot name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SupportedAnimationSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluateGraphExposedInputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EvaluateGraphExposedInputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateMachines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StateMachines;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimNotifyFunctionMapping_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimNotifyFunctionMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AnimNotifyFunctionMapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredOverrideSlots_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RegisteredOverrideSlots_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredOverrideSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimBPGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_SupportedAnimationSource = { "SupportedAnimationSource", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimBPGeneratedClass, SupportedAnimationSource), Z_Construct_UClass_UPaperZDAnimationSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedAnimationSource_MetaData), NewProp_SupportedAnimationSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs_Inner = { "EvaluateGraphExposedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperZDExposedValueHandler, METADATA_PARAMS(0, nullptr) }; // 3902176395
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs = { "EvaluateGraphExposedInputs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimBPGeneratedClass, EvaluateGraphExposedInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluateGraphExposedInputs_MetaData), NewProp_EvaluateGraphExposedInputs_MetaData) }; // 3902176395
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_StateMachines_Inner = { "StateMachines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperZDAnimStateMachine, METADATA_PARAMS(0, nullptr) }; // 1138170581
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_StateMachines = { "StateMachines", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimBPGeneratedClass, StateMachines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachines_MetaData), NewProp_StateMachines_MetaData) }; // 1138170581
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_AnimNotifyFunctionMapping_ValueProp = { "AnimNotifyFunctionMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_AnimNotifyFunctionMapping_Key_KeyProp = { "AnimNotifyFunctionMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_AnimNotifyFunctionMapping = { "AnimNotifyFunctionMapping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimBPGeneratedClass, AnimNotifyFunctionMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNotifyFunctionMapping_MetaData), NewProp_AnimNotifyFunctionMapping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_RegisteredOverrideSlots_ValueProp = { "RegisteredOverrideSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor, METADATA_PARAMS(0, nullptr) }; // 2107222044
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_RegisteredOverrideSlots_Key_KeyProp = { "RegisteredOverrideSlots_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_RegisteredOverrideSlots = { "RegisteredOverrideSlots", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimBPGeneratedClass, RegisteredOverrideSlots), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredOverrideSlots_MetaData), NewProp_RegisteredOverrideSlots_MetaData) }; // 2107222044
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_SupportedAnimationSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_EvaluateGraphExposedInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_StateMachines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_StateMachines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_AnimNotifyFunctionMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_AnimNotifyFunctionMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_AnimNotifyFunctionMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_RegisteredOverrideSlots_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_RegisteredOverrideSlots_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::NewProp_RegisteredOverrideSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::ClassParams = {
	&UPaperZDAnimBPGeneratedClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::PropPointers),
	0,
	0x009200A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimBPGeneratedClass()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimBPGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimBPGeneratedClass.OuterSingleton, Z_Construct_UClass_UPaperZDAnimBPGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimBPGeneratedClass.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimBPGeneratedClass);
UPaperZDAnimBPGeneratedClass::~UPaperZDAnimBPGeneratedClass() {}
// ********** End Class UPaperZDAnimBPGeneratedClass ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimBPGeneratedClass_h__Script_PaperZD_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperZDAnimBPDebugData::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimBPDebugData_Statics::NewStructOps, TEXT("PaperZDAnimBPDebugData"), &Z_Registration_Info_UScriptStruct_FPaperZDAnimBPDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimBPDebugData), 1081325571U) },
		{ FPaperZDOverrideSlotDescriptor::StaticStruct, Z_Construct_UScriptStruct_FPaperZDOverrideSlotDescriptor_Statics::NewStructOps, TEXT("PaperZDOverrideSlotDescriptor"), &Z_Registration_Info_UScriptStruct_FPaperZDOverrideSlotDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDOverrideSlotDescriptor), 2107222044U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimBPGeneratedClass, UPaperZDAnimBPGeneratedClass::StaticClass, TEXT("UPaperZDAnimBPGeneratedClass"), &Z_Registration_Info_UClass_UPaperZDAnimBPGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimBPGeneratedClass), 2155739151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimBPGeneratedClass_h__Script_PaperZD_268605290(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimBPGeneratedClass_h__Script_PaperZD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimBPGeneratedClass_h__Script_PaperZD_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimBPGeneratedClass_h__Script_PaperZD_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimBPGeneratedClass_h__Script_PaperZD_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
