// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficFragments() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDebugFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLight();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightControl();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPeriod();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin ScriptStruct FMassTrafficVehicleTag
static_assert(std::is_polymorphic<FMassTrafficVehicleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficVehicleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehicleTag;
class UScriptStruct* FMassTrafficVehicleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehicleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleTag.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehicleTag>()
{
	return FMassTrafficVehicleTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special tag to differentiate the TrafficVehicle from the rest of the other entities */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate the TrafficVehicle from the rest of the other entities" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficVehicleTag",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleTag),
	alignof(FMassTrafficVehicleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleTag()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehicleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleTag.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehicleTag

// Begin ScriptStruct FMassTrafficVehicleTrailerTag
static_assert(std::is_polymorphic<FMassTrafficVehicleTrailerTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficVehicleTrailerTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailerTag;
class UScriptStruct* FMassTrafficVehicleTrailerTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailerTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailerTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleTrailerTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailerTag.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehicleTrailerTag>()
{
	return FMassTrafficVehicleTrailerTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special tag to differentiate the TrafficVehicleTrailer from the rest of the other entities */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate the TrafficVehicleTrailer from the rest of the other entities" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleTrailerTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficVehicleTrailerTag",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleTrailerTag),
	alignof(FMassTrafficVehicleTrailerTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailerTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailerTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailerTag.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehicleTrailerTag

// Begin ScriptStruct FMassTrafficParkedVehicleTag
static_assert(std::is_polymorphic<FMassTrafficParkedVehicleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficParkedVehicleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficParkedVehicleTag;
class UScriptStruct* FMassTrafficParkedVehicleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficParkedVehicleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficParkedVehicleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficParkedVehicleTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficParkedVehicleTag.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficParkedVehicleTag>()
{
	return FMassTrafficParkedVehicleTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special tag to differentiate the ParkedVehicle from the rest of the other entities */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate the ParkedVehicle from the rest of the other entities" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficParkedVehicleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficParkedVehicleTag",
	nullptr,
	0,
	sizeof(FMassTrafficParkedVehicleTag),
	alignof(FMassTrafficParkedVehicleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficParkedVehicleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficParkedVehicleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficParkedVehicleTag.InnerSingleton;
}
// End ScriptStruct FMassTrafficParkedVehicleTag

// Begin ScriptStruct FMassTrafficDisturbedVehicleTag
static_assert(std::is_polymorphic<FMassTrafficDisturbedVehicleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficDisturbedVehicleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficDisturbedVehicleTag;
class UScriptStruct* FMassTrafficDisturbedVehicleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficDisturbedVehicleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficDisturbedVehicleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficDisturbedVehicleTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficDisturbedVehicleTag.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficDisturbedVehicleTag>()
{
	return FMassTrafficDisturbedVehicleTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*** Special tag to differentiate vehicles that have been moved from their spawned location * by either being smashed into or by being driven off.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate vehicles that have been moved from their spawned location * by either being smashed into or by being driven off." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficDisturbedVehicleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficDisturbedVehicleTag",
	nullptr,
	0,
	sizeof(FMassTrafficDisturbedVehicleTag),
	alignof(FMassTrafficDisturbedVehicleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficDisturbedVehicleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficDisturbedVehicleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficDisturbedVehicleTag.InnerSingleton;
}
// End ScriptStruct FMassTrafficDisturbedVehicleTag

// Begin ScriptStruct FMassTrafficPlayerVehicleTag
static_assert(std::is_polymorphic<FMassTrafficPlayerVehicleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficPlayerVehicleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficPlayerVehicleTag;
class UScriptStruct* FMassTrafficPlayerVehicleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPlayerVehicleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficPlayerVehicleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPlayerVehicleTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPlayerVehicleTag.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficPlayerVehicleTag>()
{
	return FMassTrafficPlayerVehicleTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special tag to differentiate player driven vehicles from the rest of the other entities */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate player driven vehicles from the rest of the other entities" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPlayerVehicleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficPlayerVehicleTag",
	nullptr,
	0,
	sizeof(FMassTrafficPlayerVehicleTag),
	alignof(FMassTrafficPlayerVehicleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPlayerVehicleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficPlayerVehicleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPlayerVehicleTag.InnerSingleton;
}
// End ScriptStruct FMassTrafficPlayerVehicleTag

// Begin ScriptStruct FMassTrafficRecyclableVehicleTag
static_assert(std::is_polymorphic<FMassTrafficRecyclableVehicleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficRecyclableVehicleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficRecyclableVehicleTag;
class UScriptStruct* FMassTrafficRecyclableVehicleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRecyclableVehicleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficRecyclableVehicleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficRecyclableVehicleTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRecyclableVehicleTag.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficRecyclableVehicleTag>()
{
	return FMassTrafficRecyclableVehicleTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficRecyclableVehicleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficRecyclableVehicleTag",
	nullptr,
	0,
	sizeof(FMassTrafficRecyclableVehicleTag),
	alignof(FMassTrafficRecyclableVehicleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRecyclableVehicleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficRecyclableVehicleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRecyclableVehicleTag.InnerSingleton;
}
// End ScriptStruct FMassTrafficRecyclableVehicleTag

// Begin ScriptStruct FMassTrafficIntersectionTag
static_assert(std::is_polymorphic<FMassTrafficIntersectionTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficIntersectionTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficIntersectionTag;
class UScriptStruct* FMassTrafficIntersectionTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficIntersectionTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersectionTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficIntersectionTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionTag.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficIntersectionTag>()
{
	return FMassTrafficIntersectionTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special tag to differentiate the TrafficIntersection from the rest of the other entities */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate the TrafficIntersection from the rest of the other entities" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersectionTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficIntersectionTag",
	nullptr,
	0,
	sizeof(FMassTrafficIntersectionTag),
	alignof(FMassTrafficIntersectionTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionTag()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficIntersectionTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionTag.InnerSingleton;
}
// End ScriptStruct FMassTrafficIntersectionTag

// Begin ScriptStruct FMassTrafficObstacleTag
static_assert(std::is_polymorphic<FMassTrafficObstacleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficObstacleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficObstacleTag;
class UScriptStruct* FMassTrafficObstacleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficObstacleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficObstacleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficObstacleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficObstacleTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficObstacleTag.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficObstacleTag>()
{
	return FMassTrafficObstacleTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*** Agents with this tag will be considered for traffic vehicle obstacle avoidance and must also have Transform and * AgentRadius fragments.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Agents with this tag will be considered for traffic vehicle obstacle avoidance and must also have Transform and * AgentRadius fragments." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficObstacleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficObstacleTag",
	nullptr,
	0,
	sizeof(FMassTrafficObstacleTag),
	alignof(FMassTrafficObstacleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleTag()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficObstacleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficObstacleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficObstacleTag.InnerSingleton;
}
// End ScriptStruct FMassTrafficObstacleTag

// Begin ScriptStruct FMassTrafficConstrainedVehicleFragment
static_assert(std::is_polymorphic<FMassTrafficConstrainedVehicleFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficConstrainedVehicleFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficConstrainedVehicleFragment;
class UScriptStruct* FMassTrafficConstrainedVehicleFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficConstrainedVehicleFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficConstrainedVehicleFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficConstrainedVehicleFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficConstrainedVehicleFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficConstrainedVehicleFragment>()
{
	return FMassTrafficConstrainedVehicleFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vehicle Constraint Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Constraint Fragment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficConstrainedVehicleFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficConstrainedVehicleFragment",
	nullptr,
	0,
	sizeof(FMassTrafficConstrainedVehicleFragment),
	alignof(FMassTrafficConstrainedVehicleFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficConstrainedVehicleFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficConstrainedVehicleFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficConstrainedVehicleFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficConstrainedVehicleFragment

// Begin ScriptStruct FMassTrafficConstrainedTrailerFragment
static_assert(std::is_polymorphic<FMassTrafficConstrainedTrailerFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficConstrainedTrailerFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerFragment;
class UScriptStruct* FMassTrafficConstrainedTrailerFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficConstrainedTrailerFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficConstrainedTrailerFragment>()
{
	return FMassTrafficConstrainedTrailerFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trailer Constraint Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trailer Constraint Fragment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficConstrainedTrailerFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficConstrainedTrailerFragment",
	nullptr,
	0,
	sizeof(FMassTrafficConstrainedTrailerFragment),
	alignof(FMassTrafficConstrainedTrailerFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficConstrainedTrailerFragment

// Begin ScriptStruct FMassTrafficLaneOffsetFragment
static_assert(std::is_polymorphic<FMassTrafficLaneOffsetFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficLaneOffsetFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLaneOffsetFragment;
class UScriptStruct* FMassTrafficLaneOffsetFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLaneOffsetFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLaneOffsetFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLaneOffsetFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLaneOffsetFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLaneOffsetFragment>()
{
	return FMassTrafficLaneOffsetFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stores lateral offset from zone graph lane location */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores lateral offset from zone graph lane location" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLaneOffsetFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficLaneOffsetFragment",
	nullptr,
	0,
	sizeof(FMassTrafficLaneOffsetFragment),
	alignof(FMassTrafficLaneOffsetFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLaneOffsetFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLaneOffsetFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLaneOffsetFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficLaneOffsetFragment

// Begin Enum EMassTrafficLightStateFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficLightStateFlags;
static UEnum* EMassTrafficLightStateFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("EMassTrafficLightStateFlags"));
	}
	return Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.OuterSingleton;
}
template<> MASSTRAFFIC_API UEnum* StaticEnum<EMassTrafficLightStateFlags>()
{
	return EMassTrafficLightStateFlags_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Traffic Light Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
		{ "None.Name", "EMassTrafficLightStateFlags::None" },
		{ "PedestrianGo.Comment", "// ..green for pedestrians, on right side of traffic light\n" },
		{ "PedestrianGo.Name", "EMassTrafficLightStateFlags::PedestrianGo" },
		{ "PedestrianGo.ToolTip", "..green for pedestrians, on right side of traffic light" },
		{ "PedestrianGo_FrontSide.Comment", "// ..yellow for vehicles\n// ...                                 ..otherwise red for vehicles\n" },
		{ "PedestrianGo_FrontSide.Name", "EMassTrafficLightStateFlags::PedestrianGo_FrontSide" },
		{ "PedestrianGo_FrontSide.ToolTip", "..yellow for vehicles\n...                                 ..otherwise red for vehicles" },
		{ "PedestrianGo_LeftSide.Comment", "// ..green for pedestrians, on front side of traffic light\n" },
		{ "PedestrianGo_LeftSide.Name", "EMassTrafficLightStateFlags::PedestrianGo_LeftSide" },
		{ "PedestrianGo_LeftSide.ToolTip", "..green for pedestrians, on front side of traffic light" },
		{ "PedestrianGo_RightSide.Comment", "// ..green for pedestrians, on left side of traffic light\n" },
		{ "PedestrianGo_RightSide.Name", "EMassTrafficLightStateFlags::PedestrianGo_RightSide" },
		{ "PedestrianGo_RightSide.ToolTip", "..green for pedestrians, on left side of traffic light" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traffic Light Fragment" },
#endif
		{ "VehicleGo.Comment", "// ..red for vehicles and all pedestrians\n" },
		{ "VehicleGo.Name", "EMassTrafficLightStateFlags::VehicleGo" },
		{ "VehicleGo.ToolTip", "..red for vehicles and all pedestrians" },
		{ "VehiclePrepareToStop.Comment", "// ..green for vehicles\n" },
		{ "VehiclePrepareToStop.Name", "EMassTrafficLightStateFlags::VehiclePrepareToStop" },
		{ "VehiclePrepareToStop.ToolTip", "..green for vehicles" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassTrafficLightStateFlags::None", (int64)EMassTrafficLightStateFlags::None },
		{ "EMassTrafficLightStateFlags::VehicleGo", (int64)EMassTrafficLightStateFlags::VehicleGo },
		{ "EMassTrafficLightStateFlags::VehiclePrepareToStop", (int64)EMassTrafficLightStateFlags::VehiclePrepareToStop },
		{ "EMassTrafficLightStateFlags::PedestrianGo_FrontSide", (int64)EMassTrafficLightStateFlags::PedestrianGo_FrontSide },
		{ "EMassTrafficLightStateFlags::PedestrianGo_LeftSide", (int64)EMassTrafficLightStateFlags::PedestrianGo_LeftSide },
		{ "EMassTrafficLightStateFlags::PedestrianGo_RightSide", (int64)EMassTrafficLightStateFlags::PedestrianGo_RightSide },
		{ "EMassTrafficLightStateFlags::PedestrianGo", (int64)EMassTrafficLightStateFlags::PedestrianGo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"EMassTrafficLightStateFlags",
	"EMassTrafficLightStateFlags",
	Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.InnerSingleton, Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.InnerSingleton;
}
// End Enum EMassTrafficLightStateFlags

// Begin ScriptStruct FMassTrafficLight
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLight;
class UScriptStruct* FMassTrafficLight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLight, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLight"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLight.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLight>()
{
	return FMassTrafficLight::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypeIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Index into FMassTrafficLightsParameters.TrafficLightTypesData->TrafficLightTypes\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index into FMassTrafficLightsParameters.TrafficLightTypesData->TrafficLightTypes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightStateFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZRotation;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_TrafficLightTypeIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrafficLightStateFlags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrafficLightStateFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLight>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLight, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_ZRotation = { "ZRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLight, ZRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZRotation_MetaData), NewProp_ZRotation_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightTypeIndex = { "TrafficLightTypeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLight, TrafficLightTypeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypeIndex_MetaData), NewProp_TrafficLightTypeIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightStateFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightStateFlags = { "TrafficLightStateFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLight, TrafficLightStateFlags), Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightStateFlags_MetaData), NewProp_TrafficLightStateFlags_MetaData) }; // 4198059628
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_ZRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightTypeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightStateFlags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightStateFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLight",
	Z_Construct_UScriptStruct_FMassTrafficLight_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLight_Statics::PropPointers),
	sizeof(FMassTrafficLight),
	alignof(FMassTrafficLight),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLight_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLight()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLight.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLight_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLight.InnerSingleton;
}
// End ScriptStruct FMassTrafficLight

// Begin ScriptStruct FMassTrafficLightControl
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLightControl;
class UScriptStruct* FMassTrafficLightControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLightControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLightControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightControl, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightControl"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLightControl.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLightControl>()
{
	return FMassTrafficLightControl::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Intersection Fragment * Search key: IFRAG\n */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intersection Fragment * Search key: IFRAG" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightControl>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLightControl",
	nullptr,
	0,
	sizeof(FMassTrafficLightControl),
	alignof(FMassTrafficLightControl),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightControl()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLightControl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLightControl.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLightControl.InnerSingleton;
}
// End ScriptStruct FMassTrafficLightControl

// Begin Enum EMassTrafficPeriodLanesAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction;
static UEnum* EMassTrafficPeriodLanesAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("EMassTrafficPeriodLanesAction"));
	}
	return Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.OuterSingleton;
}
template<> MASSTRAFFIC_API UEnum* StaticEnum<EMassTrafficPeriodLanesAction>()
{
	return EMassTrafficPeriodLanesAction_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HardClose.Comment", "// ..open all lanes in the period\n" },
		{ "HardClose.Name", "EMassTrafficPeriodLanesAction::HardClose" },
		{ "HardClose.ToolTip", "..open all lanes in the period" },
		{ "HardPrepareToClose.Comment", "// ..close all lanes in the period - unless they're open in the next period\n" },
		{ "HardPrepareToClose.Name", "EMassTrafficPeriodLanesAction::HardPrepareToClose" },
		{ "HardPrepareToClose.ToolTip", "..close all lanes in the period - unless they're open in the next period" },
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
		{ "None.Name", "EMassTrafficPeriodLanesAction::None" },
		{ "Open.Name", "EMassTrafficPeriodLanesAction::Open" },
		{ "SoftClose.Comment", "// ..close all lanes in the period\n" },
		{ "SoftClose.Name", "EMassTrafficPeriodLanesAction::SoftClose" },
		{ "SoftClose.ToolTip", "..close all lanes in the period" },
		{ "SoftPrepareToClose.Comment", "// ..warn lanes in the period they are about to close\n" },
		{ "SoftPrepareToClose.Name", "EMassTrafficPeriodLanesAction::SoftPrepareToClose" },
		{ "SoftPrepareToClose.ToolTip", "..warn lanes in the period they are about to close" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassTrafficPeriodLanesAction::None", (int64)EMassTrafficPeriodLanesAction::None },
		{ "EMassTrafficPeriodLanesAction::Open", (int64)EMassTrafficPeriodLanesAction::Open },
		{ "EMassTrafficPeriodLanesAction::HardClose", (int64)EMassTrafficPeriodLanesAction::HardClose },
		{ "EMassTrafficPeriodLanesAction::SoftClose", (int64)EMassTrafficPeriodLanesAction::SoftClose },
		{ "EMassTrafficPeriodLanesAction::HardPrepareToClose", (int64)EMassTrafficPeriodLanesAction::HardPrepareToClose },
		{ "EMassTrafficPeriodLanesAction::SoftPrepareToClose", (int64)EMassTrafficPeriodLanesAction::SoftPrepareToClose },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"EMassTrafficPeriodLanesAction",
	"EMassTrafficPeriodLanesAction",
	Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.InnerSingleton, Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.InnerSingleton;
}
// End Enum EMassTrafficPeriodLanesAction

// Begin ScriptStruct FMassTrafficLaneToTrafficLightMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLaneToTrafficLightMap;
class UScriptStruct* FMassTrafficLaneToTrafficLightMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLaneToTrafficLightMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLaneToTrafficLightMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLaneToTrafficLightMap"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLaneToTrafficLightMap.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLaneToTrafficLightMap>()
{
	return FMassTrafficLaneToTrafficLightMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Temporary class used when building intersection periods. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temporary class used when building intersection periods." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLaneToTrafficLightMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLaneToTrafficLightMap",
	nullptr,
	0,
	sizeof(FMassTrafficLaneToTrafficLightMap),
	alignof(FMassTrafficLaneToTrafficLightMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLaneToTrafficLightMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLaneToTrafficLightMap.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLaneToTrafficLightMap.InnerSingleton;
}
// End ScriptStruct FMassTrafficLaneToTrafficLightMap

// Begin ScriptStruct FMassTrafficPeriod
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficPeriod;
class UScriptStruct* FMassTrafficPeriod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPeriod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficPeriod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPeriod, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPeriod"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPeriod.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficPeriod>()
{
	return FMassTrafficPeriod::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPeriod>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficPeriod",
	nullptr,
	0,
	sizeof(FMassTrafficPeriod),
	alignof(FMassTrafficPeriod),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPeriod()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPeriod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficPeriod.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPeriod.InnerSingleton;
}
// End ScriptStruct FMassTrafficPeriod

// Begin ScriptStruct FMassTrafficIntersectionFragment
static_assert(std::is_polymorphic<FMassTrafficIntersectionFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficIntersectionFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficIntersectionFragment;
class UScriptStruct* FMassTrafficIntersectionFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficIntersectionFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficIntersectionFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficIntersectionFragment>()
{
	return FMassTrafficIntersectionFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersectionFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficIntersectionFragment",
	nullptr,
	0,
	sizeof(FMassTrafficIntersectionFragment),
	alignof(FMassTrafficIntersectionFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficIntersectionFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficIntersectionFragment

// Begin ScriptStruct FMassTrafficSimulationLODFragment
static_assert(std::is_polymorphic<FMassTrafficSimulationLODFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficSimulationLODFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficSimulationLODFragment;
class UScriptStruct* FMassTrafficSimulationLODFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficSimulationLODFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficSimulationLODFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficSimulationLODFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficSimulationLODFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficSimulationLODFragment>()
{
	return FMassTrafficSimulationLODFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simulation LOD Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simulation LOD Fragment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficSimulationLODFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficSimulationLODFragment",
	nullptr,
	0,
	sizeof(FMassTrafficSimulationLODFragment),
	alignof(FMassTrafficSimulationLODFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficSimulationLODFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficSimulationLODFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficSimulationLODFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficSimulationLODFragment

// Begin Enum ETrafficDriverAnimState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrafficDriverAnimState;
static UEnum* ETrafficDriverAnimState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETrafficDriverAnimState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETrafficDriverAnimState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ETrafficDriverAnimState"));
	}
	return Z_Registration_Info_UEnum_ETrafficDriverAnimState.OuterSingleton;
}
template<> MASSTRAFFIC_API UEnum* StaticEnum<ETrafficDriverAnimState>()
{
	return ETrafficDriverAnimState_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Count.Name", "ETrafficDriverAnimState::Count" },
		{ "HighSpeedIdle.Name", "ETrafficDriverAnimState::HighSpeedIdle" },
		{ "Invalid.Name", "ETrafficDriverAnimState::Invalid" },
		{ "LookLeftIdle.Name", "ETrafficDriverAnimState::LookLeftIdle" },
		{ "LookRightIdle.Name", "ETrafficDriverAnimState::LookRightIdle" },
		{ "LowSpeedIdle.Name", "ETrafficDriverAnimState::LowSpeedIdle" },
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
		{ "Steering.Name", "ETrafficDriverAnimState::Steering" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETrafficDriverAnimState::Invalid", (int64)ETrafficDriverAnimState::Invalid },
		{ "ETrafficDriverAnimState::Steering", (int64)ETrafficDriverAnimState::Steering },
		{ "ETrafficDriverAnimState::LowSpeedIdle", (int64)ETrafficDriverAnimState::LowSpeedIdle },
		{ "ETrafficDriverAnimState::HighSpeedIdle", (int64)ETrafficDriverAnimState::HighSpeedIdle },
		{ "ETrafficDriverAnimState::LookLeftIdle", (int64)ETrafficDriverAnimState::LookLeftIdle },
		{ "ETrafficDriverAnimState::LookRightIdle", (int64)ETrafficDriverAnimState::LookRightIdle },
		{ "ETrafficDriverAnimState::Count", (int64)ETrafficDriverAnimState::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"ETrafficDriverAnimState",
	"ETrafficDriverAnimState",
	Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState()
{
	if (!Z_Registration_Info_UEnum_ETrafficDriverAnimState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrafficDriverAnimState.InnerSingleton, Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETrafficDriverAnimState.InnerSingleton;
}
// End Enum ETrafficDriverAnimState

// Begin ScriptStruct FMassTrafficDriverVisualizationFragment
static_assert(std::is_polymorphic<FMassTrafficDriverVisualizationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficDriverVisualizationFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficDriverVisualizationFragment;
class UScriptStruct* FMassTrafficDriverVisualizationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficDriverVisualizationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficDriverVisualizationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficDriverVisualizationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficDriverVisualizationFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficDriverVisualizationFragment>()
{
	return FMassTrafficDriverVisualizationFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Driver Visualization Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Driver Visualization Fragment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficDriverVisualizationFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficDriverVisualizationFragment",
	nullptr,
	0,
	sizeof(FMassTrafficDriverVisualizationFragment),
	alignof(FMassTrafficDriverVisualizationFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficDriverVisualizationFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficDriverVisualizationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficDriverVisualizationFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficDriverVisualizationFragment

// Begin Enum EMassTrafficCombineDistanceToNextType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType;
static UEnum* EMassTrafficCombineDistanceToNextType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("EMassTrafficCombineDistanceToNextType"));
	}
	return Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.OuterSingleton;
}
template<> MASSTRAFFIC_API UEnum* StaticEnum<EMassTrafficCombineDistanceToNextType>()
{
	return EMassTrafficCombineDistanceToNextType_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Next Vehicle Fragment * Search key: NVFRAG\n */" },
#endif
		{ "LaneChangeNext.Name", "EMassTrafficCombineDistanceToNextType::LaneChangeNext" },
		{ "MergingLaneGhostNext.Name", "EMassTrafficCombineDistanceToNextType::MergingLaneGhostNext" },
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
		{ "Next.Name", "EMassTrafficCombineDistanceToNextType::Next" },
		{ "SpittingLaneGhostNext.Name", "EMassTrafficCombineDistanceToNextType::SpittingLaneGhostNext" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Next Vehicle Fragment * Search key: NVFRAG" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassTrafficCombineDistanceToNextType::Next", (int64)EMassTrafficCombineDistanceToNextType::Next },
		{ "EMassTrafficCombineDistanceToNextType::LaneChangeNext", (int64)EMassTrafficCombineDistanceToNextType::LaneChangeNext },
		{ "EMassTrafficCombineDistanceToNextType::SpittingLaneGhostNext", (int64)EMassTrafficCombineDistanceToNextType::SpittingLaneGhostNext },
		{ "EMassTrafficCombineDistanceToNextType::MergingLaneGhostNext", (int64)EMassTrafficCombineDistanceToNextType::MergingLaneGhostNext },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"EMassTrafficCombineDistanceToNextType",
	"EMassTrafficCombineDistanceToNextType",
	Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.InnerSingleton, Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.InnerSingleton;
}
// End Enum EMassTrafficCombineDistanceToNextType

// Begin ScriptStruct FMassTrafficNextVehicleFragment
static_assert(std::is_polymorphic<FMassTrafficNextVehicleFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficNextVehicleFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficNextVehicleFragment;
class UScriptStruct* FMassTrafficNextVehicleFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficNextVehicleFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficNextVehicleFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficNextVehicleFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficNextVehicleFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficNextVehicleFragment>()
{
	return FMassTrafficNextVehicleFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficNextVehicleFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficNextVehicleFragment",
	nullptr,
	0,
	sizeof(FMassTrafficNextVehicleFragment),
	alignof(FMassTrafficNextVehicleFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficNextVehicleFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficNextVehicleFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficNextVehicleFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficNextVehicleFragment

// Begin ScriptStruct FMassTrafficObstacleListFragment
static_assert(std::is_polymorphic<FMassTrafficObstacleListFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficObstacleListFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficObstacleListFragment;
class UScriptStruct* FMassTrafficObstacleListFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficObstacleListFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficObstacleListFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficObstacleListFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficObstacleListFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficObstacleListFragment>()
{
	return FMassTrafficObstacleListFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Obstacle List Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Obstacle List Fragment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficObstacleListFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficObstacleListFragment",
	nullptr,
	0,
	sizeof(FMassTrafficObstacleListFragment),
	alignof(FMassTrafficObstacleListFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficObstacleListFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficObstacleListFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficObstacleListFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficObstacleListFragment

// Begin ScriptStruct FMassTrafficObstacleAvoidanceFragment
static_assert(std::is_polymorphic<FMassTrafficObstacleAvoidanceFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficObstacleAvoidanceFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficObstacleAvoidanceFragment;
class UScriptStruct* FMassTrafficObstacleAvoidanceFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficObstacleAvoidanceFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficObstacleAvoidanceFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficObstacleAvoidanceFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficObstacleAvoidanceFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficObstacleAvoidanceFragment>()
{
	return FMassTrafficObstacleAvoidanceFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Obstacle Avoidance Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Obstacle Avoidance Fragment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficObstacleAvoidanceFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficObstacleAvoidanceFragment",
	nullptr,
	0,
	sizeof(FMassTrafficObstacleAvoidanceFragment),
	alignof(FMassTrafficObstacleAvoidanceFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficObstacleAvoidanceFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficObstacleAvoidanceFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficObstacleAvoidanceFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficObstacleAvoidanceFragment

// Begin ScriptStruct FMassTrafficRandomFractionFragment
static_assert(std::is_polymorphic<FMassTrafficRandomFractionFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficRandomFractionFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficRandomFractionFragment;
class UScriptStruct* FMassTrafficRandomFractionFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRandomFractionFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficRandomFractionFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficRandomFractionFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRandomFractionFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficRandomFractionFragment>()
{
	return FMassTrafficRandomFractionFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Random Fraction Fragment */// A random float number in the range [0, 1) as a basis for variation across agents \n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random Fraction Fragment // A random float number in the range [0, 1) as a basis for variation across agents" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficRandomFractionFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficRandomFractionFragment",
	nullptr,
	0,
	sizeof(FMassTrafficRandomFractionFragment),
	alignof(FMassTrafficRandomFractionFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRandomFractionFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficRandomFractionFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRandomFractionFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficRandomFractionFragment

// Begin ScriptStruct FMassTrafficVehicleDamageFragment
static_assert(std::is_polymorphic<FMassTrafficVehicleDamageFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficVehicleDamageFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehicleDamageFragment;
class UScriptStruct* FMassTrafficVehicleDamageFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleDamageFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehicleDamageFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleDamageFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleDamageFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehicleDamageFragment>()
{
	return FMassTrafficVehicleDamageFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vehicle Damage State Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Damage State Fragment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleDamageFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficVehicleDamageFragment",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleDamageFragment),
	alignof(FMassTrafficVehicleDamageFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleDamageFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehicleDamageFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleDamageFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehicleDamageFragment

// Begin ScriptStruct FMassTrafficVehicleLightsFragment
static_assert(std::is_polymorphic<FMassTrafficVehicleLightsFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficVehicleLightsFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehicleLightsFragment;
class UScriptStruct* FMassTrafficVehicleLightsFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleLightsFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehicleLightsFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleLightsFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleLightsFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehicleLightsFragment>()
{
	return FMassTrafficVehicleLightsFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Traffic vehicle light states */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traffic vehicle light states" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleLightsFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficVehicleLightsFragment",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleLightsFragment),
	alignof(FMassTrafficVehicleLightsFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleLightsFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehicleLightsFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleLightsFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehicleLightsFragment

// Begin ScriptStruct FMassTrafficVehicleControlFragment
static_assert(std::is_polymorphic<FMassTrafficVehicleControlFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficVehicleControlFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehicleControlFragment;
class UScriptStruct* FMassTrafficVehicleControlFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleControlFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehicleControlFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleControlFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleControlFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehicleControlFragment>()
{
	return FMassTrafficVehicleControlFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Miscellaneous fields commonly used in traffic vehicle movement control */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Miscellaneous fields commonly used in traffic vehicle movement control" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleControlFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficVehicleControlFragment",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleControlFragment),
	alignof(FMassTrafficVehicleControlFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleControlFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehicleControlFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleControlFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehicleControlFragment

// Begin ScriptStruct FMassTrafficVehicleLaneChangeFragment
static_assert(std::is_polymorphic<FMassTrafficVehicleLaneChangeFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficVehicleLaneChangeFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehicleLaneChangeFragment;
class UScriptStruct* FMassTrafficVehicleLaneChangeFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleLaneChangeFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehicleLaneChangeFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleLaneChangeFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleLaneChangeFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehicleLaneChangeFragment>()
{
	return FMassTrafficVehicleLaneChangeFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleLaneChangeFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficVehicleLaneChangeFragment",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleLaneChangeFragment),
	alignof(FMassTrafficVehicleLaneChangeFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleLaneChangeFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehicleLaneChangeFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleLaneChangeFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehicleLaneChangeFragment

// Begin ScriptStruct FMassTrafficDebugFragment
static_assert(std::is_polymorphic<FMassTrafficDebugFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficDebugFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficDebugFragment;
class UScriptStruct* FMassTrafficDebugFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficDebugFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficDebugFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficDebugFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficDebugFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficDebugFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficDebugFragment>()
{
	return FMassTrafficDebugFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug Fragment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficDebugFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficDebugFragment",
	nullptr,
	0,
	sizeof(FMassTrafficDebugFragment),
	alignof(FMassTrafficDebugFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDebugFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficDebugFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficDebugFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficDebugFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficDebugFragment

// Begin ScriptStruct FMassTrafficInterpolationFragment
static_assert(std::is_polymorphic<FMassTrafficInterpolationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficInterpolationFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficInterpolationFragment;
class UScriptStruct* FMassTrafficInterpolationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficInterpolationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficInterpolationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficInterpolationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficInterpolationFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficInterpolationFragment>()
{
	return FMassTrafficInterpolationFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficInterpolationFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficInterpolationFragment",
	nullptr,
	0,
	sizeof(FMassTrafficInterpolationFragment),
	alignof(FMassTrafficInterpolationFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficInterpolationFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficInterpolationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficInterpolationFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficInterpolationFragment

// Begin ScriptStruct FMassTrafficPIDControlInterpolationFragment
static_assert(std::is_polymorphic<FMassTrafficPIDControlInterpolationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficPIDControlInterpolationFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficPIDControlInterpolationFragment;
class UScriptStruct* FMassTrafficPIDControlInterpolationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPIDControlInterpolationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficPIDControlInterpolationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPIDControlInterpolationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPIDControlInterpolationFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficPIDControlInterpolationFragment>()
{
	return FMassTrafficPIDControlInterpolationFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPIDControlInterpolationFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficPIDControlInterpolationFragment",
	nullptr,
	0,
	sizeof(FMassTrafficPIDControlInterpolationFragment),
	alignof(FMassTrafficPIDControlInterpolationFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPIDControlInterpolationFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficPIDControlInterpolationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPIDControlInterpolationFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficPIDControlInterpolationFragment

// Begin ScriptStruct FMassTrafficPIDVehicleControlFragment
static_assert(std::is_polymorphic<FMassTrafficPIDVehicleControlFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficPIDVehicleControlFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficPIDVehicleControlFragment;
class UScriptStruct* FMassTrafficPIDVehicleControlFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPIDVehicleControlFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficPIDVehicleControlFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPIDVehicleControlFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPIDVehicleControlFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficPIDVehicleControlFragment>()
{
	return FMassTrafficPIDVehicleControlFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PID Vehicle Control Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PID Vehicle Control Fragment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPIDVehicleControlFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficPIDVehicleControlFragment",
	nullptr,
	0,
	sizeof(FMassTrafficPIDVehicleControlFragment),
	alignof(FMassTrafficPIDVehicleControlFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPIDVehicleControlFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficPIDVehicleControlFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPIDVehicleControlFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficPIDVehicleControlFragment

// Begin ScriptStruct FMassTrafficAngularVelocityFragment
static_assert(std::is_polymorphic<FMassTrafficAngularVelocityFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficAngularVelocityFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficAngularVelocityFragment;
class UScriptStruct* FMassTrafficAngularVelocityFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficAngularVelocityFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficAngularVelocityFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficAngularVelocityFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficAngularVelocityFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficAngularVelocityFragment>()
{
	return FMassTrafficAngularVelocityFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Angular Velocity Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Angular Velocity Fragment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficAngularVelocityFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficAngularVelocityFragment",
	nullptr,
	0,
	sizeof(FMassTrafficAngularVelocityFragment),
	alignof(FMassTrafficAngularVelocityFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficAngularVelocityFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficAngularVelocityFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficAngularVelocityFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficAngularVelocityFragment

// Begin ScriptStruct FMassTrafficVehiclePhysicsSharedParameters
static_assert(std::is_polymorphic<FMassTrafficVehiclePhysicsSharedParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassTrafficVehiclePhysicsSharedParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsSharedParameters;
class UScriptStruct* FMassTrafficVehiclePhysicsSharedParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsSharedParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsSharedParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehiclePhysicsSharedParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsSharedParameters.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehiclePhysicsSharedParameters>()
{
	return FMassTrafficVehiclePhysicsSharedParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehiclePhysicsSharedParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassSharedFragment,
	&NewStructOps,
	"MassTrafficVehiclePhysicsSharedParameters",
	nullptr,
	0,
	sizeof(FMassTrafficVehiclePhysicsSharedParameters),
	alignof(FMassTrafficVehiclePhysicsSharedParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsSharedParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsSharedParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsSharedParameters.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehiclePhysicsSharedParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMassTrafficLightStateFlags_StaticEnum, TEXT("EMassTrafficLightStateFlags"), &Z_Registration_Info_UEnum_EMassTrafficLightStateFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4198059628U) },
		{ EMassTrafficPeriodLanesAction_StaticEnum, TEXT("EMassTrafficPeriodLanesAction"), &Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 900301476U) },
		{ ETrafficDriverAnimState_StaticEnum, TEXT("ETrafficDriverAnimState"), &Z_Registration_Info_UEnum_ETrafficDriverAnimState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3240985147U) },
		{ EMassTrafficCombineDistanceToNextType_StaticEnum, TEXT("EMassTrafficCombineDistanceToNextType"), &Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1873789550U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficVehicleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics::NewStructOps, TEXT("MassTrafficVehicleTag"), &Z_Registration_Info_UScriptStruct_MassTrafficVehicleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleTag), 3877847132U) },
		{ FMassTrafficVehicleTrailerTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics::NewStructOps, TEXT("MassTrafficVehicleTrailerTag"), &Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailerTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleTrailerTag), 3232070859U) },
		{ FMassTrafficParkedVehicleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics::NewStructOps, TEXT("MassTrafficParkedVehicleTag"), &Z_Registration_Info_UScriptStruct_MassTrafficParkedVehicleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficParkedVehicleTag), 597336166U) },
		{ FMassTrafficDisturbedVehicleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics::NewStructOps, TEXT("MassTrafficDisturbedVehicleTag"), &Z_Registration_Info_UScriptStruct_MassTrafficDisturbedVehicleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficDisturbedVehicleTag), 3328478879U) },
		{ FMassTrafficPlayerVehicleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics::NewStructOps, TEXT("MassTrafficPlayerVehicleTag"), &Z_Registration_Info_UScriptStruct_MassTrafficPlayerVehicleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPlayerVehicleTag), 3002352874U) },
		{ FMassTrafficRecyclableVehicleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics::NewStructOps, TEXT("MassTrafficRecyclableVehicleTag"), &Z_Registration_Info_UScriptStruct_MassTrafficRecyclableVehicleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficRecyclableVehicleTag), 2071279361U) },
		{ FMassTrafficIntersectionTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics::NewStructOps, TEXT("MassTrafficIntersectionTag"), &Z_Registration_Info_UScriptStruct_MassTrafficIntersectionTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersectionTag), 1411587826U) },
		{ FMassTrafficObstacleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics::NewStructOps, TEXT("MassTrafficObstacleTag"), &Z_Registration_Info_UScriptStruct_MassTrafficObstacleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficObstacleTag), 93494833U) },
		{ FMassTrafficConstrainedVehicleFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics::NewStructOps, TEXT("MassTrafficConstrainedVehicleFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficConstrainedVehicleFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficConstrainedVehicleFragment), 3096216276U) },
		{ FMassTrafficConstrainedTrailerFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics::NewStructOps, TEXT("MassTrafficConstrainedTrailerFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficConstrainedTrailerFragment), 3582036438U) },
		{ FMassTrafficLaneOffsetFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics::NewStructOps, TEXT("MassTrafficLaneOffsetFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficLaneOffsetFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLaneOffsetFragment), 1422115460U) },
		{ FMassTrafficLight::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewStructOps, TEXT("MassTrafficLight"), &Z_Registration_Info_UScriptStruct_MassTrafficLight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLight), 2862760835U) },
		{ FMassTrafficLightControl::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics::NewStructOps, TEXT("MassTrafficLightControl"), &Z_Registration_Info_UScriptStruct_MassTrafficLightControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightControl), 1432281037U) },
		{ FMassTrafficLaneToTrafficLightMap::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics::NewStructOps, TEXT("MassTrafficLaneToTrafficLightMap"), &Z_Registration_Info_UScriptStruct_MassTrafficLaneToTrafficLightMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLaneToTrafficLightMap), 3284505024U) },
		{ FMassTrafficPeriod::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics::NewStructOps, TEXT("MassTrafficPeriod"), &Z_Registration_Info_UScriptStruct_MassTrafficPeriod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPeriod), 3132920955U) },
		{ FMassTrafficIntersectionFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics::NewStructOps, TEXT("MassTrafficIntersectionFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficIntersectionFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersectionFragment), 3384347487U) },
		{ FMassTrafficSimulationLODFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics::NewStructOps, TEXT("MassTrafficSimulationLODFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficSimulationLODFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficSimulationLODFragment), 887999601U) },
		{ FMassTrafficDriverVisualizationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics::NewStructOps, TEXT("MassTrafficDriverVisualizationFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficDriverVisualizationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficDriverVisualizationFragment), 3575950327U) },
		{ FMassTrafficNextVehicleFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics::NewStructOps, TEXT("MassTrafficNextVehicleFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficNextVehicleFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficNextVehicleFragment), 2321304878U) },
		{ FMassTrafficObstacleListFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics::NewStructOps, TEXT("MassTrafficObstacleListFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficObstacleListFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficObstacleListFragment), 384657765U) },
		{ FMassTrafficObstacleAvoidanceFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics::NewStructOps, TEXT("MassTrafficObstacleAvoidanceFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficObstacleAvoidanceFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficObstacleAvoidanceFragment), 4046009568U) },
		{ FMassTrafficRandomFractionFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics::NewStructOps, TEXT("MassTrafficRandomFractionFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficRandomFractionFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficRandomFractionFragment), 4225343518U) },
		{ FMassTrafficVehicleDamageFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics::NewStructOps, TEXT("MassTrafficVehicleDamageFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficVehicleDamageFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleDamageFragment), 153493064U) },
		{ FMassTrafficVehicleLightsFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics::NewStructOps, TEXT("MassTrafficVehicleLightsFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficVehicleLightsFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleLightsFragment), 1562948629U) },
		{ FMassTrafficVehicleControlFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics::NewStructOps, TEXT("MassTrafficVehicleControlFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficVehicleControlFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleControlFragment), 3079234357U) },
		{ FMassTrafficVehicleLaneChangeFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics::NewStructOps, TEXT("MassTrafficVehicleLaneChangeFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficVehicleLaneChangeFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleLaneChangeFragment), 2633498833U) },
		{ FMassTrafficDebugFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics::NewStructOps, TEXT("MassTrafficDebugFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficDebugFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficDebugFragment), 2358378384U) },
		{ FMassTrafficInterpolationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics::NewStructOps, TEXT("MassTrafficInterpolationFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficInterpolationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficInterpolationFragment), 3280075290U) },
		{ FMassTrafficPIDControlInterpolationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics::NewStructOps, TEXT("MassTrafficPIDControlInterpolationFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficPIDControlInterpolationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPIDControlInterpolationFragment), 3937700467U) },
		{ FMassTrafficPIDVehicleControlFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics::NewStructOps, TEXT("MassTrafficPIDVehicleControlFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficPIDVehicleControlFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPIDVehicleControlFragment), 1981543894U) },
		{ FMassTrafficAngularVelocityFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics::NewStructOps, TEXT("MassTrafficAngularVelocityFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficAngularVelocityFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficAngularVelocityFragment), 2458148391U) },
		{ FMassTrafficVehiclePhysicsSharedParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics::NewStructOps, TEXT("MassTrafficVehiclePhysicsSharedParameters"), &Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsSharedParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehiclePhysicsSharedParameters), 2137016500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h_4099735525(TEXT("/Script/MassTraffic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
