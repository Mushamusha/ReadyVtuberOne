// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/SDWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDWeapon() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_ASDWeapon_NoRegister();
	V_API UClass* Z_Construct_UClass_ASDWeapon();
	V_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_V();
// End Cross Module References
	void ASDWeapon::StaticRegisterNativesASDWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASDWeapon_NoRegister()
	{
		return ASDWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASDWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASDWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SDWeapon.h" },
		{ "ModuleRelativePath", "Public/SDWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASDWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASDWeapon_Statics::ClassParams = {
		&ASDWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASDWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASDWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASDWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASDWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASDWeapon, 1005619664);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASDWeapon(Z_Construct_UClass_ASDWeapon, &ASDWeapon::StaticClass, TEXT("/Script/V"), TEXT("ASDWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASDWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
