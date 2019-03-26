// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
class UHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef V_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define V_SCharacter_generated_h

#define V_Source_V_Public_SCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCanFire) \
	{ \
		P_GET_UBOOL(Z_Param_NewFire); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCanFire(Z_Param_NewFire); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAimOffsets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInitiatedJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInitiatedJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFiring(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTargeting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTargeting(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execUseItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseItem(Z_Param_Number); \
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


#define V_Source_V_Public_SCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCanFire) \
	{ \
		P_GET_UBOOL(Z_Param_NewFire); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCanFire(Z_Param_NewFire); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAimOffsets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInitiatedJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInitiatedJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFiring(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTargeting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTargeting(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execUseItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseItem(Z_Param_Number); \
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


#define V_Source_V_Public_SCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define V_Source_V_Public_SCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/V"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define V_Source_V_Public_SCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define V_Source_V_Public_SCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter)


#define V_Source_V_Public_SCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ZoomFOV() { return STRUCT_OFFSET(ASCharacter, ZoomFOV); } \
	FORCEINLINE static uint32 __PPO__ZoomSpeed() { return STRUCT_OFFSET(ASCharacter, ZoomSpeed); } \
	FORCEINLINE static uint32 __PPO__bDie() { return STRUCT_OFFSET(ASCharacter, bDie); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName() { return STRUCT_OFFSET(ASCharacter, WeaponAttachSocketName); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(ASCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__StarWeapon() { return STRUCT_OFFSET(ASCharacter, StarWeapon); } \
	FORCEINLINE static uint32 __PPO__Weapon2() { return STRUCT_OFFSET(ASCharacter, Weapon2); } \
	FORCEINLINE static uint32 __PPO__Weapon3() { return STRUCT_OFFSET(ASCharacter, Weapon3); } \
	FORCEINLINE static uint32 __PPO__Weapon4() { return STRUCT_OFFSET(ASCharacter, Weapon4); } \
	FORCEINLINE static uint32 __PPO__Weapon5() { return STRUCT_OFFSET(ASCharacter, Weapon5); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SAC() { return STRUCT_OFFSET(ASCharacter, SAC); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ASCharacter, HealthComp); } \
	FORCEINLINE static uint32 __PPO__bWantsToRun() { return STRUCT_OFFSET(ASCharacter, bWantsToRun); } \
	FORCEINLINE static uint32 __PPO__bIsSprinting() { return STRUCT_OFFSET(ASCharacter, bIsSprinting); } \
	FORCEINLINE static uint32 __PPO__SprintingSpeedModifier() { return STRUCT_OFFSET(ASCharacter, SprintingSpeedModifier); } \
	FORCEINLINE static uint32 __PPO__bIsTargeting() { return STRUCT_OFFSET(ASCharacter, bIsTargeting); } \
	FORCEINLINE static uint32 __PPO__TargetingSpeedModifier() { return STRUCT_OFFSET(ASCharacter, TargetingSpeedModifier); } \
	FORCEINLINE static uint32 __PPO__bIsFiring() { return STRUCT_OFFSET(ASCharacter, bIsFiring); } \
	FORCEINLINE static uint32 __PPO__CurrentFood() { return STRUCT_OFFSET(ASCharacter, CurrentFood); }


#define V_Source_V_Public_SCharacter_h_16_PROLOG
#define V_Source_V_Public_SCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_SCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_SCharacter_h_19_RPC_WRAPPERS \
	V_Source_V_Public_SCharacter_h_19_INCLASS \
	V_Source_V_Public_SCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define V_Source_V_Public_SCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	V_Source_V_Public_SCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	V_Source_V_Public_SCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	V_Source_V_Public_SCharacter_h_19_INCLASS_NO_PURE_DECLS \
	V_Source_V_Public_SCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID V_Source_V_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
