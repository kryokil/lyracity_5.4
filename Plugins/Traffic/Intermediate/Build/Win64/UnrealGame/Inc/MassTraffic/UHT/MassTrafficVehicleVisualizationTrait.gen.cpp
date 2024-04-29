// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehicleVisualizationTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleVisualizationTrait() {}

// Begin Cross Module References
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficVehicleVisualizationTrait
void UMassTrafficVehicleVisualizationTrait::StaticRegisterNativesUMassTrafficVehicleVisualizationTrait()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleVisualizationTrait);
UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait_NoRegister()
{
	return UMassTrafficVehicleVisualizationTrait::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Vehicle Visualization" },
		{ "IncludePath", "MassTrafficVehicleVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationTrait.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleVisualizationTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationTrait,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait_Statics::ClassParams = {
	&UMassTrafficVehicleVisualizationTrait::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationTrait.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleVisualizationTrait>()
{
	return UMassTrafficVehicleVisualizationTrait::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleVisualizationTrait);
UMassTrafficVehicleVisualizationTrait::~UMassTrafficVehicleVisualizationTrait() {}
// End Class UMassTrafficVehicleVisualizationTrait

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationTrait_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleVisualizationTrait, UMassTrafficVehicleVisualizationTrait::StaticClass, TEXT("UMassTrafficVehicleVisualizationTrait"), &Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleVisualizationTrait), 684120969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationTrait_h_1376294372(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationTrait_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
