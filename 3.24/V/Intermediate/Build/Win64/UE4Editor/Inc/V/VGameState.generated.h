// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWaveStae : uint8;
#ifdef V_VGameState_generated_h
#error "VGameState.generated.h already included, missing '#pragma once' in VGameState.h"
#endif
#define V_VGameState_generated_h

#define V_Source_V_Public_VGameState_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState) \
	{ \
		P_GET_ENUM(EWaveStae,Z_Param_OldState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WaveState(EWaveStae(Z_Param_OldState)); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_VGameState_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState) \
	{ \
		P_GET_ENUM(EWaveStae,Z_Param_OldState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WaveState(EWaveStae(Z_Param_OldState)); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_VGameState_h_29_EVENT_PARMS \
	struct VGameState_eventWaveStateChanged_Parms \
	{ \
		EWaveStae NewState; \
		EWaveStae OldState; \
	};


#define V_Source_V_Public_VGameState_h_29_CALLBACK_WRAPPERS
#define V_Source_V_Public_VGameState_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVGameState(); \
	friend struct Z_Construct_UClass_AVGameState_Statics; \
public: \
	DECLARE_CLASS(AVGameState, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AVGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define V_Source_V_Public_VGameState_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAVGameState(); \
	friend struct Z_Construct_UClass_AVGameState_Statics; \
public: \
	DECLARE_CLASS(AVGameState, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AVGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define V_Source_V_Public_VGameState_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVGameState(AVGameState&&); \
	NO_API AVGameState(const AVGameState&); \
public:


#define V_Source_V_Public_VGameState_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVGameState(AVGameState&&); \
	NO_API AVGameState(const AVGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVGameState)


#define V_Source_V_Public_VGameState_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaveState() { return STRUCT_OFFSET(AVGameState, WaveState); }


#define V_Source_V_Public_VGameState_h_26_PROLOG \
	V_Source_V_Public_VGameState_h_29_EVENT_PARMS


#define V_Source_V_Public_VGameState_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_VGameState_h_29_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_VGameState_h_29_RPC_WRAPPERS \
	V_Source_V_Public_VGameState_h_29_CALLBACK_WRAPPERS \
	V_Source_V_Public_VGameState_h_29_INCLASS \
	V_Source_V_Public_VGameState_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_VGameState_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_VGameState_h_29_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_VGameState_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_VGameState_h_29_CALLBACK_WRAPPERS \
	V_Source_V_Public_VGameState_h_29_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_VGameState_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_VGameState_h


#define FOREACH_ENUM_EWAVESTAE(op) \
	op(EWaveStae::WaitingToStart) \
	op(EWaveStae::WaveInPRogeress) \
	op(EWaveStae::WaitingToComplete) \
	op(EWaveStae::WaveComplete) \
	op(EWaveStae::GameOver) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
