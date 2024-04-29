// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor() {}

// Begin Cross Module References
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor
void UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::StaticRegisterNativesUMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor);
UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_NoRegister()
{
	return UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::ClassParams = {
	&UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor>()
{
	return UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor);
UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::~UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor() {}
// End Class UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor, UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::StaticClass, TEXT("UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor), 4180941486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_h_8454749(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
