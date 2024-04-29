// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehicleSpawnDataGenerator.h"
#include "ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleSpawnDataGenerator() {}

// Begin Cross Module References
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
// End Cross Module References

// Begin ScriptStruct FMassTrafficVehicleSpacing
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehicleSpacing;
class UScriptStruct* FMassTrafficVehicleSpacing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleSpacing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehicleSpacing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleSpacing"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleSpacing.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehicleSpacing>()
{
	return FMassTrafficVehicleSpacing::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MassTrafficVehicleSpacing" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "MassTrafficVehicleSpacing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The length of lane to consume for this spacing. Vehicles will spawn at the middle of this length.\n\x09 * \n\x09 * e.g: Space = 300 means vehicles will spawn at point locations with at least 150 clear space behind and ahead\n\x09 *\x09\x09of the point and can fit vehicles <= 300 long\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The length of lane to consume for this spacing. Vehicles will spawn at the middle of this length.\n\ne.g: Space = 300 means vehicles will spawn at point locations with at least 150 clear space behind and ahead\n             of the point and can fit vehicles <= 300 long" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityTypes_MetaData[] = {
		{ "Category", "MassTrafficVehicleSpacing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity types that can spawn in spaces these size. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity types that can spawn in spaces these size." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneFilter_MetaData[] = {
		{ "Category", "MassTrafficVehicleSpacing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lane filter to limit the lanes EntityTypes can spawn on */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lane filter to limit the lanes EntityTypes can spawn on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Proportion_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Space;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EntityTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EntityTypes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaneFilter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Proportion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleSpacing>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSpacing, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSpacing, Space), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_EntityTypes_Inner = { "EntityTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_EntityTypes = { "EntityTypes", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSpacing, EntityTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityTypes_MetaData), NewProp_EntityTypes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_LaneFilter = { "LaneFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSpacing, LaneFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneFilter_MetaData), NewProp_LaneFilter_MetaData) }; // 3369167444
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_Proportion = { "Proportion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSpacing, Proportion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Proportion_MetaData), NewProp_Proportion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_EntityTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_EntityTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_LaneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewProp_Proportion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficVehicleSpacing",
	Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::PropPointers),
	sizeof(FMassTrafficVehicleSpacing),
	alignof(FMassTrafficVehicleSpacing),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleSpacing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehicleSpacing.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleSpacing.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehicleSpacing

// Begin Class UMassTrafficVehicleSpawnDataGenerator
void UMassTrafficVehicleSpawnDataGenerator::StaticRegisterNativesUMassTrafficVehicleSpawnDataGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleSpawnDataGenerator);
UClass* Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_NoRegister()
{
	return UMassTrafficVehicleSpawnDataGenerator::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficVehicleSpawnDataGenerator.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleTypeSpacings_MetaData[] = {
		{ "Category", "MassTrafficVehicleSpawnDataGenerator" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
		{ "TitleProperty", "Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpace_MetaData[] = {
		{ "Category", "MassTrafficVehicleSpawnDataGenerator" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "MassTrafficVehicleSpawnDataGenerator" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinGapBetweenSpaces_MetaData[] = {
		{ "Category", "MassTrafficVehicleSpawnDataGenerator" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGapBetweenSpaces_MetaData[] = {
		{ "Category", "MassTrafficVehicleSpawnDataGenerator" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleExclusionRadius_MetaData[] = {
		{ "Category", "MassTrafficVehicleSpawnDataGenerator" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSpawnDataGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VehicleTypeSpacings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VehicleTypeSpacings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSpace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinGapBetweenSpaces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGapBetweenSpaces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleExclusionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleSpawnDataGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_VehicleTypeSpacings_Inner = { "VehicleTypeSpacings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing, METADATA_PARAMS(0, nullptr) }; // 188203003
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_VehicleTypeSpacings = { "VehicleTypeSpacings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSpawnDataGenerator, VehicleTypeSpacings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleTypeSpacings_MetaData), NewProp_VehicleTypeSpacings_MetaData) }; // 188203003
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_DefaultSpace = { "DefaultSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSpawnDataGenerator, DefaultSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSpace_MetaData), NewProp_DefaultSpace_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSpawnDataGenerator, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_MinGapBetweenSpaces = { "MinGapBetweenSpaces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSpawnDataGenerator, MinGapBetweenSpaces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinGapBetweenSpaces_MetaData), NewProp_MinGapBetweenSpaces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_MaxGapBetweenSpaces = { "MaxGapBetweenSpaces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSpawnDataGenerator, MaxGapBetweenSpaces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGapBetweenSpaces_MetaData), NewProp_MaxGapBetweenSpaces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_ObstacleExclusionRadius = { "ObstacleExclusionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSpawnDataGenerator, ObstacleExclusionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleExclusionRadius_MetaData), NewProp_ObstacleExclusionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_VehicleTypeSpacings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_VehicleTypeSpacings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_DefaultSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_MinGapBetweenSpaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_MaxGapBetweenSpaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::NewProp_ObstacleExclusionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::ClassParams = {
	&UMassTrafficVehicleSpawnDataGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleSpawnDataGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleSpawnDataGenerator.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleSpawnDataGenerator.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleSpawnDataGenerator>()
{
	return UMassTrafficVehicleSpawnDataGenerator::StaticClass();
}
UMassTrafficVehicleSpawnDataGenerator::UMassTrafficVehicleSpawnDataGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleSpawnDataGenerator);
UMassTrafficVehicleSpawnDataGenerator::~UMassTrafficVehicleSpawnDataGenerator() {}
// End Class UMassTrafficVehicleSpawnDataGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficVehicleSpacing::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics::NewStructOps, TEXT("MassTrafficVehicleSpacing"), &Z_Registration_Info_UScriptStruct_MassTrafficVehicleSpacing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleSpacing), 188203003U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator, UMassTrafficVehicleSpawnDataGenerator::StaticClass, TEXT("UMassTrafficVehicleSpawnDataGenerator"), &Z_Registration_Info_UClass_UMassTrafficVehicleSpawnDataGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleSpawnDataGenerator), 2088332627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_1915330058(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
