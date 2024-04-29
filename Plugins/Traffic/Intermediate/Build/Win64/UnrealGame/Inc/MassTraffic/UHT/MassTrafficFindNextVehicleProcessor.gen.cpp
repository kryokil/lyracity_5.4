// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficFindNextVehicleProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficFindNextVehicleProcessor() {}

// Begin Cross Module References
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficFindNextVehicleProcessor
void UMassTrafficFindNextVehicleProcessor::StaticRegisterNativesUMassTrafficFindNextVehicleProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficFindNextVehicleProcessor);
UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_NoRegister()
{
	return UMassTrafficFindNextVehicleProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFindNextVehicleProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFindNextVehicleProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFindNextVehicleProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::ClassParams = {
	&UMassTrafficFindNextVehicleProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficFindNextVehicleProcessor>()
{
	return UMassTrafficFindNextVehicleProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficFindNextVehicleProcessor);
UMassTrafficFindNextVehicleProcessor::~UMassTrafficFindNextVehicleProcessor() {}
// End Class UMassTrafficFindNextVehicleProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor, UMassTrafficFindNextVehicleProcessor::StaticClass, TEXT("UMassTrafficFindNextVehicleProcessor"), &Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFindNextVehicleProcessor), 1797453269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h_385726515(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
