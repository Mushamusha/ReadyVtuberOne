// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/BlackHole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackHole() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_ABlackHole_NoRegister();
	V_API UClass* Z_Construct_UClass_ABlackHole();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_V();
	V_API UFunction* Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	V_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABlackHole::StaticRegisterNativesABlackHole()
	{
		UClass* Class = ABlackHole::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InnerSphereBeginOverlap", &ABlackHole::execInnerSphereBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics
	{
		struct BlackHole_eventInnerSphereBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(BlackHole_eventInnerSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BlackHole_eventInnerSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlackHole_eventInnerSphereBeginOverlap_Parms), &Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackHole_eventInnerSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BlackHole_eventInnerSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackHole_eventInnerSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BlackHole_eventInnerSphereBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlackHole, "InnerSphereBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(BlackHole_eventInnerSphereBeginOverlap_Parms), Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABlackHole_NoRegister()
	{
		return ABlackHole::StaticClass();
	}
	struct Z_Construct_UClass_ABlackHole_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterSphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OuterSphereComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerSphereComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InnerSphereComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlackHole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlackHole_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlackHole_InnerSphereBeginOverlap, "InnerSphereBeginOverlap" }, // 3478702264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlackHole.h" },
		{ "ModuleRelativePath", "Public/BlackHole.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABlackHole, HealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::NewProp_HealthComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::NewProp_OuterSphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_OuterSphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "OuterSphereComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABlackHole, OuterSphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::NewProp_OuterSphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::NewProp_OuterSphereComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::NewProp_InnerSphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_InnerSphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "InnerSphereComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABlackHole, InnerSphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::NewProp_InnerSphereComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::NewProp_InnerSphereComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHole_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABlackHole, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlackHole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_HealthComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_OuterSphereComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_InnerSphereComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlackHole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlackHole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlackHole_Statics::ClassParams = {
		&ABlackHole::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABlackHole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABlackHole_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlackHole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlackHole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlackHole, 3044937234);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlackHole(Z_Construct_UClass_ABlackHole, &ABlackHole::StaticClass, TEXT("/Script/V"), TEXT("ABlackHole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlackHole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
