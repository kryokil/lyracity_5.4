// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficDriverVisualizationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficDriverVisualizationProcessor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_NoRegister();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficDriverVisualizationProcessor
void UMassTrafficDriverVisualizationProcessor::StaticRegisterNativesUMassTrafficDriverVisualizationProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficDriverVisualizationProcessor);
UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_NoRegister()
{
	return UMassTrafficDriverVisualizationProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden visualization processor to make it tied to the TrafficVehicle via the requirements\n */" },
#endif
		{ "HideCategories", "Mass|LOD" },
		{ "IncludePath", "MassTrafficDriverVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden visualization processor to make it tied to the TrafficVehicle via the requirements" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSteeringThreshold_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowSpeedThreshold_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookIdleMinDistSqrd_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookIdleMinDotToPlayer_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlternateDrivingStanceRatio_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveDriverDamageThreshold_MetaData[] = {
		{ "Category", "MassTrafficDriverVisualizationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Caching ptr to our associated world */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficDriverVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Caching ptr to our associated world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSteeringThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookIdleMinDistSqrd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookIdleMinDotToPlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlternateDrivingStanceRatio;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RemoveDriverDamageThreshold_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RemoveDriverDamageThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficDriverVisualizationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_PlaybackSteeringThreshold = { "PlaybackSteeringThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, PlaybackSteeringThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackSteeringThreshold_MetaData), NewProp_PlaybackSteeringThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LowSpeedThreshold = { "LowSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, LowSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowSpeedThreshold_MetaData), NewProp_LowSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDistSqrd = { "LookIdleMinDistSqrd", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, LookIdleMinDistSqrd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookIdleMinDistSqrd_MetaData), NewProp_LookIdleMinDistSqrd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDotToPlayer = { "LookIdleMinDotToPlayer", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, LookIdleMinDotToPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookIdleMinDotToPlayer_MetaData), NewProp_LookIdleMinDotToPlayer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_AlternateDrivingStanceRatio = { "AlternateDrivingStanceRatio", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, AlternateDrivingStanceRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlternateDrivingStanceRatio_MetaData), NewProp_AlternateDrivingStanceRatio_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_RemoveDriverDamageThreshold_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_RemoveDriverDamageThreshold = { "RemoveDriverDamageThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, RemoveDriverDamageThreshold), Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveDriverDamageThreshold_MetaData), NewProp_RemoveDriverDamageThreshold_MetaData) }; // 1159027513
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverVisualizationProcessor, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_PlaybackSteeringThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LowSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDistSqrd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_LookIdleMinDotToPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_AlternateDrivingStanceRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_RemoveDriverDamageThreshold_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_RemoveDriverDamageThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::ClassParams = {
	&UMassTrafficDriverVisualizationProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficDriverVisualizationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficDriverVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficDriverVisualizationProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficDriverVisualizationProcessor>()
{
	return UMassTrafficDriverVisualizationProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficDriverVisualizationProcessor);
UMassTrafficDriverVisualizationProcessor::~UMassTrafficDriverVisualizationProcessor() {}
// End Class UMassTrafficDriverVisualizationProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficDriverVisualizationProcessor, UMassTrafficDriverVisualizationProcessor::StaticClass, TEXT("UMassTrafficDriverVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficDriverVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficDriverVisualizationProcessor), 2408400850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationProcessor_h_839199838(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDriverVisualizationProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
