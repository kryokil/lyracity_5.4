// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficParkedVehicleVisualizationTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficParkedVehicleVisualizationTrait() {}

// Begin Cross Module References
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficParkedVehicleVisualizationTrait
void UMassTrafficParkedVehicleVisualizationTrait::StaticRegisterNativesUMassTrafficParkedVehicleVisualizationTrait()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficParkedVehicleVisualizationTrait);
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_NoRegister()
{
	return UMassTrafficParkedVehicleVisualizationTrait::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Parked Vehicle Visualization" },
		{ "IncludePath", "MassTrafficParkedVehicleVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleVisualizationTrait.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficParkedVehicleVisualizationTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationTrait,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::ClassParams = {
	&UMassTrafficParkedVehicleVisualizationTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationTrait.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficParkedVehicleVisualizationTrait>()
{
	return UMassTrafficParkedVehicleVisualizationTrait::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficParkedVehicleVisualizationTrait);
UMassTrafficParkedVehicleVisualizationTrait::~UMassTrafficParkedVehicleVisualizationTrait() {}
// End Class UMassTrafficParkedVehicleVisualizationTrait

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationTrait_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationTrait, UMassTrafficParkedVehicleVisualizationTrait::StaticClass, TEXT("UMassTrafficParkedVehicleVisualizationTrait"), &Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficParkedVehicleVisualizationTrait), 2225053582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationTrait_h_2663064699(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationTrait_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
