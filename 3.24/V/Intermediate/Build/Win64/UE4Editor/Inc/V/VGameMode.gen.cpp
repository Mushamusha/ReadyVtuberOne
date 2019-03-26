// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/VGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVGameMode() {}
// Cross Module References
	V_API UFunction* Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_V();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	V_API UClass* Z_Construct_UClass_AVGameMode_NoRegister();
	V_API UClass* Z_Construct_UClass_AVGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	V_API UFunction* Z_Construct_UFunction_AVGameMode_SpawnNewBot();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics
	{
		struct _Script_V_eventOnActorKilled_Parms
		{
			AActor* VictmActor;
			AActor* KillerActor;
			AController* KillerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictmActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::NewProp_KillerController = { UE4CodeGen_Private::EPropertyClass::Object, "KillerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_V_eventOnActorKilled_Parms, KillerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::NewProp_KillerActor = { UE4CodeGen_Private::EPropertyClass::Object, "KillerActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_V_eventOnActorKilled_Parms, KillerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::NewProp_VictmActor = { UE4CodeGen_Private::EPropertyClass::Object, "VictmActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_V_eventOnActorKilled_Parms, VictmActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::NewProp_KillerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::NewProp_KillerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::NewProp_VictmActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_V, "OnActorKilled__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_V_eventOnActorKilled_Parms), Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AVGameMode_SpawnNewBot = FName(TEXT("SpawnNewBot"));
	void AVGameMode::SpawnNewBot()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVGameMode_SpawnNewBot),NULL);
	}
	void AVGameMode::StaticRegisterNativesAVGameMode()
	{
	}
	struct Z_Construct_UFunction_AVGameMode_SpawnNewBot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVGameMode_SpawnNewBot_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/VGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVGameMode_SpawnNewBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVGameMode, "SpawnNewBot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVGameMode_SpawnNewBot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVGameMode_SpawnNewBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVGameMode_SpawnNewBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVGameMode_SpawnNewBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVGameMode_NoRegister()
	{
		return AVGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AVGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorKilled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorKilled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeBetweenWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVGameMode_SpawnNewBot, "SpawnNewBot" }, // 2472201029
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VGameMode.h" },
		{ "ModuleRelativePath", "Public/VGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVGameMode_Statics::NewProp_OnActorKilled_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/VGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVGameMode_Statics::NewProp_OnActorKilled = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnActorKilled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AVGameMode, OnActorKilled), Z_Construct_UDelegateFunction_V_OnActorKilled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AVGameMode_Statics::NewProp_OnActorKilled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVGameMode_Statics::NewProp_OnActorKilled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVGameMode_Statics::NewProp_TimeBetweenWave_MetaData[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/VGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVGameMode_Statics::NewProp_TimeBetweenWave = { UE4CodeGen_Private::EPropertyClass::Int, "TimeBetweenWave", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AVGameMode, TimeBetweenWave), METADATA_PARAMS(Z_Construct_UClass_AVGameMode_Statics::NewProp_TimeBetweenWave_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVGameMode_Statics::NewProp_TimeBetweenWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVGameMode_Statics::NewProp_OnActorKilled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVGameMode_Statics::NewProp_TimeBetweenWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVGameMode_Statics::ClassParams = {
		&AVGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AVGameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AVGameMode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVGameMode, 2360914402);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVGameMode(Z_Construct_UClass_AVGameMode, &AVGameMode::StaticClass, TEXT("/Script/V"), TEXT("AVGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
