// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
#ifdef V_VGameMode_generated_h
#error "VGameMode.generated.h already included, missing '#pragma once' in VGameMode.h"
#endif
#define V_VGameMode_generated_h

#define V_Source_V_Public_VGameMode_h_14_DELEGATE \
struct _Script_V_eventOnActorKilled_Parms \
{ \
	AActor* VictmActor; \
	AActor* KillerActor; \
	AController* KillerController; \
}; \
static inline void FOnActorKilled_DelegateWrapper(const FMulticastScriptDelegate& OnActorKilled, AActor* VictmActor, AActor* KillerActor, AController* KillerController) \
{ \
	_Script_V_eventOnActorKilled_Parms Parms; \
	Parms.VictmActor=VictmActor; \
	Parms.KillerActor=KillerActor; \
	Parms.KillerController=KillerController; \
	OnActorKilled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define V_Source_V_Public_VGameMode_h_19_RPC_WRAPPERS
#define V_Source_V_Public_VGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define V_Source_V_Public_VGameMode_h_19_EVENT_PARMS
#define V_Source_V_Public_VGameMode_h_19_CALLBACK_WRAPPERS
#define V_Source_V_Public_VGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVGameMode(); \
	friend struct Z_Construct_UClass_AVGameMode_Statics; \
public: \
	DECLARE_CLASS(AVGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AVGameMode)


#define V_Source_V_Public_VGameMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAVGameMode(); \
	friend struct Z_Construct_UClass_AVGameMode_Statics; \
public: \
	DECLARE_CLASS(AVGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AVGameMode)


#define V_Source_V_Public_VGameMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVGameMode(AVGameMode&&); \
	NO_API AVGameMode(const AVGameMode&); \
public:


#define V_Source_V_Public_VGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVGameMode(AVGameMode&&); \
	NO_API AVGameMode(const AVGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVGameMode)


#define V_Source_V_Public_VGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeBetweenWave() { return STRUCT_OFFSET(AVGameMode, TimeBetweenWave); }


#define V_Source_V_Public_VGameMode_h_16_PROLOG \
	V_Source_V_Public_VGameMode_h_19_EVENT_PARMS


#define V_Source_V_Public_VGameMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_VGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_VGameMode_h_19_RPC_WRAPPERS \
	V_Source_V_Public_VGameMode_h_19_CALLBACK_WRAPPERS \
	V_Source_V_Public_VGameMode_h_19_INCLASS \
	V_Source_V_Public_VGameMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_VGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_VGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_VGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_VGameMode_h_19_CALLBACK_WRAPPERS \
	V_Source_V_Public_VGameMode_h_19_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_VGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_VGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
