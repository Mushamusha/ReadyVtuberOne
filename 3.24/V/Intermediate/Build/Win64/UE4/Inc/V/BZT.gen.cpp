// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/BZT.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBZT() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_ABZT_NoRegister();
	V_API UClass* Z_Construct_UClass_ABZT();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_V();
	V_API UFunction* Z_Construct_UFunction_ABZT_OHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	V_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABZT::StaticRegisterNativesABZT()
	{
		UClass* Class = ABZT::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OHealthChanged", &ABZT::execOHealthChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABZT_OHealthChanged_Statics
	{
		struct BZT_eventOHealthChanged_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BZT_eventOHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BZT_eventOHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(BZT_eventOHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BZT_eventOHealthChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BZT_eventOHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_OwingHealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_OwingHealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "OwingHealthComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BZT_eventOHealthChanged_Parms, OwingHealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_OwingHealthComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_OwingHealthComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABZT_OHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABZT_OHealthChanged_Statics::NewProp_OwingHealthComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABZT_OHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BZT.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABZT_OHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABZT, "OHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(BZT_eventOHealthChanged_Parms), Z_Construct_UFunction_ABZT_OHealthChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABZT_OHealthChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABZT_OHealthChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABZT_OHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABZT_OHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABZT_OHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABZT_NoRegister()
	{
		return ABZT::StaticClass();
	}
	struct Z_Construct_UClass_ABZT_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadialComp;
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
	UObject* (*const Z_Construct_UClass_ABZT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABZT_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABZT_OHealthChanged, "OHealthChanged" }, // 1228894734
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABZT_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BZT.h" },
		{ "ModuleRelativePath", "Public/BZT.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABZT_Statics::NewProp_ExplodedMaterial_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/BZT.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABZT_Statics::NewProp_ExplodedMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ExplodedMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABZT, ExplodedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABZT_Statics::NewProp_ExplodedMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABZT_Statics::NewProp_ExplodedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABZT_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/BZT.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABZT_Statics::NewProp_ExplosionEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ExplosionEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABZT, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABZT_Statics::NewProp_ExplosionEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABZT_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABZT_Statics::NewProp_ExplosionImpulse_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/BZT.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABZT_Statics::NewProp_ExplosionImpulse = { UE4CodeGen_Private::EPropertyClass::Float, "ExplosionImpulse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABZT, ExplosionImpulse), METADATA_PARAMS(Z_Construct_UClass_ABZT_Statics::NewProp_ExplosionImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABZT_Statics::NewProp_ExplosionImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABZT_Statics::NewProp_RadialComp_MetaData[] = {
		{ "Category", "RadialComp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BZT.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABZT_Statics::NewProp_RadialComp = { UE4CodeGen_Private::EPropertyClass::Object, "RadialComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABZT, RadialComp), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABZT_Statics::NewProp_RadialComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABZT_Statics::NewProp_RadialComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABZT_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "HealthComp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BZT.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABZT_Statics::NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABZT, HealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABZT_Statics::NewProp_HealthComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABZT_Statics::NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABZT_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "MeshComp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BZT.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABZT_Statics::NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABZT, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABZT_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABZT_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABZT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABZT_Statics::NewProp_ExplodedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABZT_Statics::NewProp_ExplosionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABZT_Statics::NewProp_ExplosionImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABZT_Statics::NewProp_RadialComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABZT_Statics::NewProp_HealthComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABZT_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABZT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABZT>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABZT_Statics::ClassParams = {
		&ABZT::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABZT_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABZT_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABZT_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABZT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABZT()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABZT_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABZT, 1278141912);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABZT(Z_Construct_UClass_ABZT, &ABZT::StaticClass, TEXT("/Script/V"), TEXT("ABZT"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABZT);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
