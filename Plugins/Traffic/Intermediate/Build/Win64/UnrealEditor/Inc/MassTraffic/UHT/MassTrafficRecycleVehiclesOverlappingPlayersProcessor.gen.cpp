// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficRecycleVehiclesOverlappingPlayersProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficRecycleVehiclesOverlappingPlayersProcessor() {}

// Begin Cross Module References
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficRecycleVehiclesOverlappingPlayersProcessor
void UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::StaticRegisterNativesUMassTrafficRecycleVehiclesOverlappingPlayersProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficRecycleVehiclesOverlappingPlayersProcessor);
UClass* Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_NoRegister()
{
	return UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficRecycleVehiclesOverlappingPlayersProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficRecycleVehiclesOverlappingPlayersProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficRecycleVehiclesOverlappingPlayersProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::ClassParams = {
	&UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficRecycleVehiclesOverlappingPlayersProcessor>()
{
	return UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficRecycleVehiclesOverlappingPlayersProcessor);
UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::~UMassTrafficRecycleVehiclesOverlappingPlayersProcessor() {}
// End Class UMassTrafficRecycleVehiclesOverlappingPlayersProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRecycleVehiclesOverlappingPlayersProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor, UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::StaticClass, TEXT("UMassTrafficRecycleVehiclesOverlappingPlayersProcessor"), &Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficRecycleVehiclesOverlappingPlayersProcessor), 996636792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRecycleVehiclesOverlappingPlayersProcessor_h_3567647371(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRecycleVehiclesOverlappingPlayersProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRecycleVehiclesOverlappingPlayersProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
