// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CrowdCharacterLineupActor.h"
#include "CitySample/Public/Crowd/CrowdCharacterDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdCharacterLineupActor() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_ACrowdCharacterLineup();
CITYSAMPLE_API UClass* Z_Construct_UClass_ACrowdCharacterLineup_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdLineupType();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdLineupVariation();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterOptions();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupInstance();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupRandomOptions();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupVariationOptions();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin ScriptStruct FCrowdLineupInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdLineupInstance;
class UScriptStruct* FCrowdLineupInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdLineupInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdLineupInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdLineupInstance, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdLineupInstance"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdLineupInstance.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdLineupInstance>()
{
	return FCrowdLineupInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineupActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineupCoordinates_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineupActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineupCoordinates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdLineupInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupActor = { "LineupActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupInstance, LineupActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineupActor_MetaData), NewProp_LineupActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupCoordinates = { "LineupCoordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupInstance, LineupCoordinates), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineupCoordinates_MetaData), NewProp_LineupCoordinates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_InstanceOptions = { "InstanceOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupInstance, InstanceOptions), Z_Construct_UScriptStruct_FCrowdCharacterOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceOptions_MetaData), NewProp_InstanceOptions_MetaData) }; // 580004803
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_InstanceOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdLineupInstance",
	Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::PropPointers),
	sizeof(FCrowdLineupInstance),
	alignof(FCrowdLineupInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupInstance()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdLineupInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdLineupInstance.InnerSingleton, Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdLineupInstance.InnerSingleton;
}
// End ScriptStruct FCrowdLineupInstance

