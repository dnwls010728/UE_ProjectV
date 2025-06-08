// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequences/Players/PaperZDAnimPlayer.h"

#ifdef PAPERZD_PaperZDAnimPlayer_generated_h
#error "PaperZDAnimPlayer.generated.h already included, missing '#pragma once' in PaperZDAnimPlayer.h"
#endif
#define PAPERZD_PaperZDAnimPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPaperZDAnimSequence;
class UPrimitiveComponent;

// ********** Begin Delegate FOnPlaybackSequenceChangedSignature ***********************************
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_25_DELEGATE \
PAPERZD_API void FOnPlaybackSequenceChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackSequenceChangedSignature, const UPaperZDAnimSequence* From, const UPaperZDAnimSequence* To, float CurrentProgress);


// ********** End Delegate FOnPlaybackSequenceChangedSignature *************************************

// ********** Begin Delegate FOnPlaybackSequenceCompleteSignature **********************************
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_26_DELEGATE \
PAPERZD_API void FOnPlaybackSequenceCompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackSequenceCompleteSignature, const UPaperZDAnimSequence* AnimSequence);


// ********** End Delegate FOnPlaybackSequenceCompleteSignature ************************************

// ********** Begin Delegate FOnPlaybackSequenceLoopedSignature ************************************
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_27_DELEGATE \
PAPERZD_API void FOnPlaybackSequenceLoopedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackSequenceLoopedSignature, const UPaperZDAnimSequence* AnimSequence);


// ********** End Delegate FOnPlaybackSequenceLoopedSignature **************************************

// ********** Begin Class UPaperZDAnimPlayer *******************************************************
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCurrentPlaybackTime); \
	DECLARE_FUNCTION(execPausePlayback); \
	DECLARE_FUNCTION(execResumePlayback); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execRegisterRenderComponent); \
	DECLARE_FUNCTION(execGetCurrentAnimSequence); \
	DECLARE_FUNCTION(execGetPlaybackProgress); \
	DECLARE_FUNCTION(execGetCurrentPlaybackTime);


PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimPlayer_NoRegister();

#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperZDAnimPlayer(); \
	friend struct Z_Construct_UClass_UPaperZDAnimPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperZDAnimPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PaperZD"), Z_Construct_UClass_UPaperZDAnimPlayer_NoRegister) \
	DECLARE_SERIALIZER(UPaperZDAnimPlayer)


#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperZDAnimPlayer(UPaperZDAnimPlayer&&) = delete; \
	UPaperZDAnimPlayer(const UPaperZDAnimPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPaperZDAnimPlayer) \
	NO_API virtual ~UPaperZDAnimPlayer();


#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_35_PROLOG
#define FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_38_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperZDAnimPlayer;

// ********** End Class UPaperZDAnimPlayer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE_ProjectV_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h

// ********** Begin Enum EAnimPlayerPlaybackMode ***************************************************
#define FOREACH_ENUM_EANIMPLAYERPLAYBACKMODE(op) \
	op(EAnimPlayerPlaybackMode::Forward) \
	op(EAnimPlayerPlaybackMode::Reversed) 

enum class EAnimPlayerPlaybackMode : uint8;
template<> struct TIsUEnumClass<EAnimPlayerPlaybackMode> { enum { Value = true }; };
template<> PAPERZD_API UEnum* StaticEnum<EAnimPlayerPlaybackMode>();
// ********** End Enum EAnimPlayerPlaybackMode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
