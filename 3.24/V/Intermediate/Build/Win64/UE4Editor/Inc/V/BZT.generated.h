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
#ifdef V_BZT_generated_h
#error "BZT.generated.h already included, missing '#pragma once' in BZT.h"
#endif
#define V_BZT_generated_h

#define V_Source_V_Public_BZT_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwingHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OHealthChanged(Z_Param_OwingHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_BZT_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwingHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OHealthChanged(Z_Param_OwingHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_BZT_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABZT(); \
	friend struct Z_Construct_UClass_ABZT_Statics; \
public: \
	DECLARE_CLASS(ABZT, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ABZT)


#define V_Source_V_Public_BZT_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABZT(); \
	friend struct Z_Construct_UClass_ABZT_Statics; \
public: \
	DECLARE_CLASS(ABZT, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ABZT)


#define V_Source_V_Public_BZT_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABZT(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABZT) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABZT); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABZT); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABZT(ABZT&&); \
	NO_API ABZT(const ABZT&); \
public:


#define V_Source_V_Public_BZT_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABZT(ABZT&&); \
	NO_API ABZT(const ABZT&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABZT); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABZT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABZT)


#define V_Source_V_Public_BZT_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ABZT, MeshComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ABZT, HealthComp); } \
	FORCEINLINE static uint32 __PPO__RadialComp() { return STRUCT_OFFSET(ABZT, RadialComp); } \
	FORCEINLINE static uint32 __PPO__ExplosionImpulse() { return STRUCT_OFFSET(ABZT, ExplosionImpulse); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ABZT, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplodedMaterial() { return STRUCT_OFFSET(ABZT, ExplodedMaterial); }


#define V_Source_V_Public_BZT_h_14_PROLOG
#define V_Source_V_Public_BZT_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_BZT_h_17_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_BZT_h_17_RPC_WRAPPERS \
	V_Source_V_Public_BZT_h_17_INCLASS \
	V_Source_V_Public_BZT_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_BZT_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_BZT_h_17_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_BZT_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_BZT_h_17_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_BZT_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_BZT_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
