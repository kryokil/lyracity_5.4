// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficUpdateDistanceToNearestObstacleProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficUpdateDistanceToNearestObstacleProcessor() {}

// Begin Cross Module References
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficUpdateDistanceToNearestObstacleProcessor
void UMassTrafficUpdateDistanceToNearestObstacleProcessor::StaticRegisterNativesUMassTrafficUpdateDistanceToNearestObstacleProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficUpdateDistanceToNearestObstacleProcessor);
UClass* Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_NoRegister()
{
	return UMassTrafficUpdateDistanceToNearestObstacleProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficUpdateDistanceToNearestObstacleProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficUpdateDistanceToNearestObstacleProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficUpdateDistanceToNearestObstacleProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::ClassParams = {
	&UMassTrafficUpdateDistanceToNearestObstacleProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficUpdateDistanceToNearestObstacleProcessor>()
{
	return UMassTrafficUpdateDistanceToNearestObstacleProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficUpdateDistanceToNearestObstacleProcessor);
UMassTrafficUpdateDistanceToNearestObstacleProcessor::~UMassTrafficUpdateDistanceToNearestObstacleProcessor() {}
// End Class UMassTrafficUpdateDistanceToNearestObstacleProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateDistanceToNearestObstacleProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor, UMassTrafficUpdateDistanceToNearestObstacleProcessor::StaticClass, TEXT("UMassTrafficUpdateDistanceToNearestObstacleProcessor"), &Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficUpdateDistanceToNearestObstacleProcessor), 899312424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateDistanceToNearestObstacleProcessor_h_1279897467(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateDistanceToNearestObstacleProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateDistanceToNearestObstacleProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
