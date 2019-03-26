// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef V_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define V_SCharacter_generated_h

#define V_Source_V_Public_SCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwingHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwingHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_SCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwingHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwingHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_SCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define V_Source_V_Public_SCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define V_Source_V_Public_SCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define V_Source_V_Public_SCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define V_Source_V_Public_SCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ZoomFOV() { return STRUCT_OFFSET(ASCharacter, ZoomFOV); } \
	FORCEINLINE static uint32 __PPO__ZoomSpeed() { return STRUCT_OFFSET(ASCharacter, ZoomSpeed); } \
	FORCEINLINE static uint32 __PPO__bDie() { return STRUCT_OFFSET(ASCharacter, bDie); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName() { return STRUCT_OFFSET(ASCharacter, WeaponAttachSocketName); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(ASCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__StarWeapon() { return STRUCT_OFFSET(ASCharacter, StarWeapon); } \
	FORCEINLINE static uint32 __PPO__Weapon2() { return STRUCT_OFFSET(ASCharacter, Weapon2); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SAC() { return STRUCT_OFFSET(ASCharacter, SAC); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ASCharacter, HealthComp); }


#define V_Source_V_Public_SCharacter_h_14_PROLOG
#define V_Source_V_Public_SCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_SCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_SCharacter_h_17_RPC_WRAPPERS \
	V_Source_V_Public_SCharacter_h_17_INCLASS \
	V_Source_V_Public_SCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_SCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_SCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_SCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_SCharacter_h_17_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_SCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
