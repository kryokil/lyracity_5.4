// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficPlayerVehicleLODProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficPlayerVehicleLODProcessor() {}

// Begin Cross Module References
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficPlayerVehicleLODProcessor
void UMassTrafficPlayerVehicleLODProcessor::StaticRegisterNativesUMassTrafficPlayerVehicleLODProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficPlayerVehicleLODProcessor);
UClass* Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_NoRegister()
{
	return UMassTrafficPlayerVehicleLODProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Scale the LOD distance for the player vehicle so it stays around\n * way way longer that would be normally.\n */" },
#endif
		{ "IncludePath", "MassTrafficPlayerVehicleLODProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficPlayerVehicleLODProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Scale the LOD distance for the player vehicle so it stays around\n* way way longer that would be normally." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficPlayerVehicleLODProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::ClassParams = {
	&UMassTrafficPlayerVehicleLODProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficPlayerVehicleLODProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficPlayerVehicleLODProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficPlayerVehicleLODProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficPlayerVehicleLODProcessor>()
{
	return UMassTrafficPlayerVehicleLODProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficPlayerVehicleLODProcessor);
UMassTrafficPlayerVehicleLODProcessor::~UMassTrafficPlayerVehicleLODProcessor() {}
// End Class UMassTrafficPlayerVehicleLODProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPlayerVehicleLODProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficPlayerVehicleLODProcessor, UMassTrafficPlayerVehicleLODProcessor::StaticClass, TEXT("UMassTrafficPlayerVehicleLODProcessor"), &Z_Registration_Info_UClass_UMassTrafficPlayerVehicleLODProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficPlayerVehicleLODProcessor), 2944417673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPlayerVehicleLODProcessor_h_3910800274(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPlayerVehicleLODProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPlayerVehicleLODProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
