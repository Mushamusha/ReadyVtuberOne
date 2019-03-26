// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/Components/HealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}
// Cross Module References
	V_API UFunction* Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_V();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	V_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	V_API UClass* Z_Construct_UClass_UHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	V_API UFunction* Z_Construct_UFunction_UHealthComponent_AHealth();
	V_API UFunction* Z_Construct_UFunction_UHealthComponent_ContinuousHealth();
	V_API UFunction* Z_Construct_UFunction_UHealthComponent_GetHealth();
	V_API UFunction* Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage();
	V_API UFunction* Z_Construct_UFunction_UHealthComponent_IsFriendly();
	V_API UFunction* Z_Construct_UFunction_UHealthComponent_OnRep_Health();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics
	{
		struct _Script_V_eventOnHealthChangedSignature_Parms
		{
			UHealthComponent* HealthComp;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_V_eventOnHealthChangedSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_V_eventOnHealthChangedSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_V_eventOnHealthChangedSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_V_eventOnHealthChangedSignature_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_V_eventOnHealthChangedSignature_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_V_eventOnHealthChangedSignature_Parms, HealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_V, "OnHealthChangedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_V_eventOnHealthChangedSignature_Parms), Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UHealthComponent::StaticRegisterNativesUHealthComponent()
	{
		UClass* Class = UHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AHealth", &UHealthComponent::execAHealth },
			{ "ContinuousHealth", &UHealthComponent::execContinuousHealth },
			{ "GetHealth", &UHealthComponent::execGetHealth },
			{ "HandleTakeAnyDamage", &UHealthComponent::execHandleTakeAnyDamage },
			{ "IsFriendly", &UHealthComponent::execIsFriendly },
			{ "OnRep_Health", &UHealthComponent::execOnRep_Health },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealthComponent_AHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_AHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_AHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, "AHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_AHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_AHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_AHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_AHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_ContinuousHealth_Statics
	{
		struct HealthComponent_eventContinuousHealth_Parms
		{
			float Healthamount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Healthamount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_ContinuousHealth_Statics::NewProp_Healthamount = { UE4CodeGen_Private::EPropertyClass::Float, "Healthamount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HealthComponent_eventContinuousHealth_Parms, Healthamount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_ContinuousHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_ContinuousHealth_Statics::NewProp_Healthamount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_ContinuousHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_ContinuousHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, "ContinuousHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HealthComponent_eventContinuousHealth_Parms), Z_Construct_UFunction_UHealthComponent_ContinuousHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_ContinuousHealth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_ContinuousHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_ContinuousHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_ContinuousHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_ContinuousHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_GetHealth_Statics
	{
		struct HealthComponent_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_GetHealth_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HealthComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, "GetHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(HealthComponent_eventGetHealth_Parms), Z_Construct_UFunction_UHealthComponent_GetHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetHealth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_GetHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics
	{
		struct HealthComponent_eventHandleTakeAnyDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
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
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HealthComponent_eventHandleTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HealthComponent_eventHandleTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HealthComponent_eventHandleTakeAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Float, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HealthComponent_eventHandleTakeAnyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamagedActor = { UE4CodeGen_Private::EPropertyClass::Object, "DamagedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HealthComponent_eventHandleTakeAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, "HandleTakeAnyDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(HealthComponent_eventHandleTakeAnyDamage_Parms), Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics
	{
		struct HealthComponent_eventIsFriendly_Parms
		{
			AActor* ActorA;
			AActor* ActorB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorB;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HealthComponent_eventIsFriendly_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HealthComponent_eventIsFriendly_Parms), &Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::NewProp_ActorB = { UE4CodeGen_Private::EPropertyClass::Object, "ActorB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HealthComponent_eventIsFriendly_Parms, ActorB), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::NewProp_ActorA = { UE4CodeGen_Private::EPropertyClass::Object, "ActorA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HealthComponent_eventIsFriendly_Parms, ActorA), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::NewProp_ActorB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::NewProp_ActorA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::Function_MetaDataParams[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, "IsFriendly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HealthComponent_eventIsFriendly_Parms), Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_IsFriendly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_IsFriendly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics
	{
		struct HealthComponent_eventOnRep_Health_Parms
		{
			float OlHealth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OlHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::NewProp_OlHealth = { UE4CodeGen_Private::EPropertyClass::Float, "OlHealth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HealthComponent_eventOnRep_Health_Parms, OlHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::NewProp_OlHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, "OnRep_Health", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(HealthComponent_eventOnRep_Health_Parms), Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthComponent_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
	{
		return UHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TeamNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthComponent_AHealth, "AHealth" }, // 46609444
		{ &Z_Construct_UFunction_UHealthComponent_ContinuousHealth, "ContinuousHealth" }, // 1185535450
		{ &Z_Construct_UFunction_UHealthComponent_GetHealth, "GetHealth" }, // 842996068
		{ &Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage, "HandleTakeAnyDamage" }, // 584226390
		{ &Z_Construct_UFunction_UHealthComponent_IsFriendly, "IsFriendly" }, // 1479969271
		{ &Z_Construct_UFunction_UHealthComponent_OnRep_Health, "OnRep_Health" }, // 595409510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/HealthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_V_OnHealthChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_DefaultHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_DefaultHealth = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultHealth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UHealthComponent, DefaultHealth), METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_DefaultHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_DefaultHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_TeamNum_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_TeamNum = { UE4CodeGen_Private::EPropertyClass::Byte, "TeamNum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010021, 1, nullptr, STRUCT_OFFSET(UHealthComponent, TeamNum), nullptr, METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_TeamNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_TeamNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000034, 1, "OnRep_Health", STRUCT_OFFSET(UHealthComponent, Health), METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_DefaultHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_TeamNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponent_Statics::ClassParams = {
		&UHealthComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UHealthComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealthComponent, 2019673794);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealthComponent(Z_Construct_UClass_UHealthComponent, &UHealthComponent::StaticClass, TEXT("/Script/V"), TEXT("UHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
