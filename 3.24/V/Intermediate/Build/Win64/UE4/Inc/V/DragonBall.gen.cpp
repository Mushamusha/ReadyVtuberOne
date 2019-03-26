// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/DragonBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragonBall() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_ADragonBall_NoRegister();
	V_API UClass* Z_Construct_UClass_ADragonBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_V();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ADragonBall::StaticRegisterNativesADragonBall()
	{
	}
	UClass* Z_Construct_UClass_ADragonBall_NoRegister()
	{
		return ADragonBall::StaticClass();
	}
	struct Z_Construct_UClass_ADragonBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADragonBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADragonBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DragonBall.h" },
		{ "ModuleRelativePath", "Public/DragonBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADragonBall_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/DragonBall.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, Category = \"Components\")\nUDecalComponent* DecalComp;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADragonBall_Statics::NewProp_Effects = { UE4CodeGen_Private::EPropertyClass::Object, "Effects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ADragonBall, Effects), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADragonBall_Statics::NewProp_Effects_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADragonBall_Statics::NewProp_Effects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADragonBall_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DragonBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADragonBall_Statics::NewProp_SphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ADragonBall, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADragonBall_Statics::NewProp_SphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADragonBall_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADragonBall_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DragonBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADragonBall_Statics::NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ADragonBall, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADragonBall_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADragonBall_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADragonBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADragonBall_Statics::NewProp_Effects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADragonBall_Statics::NewProp_SphereComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADragonBall_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADragonBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADragonBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADragonBall_Statics::ClassParams = {
		&ADragonBall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ADragonBall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ADragonBall_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADragonBall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADragonBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADragonBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADragonBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADragonBall, 3534358014);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADragonBall(Z_Construct_UClass_ADragonBall, &ADragonBall::StaticClass, TEXT("/Script/V"), TEXT("ADragonBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADragonBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
