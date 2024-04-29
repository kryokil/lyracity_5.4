// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficIntersectionSimulationTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficIntersectionSimulationTrait() {}

// Begin Cross Module References
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficIntersectionSimulationTrait
void UMassTrafficIntersectionSimulationTrait::StaticRegisterNativesUMassTrafficIntersectionSimulationTrait()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficIntersectionSimulationTrait);
UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_NoRegister()
{
	return UMassTrafficIntersectionSimulationTrait::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Intersection Simulation" },
		{ "IncludePath", "MassTrafficIntersectionSimulationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSimulationTrait.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficIntersectionSimulationTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::ClassParams = {
	&UMassTrafficIntersectionSimulationTrait::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficIntersectionSimulationTrait>()
{
	return UMassTrafficIntersectionSimulationTrait::StaticClass();
}
UMassTrafficIntersectionSimulationTrait::UMassTrafficIntersectionSimulationTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficIntersectionSimulationTrait);
UMassTrafficIntersectionSimulationTrait::~UMassTrafficIntersectionSimulationTrait() {}
// End Class UMassTrafficIntersectionSimulationTrait

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait, UMassTrafficIntersectionSimulationTrait::StaticClass, TEXT("UMassTrafficIntersectionSimulationTrait"), &Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficIntersectionSimulationTrait), 2632624052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h_3108175443(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
