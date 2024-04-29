// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehiclePhysicsProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehiclePhysicsProcessor() {}

// Begin Cross Module References
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficVehiclePhysicsProcessor
void UMassTrafficVehiclePhysicsProcessor::StaticRegisterNativesUMassTrafficVehiclePhysicsProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehiclePhysicsProcessor);
UClass* Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_NoRegister()
{
	return UMassTrafficVehiclePhysicsProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficVehiclePhysicsProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehiclePhysicsProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehiclePhysicsProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::ClassParams = {
	&UMassTrafficVehiclePhysicsProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehiclePhysicsProcessor>()
{
	return UMassTrafficVehiclePhysicsProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehiclePhysicsProcessor);
UMassTrafficVehiclePhysicsProcessor::~UMassTrafficVehiclePhysicsProcessor() {}
// End Class UMassTrafficVehiclePhysicsProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehiclePhysicsProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor, UMassTrafficVehiclePhysicsProcessor::StaticClass, TEXT("UMassTrafficVehiclePhysicsProcessor"), &Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehiclePhysicsProcessor), 2703182444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehiclePhysicsProcessor_h_820937027(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehiclePhysicsProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehiclePhysicsProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
