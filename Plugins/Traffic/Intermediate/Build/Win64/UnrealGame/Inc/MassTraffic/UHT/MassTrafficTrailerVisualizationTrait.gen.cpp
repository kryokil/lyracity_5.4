// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficTrailerVisualizationTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficTrailerVisualizationTrait() {}

// Begin Cross Module References
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficTrailerVisualizationTrait
void UMassTrafficTrailerVisualizationTrait::StaticRegisterNativesUMassTrafficTrailerVisualizationTrait()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficTrailerVisualizationTrait);
UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait_NoRegister()
{
	return UMassTrafficTrailerVisualizationTrait::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Trailer Visualization" },
		{ "IncludePath", "MassTrafficTrailerVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerVisualizationTrait.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerVisualizationTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationTrait,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait_Statics::ClassParams = {
	&UMassTrafficTrailerVisualizationTrait::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationTrait.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficTrailerVisualizationTrait>()
{
	return UMassTrafficTrailerVisualizationTrait::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficTrailerVisualizationTrait);
UMassTrafficTrailerVisualizationTrait::~UMassTrafficTrailerVisualizationTrait() {}
// End Class UMassTrafficTrailerVisualizationTrait

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationTrait_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficTrailerVisualizationTrait, UMassTrafficTrailerVisualizationTrait::StaticClass, TEXT("UMassTrafficTrailerVisualizationTrait"), &Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerVisualizationTrait), 2586516058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationTrait_h_3206595803(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationTrait_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
