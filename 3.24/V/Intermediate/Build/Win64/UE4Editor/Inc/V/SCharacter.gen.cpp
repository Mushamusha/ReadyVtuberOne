// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/SCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	V_API UClass* Z_Construct_UClass_ASCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_V();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_GetAimOffsets();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_IsFiring();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_IsInitiatedJump();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_IsSprinting();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_IsTargeting();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_OnHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	V_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_SetCanFire();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_StartFire();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_StopFire();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_UseItem();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	V_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
// End Cross Module References
	void ASCharacter::StaticRegisterNativesASCharacter()
	{
		UClass* Class = ASCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAimOffsets", &ASCharacter::execGetAimOffsets },
			{ "IsFiring", &ASCharacter::execIsFiring },
			{ "IsInitiatedJump", &ASCharacter::execIsInitiatedJump },
			{ "IsSprinting", &ASCharacter::execIsSprinting },
			{ "IsTargeting", &ASCharacter::execIsTargeting },
			{ "OnHealthChanged", &ASCharacter::execOnHealthChanged },
			{ "SetCanFire", &ASCharacter::execSetCanFire },
			{ "StartFire", &ASCharacter::execStartFire },
			{ "StopFire", &ASCharacter::execStopFire },
			{ "UseItem", &ASCharacter::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics
	{
		struct SCharacter_eventGetAimOffsets_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SCharacter_eventGetAimOffsets_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
		{ "ToolTip", "Retrieve Pitch/Yaw from current camera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "GetAimOffsets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SCharacter_eventGetAimOffsets_Parms), Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_GetAimOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_IsFiring_Statics
	{
		struct SCharacter_eventIsFiring_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASCharacter_IsFiring_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SCharacter_eventIsFiring_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_IsFiring_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SCharacter_eventIsFiring_Parms), &Z_Construct_UFunction_ASCharacter_IsFiring_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_IsFiring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_IsFiring_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_IsFiring_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_IsFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "IsFiring", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SCharacter_eventIsFiring_Parms), Z_Construct_UFunction_ASCharacter_IsFiring_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsFiring_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_IsFiring_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_IsFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_IsFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics
	{
		struct SCharacter_eventIsInitiatedJump_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SCharacter_eventIsInitiatedJump_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SCharacter_eventIsInitiatedJump_Parms), &Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "IsInitiatedJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SCharacter_eventIsInitiatedJump_Parms), Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_IsInitiatedJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_IsSprinting_Statics
	{
		struct SCharacter_eventIsSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SCharacter_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SCharacter_eventIsSprinting_Parms), &Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "IsSprinting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(SCharacter_eventIsSprinting_Parms), Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_IsTargeting_Statics
	{
		struct SCharacter_eventIsTargeting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SCharacter_eventIsTargeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SCharacter_eventIsTargeting_Parms), &Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "IsTargeting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SCharacter_eventIsTargeting_Parms), Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_IsTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_IsTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics
	{
		struct SCharacter_eventOnHealthChanged_Parms
		{
			UHealthComponent* OwingHealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwingHealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwingHealthComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_OwingHealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_OwingHealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "OwingHealthComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, OwingHealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_OwingHealthComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_OwingHealthComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_OwingHealthComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "OnHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(SCharacter_eventOnHealthChanged_Parms), Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_SetCanFire_Statics
	{
		struct SCharacter_eventSetCanFire_Parms
		{
			bool NewFire;
		};
		static void NewProp_NewFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewFire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::NewProp_NewFire_SetBit(void* Obj)
	{
		((SCharacter_eventSetCanFire_Parms*)Obj)->NewFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::NewProp_NewFire = { UE4CodeGen_Private::EPropertyClass::Bool, "NewFire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SCharacter_eventSetCanFire_Parms), &Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::NewProp_NewFire_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::NewProp_NewFire,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "SetCanFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SCharacter_eventSetCanFire_Parms), Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_SetCanFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_SetCanFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_StartFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_StartFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "StartFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_StartFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_StartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_StartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_StopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_StopFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "StopFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_StopFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_StopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_StopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_UseItem_Statics
	{
		struct SCharacter_eventUseItem_Parms
		{
			int32 Number;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASCharacter_UseItem_Statics::NewProp_Number = { UE4CodeGen_Private::EPropertyClass::Int, "Number", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventUseItem_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_UseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_UseItem_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_UseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "UseItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SCharacter_eventUseItem_Parms), Z_Construct_UFunction_ASCharacter_UseItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_UseItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_UseItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASCharacter_NoRegister()
	{
		return ASCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBuulet_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxBuulet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanFire_MetaData[];
#endif
		static void NewProp_bCanFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[];
#endif
		static void NewProp_bIsJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCarryWeapon5_MetaData[];
#endif
		static void NewProp_IsCarryWeapon5_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCarryWeapon5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCarryWeapon4_MetaData[];
#endif
		static void NewProp_IsCarryWeapon4_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCarryWeapon4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCarryWeapon3_MetaData[];
#endif
		static void NewProp_IsCarryWeapon3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCarryWeapon3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCarryWeapon2_MetaData[];
#endif
		static void NewProp_IsCarryWeapon2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCarryWeapon2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCarryWeapon1_MetaData[];
#endif
		static void NewProp_IsCarryWeapon1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCarryWeapon1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCarryItem1_MetaData[];
#endif
		static void NewProp_IsCarryItem1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCarryItem1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragonBallNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DragonBallNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFood_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFiring_MetaData[];
#endif
		static void NewProp_bIsFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetingSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTargeting_MetaData[];
#endif
		static void NewProp_bIsTargeting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTargeting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintingSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToRun_MetaData[];
#endif
		static void NewProp_bWantsToRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SAC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SAC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon5_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Weapon5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon4_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Weapon4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon3_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Weapon3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon2_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Weapon2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StarWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponAttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDie_MetaData[];
#endif
		static void NewProp_bDie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomFOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASCharacter_GetAimOffsets, "GetAimOffsets" }, // 2043505180
		{ &Z_Construct_UFunction_ASCharacter_IsFiring, "IsFiring" }, // 2685727801
		{ &Z_Construct_UFunction_ASCharacter_IsInitiatedJump, "IsInitiatedJump" }, // 1583724312
		{ &Z_Construct_UFunction_ASCharacter_IsSprinting, "IsSprinting" }, // 3722288468
		{ &Z_Construct_UFunction_ASCharacter_IsTargeting, "IsTargeting" }, // 2936547223
		{ &Z_Construct_UFunction_ASCharacter_OnHealthChanged, "OnHealthChanged" }, // 1838350333
		{ &Z_Construct_UFunction_ASCharacter_SetCanFire, "SetCanFire" }, // 2391124656
		{ &Z_Construct_UFunction_ASCharacter_StartFire, "StartFire" }, // 2840662427
		{ &Z_Construct_UFunction_ASCharacter_StopFire, "StopFire" }, // 1064147818
		{ &Z_Construct_UFunction_ASCharacter_UseItem, "UseItem" }, // 3577760489
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCharacter.h" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxBuulet_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxBuulet = { UE4CodeGen_Private::EPropertyClass::Int, "MaxBuulet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, MaxBuulet), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxBuulet_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxBuulet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentBullet_MetaData[] = {
		{ "Category", "SCharacter" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentBullet = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentBullet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(ASCharacter, CurrentBullet), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentBullet_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_TotalBullet_MetaData[] = {
		{ "Category", "SCharacter" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_TotalBullet = { UE4CodeGen_Private::EPropertyClass::Int, "TotalBullet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ASCharacter, TotalBullet), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_TotalBullet_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_TotalBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_bCanFire_MetaData[] = {
		{ "Category", "SCharacter" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_bCanFire_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->bCanFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_bCanFire = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanFire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_bCanFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_bCanFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_bCanFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->bIsJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsJumping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon5_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon5_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->IsCarryWeapon5 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon5 = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCarryWeapon5", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon5_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon5_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon4_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon4_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->IsCarryWeapon4 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon4 = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCarryWeapon4", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon4_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon4_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon3_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon3_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->IsCarryWeapon3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon3 = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCarryWeapon3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon3_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon3_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->IsCarryWeapon2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2 = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCarryWeapon2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->IsCarryWeapon1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1 = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCarryWeapon1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryItem1_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryItem1_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->IsCarryItem1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryItem1 = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCarryItem1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryItem1_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryItem1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryItem1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_DragonBallNumber_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_DragonBallNumber = { UE4CodeGen_Private::EPropertyClass::Int, "DragonBallNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ASCharacter, DragonBallNumber), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_DragonBallNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_DragonBallNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentFood_MetaData[] = {
		{ "Category", "SCharacter" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentFood = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentFood", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(ASCharacter, CurrentFood), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentFood_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentFood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsFiring_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsFiring_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->bIsFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsFiring = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFiring", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsFiring_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetingSpeedModifier_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetingSpeedModifier = { UE4CodeGen_Private::EPropertyClass::Float, "TargetingSpeedModifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, TargetingSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetingSpeedModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetingSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsTargeting_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsTargeting_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->bIsTargeting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsTargeting = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTargeting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsTargeting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsTargeting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsTargeting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintingSpeedModifier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintingSpeedModifier = { UE4CodeGen_Private::EPropertyClass::Float, "SprintingSpeedModifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, SprintingSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintingSpeedModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintingSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->bIsSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsSprinting = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSprinting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsSprinting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToRun_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToRun_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->bWantsToRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToRun = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsToRun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToRun_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASCharacter, HealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_HealthComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_SAC_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_SAC = { UE4CodeGen_Private::EPropertyClass::Object, "SAC", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASCharacter, SAC), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_SAC_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_SAC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon5_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon5 = { UE4CodeGen_Private::EPropertyClass::Class, "Weapon5", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, Weapon5), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon5_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon4_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon4 = { UE4CodeGen_Private::EPropertyClass::Class, "Weapon4", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, Weapon4), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon4_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon3_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon3 = { UE4CodeGen_Private::EPropertyClass::Class, "Weapon3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, Weapon3), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon3_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon2_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon2 = { UE4CodeGen_Private::EPropertyClass::Class, "Weapon2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, Weapon2), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_StarWeapon_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_StarWeapon = { UE4CodeGen_Private::EPropertyClass::Class, "StarWeapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, StarWeapon), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_StarWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_StarWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWeapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000020, 1, nullptr, STRUCT_OFFSET(ASCharacter, CurrentWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachSocketName_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "WeaponAttachSocketName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000030001, 1, nullptr, STRUCT_OFFSET(ASCharacter, WeaponAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_bDie_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_bDie_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->bDie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_bDie = { UE4CodeGen_Private::EPropertyClass::Bool, "bDie", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000034, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_bDie_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_bDie_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_bDie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "player" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_ZoomSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "ZoomSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, ZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_ZoomSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_ZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_ZoomFOV_MetaData[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_ZoomFOV = { UE4CodeGen_Private::EPropertyClass::Float, "ZoomFOV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, ZoomFOV), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_ZoomFOV_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_ZoomFOV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxBuulet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_TotalBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_bCanFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryItem1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_DragonBallNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentFood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetingSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsTargeting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintingSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_HealthComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_SAC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_Weapon2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_StarWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_bDie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_ZoomSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_ZoomFOV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASCharacter_Statics::ClassParams = {
		&ASCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ASCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASCharacter, 2286362221);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASCharacter(Z_Construct_UClass_ASCharacter, &ASCharacter::StaticClass, TEXT("/Script/V"), TEXT("ASCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
