// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/Rocketsweapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocketsweapon() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_ARocketsweapon_NoRegister();
	V_API UClass* Z_Construct_UClass_ARocketsweapon();
	V_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_V();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ARocketsweapon::StaticRegisterNativesARocketsweapon()
	{
	}
	UClass* Z_Construct_UClass_ARocketsweapon_NoRegister()
	{
		return ARocketsweapon::StaticClass();
	}
	struct Z_Construct_UClass_ARocketsweapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARocketsweapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARocketsweapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Rocketsweapon.h" },
		{ "ModuleRelativePath", "Public/Rocketsweapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARocketsweapon_Statics::NewProp_projectile_MetaData[] = {
		{ "Category", "projectile" },
		{ "ModuleRelativePath", "Public/Rocketsweapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARocketsweapon_Statics::NewProp_projectile = { UE4CodeGen_Private::EPropertyClass::Class, "projectile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ARocketsweapon, projectile), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARocketsweapon_Statics::NewProp_projectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARocketsweapon_Statics::NewProp_projectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARocketsweapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARocketsweapon_Statics::NewProp_projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARocketsweapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARocketsweapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARocketsweapon_Statics::ClassParams = {
		&ARocketsweapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ARocketsweapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ARocketsweapon_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARocketsweapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARocketsweapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARocketsweapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARocketsweapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARocketsweapon, 3943804708);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARocketsweapon(Z_Construct_UClass_ARocketsweapon, &ARocketsweapon::StaticClass, TEXT("/Script/V"), TEXT("ARocketsweapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARocketsweapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
