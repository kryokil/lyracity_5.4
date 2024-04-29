// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficActorVehiclePhysicsProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficActorVehiclePhysicsProcessor() {}

// Begin Cross Module References
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficActorVehiclePhysicsProcessor
void UMassTrafficActorVehiclePhysicsProcessor::StaticRegisterNativesUMassTrafficActorVehiclePhysicsProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficActorVehiclePhysicsProcessor);
UClass* Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_NoRegister()
{
	return UMassTrafficActorVehiclePhysicsProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficActorVehiclePhysicsProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficActorVehiclePhysicsProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficActorVehiclePhysicsProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::ClassParams = {
	&UMassTrafficActorVehiclePhysicsProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficActorVehiclePhysicsProcessor>()
{
	return UMassTrafficActorVehiclePhysicsProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficActorVehiclePhysicsProcessor);
UMassTrafficActorVehiclePhysicsProcessor::~UMassTrafficActorVehiclePhysicsProcessor() {}
// End Class UMassTrafficActorVehiclePhysicsProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficActorVehiclePhysicsProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor, UMassTrafficActorVehiclePhysicsProcessor::StaticClass, TEXT("UMassTrafficActorVehiclePhysicsProcessor"), &Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficActorVehiclePhysicsProcessor), 1466725925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficActorVehiclePhysicsProcessor_h_2822595945(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficActorVehiclePhysicsProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficActorVehiclePhysicsProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
