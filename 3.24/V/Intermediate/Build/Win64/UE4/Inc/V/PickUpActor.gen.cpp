// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/PickUpActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpActor() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_APickUpActor_NoRegister();
	V_API UClass* Z_Construct_UClass_APickUpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_V();
	V_API UFunction* Z_Construct_UFunction_APickUpActor_Respawn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	V_API UClass* Z_Construct_UClass_AJiacheng_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void APickUpActor::StaticRegisterNativesAPickUpActor()
	{
		UClass* Class = APickUpActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Respawn", &APickUpActor::execRespawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickUpActor_Respawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUpActor_Respawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpActor_Respawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUpActor, "Respawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUpActor_Respawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickUpActor_Respawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUpActor_Respawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUpActor_Respawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickUpActor_NoRegister()
	{
		return APickUpActor::StaticClass();
	}
	struct Z_Construct_UClass_APickUpActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CD_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JiachengClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_JiachengClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUpActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickUpActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUpActor_Respawn, "Respawn" }, // 2158923527
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUpActor.h" },
		{ "ModuleRelativePath", "Public/PickUpActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_CD_MetaData[] = {
		{ "Category", "Jiacheng" },
		{ "ModuleRelativePath", "Public/PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_CD = { UE4CodeGen_Private::EPropertyClass::Float, "CD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(APickUpActor, CD), METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_CD_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_CD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_JiachengClass_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_JiachengClass = { UE4CodeGen_Private::EPropertyClass::Class, "JiachengClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000801, 1, nullptr, STRUCT_OFFSET(APickUpActor, JiachengClass), Z_Construct_UClass_AJiacheng_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_JiachengClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_JiachengClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_DecalComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_DecalComp = { UE4CodeGen_Private::EPropertyClass::Object, "DecalComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(APickUpActor, DecalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_DecalComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_DecalComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_SphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(APickUpActor, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_SphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_SphereComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUpActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_CD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_JiachengClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_DecalComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_SphereComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUpActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickUpActor_Statics::ClassParams = {
		&APickUpActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APickUpActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickUpActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickUpActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickUpActor, 2808529557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickUpActor(Z_Construct_UClass_APickUpActor, &APickUpActor::StaticClass, TEXT("/Script/V"), TEXT("APickUpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
