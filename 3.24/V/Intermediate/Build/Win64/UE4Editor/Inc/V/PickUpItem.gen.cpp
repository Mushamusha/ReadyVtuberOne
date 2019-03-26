// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V/Public/Item/PickUpItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpItem() {}
// Cross Module References
	V_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
	UPackage* Z_Construct_UPackage__Script_V();
	V_API UClass* Z_Construct_UClass_APickUpItem_NoRegister();
	V_API UClass* Z_Construct_UClass_APickUpItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FItemStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern V_API uint32 Get_Z_Construct_UScriptStruct_FItemStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStruct, Z_Construct_UPackage__Script_V(), TEXT("ItemStruct"), sizeof(FItemStruct), Get_Z_Construct_UScriptStruct_FItemStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemStruct(FItemStruct::StaticStruct, TEXT("/Script/V"), TEXT("ItemStruct"), false, nullptr, nullptr);
static struct FScriptStruct_V_StaticRegisterNativesFItemStruct
{
	FScriptStruct_V_StaticRegisterNativesFItemStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemStruct")),new UScriptStruct::TCppStructOps<FItemStruct>);
	}
} ScriptStruct_V_StaticRegisterNativesFItemStruct;
	struct Z_Construct_UScriptStruct_FItemStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/PickUpItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "ItemStruct" },
		{ "ModuleRelativePath", "Public/Item/PickUpItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Weight = { UE4CodeGen_Private::EPropertyClass::Float, "Weight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(FItemStruct, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Weight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ItemStruct" },
		{ "ModuleRelativePath", "Public/Item/PickUpItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(FItemStruct, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ItemStruct" },
		{ "ModuleRelativePath", "Public/Item/PickUpItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(FItemStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_V,
		nullptr,
		&NewStructOps,
		"ItemStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FItemStruct),
		alignof(FItemStruct),
		Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_V();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemStruct"), sizeof(FItemStruct), Get_Z_Construct_UScriptStruct_FItemStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemStruct_CRC() { return 2644086668U; }
	void APickUpItem::StaticRegisterNativesAPickUpItem()
	{
	}
	UClass* Z_Construct_UClass_APickUpItem_NoRegister()
	{
		return APickUpItem::StaticClass();
	}
	struct Z_Construct_UClass_APickUpItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUpItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_V,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/PickUpItem.h" },
		{ "ModuleRelativePath", "Public/Item/PickUpItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "Category", "PickUpItem" },
		{ "ModuleRelativePath", "Public/Item/PickUpItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APickUpItem_Statics::NewProp_ItemData = { UE4CodeGen_Private::EPropertyClass::Array, "ItemData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(APickUpItem, ItemData), METADATA_PARAMS(Z_Construct_UClass_APickUpItem_Statics::NewProp_ItemData_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickUpItem_Statics::NewProp_ItemData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickUpItem_Statics::NewProp_ItemData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUpItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpItem_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpItem_Statics::NewProp_ItemData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUpItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickUpItem_Statics::ClassParams = {
		&APickUpItem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APickUpItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APickUpItem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APickUpItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickUpItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickUpItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickUpItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickUpItem, 3556263546);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickUpItem(Z_Construct_UClass_APickUpItem, &APickUpItem::StaticClass, TEXT("/Script/V"), TEXT("APickUpItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
