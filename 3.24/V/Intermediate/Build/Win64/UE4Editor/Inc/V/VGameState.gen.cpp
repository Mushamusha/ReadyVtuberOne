// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/VGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVGameState() {}
// Cross Module References
	V_API UEnum* Z_Construct_UEnum_V_EWaveStae();
	UPackage* Z_Construct_UPackage__Script_V();
	V_API UClass* Z_Construct_UClass_AVGameState_NoRegister();
	V_API UClass* Z_Construct_UClass_AVGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	V_API UFunction* Z_Construct_UFunction_AVGameState_OnRep_WaveState();
	V_API UFunction* Z_Construct_UFunction_AVGameState_WaveStateChanged();
// End Cross Module References
	static UEnum* EWaveStae_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_V_EWaveStae, Z_Construct_UPackage__Script_V(), TEXT("EWaveStae"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWaveStae(EWaveStae_StaticEnum, TEXT("/Script/V"), TEXT("EWaveStae"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_V_EWaveStae_CRC() { return 1948335820U; }
	UEnum* Z_Construct_UEnum_V_EWaveStae()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_V();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWaveStae"), 0, Get_Z_Construct_UEnum_V_EWaveStae_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWaveStae::WaitingToStart", (int64)EWaveStae::WaitingToStart },
				{ "EWaveStae::WaveInPRogeress", (int64)EWaveStae::WaveInPRogeress },
				{ "EWaveStae::WaitingToComplete", (int64)EWaveStae::WaitingToComplete },
				{ "EWaveStae::WaveComplete", (int64)EWaveStae::WaveComplete },
				{ "EWaveStae::GameOver", (int64)EWaveStae::GameOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_V,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWaveStae",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWaveStae",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AVGameState_WaveStateChanged = FName(TEXT("WaveStateChanged"));
	void AVGameState::WaveStateChanged(EWaveStae NewState, EWaveStae OldState)
	{
		VGameState_eventWaveStateChanged_Parms Parms;
		Parms.NewState=NewState;
		Parms.OldState=OldState;
		ProcessEvent(FindFunctionChecked(NAME_AVGameState_WaveStateChanged),&Parms);
	}
	void AVGameState::StaticRegisterNativesAVGameState()
	{
		UClass* Class = AVGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_WaveState", &AVGameState::execOnRep_WaveState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics
	{
		struct VGameState_eventOnRep_WaveState_Parms
		{
			EWaveStae OldState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::NewProp_OldState = { UE4CodeGen_Private::EPropertyClass::Enum, "OldState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VGameState_eventOnRep_WaveState_Parms, OldState), Z_Construct_UEnum_V_EWaveStae, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::NewProp_OldState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::NewProp_OldState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVGameState, "OnRep_WaveState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(VGameState_eventOnRep_WaveState_Parms), Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVGameState_OnRep_WaveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVGameState_OnRep_WaveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::NewProp_OldState = { UE4CodeGen_Private::EPropertyClass::Enum, "OldState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VGameState_eventWaveStateChanged_Parms, OldState), Z_Construct_UEnum_V_EWaveStae, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::NewProp_OldState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::NewProp_NewState = { UE4CodeGen_Private::EPropertyClass::Enum, "NewState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VGameState_eventWaveStateChanged_Parms, NewState), Z_Construct_UEnum_V_EWaveStae, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::NewProp_NewState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::NewProp_NewState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Public/VGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVGameState, "WaveStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(VGameState_eventWaveStateChanged_Parms), Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVGameState_WaveStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVGameState_WaveStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVGameState_NoRegister()
	{
		return AVGameState::StaticClass();
	}
	struct Z_Construct_UClass_AVGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WaveState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WaveState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVGameState_OnRep_WaveState, "OnRep_WaveState" }, // 1019651542
		{ &Z_Construct_UFunction_AVGameState_WaveStateChanged, "WaveStateChanged" }, // 3293577968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VGameState.h" },
		{ "ModuleRelativePath", "Public/VGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVGameState_Statics::NewProp_WaveState_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Public/VGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVGameState_Statics::NewProp_WaveState = { UE4CodeGen_Private::EPropertyClass::Enum, "WaveState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000034, 1, "OnRep_WaveState", STRUCT_OFFSET(AVGameState, WaveState), Z_Construct_UEnum_V_EWaveStae, METADATA_PARAMS(Z_Construct_UClass_AVGameState_Statics::NewProp_WaveState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVGameState_Statics::NewProp_WaveState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVGameState_Statics::NewProp_WaveState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVGameState_Statics::NewProp_WaveState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVGameState_Statics::NewProp_WaveState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVGameState_Statics::ClassParams = {
		&AVGameState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AVGameState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AVGameState_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVGameState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVGameState, 3799035715);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVGameState(Z_Construct_UClass_AVGameState, &AVGameState::StaticClass, TEXT("/Script/V"), TEXT("AVGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
