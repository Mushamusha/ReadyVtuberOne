// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/ZombleAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombleAIController() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_AZombleAIController_NoRegister();
	V_API UClass* Z_Construct_UClass_AZombleAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_V();
// End Cross Module References
	void AZombleAIController::StaticRegisterNativesAZombleAIController()
	{
	}
	UClass* Z_Construct_UClass_AZombleAIController_NoRegister()
	{
		return AZombleAIController::StaticClass();
	}
	struct Z_Construct_UClass_AZombleAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombleAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombleAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ZombleAIController.h" },
		{ "ModuleRelativePath", "Public/ZombleAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombleAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombleAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombleAIController_Statics::ClassParams = {
		&AZombleAIController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AZombleAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AZombleAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombleAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombleAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombleAIController, 3549488988);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombleAIController(Z_Construct_UClass_AZombleAIController, &AZombleAIController::StaticClass, TEXT("/Script/V"), TEXT("AZombleAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombleAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
