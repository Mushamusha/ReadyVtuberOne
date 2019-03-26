// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/VPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPlayerState() {}
// Cross Module References
	V_API UClass* Z_Construct_UClass_AVPlayerState_NoRegister();
	V_API UClass* Z_Construct_UClass_AVPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_V();
	V_API UFunction* Z_Construct_UFunction_AVPlayerState_AddScore();
// End Cross Module References
	void AVPlayerState::StaticRegisterNativesAVPlayerState()
	{
		UClass* Class = AVPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScore", &AVPlayerState::execAddScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVPlayerState_AddScore_Statics
	{
		struct VPlayerState_eventAddScore_Parms
		{
			float ScoreDelta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVPlayerState_AddScore_Statics::NewProp_ScoreDelta = { UE4CodeGen_Private::EPropertyClass::Float, "ScoreDelta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VPlayerState_eventAddScore_Parms, ScoreDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVPlayerState_AddScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVPlayerState_AddScore_Statics::NewProp_ScoreDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPlayerState_AddScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Public/VPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPlayerState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPlayerState, "AddScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VPlayerState_eventAddScore_Parms), Z_Construct_UFunction_AVPlayerState_AddScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVPlayerState_AddScore_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPlayerState_AddScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVPlayerState_AddScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPlayerState_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVPlayerState_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVPlayerState_NoRegister()
	{
		return AVPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AVPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVPlayerState_AddScore, "AddScore" }, // 378730942
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VPlayerState.h" },
		{ "ModuleRelativePath", "Public/VPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVPlayerState_Statics::ClassParams = {
		&AVPlayerState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVPlayerState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVPlayerState, 1348569481);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVPlayerState(Z_Construct_UClass_AVPlayerState, &AVPlayerState::StaticClass, TEXT("/Script/V"), TEXT("AVPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
