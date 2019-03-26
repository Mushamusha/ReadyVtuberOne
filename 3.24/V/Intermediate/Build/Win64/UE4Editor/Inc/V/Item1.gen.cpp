// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/Item1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem1() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_AItem1_NoRegister();
	V_API UClass* Z_Construct_UClass_AItem1();
	V_API UClass* Z_Construct_UClass_ADragonBall();
	UPackage* Z_Construct_UPackage__Script_V();
// End Cross Module References
	void AItem1::StaticRegisterNativesAItem1()
	{
	}
	UClass* Z_Construct_UClass_AItem1_NoRegister()
	{
		return AItem1::StaticClass();
	}
	struct Z_Construct_UClass_AItem1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADragonBall,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item1.h" },
		{ "ModuleRelativePath", "Public/Item1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItem1_Statics::ClassParams = {
		&AItem1::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AItem1_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AItem1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItem1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItem1, 2077949989);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItem1(Z_Construct_UClass_AItem1, &AItem1::StaticClass, TEXT("/Script/V"), TEXT("AItem1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
