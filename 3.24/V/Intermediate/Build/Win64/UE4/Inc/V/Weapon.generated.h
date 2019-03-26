// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef V_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define V_Weapon_generated_h

#define V_Source_V_Public_Weapon_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanTrace_Statics; \
	V_API static class UScriptStruct* StaticStruct();


#define V_Source_V_Public_Weapon_h_29_RPC_WRAPPERS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_Weapon_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	}


#define V_Source_V_Public_Weapon_h_29_EVENT_PARMS
#define V_Source_V_Public_Weapon_h_29_CALLBACK_WRAPPERS
#define V_Source_V_Public_Weapon_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define V_Source_V_Public_Weapon_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define V_Source_V_Public_Weapon_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define V_Source_V_Public_Weapon_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define V_Source_V_Public_Weapon_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(AWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(AWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__DefaultImpactEffect() { return STRUCT_OFFSET(AWeapon, DefaultImpactEffect); } \
	FORCEINLINE static uint32 __PPO__FireCamShake() { return STRUCT_OFFSET(AWeapon, FireCamShake); } \
	FORCEINLINE static uint32 __PPO__FleshImpactEffect() { return STRUCT_OFFSET(AWeapon, FleshImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TranceEffect() { return STRUCT_OFFSET(AWeapon, TranceEffect); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(AWeapon, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__DefaultBullet() { return STRUCT_OFFSET(AWeapon, DefaultBullet); } \
	FORCEINLINE static uint32 __PPO__BulletSpread() { return STRUCT_OFFSET(AWeapon, BulletSpread); } \
	FORCEINLINE static uint32 __PPO__RateOfFire() { return STRUCT_OFFSET(AWeapon, RateOfFire); } \
	FORCEINLINE static uint32 __PPO__HitScanTrace() { return STRUCT_OFFSET(AWeapon, HitScanTrace); }


#define V_Source_V_Public_Weapon_h_26_PROLOG \
	V_Source_V_Public_Weapon_h_29_EVENT_PARMS


#define V_Source_V_Public_Weapon_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_Weapon_h_29_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_Weapon_h_29_RPC_WRAPPERS \
	V_Source_V_Public_Weapon_h_29_CALLBACK_WRAPPERS \
	V_Source_V_Public_Weapon_h_29_INCLASS \
	V_Source_V_Public_Weapon_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_Weapon_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_Weapon_h_29_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_Weapon_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_Weapon_h_29_CALLBACK_WRAPPERS \
	V_Source_V_Public_Weapon_h_29_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_Weapon_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
