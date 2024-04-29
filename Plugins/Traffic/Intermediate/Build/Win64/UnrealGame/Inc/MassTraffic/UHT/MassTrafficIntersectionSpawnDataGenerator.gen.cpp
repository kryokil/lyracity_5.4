// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficIntersectionSpawnDataGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficIntersectionSpawnDataGenerator() {}

// Begin Cross Module References
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficIntersectionSpawnDataGenerator
void UMassTrafficIntersectionSpawnDataGenerator::StaticRegisterNativesUMassTrafficIntersectionSpawnDataGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficIntersectionSpawnDataGenerator);
UClass* Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_NoRegister()
{
	return UMassTrafficIntersectionSpawnDataGenerator::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficIntersectionSpawnDataGenerator.h" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionEntityConfigIndex_MetaData[] = {
		{ "Category", "MassTrafficIntersectionSpawnDataGenerator" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypesData_MetaData[] = {
		{ "Category", "Traffic Lights" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightInstanceData_MetaData[] = {
		{ "Category", "Traffic Lights" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightSearchDistance_MetaData[] = {
		{ "Category", "Traffic Lights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * How far away from the start of the left most intersection lane of an intersection side, to look for the traffic light it controls.\n\x09 * Making this too large can end up finding traffic lights in other intersections, when none should be found.\n\x09 * Making this too small can end up not finding any traffic lights.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far away from the start of the left most intersection lane of an intersection side, to look for the traffic light it controls.\nMaking this too large can end up finding traffic lights in other intersections, when none should be found.\nMaking this too small can end up not finding any traffic lights." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionSideToCrosswalkSearchDistance_MetaData[] = {
		{ "Category", "Pedestrians" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Max distance (cm) a crosswalk lane can be from an intersection side point, to be controlled by that intersection side.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max distance (cm) a crosswalk lane can be from an intersection side point, to be controlled by that intersection side." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandardTrafficGoSeconds_MetaData[] = {
		{ "Category", "Durations|Standard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many seconds vehicles go (how long a green light lasts) - in most cases. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many seconds vehicles go (how long a green light lasts) - in most cases." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandardMinimumTrafficGoSeconds_MetaData[] = {
		{ "Category", "Durations|Standard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many seconds we should wait for vehicles, to assume a vehicle has entered an intersection. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many seconds we should wait for vehicles, to assume a vehicle has entered an intersection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandardCrosswalkGoSeconds_MetaData[] = {
		{ "Category", "Durations|Standard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many seconds pedestrians go (how long crosswalks are open for arriving pedestrians)- in most cases. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many seconds pedestrians go (how long crosswalks are open for arriving pedestrians)- in most cases." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds_MetaData[] = {
		{ "Category", "Durations|FourWay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from one side, and can go straight, right or left. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from one side, and can go straight, right or left." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnidirectionalTrafficStraightRightGoSeconds_MetaData[] = {
		{ "Category", "Durations|FourWay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from one side, and can go straight or right. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from one side, and can go straight or right." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BidirectionalTrafficStraightRightGoSeconds_MetaData[] = {
		{ "Category", "Durations|FourWay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from two sides at once, and can go straight or right. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from two sides at once, and can go straight or right." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreewayIncomingTrafficGoDurationScale_MetaData[] = {
		{ "Category", "Durations|Freeway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Time scale for how much longer a side of an intersection should stay open if it has inbound lanes from a freeway.\n\x09 * May help drain the freeway, but may also cause more congestion in the city.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time scale for how much longer a side of an intersection should stay open if it has inbound lanes from a freeway.\nMay help drain the freeway, but may also cause more congestion in the city." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntersectionEntityConfigIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrafficLightTypesData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrafficLightInstanceData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrafficLightSearchDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntersectionSideToCrosswalkSearchDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandardTrafficGoSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandardMinimumTrafficGoSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandardCrosswalkGoSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnidirectionalTrafficStraightRightGoSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BidirectionalTrafficStraightRightGoSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FreewayIncomingTrafficGoDurationScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficIntersectionSpawnDataGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionEntityConfigIndex = { "IntersectionEntityConfigIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, IntersectionEntityConfigIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionEntityConfigIndex_MetaData), NewProp_IntersectionEntityConfigIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightTypesData = { "TrafficLightTypesData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, TrafficLightTypesData), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypesData_MetaData), NewProp_TrafficLightTypesData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightInstanceData = { "TrafficLightInstanceData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, TrafficLightInstanceData), Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightInstanceData_MetaData), NewProp_TrafficLightInstanceData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightSearchDistance = { "TrafficLightSearchDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, TrafficLightSearchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightSearchDistance_MetaData), NewProp_TrafficLightSearchDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance = { "IntersectionSideToCrosswalkSearchDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, IntersectionSideToCrosswalkSearchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionSideToCrosswalkSearchDistance_MetaData), NewProp_IntersectionSideToCrosswalkSearchDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardTrafficGoSeconds = { "StandardTrafficGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, StandardTrafficGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandardTrafficGoSeconds_MetaData), NewProp_StandardTrafficGoSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardMinimumTrafficGoSeconds = { "StandardMinimumTrafficGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, StandardMinimumTrafficGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandardMinimumTrafficGoSeconds_MetaData), NewProp_StandardMinimumTrafficGoSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardCrosswalkGoSeconds = { "StandardCrosswalkGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, StandardCrosswalkGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandardCrosswalkGoSeconds_MetaData), NewProp_StandardCrosswalkGoSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds = { "UnidirectionalTrafficStraightRightLeftGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, UnidirectionalTrafficStraightRightLeftGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds_MetaData), NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightGoSeconds = { "UnidirectionalTrafficStraightRightGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, UnidirectionalTrafficStraightRightGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnidirectionalTrafficStraightRightGoSeconds_MetaData), NewProp_UnidirectionalTrafficStraightRightGoSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_BidirectionalTrafficStraightRightGoSeconds = { "BidirectionalTrafficStraightRightGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, BidirectionalTrafficStraightRightGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BidirectionalTrafficStraightRightGoSeconds_MetaData), NewProp_BidirectionalTrafficStraightRightGoSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_FreewayIncomingTrafficGoDurationScale = { "FreewayIncomingTrafficGoDurationScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, FreewayIncomingTrafficGoDurationScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreewayIncomingTrafficGoDurationScale_MetaData), NewProp_FreewayIncomingTrafficGoDurationScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionEntityConfigIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightTypesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightInstanceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightSearchDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardTrafficGoSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardMinimumTrafficGoSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardCrosswalkGoSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightGoSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_BidirectionalTrafficStraightRightGoSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_FreewayIncomingTrafficGoDurationScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::ClassParams = {
	&UMassTrafficIntersectionSpawnDataGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator()
{
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionSpawnDataGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficIntersectionSpawnDataGenerator.OuterSingleton, Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficIntersectionSpawnDataGenerator.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficIntersectionSpawnDataGenerator>()
{
	return UMassTrafficIntersectionSpawnDataGenerator::StaticClass();
}
UMassTrafficIntersectionSpawnDataGenerator::UMassTrafficIntersectionSpawnDataGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficIntersectionSpawnDataGenerator);
UMassTrafficIntersectionSpawnDataGenerator::~UMassTrafficIntersectionSpawnDataGenerator() {}
// End Class UMassTrafficIntersectionSpawnDataGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSpawnDataGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator, UMassTrafficIntersectionSpawnDataGenerator::StaticClass, TEXT("UMassTrafficIntersectionSpawnDataGenerator"), &Z_Registration_Info_UClass_UMassTrafficIntersectionSpawnDataGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficIntersectionSpawnDataGenerator), 2352160462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSpawnDataGenerator_h_937406387(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSpawnDataGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSpawnDataGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
