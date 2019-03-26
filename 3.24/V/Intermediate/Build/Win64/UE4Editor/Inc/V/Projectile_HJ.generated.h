// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef V_Projectile_HJ_generated_h
#error "Projectile_HJ.generated.h already included, missing '#pragma once' in Projectile_HJ.h"
#endif
#define V_Projectile_HJ_generated_h

#define V_Source_V_Public_Projectile_HJ_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_Projectile_HJ_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_Projectile_HJ_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile_HJ(); \
	friend struct Z_Construct_UClass_AProjectile_HJ_Statics; \
public: \
	DECLARE_CLASS(AProjectile_HJ, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AProjectile_HJ)


#define V_Source_V_Public_Projectile_HJ_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile_HJ(); \
	friend struct Z_Construct_UClass_AProjectile_HJ_Statics; \
public: \
	DECLARE_CLASS(AProjectile_HJ, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AProjectile_HJ)


#define V_Source_V_Public_Projectile_HJ_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile_HJ(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile_HJ) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile_HJ); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile_HJ); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile_HJ(AProjectile_HJ&&); \
	NO_API AProjectile_HJ(const AProjectile_HJ&); \
public:


#define V_Source_V_Public_Projectile_HJ_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile_HJ(AProjectile_HJ&&); \
	NO_API AProjectile_HJ(const AProjectile_HJ&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile_HJ); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile_HJ); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile_HJ)


#define V_Source_V_Public_Projectile_HJ_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(AProjectile_HJ, SphereComp); } \
	FORCEINLINE static uint32 __PPO__ExplodeSound() { return STRUCT_OFFSET(AProjectile_HJ, ExplodeSound); } \
	FORCEINLINE static uint32 __PPO__ExplodeEffect() { return STRUCT_OFFSET(AProjectile_HJ, ExplodeEffect); }


#define V_Source_V_Public_Projectile_HJ_h_13_PROLOG
#define V_Source_V_Public_Projectile_HJ_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_Projectile_HJ_h_16_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_Projectile_HJ_h_16_RPC_WRAPPERS \
	V_Source_V_Public_Projectile_HJ_h_16_INCLASS \
	V_Source_V_Public_Projectile_HJ_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_Projectile_HJ_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_Projectile_HJ_h_16_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_Projectile_HJ_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_Projectile_HJ_h_16_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_Projectile_HJ_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_Projectile_HJ_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
