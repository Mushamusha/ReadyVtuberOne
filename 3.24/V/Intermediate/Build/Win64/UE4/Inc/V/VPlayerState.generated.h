// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef V_VPlayerState_generated_h
#error "VPlayerState.generated.h already included, missing '#pragma once' in VPlayerState.h"
#endif
#define V_VPlayerState_generated_h

#define V_Source_V_Public_VPlayerState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScoreDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddScore(Z_Param_ScoreDelta); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_VPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScoreDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddScore(Z_Param_ScoreDelta); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_VPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVPlayerState(); \
	friend struct Z_Construct_UClass_AVPlayerState_Statics; \
public: \
	DECLARE_CLASS(AVPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AVPlayerState)


#define V_Source_V_Public_VPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVPlayerState(); \
	friend struct Z_Construct_UClass_AVPlayerState_Statics; \
public: \
	DECLARE_CLASS(AVPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AVPlayerState)


#define V_Source_V_Public_VPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVPlayerState(AVPlayerState&&); \
	NO_API AVPlayerState(const AVPlayerState&); \
public:


#define V_Source_V_Public_VPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVPlayerState(AVPlayerState&&); \
	NO_API AVPlayerState(const AVPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPlayerState)


#define V_Source_V_Public_VPlayerState_h_15_PRIVATE_PROPERTY_OFFSET
#define V_Source_V_Public_VPlayerState_h_12_PROLOG
#define V_Source_V_Public_VPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_VPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_VPlayerState_h_15_RPC_WRAPPERS \
	V_Source_V_Public_VPlayerState_h_15_INCLASS \
	V_Source_V_Public_VPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_VPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_VPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_VPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_VPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_VPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_VPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