// Begin Enum ECrowdLineupType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrowdLineupType;
static UEnum* ECrowdLineupType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrowdLineupType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrowdLineupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECrowdLineupType, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECrowdLineupType"));
	}
	return Z_Registration_Info_UEnum_ECrowdLineupType.OuterSingleton;
}
template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdLineupType>()
{
	return ECrowdLineupType_StaticEnum();
}
struct Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
		{ "Random.Name", "ECrowdLineupType::Random" },
		{ "Variation.Name", "ECrowdLineupType::Variation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrowdLineupType::Variation", (int64)ECrowdLineupType::Variation },
		{ "ECrowdLineupType::Random", (int64)ECrowdLineupType::Random },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	"ECrowdLineupType",
	"ECrowdLineupType",
	Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CitySample_ECrowdLineupType()
{
	if (!Z_Registration_Info_UEnum_ECrowdLineupType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrowdLineupType.InnerSingleton, Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrowdLineupType.InnerSingleton;
}
// End Enum ECrowdLineupType

// Begin ScriptStruct FCrowdLineupVariationOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions;
class UScriptStruct* FCrowdLineupVariationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdLineupVariationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdLineupVariationOptions>()
{
	return FCrowdLineupVariationOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_Variation_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "EditCondition", "bX" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_Variation_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "EditCondition", "bY" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_Variation_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "EditCondition", "bZ" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_X_Variation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_X_Variation;
	static void NewProp_bY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Y_Variation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Y_Variation;
	static void NewProp_bZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZ;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Z_Variation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Z_Variation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdLineupVariationOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bX_SetBit(void* Obj)
{
	((FCrowdLineupVariationOptions*)Obj)->bX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCrowdLineupVariationOptions), &Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bX_MetaData), NewProp_bX_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_X_Variation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_X_Variation = { "X_Variation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupVariationOptions, X_Variation), Z_Construct_UEnum_CitySample_ECrowdLineupVariation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_Variation_MetaData), NewProp_X_Variation_MetaData) }; // 514709346
void Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bY_SetBit(void* Obj)
{
	((FCrowdLineupVariationOptions*)Obj)->bY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCrowdLineupVariationOptions), &Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bY_MetaData), NewProp_bY_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Y_Variation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Y_Variation = { "Y_Variation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupVariationOptions, Y_Variation), Z_Construct_UEnum_CitySample_ECrowdLineupVariation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_Variation_MetaData), NewProp_Y_Variation_MetaData) }; // 514709346
void Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bZ_SetBit(void* Obj)
{
	((FCrowdLineupVariationOptions*)Obj)->bZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCrowdLineupVariationOptions), &Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZ_MetaData), NewProp_bZ_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Z_Variation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Z_Variation = { "Z_Variation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupVariationOptions, Z_Variation), Z_Construct_UEnum_CitySample_ECrowdLineupVariation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_Variation_MetaData), NewProp_Z_Variation_MetaData) }; // 514709346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_X_Variation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_X_Variation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Y_Variation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Y_Variation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Z_Variation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Z_Variation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdLineupVariationOptions",
	Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::PropPointers),
	sizeof(FCrowdLineupVariationOptions),
	alignof(FCrowdLineupVariationOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupVariationOptions()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.InnerSingleton, Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.InnerSingleton;
}
// End ScriptStruct FCrowdLineupVariationOptions

// Begin ScriptStruct FCrowdLineupRandomOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions;
class UScriptStruct* FCrowdLineupRandomOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdLineupRandomOptions, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdLineupRandomOptions"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdLineupRandomOptions>()
{
	return FCrowdLineupRandomOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineupSize_MetaData[] = {
		{ "Category", "CrowdLineupRandomOptions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Specify the number of characters to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify the number of characters to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedOptions_MetaData[] = {
		{ "Category", "CrowdLineupRandomOptions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The set of properties which will remain fixed when randomizing\n// Represented as an Array due to issues with how sets of enums display in editor\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The set of properties which will remain fixed when randomizing\nRepresented as an Array due to issues with how sets of enums display in editor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineupSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FixedOptions_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FixedOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FixedOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdLineupRandomOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_LineupSize = { "LineupSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupRandomOptions, LineupSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineupSize_MetaData), NewProp_LineupSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions_Inner = { "FixedOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CitySample_ECrowdLineupVariation, METADATA_PARAMS(0, nullptr) }; // 514709346
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions = { "FixedOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupRandomOptions, FixedOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedOptions_MetaData), NewProp_FixedOptions_MetaData) }; // 514709346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_LineupSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdLineupRandomOptions",
	Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::PropPointers),
	sizeof(FCrowdLineupRandomOptions),
	alignof(FCrowdLineupRandomOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupRandomOptions()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.InnerSingleton, Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.InnerSingleton;
}
// End ScriptStruct FCrowdLineupRandomOptions

// Begin Class ACrowdCharacterLineup Function BuildLineup
struct Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowdCharacterLineup, nullptr, "BuildLineup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACrowdCharacterLineup::execBuildLineup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildLineup();
	P_NATIVE_END;
}
// End Class ACrowdCharacterLineup Function BuildLineup

// Begin Class ACrowdCharacterLineup Function ClearLineup
struct Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowdCharacterLineup, nullptr, "ClearLineup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACrowdCharacterLineup::execClearLineup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearLineup();
	P_NATIVE_END;
}
// End Class ACrowdCharacterLineup Function ClearLineup

// Begin Class ACrowdCharacterLineup Function SpawnLineupActor
struct CrowdCharacterLineup_eventSpawnLineupActor_Parms
{
	FIntVector SpawnCoordinates;
	FString Label;
	FVector SpawnLocation;
	FRotator SpawnRotation;
	FCrowdCharacterDefinition CharacterDefinition;
	FCrowdCharacterOptions CharacterOptions;
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	CrowdCharacterLineup_eventSpawnLineupActor_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_ACrowdCharacterLineup_SpawnLineupActor = FName(TEXT("SpawnLineupActor"));
AActor* ACrowdCharacterLineup::SpawnLineupActor(const FIntVector SpawnCoordinates, const FString& Label, FVector SpawnLocation, FRotator SpawnRotation, const FCrowdCharacterDefinition CharacterDefinition, const FCrowdCharacterOptions CharacterOptions)
{
	CrowdCharacterLineup_eventSpawnLineupActor_Parms Parms;
	Parms.SpawnCoordinates=SpawnCoordinates;
	Parms.Label=Label;
	Parms.SpawnLocation=SpawnLocation;
	Parms.SpawnRotation=SpawnRotation;
	Parms.CharacterDefinition=CharacterDefinition;
	Parms.CharacterOptions=CharacterOptions;
	ProcessEvent(FindFunctionChecked(NAME_ACrowdCharacterLineup_SpawnLineupActor),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnCoordinates;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnCoordinates = { "SpawnCoordinates", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, SpawnCoordinates), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCoordinates_MetaData), NewProp_SpawnCoordinates_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDefinition_MetaData), NewProp_CharacterDefinition_MetaData) }; // 1580735983
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterOptions = { "CharacterOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, CharacterOptions), Z_Construct_UScriptStruct_FCrowdCharacterOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOptions_MetaData), NewProp_CharacterOptions_MetaData) }; // 580004803
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowdCharacterLineup, nullptr, "SpawnLineupActor", nullptr, nullptr, Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::PropPointers), sizeof(CrowdCharacterLineup_eventSpawnLineupActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(CrowdCharacterLineup_eventSpawnLineupActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ACrowdCharacterLineup Function SpawnLineupActor

// Begin Class ACrowdCharacterLineup Function UpdateLineup
struct Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowdCharacterLineup, nullptr, "UpdateLineup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACrowdCharacterLineup::execUpdateLineup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLineup();
	P_NATIVE_END;
}
// End Class ACrowdCharacterLineup Function UpdateLineup

// Begin Class ACrowdCharacterLineup Function UpdateLineupActor
struct CrowdCharacterLineup_eventUpdateLineupActor_Parms
{
	AActor* TargetActor;
	FIntVector SpawnCoordinates;
	FCrowdCharacterDefinition CharacterDefinition;
};
static FName NAME_ACrowdCharacterLineup_UpdateLineupActor = FName(TEXT("UpdateLineupActor"));
void ACrowdCharacterLineup::UpdateLineupActor(AActor* TargetActor, const FIntVector SpawnCoordinates, const FCrowdCharacterDefinition CharacterDefinition)
{
	CrowdCharacterLineup_eventUpdateLineupActor_Parms Parms;
	Parms.TargetActor=TargetActor;
	Parms.SpawnCoordinates=SpawnCoordinates;
	Parms.CharacterDefinition=CharacterDefinition;
	ProcessEvent(FindFunctionChecked(NAME_ACrowdCharacterLineup_UpdateLineupActor),&Parms);
}
struct Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnCoordinates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventUpdateLineupActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_SpawnCoordinates = { "SpawnCoordinates", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventUpdateLineupActor_Parms, SpawnCoordinates), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCoordinates_MetaData), NewProp_SpawnCoordinates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventUpdateLineupActor_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDefinition_MetaData), NewProp_CharacterDefinition_MetaData) }; // 1580735983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_SpawnCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_CharacterDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowdCharacterLineup, nullptr, "UpdateLineupActor", nullptr, nullptr, Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::PropPointers), sizeof(CrowdCharacterLineup_eventUpdateLineupActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(CrowdCharacterLineup_eventUpdateLineupActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ACrowdCharacterLineup Function UpdateLineupActor

