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
#ifdef V_ball_generated_h
#error "ball.generated.h already included, missing '#pragma once' in ball.h"
#endif
#define V_ball_generated_h

#define V_Source_V_Public_AI_ball_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwingHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_OwingHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_AI_ball_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwingHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_OwingHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_AI_ball_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAball(); \
	friend struct Z_Construct_UClass_Aball_Statics; \
public: \
	DECLARE_CLASS(Aball, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(Aball)


#define V_Source_V_Public_AI_ball_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAball(); \
	friend struct Z_Construct_UClass_Aball_Statics; \
public: \
	DECLARE_CLASS(Aball, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(Aball)


#define V_Source_V_Public_AI_ball_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aball(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aball) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aball); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aball); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aball(Aball&&); \
	NO_API Aball(const Aball&); \
public:


#define V_Source_V_Public_AI_ball_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aball(Aball&&); \
	NO_API Aball(const Aball&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aball); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aball); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aball)


#define V_Source_V_Public_AI_ball_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(Aball, MeshComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(Aball, HealthComp); } \
	FORCEINLINE static uint32 __PPO__SphrerComp() { return STRUCT_OFFSET(Aball, SphrerComp); } \
	FORCEINLINE static uint32 __PPO__MovementForce() { return STRUCT_OFFSET(Aball, MovementForce); } \
	FORCEINLINE static uint32 __PPO__RequiredDistanceToTarget() { return STRUCT_OFFSET(Aball, RequiredDistanceToTarget); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(Aball, bUseVelocityChange); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(Aball, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplosionRadius() { return STRUCT_OFFSET(Aball, ExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamage() { return STRUCT_OFFSET(Aball, ExplosionDamage); } \
	FORCEINLINE static uint32 __PPO__ExplodeSound() { return STRUCT_OFFSET(Aball, ExplodeSound); } \
	FORCEINLINE static uint32 __PPO__SelfDestructSound() { return STRUCT_OFFSET(Aball, SelfDestructSound); }


#define V_Source_V_Public_AI_ball_h_12_PROLOG
#define V_Source_V_Public_AI_ball_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_AI_ball_h_15_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_AI_ball_h_15_RPC_WRAPPERS \
	V_Source_V_Public_AI_ball_h_15_INCLASS \
	V_Source_V_Public_AI_ball_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_AI_ball_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_AI_ball_h_15_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_AI_ball_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_AI_ball_h_15_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_AI_ball_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_AI_ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
