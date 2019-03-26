// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/Jiacheng.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJiacheng() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_AJiacheng_NoRegister();
	V_API UClass* Z_Construct_UClass_AJiacheng();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_V();
	V_API UFunction* Z_Construct_UFunction_AJiacheng_OnActivated();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	V_API UFunction* Z_Construct_UFunction_AJiacheng_OnExpired();
	V_API UFunction* Z_Construct_UFunction_AJiacheng_OnPowerUpTick();
	V_API UFunction* Z_Construct_UFunction_AJiacheng_OnRep_Active();
	V_API UFunction* Z_Construct_UFunction_AJiacheng_OnStateChange();
	V_API UFunction* Z_Construct_UFunction_AJiacheng_OnTickPowerUp();
// End Cross Module References
	static FName NAME_AJiacheng_OnActivated = FName(TEXT("OnActivated"));
	void AJiacheng::OnActivated(AActor* OtherActor)
	{
		Jiacheng_eventOnActivated_Parms Parms;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_AJiacheng_OnActivated),&Parms);
	}
	static FName NAME_AJiacheng_OnExpired = FName(TEXT("OnExpired"));
	void AJiacheng::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJiacheng_OnExpired),NULL);
	}
	static FName NAME_AJiacheng_OnPowerUpTick = FName(TEXT("OnPowerUpTick"));
	void AJiacheng::OnPowerUpTick()
	{
		ProcessEvent(FindFunctionChecked(NAME_AJiacheng_OnPowerUpTick),NULL);
	}
	static FName NAME_AJiacheng_OnStateChange = FName(TEXT("OnStateChange"));
	void AJiacheng::OnStateChange(bool bNewIsActive)
	{
		Jiacheng_eventOnStateChange_Parms Parms;
		Parms.bNewIsActive=bNewIsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AJiacheng_OnStateChange),&Parms);
	}
	void AJiacheng::StaticRegisterNativesAJiacheng()
	{
		UClass* Class = AJiacheng::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Active", &AJiacheng::execOnRep_Active },
			{ "OnTickPowerUp", &AJiacheng::execOnTickPowerUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJiacheng_OnActivated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJiacheng_OnActivated_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Jiacheng_eventOnActivated_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJiacheng_OnActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJiacheng_OnActivated_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJiacheng_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Xiaoguo" },
		{ "ModuleRelativePath", "Public/Jiacheng.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJiacheng_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJiacheng, "OnActivated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Jiacheng_eventOnActivated_Parms), Z_Construct_UFunction_AJiacheng_OnActivated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AJiacheng_OnActivated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJiacheng_OnActivated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AJiacheng_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJiacheng_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJiacheng_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJiacheng_OnExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJiacheng_OnExpired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Xiaoguo" },
		{ "ModuleRelativePath", "Public/Jiacheng.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJiacheng_OnExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJiacheng, "OnExpired", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJiacheng_OnExpired_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AJiacheng_OnExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJiacheng_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJiacheng_OnExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJiacheng_OnPowerUpTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJiacheng_OnPowerUpTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Xiaoguo" },
		{ "ModuleRelativePath", "Public/Jiacheng.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJiacheng_OnPowerUpTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJiacheng, "OnPowerUpTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJiacheng_OnPowerUpTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AJiacheng_OnPowerUpTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJiacheng_OnPowerUpTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJiacheng_OnPowerUpTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJiacheng_OnRep_Active_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJiacheng_OnRep_Active_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Jiacheng.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJiacheng_OnRep_Active_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJiacheng, "OnRep_Active", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJiacheng_OnRep_Active_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AJiacheng_OnRep_Active_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJiacheng_OnRep_Active()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJiacheng_OnRep_Active_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJiacheng_OnStateChange_Statics
	{
		static void NewProp_bNewIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::NewProp_bNewIsActive_SetBit(void* Obj)
	{
		((Jiacheng_eventOnStateChange_Parms*)Obj)->bNewIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::NewProp_bNewIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewIsActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Jiacheng_eventOnStateChange_Parms), &Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::NewProp_bNewIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::NewProp_bNewIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Xiaoguo" },
		{ "ModuleRelativePath", "Public/Jiacheng.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJiacheng, "OnStateChange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(Jiacheng_eventOnStateChange_Parms), Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJiacheng_OnStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJiacheng_OnStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJiacheng_OnTickPowerUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJiacheng_OnTickPowerUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Jiacheng.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJiacheng_OnTickPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJiacheng, "OnTickPowerUp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJiacheng_OnTickPowerUp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AJiacheng_OnTickPowerUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJiacheng_OnTickPowerUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJiacheng_OnTickPowerUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AJiacheng_NoRegister()
	{
		return AJiacheng::StaticClass();
	}
	struct Z_Construct_UClass_AJiacheng_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZongCiShu_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZongCiShu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChiXuShiJian_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChiXuShiJian;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJiacheng_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AJiacheng_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJiacheng_OnActivated, "OnActivated" }, // 3856544200
		{ &Z_Construct_UFunction_AJiacheng_OnExpired, "OnExpired" }, // 2486572991
		{ &Z_Construct_UFunction_AJiacheng_OnPowerUpTick, "OnPowerUpTick" }, // 2089463857
		{ &Z_Construct_UFunction_AJiacheng_OnRep_Active, "OnRep_Active" }, // 2680808047
		{ &Z_Construct_UFunction_AJiacheng_OnStateChange, "OnStateChange" }, // 1735573581
		{ &Z_Construct_UFunction_AJiacheng_OnTickPowerUp, "OnTickPowerUp" }, // 3967061317
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJiacheng_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Jiacheng.h" },
		{ "ModuleRelativePath", "Public/Jiacheng.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJiacheng_Statics::NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Jiacheng.h" },
	};
#endif
	void Z_Construct_UClass_AJiacheng_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((AJiacheng*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AJiacheng_Statics::NewProp_bIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_Active", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AJiacheng), &Z_Construct_UClass_AJiacheng_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AJiacheng_Statics::NewProp_bIsActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AJiacheng_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJiacheng_Statics::NewProp_ZongCiShu_MetaData[] = {
		{ "Category", "Jiacheng" },
		{ "ModuleRelativePath", "Public/Jiacheng.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AJiacheng_Statics::NewProp_ZongCiShu = { UE4CodeGen_Private::EPropertyClass::Int, "ZongCiShu", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AJiacheng, ZongCiShu), METADATA_PARAMS(Z_Construct_UClass_AJiacheng_Statics::NewProp_ZongCiShu_MetaData, ARRAY_COUNT(Z_Construct_UClass_AJiacheng_Statics::NewProp_ZongCiShu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJiacheng_Statics::NewProp_ChiXuShiJian_MetaData[] = {
		{ "Category", "Jiacheng" },
		{ "ModuleRelativePath", "Public/Jiacheng.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJiacheng_Statics::NewProp_ChiXuShiJian = { UE4CodeGen_Private::EPropertyClass::Float, "ChiXuShiJian", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AJiacheng, ChiXuShiJian), METADATA_PARAMS(Z_Construct_UClass_AJiacheng_Statics::NewProp_ChiXuShiJian_MetaData, ARRAY_COUNT(Z_Construct_UClass_AJiacheng_Statics::NewProp_ChiXuShiJian_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJiacheng_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJiacheng_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJiacheng_Statics::NewProp_ZongCiShu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJiacheng_Statics::NewProp_ChiXuShiJian,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJiacheng_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJiacheng>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJiacheng_Statics::ClassParams = {
		&AJiacheng::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AJiacheng_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AJiacheng_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AJiacheng_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AJiacheng_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJiacheng()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJiacheng_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJiacheng, 2205009839);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJiacheng(Z_Construct_UClass_AJiacheng, &AJiacheng::StaticClass, TEXT("/Script/V"), TEXT("AJiacheng"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJiacheng);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
