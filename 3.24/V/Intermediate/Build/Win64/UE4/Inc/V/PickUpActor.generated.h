// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef V_PickUpActor_generated_h
#error "PickUpActor.generated.h already included, missing '#pragma once' in PickUpActor.h"
#endif
#define V_PickUpActor_generated_h

#define V_Source_V_Public_PickUpActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Respawn(); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_PickUpActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Respawn(); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_PickUpActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUpActor(); \
	friend struct Z_Construct_UClass_APickUpActor_Statics; \
public: \
	DECLARE_CLASS(APickUpActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(APickUpActor)


#define V_Source_V_Public_PickUpActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickUpActor(); \
	friend struct Z_Construct_UClass_APickUpActor_Statics; \
public: \
	DECLARE_CLASS(APickUpActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(APickUpActor)


#define V_Source_V_Public_PickUpActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickUpActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickUpActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpActor(APickUpActor&&); \
	NO_API APickUpActor(const APickUpActor&); \
public:


#define V_Source_V_Public_PickUpActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpActor(APickUpActor&&); \
	NO_API APickUpActor(const APickUpActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUpActor)


#define V_Source_V_Public_PickUpActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(APickUpActor, SphereComp); } \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(APickUpActor, DecalComp); } \
	FORCEINLINE static uint32 __PPO__JiachengClass() { return STRUCT_OFFSET(APickUpActor, JiachengClass); } \
	FORCEINLINE static uint32 __PPO__CD() { return STRUCT_OFFSET(APickUpActor, CD); }


#define V_Source_V_Public_PickUpActor_h_12_PROLOG
#define V_Source_V_Public_PickUpActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_PickUpActor_h_15_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_PickUpActor_h_15_RPC_WRAPPERS \
	V_Source_V_Public_PickUpActor_h_15_INCLASS \
	V_Source_V_Public_PickUpActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_PickUpActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_PickUpActor_h_15_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_PickUpActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_PickUpActor_h_15_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_PickUpActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_PickUpActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
