// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficSettings.h"
#include "MassTraffic/Public/MassTrafficPIDController.h"
#include "ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSettings();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSettings_NoRegister();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficLaneChangeMode();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneDensity();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
// End Cross Module References

// Begin ScriptStruct FMassTrafficLaneSpeedLimit
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLaneSpeedLimit;
class UScriptStruct* FMassTrafficLaneSpeedLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLaneSpeedLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLaneSpeedLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLaneSpeedLimit"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLaneSpeedLimit.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLaneSpeedLimit>()
{
	return FMassTrafficLaneSpeedLimit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneFilter_MetaData[] = {
		{ "Category", "MassTrafficLaneSpeedLimit" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedLimitMPH_MetaData[] = {
		{ "Category", "MassTrafficLaneSpeedLimit" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaneFilter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedLimitMPH;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLaneSpeedLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::NewProp_LaneFilter = { "LaneFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLaneSpeedLimit, LaneFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneFilter_MetaData), NewProp_LaneFilter_MetaData) }; // 3369167444
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::NewProp_SpeedLimitMPH = { "SpeedLimitMPH", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLaneSpeedLimit, SpeedLimitMPH), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedLimitMPH_MetaData), NewProp_SpeedLimitMPH_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::NewProp_LaneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::NewProp_SpeedLimitMPH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLaneSpeedLimit",
	Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::PropPointers),
	sizeof(FMassTrafficLaneSpeedLimit),
	alignof(FMassTrafficLaneSpeedLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLaneSpeedLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLaneSpeedLimit.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLaneSpeedLimit.InnerSingleton;
}
// End ScriptStruct FMassTrafficLaneSpeedLimit

// Begin ScriptStruct FMassTrafficLaneDensity
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLaneDensity;
class UScriptStruct* FMassTrafficLaneDensity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLaneDensity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLaneDensity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLaneDensity, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLaneDensity"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLaneDensity.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLaneDensity>()
{
	return FMassTrafficLaneDensity::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneFilter_MetaData[] = {
		{ "Category", "MassTrafficLaneDensity" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityMultiplier_MetaData[] = {
		{ "Category", "MassTrafficLaneDensity" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaneFilter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLaneDensity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::NewProp_LaneFilter = { "LaneFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLaneDensity, LaneFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneFilter_MetaData), NewProp_LaneFilter_MetaData) }; // 3369167444
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::NewProp_DensityMultiplier = { "DensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLaneDensity, DensityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityMultiplier_MetaData), NewProp_DensityMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::NewProp_LaneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::NewProp_DensityMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLaneDensity",
	Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::PropPointers),
	sizeof(FMassTrafficLaneDensity),
	alignof(FMassTrafficLaneDensity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneDensity()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLaneDensity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLaneDensity.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLaneDensity.InnerSingleton;
}
// End ScriptStruct FMassTrafficLaneDensity

// Begin Enum EMassTrafficLaneChangeMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficLaneChangeMode;
static UEnum* EMassTrafficLaneChangeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficLaneChangeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassTrafficLaneChangeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_EMassTrafficLaneChangeMode, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("EMassTrafficLaneChangeMode"));
	}
	return Z_Registration_Info_UEnum_EMassTrafficLaneChangeMode.OuterSingleton;
}
template<> MASSTRAFFIC_API UEnum* StaticEnum<EMassTrafficLaneChangeMode>()
{
	return EMassTrafficLaneChangeMode_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_EMassTrafficLaneChangeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
		{ "Off.Name", "EMassTrafficLaneChangeMode::Off" },
		{ "On.Name", "EMassTrafficLaneChangeMode::On" },
		{ "On_OnlyForOffLOD.Name", "EMassTrafficLaneChangeMode::On_OnlyForOffLOD" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassTrafficLaneChangeMode::Off", (int64)EMassTrafficLaneChangeMode::Off },
		{ "EMassTrafficLaneChangeMode::On", (int64)EMassTrafficLaneChangeMode::On },
		{ "EMassTrafficLaneChangeMode::On_OnlyForOffLOD", (int64)EMassTrafficLaneChangeMode::On_OnlyForOffLOD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_EMassTrafficLaneChangeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"EMassTrafficLaneChangeMode",
	"EMassTrafficLaneChangeMode",
	Z_Construct_UEnum_MassTraffic_EMassTrafficLaneChangeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficLaneChangeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficLaneChangeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_EMassTrafficLaneChangeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficLaneChangeMode()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficLaneChangeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficLaneChangeMode.InnerSingleton, Z_Construct_UEnum_MassTraffic_EMassTrafficLaneChangeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassTrafficLaneChangeMode.InnerSingleton;
}
// End Enum EMassTrafficLaneChangeMode

// Begin Class UMassTrafficSettings
void UMassTrafficSettings::StaticRegisterNativesUMassTrafficSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficSettings);
UClass* Z_Construct_UClass_UMassTrafficSettings_NoRegister()
{
	return UMassTrafficSettings::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings for the MassTraffic plugin.\n */" },
#endif
		{ "DisplayName", "Mass Traffic" },
		{ "IncludePath", "MassTrafficSettings.h" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for the MassTraffic plugin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When > 0, set's a random seed to ensure traffic is generated in a consistent way for meaningful performance comparisons */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When > 0, set's a random seed to ensure traffic is generated in a consistent way for meaningful performance comparisons" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLaneFilter_MetaData[] = {
		{ "Category", "Lanes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone graph lane filter to identify lanes traffic vehicles can drive on. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone graph lane filter to identify lanes traffic vehicles can drive on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionLaneFilter_MetaData[] = {
		{ "Category", "Lanes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone graph lane filter to identify lanes inside an intersection. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone graph lane filter to identify lanes inside an intersection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrunkLaneFilter_MetaData[] = {
		{ "Category", "Lanes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone graph lane filter to select which lanes are trunk lanes - and can support long vehicles. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone graph lane filter to select which lanes are trunk lanes - and can support long vehicles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneChangingLaneFilter_MetaData[] = {
		{ "Category", "Lanes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Zone graph lane filter to select which lanes are in a polygon shape. (Lane changes are not allowed on lanes\n\x09 * inside a polygon shape.)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone graph lane filter to select which lanes are in a polygon shape. (Lane changes are not allowed on lanes\ninside a polygon shape.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosswalkLaneFilter_MetaData[] = {
		{ "Category", "Lanes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone graph lane filter to select which lanes pedestrians walk on. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone graph lane filter to select which lanes pedestrians walk on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedLimits_MetaData[] = {
		{ "Category", "Speed Limit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Lane speed limits in Miles per Hour, to initialise FDataFragment_TrafficLane::SpeedLimit's with.\n\x09 * \n\x09 * The first matching lane filter wins.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lane speed limits in Miles per Hour, to initialise FDataFragment_TrafficLane::SpeedLimit's with.\n\nThe first matching lane filter wins." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedLimitVariancePct_MetaData[] = {
		{ "Category", "Speed Limit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Base uniform variance *below* the lane speed limit. Based off each vehicles RandomFraction. As RandomFraction is\n\x09 * static for each vehicle, this variation will result in vehicles being 'always slow' or 'always fast' and this\n\x09 * controls 'how much'.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base uniform variance *below* the lane speed limit. Based off each vehicles RandomFraction. As RandomFraction is\nstatic for each vehicle, this variation will result in vehicles being 'always slow' or 'always fast' and this\ncontrols 'how much'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedVariancePct_MetaData[] = {
		{ "Category", "Speed Limit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Dynamic noise based speed limit variance that changes along the lane. This is applied on top of\n\x09 * the base SpeedLimitVariancePct to ensure naturally changing distancing between vehicles.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic noise based speed limit variance that changes along the lane. This is applied on top of\nthe base SpeedLimitVariancePct to ensure naturally changing distancing between vehicles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedLimitBlendTime_MetaData[] = {
		{ "Category", "Speed Limit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The amount of time to blend from one speed limit to the next in seconds.*/" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time to blend from one speed limit to the next in seconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Acceleration in cm/s/s used in simple vehicle control approximation */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Acceleration in cm/s/s used in simple vehicle control approximation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationVariancePct_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Base uniform variance to Acceleration. Based off each vehicles RandomFraction. As RandomFraction is\n\x09 * static for each vehicle, this variation will result in vehicles being 'always slow' or 'always fast' and this\n\x09 * controls 'how much'.   \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base uniform variance to Acceleration. Based off each vehicles RandomFraction. As RandomFraction is\nstatic for each vehicle, this variation will result in vehicles being 'always slow' or 'always fast' and this\ncontrols 'how much'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Deceleration in cm/s/s used in simple vehicle control approximation */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deceleration in cm/s/s used in simple vehicle control approximation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecelerationVariancePct_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Base uniform variance to Deceleration. Based off each vehicles RandomFraction. As RandomFraction is\n\x09 * static for each vehicle, this variation will result in vehicles being 'always slow' or 'always fast' and this\n\x09 * controls 'how much'.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base uniform variance to Deceleration. Based off each vehicles RandomFraction. As RandomFraction is\nstatic for each vehicle, this variation will result in vehicles being 'always slow' or 'always fast' and this\ncontrols 'how much'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnSpeedScale_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * How much to slow down when turning. Smaller number = lower speed when cornering. 1.0 = No speed modification. \n\x09 *\n\x09 * Concretely, this multiplier is applied proportionally to the delta angle between the\n\x09 * current forward vector and the vector to the look ahead speed chase target.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much to slow down when turning. Smaller number = lower speed when cornering. 1.0 = No speed modification.\n\nConcretely, this multiplier is applied proportionally to the delta angle between the\ncurrent forward vector and the vector to the look ahead speed chase target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedDeltaBrakingThreshold_MetaData[] = {
		{ "Category", "Speed|Stopping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When decelerating down to a lower target speed in the simple vehicle control approximation, this threshold is\n\x09 * used on the speed delta to decide if FDataFragment_TrafficVehicleMovement::bBraking is set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When decelerating down to a lower target speed in the simple vehicle control approximation, this threshold is\nused on the speed delta to decide if FDataFragment_TrafficVehicleMovement::bBraking is set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdealTimeToNextVehicleRange_MetaData[] = {
		{ "Category", "Speed|Avoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * In order to maintain a safe distance to NextVehicleController, the target speed passed to \n\x09 * ThrottleAndBrakeController will be forced down to 0 at StoppingDistance away, \n\x09 * starting from Lerp(IdealTimeToNextVehicleRange.X, IdealTimeToNextVehicleRange.Y, RandomFraction) * CurrentSpeed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In order to maintain a safe distance to NextVehicleController, the target speed passed to\nThrottleAndBrakeController will be forced down to 0 at StoppingDistance away,\nstarting from Lerp(IdealTimeToNextVehicleRange.X, IdealTimeToNextVehicleRange.Y, RandomFraction) * CurrentSpeed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDistanceToNextVehicleRange_MetaData[] = {
		{ "Category", "Speed|Stopping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When approaching the next vehicle, the target speed will be force down to 0 at\n\x09 * Lerp(MinDistanceToNextVehicle.X, MinDistanceToNextVehicle.Y, RandomFraction) from the next vehicle, \n\x09 * starting from IdealTimeToNextVehicle away.\n\x09 * \n\x09 * @see IdealTimeToNextVehicleRange\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When approaching the next vehicle, the target speed will be force down to 0 at\nLerp(MinDistanceToNextVehicle.X, MinDistanceToNextVehicle.Y, RandomFraction) from the next vehicle,\nstarting from IdealTimeToNextVehicle away.\n\n@see IdealTimeToNextVehicleRange" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoppingDistanceRange_MetaData[] = {
		{ "Category", "Speed|Stopping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When approaching a static impedance like a traffic light, the target speed passed to \n\x09 * ThrottleAndBrakeController will be forced down to 0 at Lerp(StoppingDistance.X, StoppingDistance.Y, RandomFraction) from the light, \n\x09 * starting from BrakingDistance (BrakingTime * CurrentLaneSpeedLimit) away. \n\x09 * @see BrakingTime\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When approaching a static impedance like a traffic light, the target speed passed to\nThrottleAndBrakeController will be forced down to 0 at Lerp(StoppingDistance.X, StoppingDistance.Y, RandomFraction) from the light,\nstarting from BrakingDistance (BrakingTime * CurrentLaneSpeedLimit) away.\n@see BrakingTime" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopSignBrakingTime_MetaData[] = {
		{ "Category", "Speed|Stopping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When approaching a static impedance like a traffic light, the target speed passed to \n\x09 * ThrottleAndBrakeController will be forced down to 0 at StoppingDistance from the light, \n\x09 * starting from BrakingDistance (BrakingTime * CurrentLaneSpeedLimit) away. \n\x09 * @see StoppingDistance\n\x09 * @see ThrottleAndBrakeController\n\x09 * @see GetCurrentBrakingDistance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When approaching a static impedance like a traffic light, the target speed passed to\nThrottleAndBrakeController will be forced down to 0 at StoppingDistance from the light,\nstarting from BrakingDistance (BrakingTime * CurrentLaneSpeedLimit) away.\n@see StoppingDistance\n@see ThrottleAndBrakeController\n@see GetCurrentBrakingDistance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxQuickStopSpeedMPH_MetaData[] = {
		{ "Category", "Vehicles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum vehicle speed that can be stopped quickly (MpH.) */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum vehicle speed that can be stopped quickly (MpH.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedControlLaneLookAheadTime_MetaData[] = {
		{ "Category", "Speed|Look Ahead" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Target speed along the CurrentLane is determined by looking at the curvature ahead of the \n\x09 * current closest point on the spline, and slowing to turn. The distance ahead is determined by \n\x09 * Max(SpeedControlMinLookAheadDistance, CurrentSpeed * SpeedControlLaneLookAheadTime)\n\x09 * @see ThrottleAndBrakeController\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target speed along the CurrentLane is determined by looking at the curvature ahead of the\ncurrent closest point on the spline, and slowing to turn. The distance ahead is determined by\nMax(SpeedControlMinLookAheadDistance, CurrentSpeed * SpeedControlLaneLookAheadTime)\n@see ThrottleAndBrakeController" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedControlMinLookAheadDistance_MetaData[] = {
		{ "Category", "Speed|Look Ahead" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Target speed along the CurrentLane is determined by looking at the curvature ahead of the \n\x09 * current closest point on the spline, and slowing to turn. The distance ahead is determined by \n\x09 * Max(SpeedControlMinLookAheadDistance, CurrentSpeed * SpeedControlLaneLookAheadTime)\n\x09 * @see ThrottleAndBrakeController\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target speed along the CurrentLane is determined by looking at the curvature ahead of the\ncurrent closest point on the spline, and slowing to turn. The distance ahead is determined by\nMax(SpeedControlMinLookAheadDistance, CurrentSpeed * SpeedControlLaneLookAheadTime)\n@see ThrottleAndBrakeController" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedPIDControllerParams_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Proportional Integral Derivative controller parameters for throttle and braking. \n\x09 * The speed PID controller's Tick is fed the target & current speeds and outputs a scalar value where \n\x09 * positive values will be used for throttle and negative numbers made positive and used for \n\x09 * the brake.\n\x09 * To keep FPIDController terms in a user friendly range around 1, Target & Current speeds are\n\x09 * normalized by dividing by the current lanes speed limit, before passing to FPIDController::Tick.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Proportional Integral Derivative controller parameters for throttle and braking.\nThe speed PID controller's Tick is fed the target & current speeds and outputs a scalar value where\npositive values will be used for throttle and negative numbers made positive and used for\nthe brake.\nTo keep FPIDController terms in a user friendly range around 1, Target & Current speeds are\nnormalized by dividing by the current lanes speed limit, before passing to FPIDController::Tick." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedPIDBrakeMultiplier_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A multiplier to apply to the brake output from the PID because our cars have some pretty squishy brakes! */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A multiplier to apply to the brake output from the PID because our cars have some pretty squishy brakes!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedCoastThreshold_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the throttle/brake output from the PID is within +/- this value around 0.0, just coast. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the throttle/brake output from the PID is within +/- this value around 0.0, just coast." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringControlLaneLookAheadTime_MetaData[] = {
		{ "Category", "Steering|Look Ahead" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Steering along the CurrentLane is determined by looking ahead of the current closest point \n\x09 * on the spline, and steering towards this 'chase target'. The distance ahead is determined by \n\x09 * Max(SteeringControlMinLookAheadDistance, CurrentSpeed * SteeringControlLaneLookAheadTime)\n\x09 * @see SteeringController\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering along the CurrentLane is determined by looking ahead of the current closest point\non the spline, and steering towards this 'chase target'. The distance ahead is determined by\nMax(SteeringControlMinLookAheadDistance, CurrentSpeed * SteeringControlLaneLookAheadTime)\n@see SteeringController" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringControlMinLookAheadDistance_MetaData[] = {
		{ "Category", "Steering|Look Ahead" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Steering along the CurrentLane is determined by looking ahead of the current closest point \n\x09 * on the spline, and steering towards this 'chase target'. The distance ahead is determined by \n\x09 * Max(SteeringControlMinLookAheadDistance, CurrentSpeed * SteeringControlLaneLookAheadTime)\n\x09 * @see SteeringController\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering along the CurrentLane is determined by looking ahead of the current closest point\non the spline, and steering towards this 'chase target'. The distance ahead is determined by\nMax(SteeringControlMinLookAheadDistance, CurrentSpeed * SteeringControlLaneLookAheadTime)\n@see SteeringController" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringPIDControllerParams_MetaData[] = {
		{ "Category", "Steering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Proportional Integral Derivative controller parameters for steering. \n\x09 * This PID controller's Tick is fed the target angle 0 & current heading angle to the steering \n\x09 * chase target ahead on the CurrentLane spline (@see SteeringControlLaneLookAheadTime).\n\x09 * To keep FPIDController terms in a user friendly range around 1, the current angle to chase \n\x09 * target is divided by NormalizationAngle, before passing to FPIDController::Tick.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Proportional Integral Derivative controller parameters for steering.\nThis PID controller's Tick is fed the target angle 0 & current heading angle to the steering\nchase target ahead on the CurrentLane spline (@see SteeringControlLaneLookAheadTime).\nTo keep FPIDController terms in a user friendly range around 1, the current angle to chase\ntarget is divided by NormalizationAngle, before passing to FPIDController::Tick." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateralOffsetMax_MetaData[] = {
		{ "Category", "Steering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximum distance the vehicle can / should drift from the lane center line. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum distance the vehicle can / should drift from the lane center line." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateralDeviationClampingRange_MetaData[] = {
		{ "Category", "Simple Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * To ensure simple physics vehicles don't stray too far from their target lane location, we apply clamping back into\n\x09 * position, proportional to how far they have deviated from their target location.\n\x09 *\n\x09 * Clamping forces start at LateralDeviationClampingRange.X away from the lane along local Y and get stronger as\n\x09 * deviation approaches LateralDeviationClampingRange.Y\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To ensure simple physics vehicles don't stray too far from their target lane location, we apply clamping back into\nposition, proportional to how far they have deviated from their target location.\n\nClamping forces start at LateralDeviationClampingRange.X away from the lane along local Y and get stronger as\ndeviation approaches LateralDeviationClampingRange.Y" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalDeviationClampingRange_MetaData[] = {
		{ "Category", "Simple Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * To ensure simple physics vehicles don't stray too far from their target lane location, we apply clamping back into\n\x09 * position, proportional to how far they have deviated from their target location.\n\x09 * \n\x09 * Clamping forces start at LateralDeviationClampingRange.X away from the lane along local Y and get stronger as\n\x09 * deviation approaches LateralDeviationClampingRange.Y\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To ensure simple physics vehicles don't stray too far from their target lane location, we apply clamping back into\nposition, proportional to how far they have deviated from their target location.\n\nClamping forces start at LateralDeviationClampingRange.X away from the lane along local Y and get stronger as\ndeviation approaches LateralDeviationClampingRange.Y" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleDeviationTolerance_MetaData[] = {
		{ "Category", "Obstacle Avoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The distance a physics vehicle is allowed to deviate from its natural lane location (e.g: due to being\n\x09 * pushed off in an accident) before it becomes 'deviant' and is considered an obstacle to avoid by other\n\x09 * nearby vehicles.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The distance a physics vehicle is allowed to deviate from its natural lane location (e.g: due to being\npushed off in an accident) before it becomes 'deviant' and is considered an obstacle to avoid by other\nnearby vehicles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParkedVehicleDeviationTolerance_MetaData[] = {
		{ "Category", "Obstacle Avoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The distance a parked vehicle is allowed to deviate from its spawn location (e.g: due to being\n\x09 * pushed off in an accident or driven off) before it becomes 'deviant' and is considered an obstacle\n\x09 * to avoid by other nearby vehicles and pedestrians.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The distance a parked vehicle is allowed to deviate from its spawn location (e.g: due to being\npushed off in an accident or driven off) before it becomes 'deviant' and is considered an obstacle\nto avoid by other nearby vehicles and pedestrians." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleSearchRadius_MetaData[] = {
		{ "Category", "Obstacle Avoidance" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleSearchHeight_MetaData[] = {
		{ "Category", "Obstacle Avoidance" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleAvoidanceBrakingTimeRange_MetaData[] = {
		{ "Category", "Obstacle Avoidance" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDistanceToObstacleRange_MetaData[] = {
		{ "Category", "Obstacle Avoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When approaching a colliding obstacle, the target speed will be force down to 0 at\n\x09 * Lerp(MinimumDistanceToObstacleRange.X, MinimumDistanceToObstacleRange.Y, RandomFraction) from the obstacle, \n\x09 * starting from ObstacleAvoidanceBrakingTime away.\n\x09 * \n\x09 * @see ObstacleAvoidanceBrakingTimeRange\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When approaching a colliding obstacle, the target speed will be force down to 0 at\nLerp(MinimumDistanceToObstacleRange.X, MinimumDistanceToObstacleRange.Y, RandomFraction) from the obstacle,\nstarting from ObstacleAvoidanceBrakingTime away.\n\n@see ObstacleAvoidanceBrakingTimeRange" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandardTrafficPrepareToStopSeconds_MetaData[] = {
		{ "Category", "Intersections|Durations|Standard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How long a yellow light lasts. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long a yellow light lasts." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPedestriansForCrossingAtTrafficLights_MetaData[] = {
		{ "Category", "Intersections|Pedestrians" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The number of pedestrians that need to be waiting at a pedestrian crossing to trigger that crossing to open,\n\x09 * at traffic light intersections.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of pedestrians that need to be waiting at a pedestrian crossing to trigger that crossing to open,\nat traffic light intersections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPedestriansForCrossingAtStopSigns_MetaData[] = {
		{ "Category", "Intersections|Pedestrians" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The number of pedestrians that need to be waiting at a pedestrian crossing to trigger that crossing to open,\n\x09 * at stop sign intersections.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of pedestrians that need to be waiting at a pedestrian crossing to trigger that crossing to open,\nat stop sign intersections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightPedestrianLaneOpenProbability_MetaData[] = {
		{ "Category", "Intersections|Pedestrians" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Chance that pedestrian lanes get opened, in traffic-light intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chance that pedestrian lanes get opened, in traffic-light intersections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopSignPedestrianLaneOpenProbability_MetaData[] = {
		{ "Category", "Intersections|Pedestrians" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Chance that pedestrian lanes get opened, in stop-sign intersections.\n\x09 * (Stop-sign intersections get too blocked up if pedestrians cross too often.)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chance that pedestrian lanes get opened, in stop-sign intersections.\n(Stop-sign intersections get too blocked up if pedestrians cross too often.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneChangeMode_MetaData[] = {
		{ "Category", "Lane Changing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lane change mode.\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lane change mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSecondsUntilLaneChangeDecision_MetaData[] = {
		{ "Category", "Lane Changing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min seconds until next lane change attempt.\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min seconds until next lane change attempt." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSecondsUntilLaneChangeDecision_MetaData[] = {
		{ "Category", "Lane Changing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max seconds until next lane change attempt.\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max seconds until next lane change attempt." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSecondsToExecuteLaneChange_MetaData[] = {
		{ "Category", "Lane Changing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base seconds taken to execute a lane change.\n// Number of seconds a particular vehicle takes to execute a lane change is calculated as -\n// BaseSecondsToExecuteLaneChange + AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength * VehicleLengthCM\n// (VehicleLengthCM is twice the vehicle's radius in CM.)\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base seconds taken to execute a lane change.\nNumber of seconds a particular vehicle takes to execute a lane change is calculated as -\nBaseSecondsToExecuteLaneChange + AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength * VehicleLengthCM\n(VehicleLengthCM is twice the vehicle's radius in CM.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength_MetaData[] = {
		{ "Category", "Lane Changing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional seconds taken to execute a lane change - seconds per vehicle length (CM.)\n// Number of seconds a particular vehicle takes to execute a lane change is calculated as -\n// BaseSecondsToExecuteLaneChange + AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength * VehicleLengthCM\n// (VehicleLengthCM is twice the vehicle's radius in CM.)\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional seconds taken to execute a lane change - seconds per vehicle length (CM.)\nNumber of seconds a particular vehicle takes to execute a lane change is calculated as -\nBaseSecondsToExecuteLaneChange + AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength * VehicleLengthCM\n(VehicleLengthCM is twice the vehicle's radius in CM.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneChangeRetrySeconds_MetaData[] = {
		{ "Category", "Lane Changing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How many seconds vehicles should wait before retrying an unsuccessful lane change attempt.\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many seconds vehicles should wait before retrying an unsuccessful lane change attempt." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLaneChangeDistanceVehicleLengthScale_MetaData[] = {
		{ "Category", "Lane Changing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much lane space a vehicle needs to execute a lane change, as a factor of a vehicle's length.\n// The longer the vehicle, the more space (and time) it needs to change lanes.\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much lane space a vehicle needs to execute a lane change, as a factor of a vehicle's length.\nThe longer the vehicle, the more space (and time) it needs to change lanes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneChangeSearchDistanceScale_MetaData[] = {
		{ "Category", "Lane Changing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much more to scale search distances for points on adjacent lanes, to help cope with possible issues with \n// low lane tessellation and/or higher lane curvature.\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much more to scale search distances for points on adjacent lanes, to help cope with possible issues with\nlow lane tessellation and/or higher lane curvature." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneChangeTransverseSpreadFromStartOfLaneFraction_MetaData[] = {
		{ "Category", "Lane Changing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much to spread transverse lanes changes, as a fraction of the lane length measured from the\n// start of the lane.\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much to spread transverse lanes changes, as a fraction of the lane length measured from the\nstart of the lane." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneChangeMaxSideAccessoryLength_MetaData[] = {
		{ "Category", "Lane Changing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max length of accessories on sides of car - objects like side-mirrors (CM). Helps when trying to pass another\n// vehicle.\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max length of accessories on sides of car - objects like side-mirrors (CM). Helps when trying to pass another\nvehicle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneDensities_MetaData[] = {
		{ "Category", "Density Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Multiplier on matching lanes, used for both spawning and maintaining traffic density.\n\x09 * For spawning, represents 'possible chances to spawn' e.g: 0.5 = 50% less 'chances' to spawn on that lane.\n\x09 * This should roughly result in 50% less vehicles spawned on that lane but it won't be exact.\n\x09 * \n\x09 * The first matching lane filter wins.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier on matching lanes, used for both spawning and maintaining traffic density.\nFor spawning, represents 'possible chances to spawn' e.g: 0.5 = 50% less 'chances' to spawn on that lane.\nThis should roughly result in 50% less vehicles spawned on that lane but it won't be exact.\n\nThe first matching lane filter wins." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBusiestLanesToTransferFrom_MetaData[] = {
		{ "Category", "Density Management" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusiestLaneDistanceToPlayerRange_MetaData[] = {
		{ "Category", "Density Management" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLeastBusiestLanesToTransferTo_MetaData[] = {
		{ "Category", "Density Management" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeastBusiestLaneMaxDensity_MetaData[] = {
		{ "Category", "Density Management" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeastBusiestLaneDistanceToPlayerRange_MetaData[] = {
		{ "Category", "Density Management" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumDensityManagementLanePartitions_MetaData[] = {
		{ "Category", "Density Management" },
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTransferDistance_MetaData[] = {
		{ "Category", "Density Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The minimum distance a vehicle must move to be allowed to transfer. This is to make sure that any dangling\n\x09 * NextVehicle references to the transferred vehicle are too far away to have an effect.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum distance a vehicle must move to be allowed to transfer. This is to make sure that any dangling\nNextVehicle references to the transferred vehicle are too far away to have an effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownstreamFlowDensityMixtureFraction_MetaData[] = {
		{ "Category", "Flow Density" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * How much to mix functional flow density v.s. downstream flow density when managing flow density (0..1).\n\x09 * Should probably be around 0.5.\n\x09 * 0.0 - All functional density.\n\x09 * 0.5 - Half functional density, half downstream density.\n\x09 * 1.0 - All downstream density.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much to mix functional flow density v.s. downstream flow density when managing flow density (0..1).\nShould probably be around 0.5.\n0.0 - All functional density.\n0.5 - Half functional density, half downstream density.\n1.0 - All downstream density." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownstreamFlowDensityQueryFraction_MetaData[] = {
		{ "Category", "Flow Density" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * How often to return functional float density v.s. downstream flow density in flow density queries (0..1).\n\x09 * Helps when a lane's downstream flow density values get stuck at a high value.\n\x09 * Should be low, like 0.1.\n\x09 * 0.0 - Always functional density.\n\x09 * 0.5 - Functional density half the time, downstream density half the time.\n\x09 * 1.0 - Always downstream density.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often to return functional float density v.s. downstream flow density in flow density queries (0..1).\nHelps when a lane's downstream flow density values get stuck at a high value.\nShould be low, like 0.1.\n0.0 - Always functional density.\n0.5 - Functional density half the time, downstream density half the time.\n1.0 - Always downstream density." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoisePeriod_MetaData[] = {
		{ "Category", "Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Lateral drift is performed by offsetting the steering chase target location by \n\x09 * PerlinNoise1D(DistanceTravelled / NoisePeriod) * LateralOffsetMax so larger values \n\x09 * of NoisePeriod will create smoother drift, smaller values more noisy.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lateral drift is performed by offsetting the steering chase target location by\nPerlinNoise1D(DistanceTravelled / NoisePeriod) * LateralOffsetMax so larger values\nof NoisePeriod will create smoother drift, smaller values more noisy." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLaneFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionLaneFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrunkLaneFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaneChangingLaneFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CrosswalkLaneFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeedLimits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedLimitVariancePct;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedVariancePct;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedLimitBlendTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccelerationVariancePct;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Deceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecelerationVariancePct;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnSpeedScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedDeltaBrakingThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IdealTimeToNextVehicleRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumDistanceToNextVehicleRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoppingDistanceRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopSignBrakingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxQuickStopSpeedMPH;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedControlLaneLookAheadTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedControlMinLookAheadDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedPIDControllerParams;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedPIDBrakeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedCoastThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringControlLaneLookAheadTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringControlMinLookAheadDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringPIDControllerParams;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LateralOffsetMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LateralDeviationClampingRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalDeviationClampingRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VehicleDeviationTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ParkedVehicleDeviationTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleSearchRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleSearchHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObstacleAvoidanceBrakingTimeRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumDistanceToObstacleRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandardTrafficPrepareToStopSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPedestriansForCrossingAtTrafficLights;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPedestriansForCrossingAtStopSigns;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrafficLightPedestrianLaneOpenProbability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopSignPedestrianLaneOpenProbability;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LaneChangeMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LaneChangeMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSecondsUntilLaneChangeDecision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSecondsUntilLaneChangeDecision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSecondsToExecuteLaneChange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneChangeRetrySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLaneChangeDistanceVehicleLengthScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneChangeSearchDistanceScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneChangeTransverseSpreadFromStartOfLaneFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneChangeMaxSideAccessoryLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaneDensities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LaneDensities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBusiestLanesToTransferFrom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BusiestLaneDistanceToPlayerRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLeastBusiestLanesToTransferTo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeastBusiestLaneMaxDensity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeastBusiestLaneDistanceToPlayerRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumDensityManagementLanePartitions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTransferDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DownstreamFlowDensityMixtureFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DownstreamFlowDensityQueryFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoisePeriod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_TrafficLaneFilter = { "TrafficLaneFilter", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, TrafficLaneFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLaneFilter_MetaData), NewProp_TrafficLaneFilter_MetaData) }; // 3369167444
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_IntersectionLaneFilter = { "IntersectionLaneFilter", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, IntersectionLaneFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionLaneFilter_MetaData), NewProp_IntersectionLaneFilter_MetaData) }; // 3369167444
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_TrunkLaneFilter = { "TrunkLaneFilter", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, TrunkLaneFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrunkLaneFilter_MetaData), NewProp_TrunkLaneFilter_MetaData) }; // 3369167444
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangingLaneFilter = { "LaneChangingLaneFilter", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, LaneChangingLaneFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneChangingLaneFilter_MetaData), NewProp_LaneChangingLaneFilter_MetaData) }; // 3369167444
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_CrosswalkLaneFilter = { "CrosswalkLaneFilter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, CrosswalkLaneFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosswalkLaneFilter_MetaData), NewProp_CrosswalkLaneFilter_MetaData) }; // 3369167444
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedLimits_Inner = { "SpeedLimits", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit, METADATA_PARAMS(0, nullptr) }; // 875049022
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedLimits = { "SpeedLimits", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SpeedLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedLimits_MetaData), NewProp_SpeedLimits_MetaData) }; // 875049022
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedLimitVariancePct = { "SpeedLimitVariancePct", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SpeedLimitVariancePct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedLimitVariancePct_MetaData), NewProp_SpeedLimitVariancePct_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedVariancePct = { "SpeedVariancePct", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SpeedVariancePct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedVariancePct_MetaData), NewProp_SpeedVariancePct_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedLimitBlendTime = { "SpeedLimitBlendTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SpeedLimitBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedLimitBlendTime_MetaData), NewProp_SpeedLimitBlendTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_AccelerationVariancePct = { "AccelerationVariancePct", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, AccelerationVariancePct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationVariancePct_MetaData), NewProp_AccelerationVariancePct_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, Deceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deceleration_MetaData), NewProp_Deceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_DecelerationVariancePct = { "DecelerationVariancePct", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, DecelerationVariancePct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecelerationVariancePct_MetaData), NewProp_DecelerationVariancePct_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_TurnSpeedScale = { "TurnSpeedScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, TurnSpeedScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnSpeedScale_MetaData), NewProp_TurnSpeedScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedDeltaBrakingThreshold = { "SpeedDeltaBrakingThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SpeedDeltaBrakingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedDeltaBrakingThreshold_MetaData), NewProp_SpeedDeltaBrakingThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_IdealTimeToNextVehicleRange = { "IdealTimeToNextVehicleRange", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, IdealTimeToNextVehicleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdealTimeToNextVehicleRange_MetaData), NewProp_IdealTimeToNextVehicleRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinimumDistanceToNextVehicleRange = { "MinimumDistanceToNextVehicleRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, MinimumDistanceToNextVehicleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDistanceToNextVehicleRange_MetaData), NewProp_MinimumDistanceToNextVehicleRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_StoppingDistanceRange = { "StoppingDistanceRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, StoppingDistanceRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoppingDistanceRange_MetaData), NewProp_StoppingDistanceRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_StopSignBrakingTime = { "StopSignBrakingTime", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, StopSignBrakingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopSignBrakingTime_MetaData), NewProp_StopSignBrakingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MaxQuickStopSpeedMPH = { "MaxQuickStopSpeedMPH", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, MaxQuickStopSpeedMPH), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxQuickStopSpeedMPH_MetaData), NewProp_MaxQuickStopSpeedMPH_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedControlLaneLookAheadTime = { "SpeedControlLaneLookAheadTime", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SpeedControlLaneLookAheadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedControlLaneLookAheadTime_MetaData), NewProp_SpeedControlLaneLookAheadTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedControlMinLookAheadDistance = { "SpeedControlMinLookAheadDistance", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SpeedControlMinLookAheadDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedControlMinLookAheadDistance_MetaData), NewProp_SpeedControlMinLookAheadDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedPIDControllerParams = { "SpeedPIDControllerParams", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SpeedPIDControllerParams), Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedPIDControllerParams_MetaData), NewProp_SpeedPIDControllerParams_MetaData) }; // 4184525337
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedPIDBrakeMultiplier = { "SpeedPIDBrakeMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SpeedPIDBrakeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedPIDBrakeMultiplier_MetaData), NewProp_SpeedPIDBrakeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedCoastThreshold = { "SpeedCoastThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SpeedCoastThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedCoastThreshold_MetaData), NewProp_SpeedCoastThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SteeringControlLaneLookAheadTime = { "SteeringControlLaneLookAheadTime", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SteeringControlLaneLookAheadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringControlLaneLookAheadTime_MetaData), NewProp_SteeringControlLaneLookAheadTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SteeringControlMinLookAheadDistance = { "SteeringControlMinLookAheadDistance", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SteeringControlMinLookAheadDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringControlMinLookAheadDistance_MetaData), NewProp_SteeringControlMinLookAheadDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SteeringPIDControllerParams = { "SteeringPIDControllerParams", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, SteeringPIDControllerParams), Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringPIDControllerParams_MetaData), NewProp_SteeringPIDControllerParams_MetaData) }; // 4184525337
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LateralOffsetMax = { "LateralOffsetMax", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, LateralOffsetMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateralOffsetMax_MetaData), NewProp_LateralOffsetMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LateralDeviationClampingRange = { "LateralDeviationClampingRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, LateralDeviationClampingRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateralDeviationClampingRange_MetaData), NewProp_LateralDeviationClampingRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_VerticalDeviationClampingRange = { "VerticalDeviationClampingRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, VerticalDeviationClampingRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalDeviationClampingRange_MetaData), NewProp_VerticalDeviationClampingRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_VehicleDeviationTolerance = { "VehicleDeviationTolerance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, VehicleDeviationTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleDeviationTolerance_MetaData), NewProp_VehicleDeviationTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_ParkedVehicleDeviationTolerance = { "ParkedVehicleDeviationTolerance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, ParkedVehicleDeviationTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParkedVehicleDeviationTolerance_MetaData), NewProp_ParkedVehicleDeviationTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_ObstacleSearchRadius = { "ObstacleSearchRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, ObstacleSearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleSearchRadius_MetaData), NewProp_ObstacleSearchRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_ObstacleSearchHeight = { "ObstacleSearchHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, ObstacleSearchHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleSearchHeight_MetaData), NewProp_ObstacleSearchHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_ObstacleAvoidanceBrakingTimeRange = { "ObstacleAvoidanceBrakingTimeRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, ObstacleAvoidanceBrakingTimeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleAvoidanceBrakingTimeRange_MetaData), NewProp_ObstacleAvoidanceBrakingTimeRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinimumDistanceToObstacleRange = { "MinimumDistanceToObstacleRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, MinimumDistanceToObstacleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDistanceToObstacleRange_MetaData), NewProp_MinimumDistanceToObstacleRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_StandardTrafficPrepareToStopSeconds = { "StandardTrafficPrepareToStopSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, StandardTrafficPrepareToStopSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandardTrafficPrepareToStopSeconds_MetaData), NewProp_StandardTrafficPrepareToStopSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinPedestriansForCrossingAtTrafficLights = { "MinPedestriansForCrossingAtTrafficLights", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, MinPedestriansForCrossingAtTrafficLights), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPedestriansForCrossingAtTrafficLights_MetaData), NewProp_MinPedestriansForCrossingAtTrafficLights_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinPedestriansForCrossingAtStopSigns = { "MinPedestriansForCrossingAtStopSigns", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, MinPedestriansForCrossingAtStopSigns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPedestriansForCrossingAtStopSigns_MetaData), NewProp_MinPedestriansForCrossingAtStopSigns_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_TrafficLightPedestrianLaneOpenProbability = { "TrafficLightPedestrianLaneOpenProbability", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, TrafficLightPedestrianLaneOpenProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightPedestrianLaneOpenProbability_MetaData), NewProp_TrafficLightPedestrianLaneOpenProbability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_StopSignPedestrianLaneOpenProbability = { "StopSignPedestrianLaneOpenProbability", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, StopSignPedestrianLaneOpenProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopSignPedestrianLaneOpenProbability_MetaData), NewProp_StopSignPedestrianLaneOpenProbability_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeMode = { "LaneChangeMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, LaneChangeMode), Z_Construct_UEnum_MassTraffic_EMassTrafficLaneChangeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneChangeMode_MetaData), NewProp_LaneChangeMode_MetaData) }; // 3702948815
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinSecondsUntilLaneChangeDecision = { "MinSecondsUntilLaneChangeDecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, MinSecondsUntilLaneChangeDecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSecondsUntilLaneChangeDecision_MetaData), NewProp_MinSecondsUntilLaneChangeDecision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MaxSecondsUntilLaneChangeDecision = { "MaxSecondsUntilLaneChangeDecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, MaxSecondsUntilLaneChangeDecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSecondsUntilLaneChangeDecision_MetaData), NewProp_MaxSecondsUntilLaneChangeDecision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_BaseSecondsToExecuteLaneChange = { "BaseSecondsToExecuteLaneChange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, BaseSecondsToExecuteLaneChange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSecondsToExecuteLaneChange_MetaData), NewProp_BaseSecondsToExecuteLaneChange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength = { "AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength_MetaData), NewProp_AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeRetrySeconds = { "LaneChangeRetrySeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, LaneChangeRetrySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneChangeRetrySeconds_MetaData), NewProp_LaneChangeRetrySeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinLaneChangeDistanceVehicleLengthScale = { "MinLaneChangeDistanceVehicleLengthScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, MinLaneChangeDistanceVehicleLengthScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLaneChangeDistanceVehicleLengthScale_MetaData), NewProp_MinLaneChangeDistanceVehicleLengthScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeSearchDistanceScale = { "LaneChangeSearchDistanceScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, LaneChangeSearchDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneChangeSearchDistanceScale_MetaData), NewProp_LaneChangeSearchDistanceScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeTransverseSpreadFromStartOfLaneFraction = { "LaneChangeTransverseSpreadFromStartOfLaneFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, LaneChangeTransverseSpreadFromStartOfLaneFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneChangeTransverseSpreadFromStartOfLaneFraction_MetaData), NewProp_LaneChangeTransverseSpreadFromStartOfLaneFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeMaxSideAccessoryLength = { "LaneChangeMaxSideAccessoryLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, LaneChangeMaxSideAccessoryLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneChangeMaxSideAccessoryLength_MetaData), NewProp_LaneChangeMaxSideAccessoryLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneDensities_Inner = { "LaneDensities", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficLaneDensity, METADATA_PARAMS(0, nullptr) }; // 1853325774
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneDensities = { "LaneDensities", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, LaneDensities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneDensities_MetaData), NewProp_LaneDensities_MetaData) }; // 1853325774
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_NumBusiestLanesToTransferFrom = { "NumBusiestLanesToTransferFrom", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, NumBusiestLanesToTransferFrom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBusiestLanesToTransferFrom_MetaData), NewProp_NumBusiestLanesToTransferFrom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_BusiestLaneDistanceToPlayerRange = { "BusiestLaneDistanceToPlayerRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, BusiestLaneDistanceToPlayerRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusiestLaneDistanceToPlayerRange_MetaData), NewProp_BusiestLaneDistanceToPlayerRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_NumLeastBusiestLanesToTransferTo = { "NumLeastBusiestLanesToTransferTo", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, NumLeastBusiestLanesToTransferTo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLeastBusiestLanesToTransferTo_MetaData), NewProp_NumLeastBusiestLanesToTransferTo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LeastBusiestLaneMaxDensity = { "LeastBusiestLaneMaxDensity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, LeastBusiestLaneMaxDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeastBusiestLaneMaxDensity_MetaData), NewProp_LeastBusiestLaneMaxDensity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LeastBusiestLaneDistanceToPlayerRange = { "LeastBusiestLaneDistanceToPlayerRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, LeastBusiestLaneDistanceToPlayerRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeastBusiestLaneDistanceToPlayerRange_MetaData), NewProp_LeastBusiestLaneDistanceToPlayerRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_NumDensityManagementLanePartitions = { "NumDensityManagementLanePartitions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, NumDensityManagementLanePartitions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumDensityManagementLanePartitions_MetaData), NewProp_NumDensityManagementLanePartitions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinTransferDistance = { "MinTransferDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, MinTransferDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTransferDistance_MetaData), NewProp_MinTransferDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_DownstreamFlowDensityMixtureFraction = { "DownstreamFlowDensityMixtureFraction", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, DownstreamFlowDensityMixtureFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownstreamFlowDensityMixtureFraction_MetaData), NewProp_DownstreamFlowDensityMixtureFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_DownstreamFlowDensityQueryFraction = { "DownstreamFlowDensityQueryFraction", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, DownstreamFlowDensityQueryFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownstreamFlowDensityQueryFraction_MetaData), NewProp_DownstreamFlowDensityQueryFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_NoisePeriod = { "NoisePeriod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSettings, NoisePeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoisePeriod_MetaData), NewProp_NoisePeriod_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_TrafficLaneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_IntersectionLaneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_TrunkLaneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangingLaneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_CrosswalkLaneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedLimitVariancePct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedVariancePct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedLimitBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_AccelerationVariancePct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_Deceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_DecelerationVariancePct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_TurnSpeedScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedDeltaBrakingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_IdealTimeToNextVehicleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinimumDistanceToNextVehicleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_StoppingDistanceRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_StopSignBrakingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MaxQuickStopSpeedMPH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedControlLaneLookAheadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedControlMinLookAheadDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedPIDControllerParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedPIDBrakeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SpeedCoastThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SteeringControlLaneLookAheadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SteeringControlMinLookAheadDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_SteeringPIDControllerParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LateralOffsetMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LateralDeviationClampingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_VerticalDeviationClampingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_VehicleDeviationTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_ParkedVehicleDeviationTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_ObstacleSearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_ObstacleSearchHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_ObstacleAvoidanceBrakingTimeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinimumDistanceToObstacleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_StandardTrafficPrepareToStopSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinPedestriansForCrossingAtTrafficLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinPedestriansForCrossingAtStopSigns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_TrafficLightPedestrianLaneOpenProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_StopSignPedestrianLaneOpenProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinSecondsUntilLaneChangeDecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MaxSecondsUntilLaneChangeDecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_BaseSecondsToExecuteLaneChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_AdditionalSecondsToExecuteLaneChangePerUnitOfVehicleLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeRetrySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinLaneChangeDistanceVehicleLengthScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeSearchDistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeTransverseSpreadFromStartOfLaneFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneChangeMaxSideAccessoryLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneDensities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LaneDensities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_NumBusiestLanesToTransferFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_BusiestLaneDistanceToPlayerRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_NumLeastBusiestLanesToTransferTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LeastBusiestLaneMaxDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_LeastBusiestLaneDistanceToPlayerRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_NumDensityManagementLanePartitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_MinTransferDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_DownstreamFlowDensityMixtureFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_DownstreamFlowDensityQueryFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSettings_Statics::NewProp_NoisePeriod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassModuleSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficSettings_Statics::ClassParams = {
	&UMassTrafficSettings::StaticClass,
	"Plugins",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficSettings()
{
	if (!Z_Registration_Info_UClass_UMassTrafficSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficSettings.OuterSingleton, Z_Construct_UClass_UMassTrafficSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficSettings.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficSettings>()
{
	return UMassTrafficSettings::StaticClass();
}
UMassTrafficSettings::UMassTrafficSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficSettings);
UMassTrafficSettings::~UMassTrafficSettings() {}
// End Class UMassTrafficSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMassTrafficLaneChangeMode_StaticEnum, TEXT("EMassTrafficLaneChangeMode"), &Z_Registration_Info_UEnum_EMassTrafficLaneChangeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3702948815U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficLaneSpeedLimit::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics::NewStructOps, TEXT("MassTrafficLaneSpeedLimit"), &Z_Registration_Info_UScriptStruct_MassTrafficLaneSpeedLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLaneSpeedLimit), 875049022U) },
		{ FMassTrafficLaneDensity::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics::NewStructOps, TEXT("MassTrafficLaneDensity"), &Z_Registration_Info_UScriptStruct_MassTrafficLaneDensity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLaneDensity), 1853325774U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficSettings, UMassTrafficSettings::StaticClass, TEXT("UMassTrafficSettings"), &Z_Registration_Info_UClass_UMassTrafficSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficSettings), 3844103607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_655667233(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
