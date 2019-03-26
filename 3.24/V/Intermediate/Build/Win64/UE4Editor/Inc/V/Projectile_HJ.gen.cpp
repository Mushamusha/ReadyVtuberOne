// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/Projectile_HJ.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile_HJ() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_AProjectile_HJ_NoRegister();
	V_API UClass* Z_Construct_UClass_AProjectile_HJ();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_V();
	V_API UFunction* Z_Construct_UFunction_AProjectile_HJ_OnHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AProjectile_HJ::StaticRegisterNativesAProjectile_HJ()
	{
		UClass* Class = AProjectile_HJ::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AProjectile_HJ::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics
	{
		struct Projectile_HJ_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Projectile_HJ_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Projectile_HJ_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Projectile_HJ_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Projectile_HJ_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_HitComp = { UE4CodeGen_Private::EPropertyClass::Object, "HitComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Projectile_HJ_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_HitComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::NewProp_HitComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile_HJ.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_HJ, "OnHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C80401, sizeof(Projectile_HJ_eventOnHit_Parms), Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectile_HJ_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectile_HJ_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectile_HJ_NoRegister()
	{
		return AProjectile_HJ::StaticClass();
	}
	struct Z_Construct_UClass_AProjectile_HJ_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodeEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodeEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodeSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectile_HJ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectile_HJ_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectile_HJ_OnHit, "OnHit" }, // 2655905069
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_HJ_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile_HJ.h" },
		{ "ModuleRelativePath", "Public/Projectile_HJ.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_ExplodeEffect_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Projectile_HJ.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_ExplodeEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ExplodeEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AProjectile_HJ, ExplodeEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_ExplodeEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_ExplodeEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_ExplodeSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Projectile_HJ.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_ExplodeSound = { UE4CodeGen_Private::EPropertyClass::Object, "ExplodeSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AProjectile_HJ, ExplodeSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_ExplodeSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_ExplodeSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile_HJ.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_SphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AProjectile_HJ, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_SphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_SphereComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectile_HJ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_ExplodeEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_ExplodeSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_HJ_Statics::NewProp_SphereComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectile_HJ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile_HJ>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectile_HJ_Statics::ClassParams = {
		&AProjectile_HJ::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AProjectile_HJ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AProjectile_HJ_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProjectile_HJ_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectile_HJ_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectile_HJ()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectile_HJ_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectile_HJ, 74489669);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile_HJ(Z_Construct_UClass_AProjectile_HJ, &AProjectile_HJ::StaticClass, TEXT("/Script/V"), TEXT("AProjectile_HJ"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile_HJ);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
