// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	V_API UEnum* Z_Construct_UEnum_V_EWeaponState();
	UPackage* Z_Construct_UPackage__Script_V();
	V_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	V_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	V_API UClass* Z_Construct_UClass_AWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	V_API UFunction* Z_Construct_UFunction_AWeapon_OnRep_HitScanTrace();
	V_API UFunction* Z_Construct_UFunction_AWeapon_ServerFire();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EWeaponState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_V_EWeaponState, Z_Construct_UPackage__Script_V(), TEXT("EWeaponState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponState(EWeaponState_StaticEnum, TEXT("/Script/V"), TEXT("EWeaponState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_V_EWeaponState_CRC() { return 1861257947U; }
	UEnum* Z_Construct_UEnum_V_EWeaponState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_V();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponState"), 0, Get_Z_Construct_UEnum_V_EWeaponState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponState::Idle", (int64)EWeaponState::Idle },
				{ "EWeaponState::Firing", (int64)EWeaponState::Firing },
				{ "EWeaponState::Equipping", (int64)EWeaponState::Equipping },
				{ "EWeaponState::Reloading", (int64)EWeaponState::Reloading },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Weapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_V,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWeaponState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWeaponState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FHitScanTrace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern V_API uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanTrace, Z_Construct_UPackage__Script_V(), TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitScanTrace(FHitScanTrace::StaticStruct, TEXT("/Script/V"), TEXT("HitScanTrace"), false, nullptr, nullptr);
static struct FScriptStruct_V_StaticRegisterNativesFHitScanTrace
{
	FScriptStruct_V_StaticRegisterNativesFHitScanTrace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitScanTrace")),new UScriptStruct::TCppStructOps<FHitScanTrace>);
	}
} ScriptStruct_V_StaticRegisterNativesFHitScanTrace;
	struct Z_Construct_UScriptStruct_FHitScanTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitScanTrace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceTo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHitScanTrace, TraceTo), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType = { UE4CodeGen_Private::EPropertyClass::Byte, "SurfaceType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHitScanTrace, SurfaceType), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_TraceTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_SurfaceType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_V,
		nullptr,
		&NewStructOps,
		"HitScanTrace",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FHitScanTrace),
		alignof(FHitScanTrace),
		Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_V();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC() { return 270028591U; }
	static FName NAME_AWeapon_ServerFire = FName(TEXT("ServerFire"));
	void AWeapon::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_ServerFire),NULL);
	}
	void AWeapon::StaticRegisterNativesAWeapon()
	{
		UClass* Class = AWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_HitScanTrace", &AWeapon::execOnRep_HitScanTrace },
			{ "ServerFire", &AWeapon::execServerFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_OnRep_HitScanTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnRep_HitScanTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, "OnRep_HitScanTrace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnRep_HitScanTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_OnRep_HitScanTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_OnRep_HitScanTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_ServerFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, "ServerFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_ServerFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ServerFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_ServerFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitScanTrace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitScanTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranceEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranceEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleshImpactEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FleshImpactEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCamShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireCamShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultImpactEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_OnRep_HitScanTrace, "OnRep_HitScanTrace" }, // 2113308278
		{ &Z_Construct_UFunction_AWeapon_ServerFire, "ServerFire" }, // 3901651453
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadAnim = { UE4CodeGen_Private::EPropertyClass::Object, "ReloadAnim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AWeapon, ReloadAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_HitScanTrace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_HitScanTrace = { UE4CodeGen_Private::EPropertyClass::Struct, "HitScanTrace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_HitScanTrace", STRUCT_OFFSET(AWeapon, HitScanTrace), Z_Construct_UScriptStruct_FHitScanTrace, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_HitScanTrace_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_HitScanTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_HitCue_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_HitCue = { UE4CodeGen_Private::EPropertyClass::Object, "HitCue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AWeapon, HitCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_HitCue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_HitCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadCue_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadCue = { UE4CodeGen_Private::EPropertyClass::Object, "ReloadCue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AWeapon, ReloadCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadCue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FireCue_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireCue = { UE4CodeGen_Private::EPropertyClass::Object, "FireCue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AWeapon, FireCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_FireCue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FireCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_RateOfFire = { UE4CodeGen_Private::EPropertyClass::Float, "RateOfFire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AWeapon, RateOfFire), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_RateOfFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_BulletSpread_MetaData[] = {
		{ "Category", "weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xab\xd7\xaa\xef\xbf\xbd\xc7\xb6\xef\xbf\xbd" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BulletSpread = { UE4CodeGen_Private::EPropertyClass::Float, "BulletSpread", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010005, 1, nullptr, STRUCT_OFFSET(AWeapon, BulletSpread), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_BulletSpread_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage = { UE4CodeGen_Private::EPropertyClass::Float, "BaseDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AWeapon, BaseDamage), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_TranceEffect_MetaData[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_TranceEffect = { UE4CodeGen_Private::EPropertyClass::Object, "TranceEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AWeapon, TranceEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_TranceEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_TranceEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FleshImpactEffect_MetaData[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FleshImpactEffect = { UE4CodeGen_Private::EPropertyClass::Object, "FleshImpactEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AWeapon, FleshImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_FleshImpactEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FleshImpactEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FireCamShake_MetaData[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireCamShake = { UE4CodeGen_Private::EPropertyClass::Class, "FireCamShake", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AWeapon, FireCamShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_FireCamShake_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FireCamShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_DefaultImpactEffect_MetaData[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_DefaultImpactEffect = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultImpactEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AWeapon, DefaultImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_DefaultImpactEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_DefaultImpactEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleEffect_MetaData[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb5\xcd\xb3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleEffect = { UE4CodeGen_Private::EPropertyClass::Object, "MuzzleEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AWeapon, MuzzleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "MuzzleSocketName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020015, 1, nullptr, STRUCT_OFFSET(AWeapon, MuzzleSocketName), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AWeapon, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_HitScanTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_HitCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ReloadCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_RateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BulletSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BaseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_TranceEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FleshImpactEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireCamShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_DefaultImpactEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon, 1738652621);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon(Z_Construct_UClass_AWeapon, &AWeapon::StaticClass, TEXT("/Script/V"), TEXT("AWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
