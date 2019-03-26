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
	V_API UFunction* Z_Construct_UFunction_ASCharacter_OnHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	V_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_StartFire();
	V_API UFunction* Z_Construct_UFunction_ASCharacter_StopFire();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	V_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
// End Cross Module References
	void ASCharacter::StaticRegisterNativesASCharacter()
	{
		UClass* Class = ASCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealthChanged", &ASCharacter::execOnHealthChanged },
			{ "StartFire", &ASCharacter::execStartFire },
			{ "StopFire", &ASCharacter::execStopFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
		{ &Z_Construct_UFunction_ASCharacter_OnHealthChanged, "OnHealthChanged" }, // 1838350333
		{ &Z_Construct_UFunction_ASCharacter_StartFire, "StartFire" }, // 2840662427
		{ &Z_Construct_UFunction_ASCharacter_StopFire, "StopFire" }, // 1064147818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCharacter.h" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2 = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCarryWeapon2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2_MetaData)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1 = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCarryWeapon1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryWeapon1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_IsCarryItem1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_DragonBallNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_HealthComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_SAC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp,
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
	IMPLEMENT_CLASS(ASCharacter, 3723271785);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASCharacter(Z_Construct_UClass_ASCharacter, &ASCharacter::StaticClass, TEXT("/Script/V"), TEXT("ASCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
