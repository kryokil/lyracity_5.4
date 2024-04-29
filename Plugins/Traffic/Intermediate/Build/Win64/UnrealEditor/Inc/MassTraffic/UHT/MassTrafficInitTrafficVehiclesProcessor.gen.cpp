// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficInitTrafficVehiclesProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficInitTrafficVehiclesProcessor() {}

// Begin Cross Module References
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin ScriptStruct FMassTrafficVehiclesSpawnData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehiclesSpawnData;
class UScriptStruct* FMassTrafficVehiclesSpawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehiclesSpawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehiclesSpawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehiclesSpawnData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehiclesSpawnData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehiclesSpawnData>()
{
	return FMassTrafficVehiclesSpawnData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficInitTrafficVehiclesProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehiclesSpawnData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficVehiclesSpawnData",
	nullptr,
	0,
	sizeof(FMassTrafficVehiclesSpawnData),
	alignof(FMassTrafficVehiclesSpawnData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehiclesSpawnData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehiclesSpawnData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehiclesSpawnData.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehiclesSpawnData

// Begin Class UMassTrafficInitTrafficVehiclesProcessor
void UMassTrafficInitTrafficVehiclesProcessor::StaticRegisterNativesUMassTrafficInitTrafficVehiclesProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficInitTrafficVehiclesProcessor);
UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_NoRegister()
{
	return UMassTrafficInitTrafficVehiclesProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Assigns FDataFragment_TrafficVehicleType.AgentType, FDataFragment_TrafficVehicleType.AgentIndex and \n * FDataFragment_LaneLocation.LaneLocation according to the distribution probabilities in \n * TrafficVehicleConfiguration.\n * \n * Initial lane locations are ensured to be non-overlapping on a given lane. \n */" },
#endif
		{ "DisplayName", "Init Traffic Vehicles" },
		{ "IncludePath", "MassTrafficInitTrafficVehiclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInitTrafficVehiclesProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assigns FDataFragment_TrafficVehicleType.AgentType, FDataFragment_TrafficVehicleType.AgentIndex and\nFDataFragment_LaneLocation.LaneLocation according to the distribution probabilities in\nTrafficVehicleConfiguration.\n\nInitial lane locations are ensured to be non-overlapping on a given lane." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInitTrafficVehiclesProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::ClassParams = {
	&UMassTrafficInitTrafficVehiclesProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficInitTrafficVehiclesProcessor>()
{
	return UMassTrafficInitTrafficVehiclesProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficInitTrafficVehiclesProcessor);
UMassTrafficInitTrafficVehiclesProcessor::~UMassTrafficInitTrafficVehiclesProcessor() {}
// End Class UMassTrafficInitTrafficVehiclesProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficVehiclesSpawnData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics::NewStructOps, TEXT("MassTrafficVehiclesSpawnData"), &Z_Registration_Info_UScriptStruct_MassTrafficVehiclesSpawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehiclesSpawnData), 3070803643U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor, UMassTrafficInitTrafficVehiclesProcessor::StaticClass, TEXT("UMassTrafficInitTrafficVehiclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInitTrafficVehiclesProcessor), 2049630747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h_4275778454(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS