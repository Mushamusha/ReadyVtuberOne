// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef V_DragonBall_generated_h
#error "DragonBall.generated.h already included, missing '#pragma once' in DragonBall.h"
#endif
#define V_DragonBall_generated_h

#define V_Source_V_Public_DragonBall_h_15_RPC_WRAPPERS
#define V_Source_V_Public_DragonBall_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define V_Source_V_Public_DragonBall_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADragonBall(); \
	friend struct Z_Construct_UClass_ADragonBall_Statics; \
public: \
	DECLARE_CLASS(ADragonBall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ADragonBall)


#define V_Source_V_Public_DragonBall_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADragonBall(); \
	friend struct Z_Construct_UClass_ADragonBall_Statics; \
public: \
	DECLARE_CLASS(ADragonBall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ADragonBall)


#define V_Source_V_Public_DragonBall_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADragonBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADragonBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADragonBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADragonBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADragonBall(ADragonBall&&); \
	NO_API ADragonBall(const ADragonBall&); \
public:


#define V_Source_V_Public_DragonBall_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADragonBall(ADragonBall&&); \
	NO_API ADragonBall(const ADragonBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADragonBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADragonBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADragonBall)


#define V_Source_V_Public_DragonBall_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ADragonBall, MeshComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ADragonBall, SphereComp); } \
	FORCEINLINE static uint32 __PPO__Effects() { return STRUCT_OFFSET(ADragonBall, Effects); }


#define V_Source_V_Public_DragonBall_h_12_PROLOG
#define V_Source_V_Public_DragonBall_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_DragonBall_h_15_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_DragonBall_h_15_RPC_WRAPPERS \
	V_Source_V_Public_DragonBall_h_15_INCLASS \
	V_Source_V_Public_DragonBall_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_DragonBall_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_DragonBall_h_15_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_DragonBall_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_DragonBall_h_15_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_DragonBall_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_DragonBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
