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
#ifdef V_TB_generated_h
#error "TB.generated.h already included, missing '#pragma once' in TB.h"
#endif
#define V_TB_generated_h

#define V_Source_V_Public_TB_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverLapBOX) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverLapBOX(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_TB_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverLapBOX) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverLapBOX(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_TB_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATB(); \
	friend struct Z_Construct_UClass_ATB_Statics; \
public: \
	DECLARE_CLASS(ATB, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ATB)


#define V_Source_V_Public_TB_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATB(); \
	friend struct Z_Construct_UClass_ATB_Statics; \
public: \
	DECLARE_CLASS(ATB, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ATB)


#define V_Source_V_Public_TB_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATB(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATB) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATB); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATB); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATB(ATB&&); \
	NO_API ATB(const ATB&); \
public:


#define V_Source_V_Public_TB_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATB(ATB&&); \
	NO_API ATB(const ATB&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATB); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATB); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATB)


#define V_Source_V_Public_TB_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverLap() { return STRUCT_OFFSET(ATB, OverLap); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ATB, MeshComp); } \
	FORCEINLINE static uint32 __PPO__Strength() { return STRUCT_OFFSET(ATB, Strength); } \
	FORCEINLINE static uint32 __PPO__PitchAngle() { return STRUCT_OFFSET(ATB, PitchAngle); }


#define V_Source_V_Public_TB_h_11_PROLOG
#define V_Source_V_Public_TB_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_TB_h_14_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_TB_h_14_RPC_WRAPPERS \
	V_Source_V_Public_TB_h_14_INCLASS \
	V_Source_V_Public_TB_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_TB_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_TB_h_14_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_TB_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_TB_h_14_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_TB_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_TB_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
