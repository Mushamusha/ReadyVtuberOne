// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef V_Jiacheng_generated_h
#error "Jiacheng.generated.h already included, missing '#pragma once' in Jiacheng.h"
#endif
#define V_Jiacheng_generated_h

#define V_Source_V_Public_Jiacheng_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Active) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Active(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTickPowerUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTickPowerUp(); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_Jiacheng_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Active) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Active(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTickPowerUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTickPowerUp(); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_Jiacheng_h_12_EVENT_PARMS \
	struct Jiacheng_eventOnActivated_Parms \
	{ \
		AActor* OtherActor; \
	}; \
	struct Jiacheng_eventOnStateChange_Parms \
	{ \
		bool bNewIsActive; \
	};


#define V_Source_V_Public_Jiacheng_h_12_CALLBACK_WRAPPERS
#define V_Source_V_Public_Jiacheng_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJiacheng(); \
	friend struct Z_Construct_UClass_AJiacheng_Statics; \
public: \
	DECLARE_CLASS(AJiacheng, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AJiacheng) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define V_Source_V_Public_Jiacheng_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAJiacheng(); \
	friend struct Z_Construct_UClass_AJiacheng_Statics; \
public: \
	DECLARE_CLASS(AJiacheng, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AJiacheng) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define V_Source_V_Public_Jiacheng_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJiacheng(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJiacheng) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJiacheng); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJiacheng); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJiacheng(AJiacheng&&); \
	NO_API AJiacheng(const AJiacheng&); \
public:


#define V_Source_V_Public_Jiacheng_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJiacheng(AJiacheng&&); \
	NO_API AJiacheng(const AJiacheng&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJiacheng); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJiacheng); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJiacheng)


#define V_Source_V_Public_Jiacheng_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChiXuShiJian() { return STRUCT_OFFSET(AJiacheng, ChiXuShiJian); } \
	FORCEINLINE static uint32 __PPO__ZongCiShu() { return STRUCT_OFFSET(AJiacheng, ZongCiShu); } \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(AJiacheng, bIsActive); }


#define V_Source_V_Public_Jiacheng_h_9_PROLOG \
	V_Source_V_Public_Jiacheng_h_12_EVENT_PARMS


#define V_Source_V_Public_Jiacheng_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_Jiacheng_h_12_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_Jiacheng_h_12_RPC_WRAPPERS \
	V_Source_V_Public_Jiacheng_h_12_CALLBACK_WRAPPERS \
	V_Source_V_Public_Jiacheng_h_12_INCLASS \
	V_Source_V_Public_Jiacheng_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_Jiacheng_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_Jiacheng_h_12_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_Jiacheng_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_Jiacheng_h_12_CALLBACK_WRAPPERS \
	V_Source_V_Public_Jiacheng_h_12_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_Jiacheng_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_Jiacheng_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
