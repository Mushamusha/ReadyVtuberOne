// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef V_Rocketsweapon_generated_h
#error "Rocketsweapon.generated.h already included, missing '#pragma once' in Rocketsweapon.h"
#endif
#define V_Rocketsweapon_generated_h

#define V_Source_V_Public_Rocketsweapon_h_16_RPC_WRAPPERS
#define V_Source_V_Public_Rocketsweapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define V_Source_V_Public_Rocketsweapon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARocketsweapon(); \
	friend struct Z_Construct_UClass_ARocketsweapon_Statics; \
public: \
	DECLARE_CLASS(ARocketsweapon, AWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ARocketsweapon)


#define V_Source_V_Public_Rocketsweapon_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARocketsweapon(); \
	friend struct Z_Construct_UClass_ARocketsweapon_Statics; \
public: \
	DECLARE_CLASS(ARocketsweapon, AWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ARocketsweapon)


#define V_Source_V_Public_Rocketsweapon_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARocketsweapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARocketsweapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocketsweapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocketsweapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARocketsweapon(ARocketsweapon&&); \
	NO_API ARocketsweapon(const ARocketsweapon&); \
public:


#define V_Source_V_Public_Rocketsweapon_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARocketsweapon() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARocketsweapon(ARocketsweapon&&); \
	NO_API ARocketsweapon(const ARocketsweapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocketsweapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocketsweapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARocketsweapon)


#define V_Source_V_Public_Rocketsweapon_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__projectile() { return STRUCT_OFFSET(ARocketsweapon, projectile); }


#define V_Source_V_Public_Rocketsweapon_h_13_PROLOG
#define V_Source_V_Public_Rocketsweapon_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_Rocketsweapon_h_16_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_Rocketsweapon_h_16_RPC_WRAPPERS \
	V_Source_V_Public_Rocketsweapon_h_16_INCLASS \
	V_Source_V_Public_Rocketsweapon_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_Rocketsweapon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_Rocketsweapon_h_16_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_Rocketsweapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_Rocketsweapon_h_16_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_Rocketsweapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_Rocketsweapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
