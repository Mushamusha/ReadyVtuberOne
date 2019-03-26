// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/AI/ball.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeball() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_Aball_NoRegister();
	V_API UClass* Z_Construct_UClass_Aball();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_V();
	V_API UFunction* Z_Construct_UFunction_Aball_HandleTakeDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	V_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void Aball::StaticRegisterNativesAball()
	{
		UClass* Class = Aball::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakeDamage", &Aball::execHandleTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aball_HandleTakeDamage_Statics
	{
		struct ball_eventHandleTakeDamage_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ball_eventHandleTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ball_eventHandleTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ball_eventHandleTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ball_eventHandleTakeDamage_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ball_eventHandleTakeDamage_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_OwingHealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_OwingHealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "OwingHealthComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ball_eventHandleTakeDamage_Parms, OwingHealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_OwingHealthComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_OwingHealthComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::NewProp_OwingHealthComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aball, "HandleTakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(ball_eventHandleTakeDamage_Parms), Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aball_HandleTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aball_HandleTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aball_NoRegister()
	{
		return Aball::StaticClass();
	}
	struct Z_Construct_UClass_Aball_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfDestructSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfDestructSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodeSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityChange_MetaData[];
#endif
		static void NewProp_bUseVelocityChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDistanceToTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredDistanceToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphrerComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphrerComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aball_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aball_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aball_HandleTakeDamage, "HandleTakeDamage" }, // 843001775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/ball.h" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::NewProp_SelfDestructSound_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aball_Statics::NewProp_SelfDestructSound = { UE4CodeGen_Private::EPropertyClass::Object, "SelfDestructSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(Aball, SelfDestructSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::NewProp_SelfDestructSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::NewProp_SelfDestructSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::NewProp_ExplodeSound_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aball_Statics::NewProp_ExplodeSound = { UE4CodeGen_Private::EPropertyClass::Object, "ExplodeSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(Aball, ExplodeSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::NewProp_ExplodeSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::NewProp_ExplodeSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aball_Statics::NewProp_ExplosionDamage = { UE4CodeGen_Private::EPropertyClass::Float, "ExplosionDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(Aball, ExplosionDamage), METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::NewProp_ExplosionDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::NewProp_ExplosionDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aball_Statics::NewProp_ExplosionRadius = { UE4CodeGen_Private::EPropertyClass::Float, "ExplosionRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(Aball, ExplosionRadius), METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::NewProp_ExplosionRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::NewProp_ExplosionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aball_Statics::NewProp_ExplosionEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ExplosionEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(Aball, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::NewProp_ExplosionEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::NewProp_bUseVelocityChange_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
	void Z_Construct_UClass_Aball_Statics::NewProp_bUseVelocityChange_SetBit(void* Obj)
	{
		((Aball*)Obj)->bUseVelocityChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aball_Statics::NewProp_bUseVelocityChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseVelocityChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Aball), &Z_Construct_UClass_Aball_Statics::NewProp_bUseVelocityChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::NewProp_bUseVelocityChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::NewProp_bUseVelocityChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::NewProp_RequiredDistanceToTarget_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aball_Statics::NewProp_RequiredDistanceToTarget = { UE4CodeGen_Private::EPropertyClass::Float, "RequiredDistanceToTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(Aball, RequiredDistanceToTarget), METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::NewProp_RequiredDistanceToTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::NewProp_RequiredDistanceToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::NewProp_MovementForce_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aball_Statics::NewProp_MovementForce = { UE4CodeGen_Private::EPropertyClass::Float, "MovementForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(Aball, MovementForce), METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::NewProp_MovementForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::NewProp_MovementForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::NewProp_SphrerComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aball_Statics::NewProp_SphrerComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphrerComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000090009, 1, nullptr, STRUCT_OFFSET(Aball, SphrerComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::NewProp_SphrerComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::NewProp_SphrerComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aball_Statics::NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(Aball, HealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::NewProp_HealthComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aball_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/ball.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xcc\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aball_Statics::NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(Aball, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aball_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aball_Statics::NewProp_SelfDestructSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aball_Statics::NewProp_ExplodeSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aball_Statics::NewProp_ExplosionDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aball_Statics::NewProp_ExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aball_Statics::NewProp_ExplosionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aball_Statics::NewProp_bUseVelocityChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aball_Statics::NewProp_RequiredDistanceToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aball_Statics::NewProp_MovementForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aball_Statics::NewProp_SphrerComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aball_Statics::NewProp_HealthComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aball_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aball_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aball>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aball_Statics::ClassParams = {
		&Aball::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_Aball_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_Aball_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Aball_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aball()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aball_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aball, 1420283176);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aball(Z_Construct_UClass_Aball, &Aball::StaticClass, TEXT("/Script/V"), TEXT("Aball"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aball);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
