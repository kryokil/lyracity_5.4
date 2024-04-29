// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor() {}

// Begin Cross Module References
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor
void UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::StaticRegisterNativesUMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor);
UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_NoRegister()
{
	return UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::ClassParams = {
	&UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor>()
{
	return UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor);
UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::~UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor() {}
// End Class UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor, UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::StaticClass, TEXT("UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor), 1753621671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_h_4020480786(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