// Begin Class ACrowdCharacterLineup
void ACrowdCharacterLineup::StaticRegisterNativesACrowdCharacterLineup()
{
	UClass* Class = ACrowdCharacterLineup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildLineup", &ACrowdCharacterLineup::execBuildLineup },
		{ "ClearLineup", &ACrowdCharacterLineup::execClearLineup },
		{ "UpdateLineup", &ACrowdCharacterLineup::execUpdateLineup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACrowdCharacterLineup);
UClass* Z_Construct_UClass_ACrowdCharacterLineup_NoRegister()
{
	return ACrowdCharacterLineup::StaticClass();
}
struct Z_Construct_UClass_ACrowdCharacterLineup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "VariationOptions RandomOptions" },
		{ "IncludePath", "Crowd/CrowdCharacterLineupActor.h" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDataAsset_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowLabelOffset_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineupType_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariationOptions_MetaData[] = {
		{ "Category", "Lineup" },
		{ "EditCondition", "LineupType==ECrowdLineupType::Variation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomOptions_MetaData[] = {
		{ "Category", "Lineup" },
		{ "EditCondition", "LineupType==ECrowdLineupType::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOptions_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowLabels_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Category", "CrowdCharacterLineup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineupInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDataAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RowLabelOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineupType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineupType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariationOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RowLabels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineupInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LineupInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup, "BuildLineup" }, // 3295306116
		{ &Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup, "ClearLineup" }, // 854386765
		{ &Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor, "SpawnLineupActor" }, // 2244570865
		{ &Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup, "UpdateLineup" }, // 3097233799
		{ &Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor, "UpdateLineupActor" }, // 4271524200
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrowdCharacterLineup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_CharacterDataAsset = { "CharacterDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, CharacterDataAsset), Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDataAsset_MetaData), NewProp_CharacterDataAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, Spacing), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacing_MetaData), NewProp_Spacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabelOffset = { "RowLabelOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, RowLabelOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowLabelOffset_MetaData), NewProp_RowLabelOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupType = { "LineupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, LineupType), Z_Construct_UEnum_CitySample_ECrowdLineupType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineupType_MetaData), NewProp_LineupType_MetaData) }; // 1850419696
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_VariationOptions = { "VariationOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, VariationOptions), Z_Construct_UScriptStruct_FCrowdLineupVariationOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariationOptions_MetaData), NewProp_VariationOptions_MetaData) }; // 2789482656
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RandomOptions = { "RandomOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, RandomOptions), Z_Construct_UScriptStruct_FCrowdLineupRandomOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomOptions_MetaData), NewProp_RandomOptions_MetaData) }; // 645010881
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_BaseOptions = { "BaseOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, BaseOptions), Z_Construct_UScriptStruct_FCrowdCharacterOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOptions_MetaData), NewProp_BaseOptions_MetaData) }; // 580004803
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabels_Inner = { "RowLabels", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabels = { "RowLabels", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, RowLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowLabels_MetaData), NewProp_RowLabels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupInstances_Inner = { "LineupInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdLineupInstance, METADATA_PARAMS(0, nullptr) }; // 3062250284
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupInstances = { "LineupInstances", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, LineupInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineupInstances_MetaData), NewProp_LineupInstances_MetaData) }; // 3062250284
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrowdCharacterLineup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_CharacterDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_Spacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabelOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_VariationOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RandomOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_BaseOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACrowdCharacterLineup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::ClassParams = {
	&ACrowdCharacterLineup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACrowdCharacterLineup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::Class_MetaDataParams), Z_Construct_UClass_ACrowdCharacterLineup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACrowdCharacterLineup()
{
	if (!Z_Registration_Info_UClass_ACrowdCharacterLineup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrowdCharacterLineup.OuterSingleton, Z_Construct_UClass_ACrowdCharacterLineup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACrowdCharacterLineup.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<ACrowdCharacterLineup>()
{
	return ACrowdCharacterLineup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACrowdCharacterLineup);
ACrowdCharacterLineup::~ACrowdCharacterLineup() {}
// End Class ACrowdCharacterLineup

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECrowdLineupType_StaticEnum, TEXT("ECrowdLineupType"), &Z_Registration_Info_UEnum_ECrowdLineupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1850419696U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCrowdLineupInstance::StaticStruct, Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewStructOps, TEXT("CrowdLineupInstance"), &Z_Registration_Info_UScriptStruct_CrowdLineupInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdLineupInstance), 3062250284U) },
		{ FCrowdLineupVariationOptions::StaticStruct, Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewStructOps, TEXT("CrowdLineupVariationOptions"), &Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdLineupVariationOptions), 2789482656U) },
		{ FCrowdLineupRandomOptions::StaticStruct, Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewStructOps, TEXT("CrowdLineupRandomOptions"), &Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdLineupRandomOptions), 645010881U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACrowdCharacterLineup, ACrowdCharacterLineup::StaticClass, TEXT("ACrowdCharacterLineup"), &Z_Registration_Info_UClass_ACrowdCharacterLineup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrowdCharacterLineup), 3310974830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_3829572789(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
