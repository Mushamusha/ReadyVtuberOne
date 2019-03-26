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
struct FHitResult;
#ifdef V_BlackHole_generated_h
#error "BlackHole.generated.h already included, missing '#pragma once' in BlackHole.h"
#endif
#define V_BlackHole_generated_h

#define V_Source_V_Public_BlackHole_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInnerSphereBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InnerSphereBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_BlackHole_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInnerSphereBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InnerSphereBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_BlackHole_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlackHole(); \
	friend struct Z_Construct_UClass_ABlackHole_Statics; \
public: \
	DECLARE_CLASS(ABlackHole, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ABlackHole)


#define V_Source_V_Public_BlackHole_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABlackHole(); \
	friend struct Z_Construct_UClass_ABlackHole_Statics; \
public: \
	DECLARE_CLASS(ABlackHole, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ABlackHole)


#define V_Source_V_Public_BlackHole_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlackHole(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlackHole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHole(ABlackHole&&); \
	NO_API ABlackHole(const ABlackHole&); \
public:


#define V_Source_V_Public_BlackHole_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHole(ABlackHole&&); \
	NO_API ABlackHole(const ABlackHole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlackHole)


#define V_Source_V_Public_BlackHole_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ABlackHole, MeshComp); } \
	FORCEINLINE static uint32 __PPO__InnerSphereComp() { return STRUCT_OFFSET(ABlackHole, InnerSphereComp); } \
	FORCEINLINE static uint32 __PPO__OuterSphereComp() { return STRUCT_OFFSET(ABlackHole, OuterSphereComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ABlackHole, HealthComp); }


#define V_Source_V_Public_BlackHole_h_12_PROLOG
#define V_Source_V_Public_BlackHole_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_BlackHole_h_15_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_BlackHole_h_15_RPC_WRAPPERS \
	V_Source_V_Public_BlackHole_h_15_INCLASS \
	V_Source_V_Public_BlackHole_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_BlackHole_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_BlackHole_h_15_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_BlackHole_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_BlackHole_h_15_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_BlackHole_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_BlackHole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
