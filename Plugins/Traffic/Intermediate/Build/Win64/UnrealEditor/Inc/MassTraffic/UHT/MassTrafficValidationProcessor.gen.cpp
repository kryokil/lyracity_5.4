// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficValidationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficValidationProcessor() {}

// Begin Cross Module References
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficValidationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficValidationProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficValidationProcessor
void UMassTrafficValidationProcessor::StaticRegisterNativesUMassTrafficValidationProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficValidationProcessor);
UClass* Z_Construct_UClass_UMassTrafficValidationProcessor_NoRegister()
{
	return UMassTrafficValidationProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficValidationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficValidationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficValidationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleDeviationDistanceThreshold_MetaData[] = {
		{ "Category", "MassTrafficValidationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficValidationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleMajorDeviationDistanceThreshold_MetaData[] = {
		{ "Category", "MassTrafficValidationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficValidationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleMaxSpeed_MetaData[] = {
		{ "Category", "MassTrafficValidationProcessor" },
		{ "ModuleRelativePath", "Public/MassTrafficValidationProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VehicleDeviationDistanceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VehicleMajorDeviationDistanceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VehicleMaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficValidationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::NewProp_VehicleDeviationDistanceThreshold = { "VehicleDeviationDistanceThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficValidationProcessor, VehicleDeviationDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleDeviationDistanceThreshold_MetaData), NewProp_VehicleDeviationDistanceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::NewProp_VehicleMajorDeviationDistanceThreshold = { "VehicleMajorDeviationDistanceThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficValidationProcessor, VehicleMajorDeviationDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleMajorDeviationDistanceThreshold_MetaData), NewProp_VehicleMajorDeviationDistanceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::NewProp_VehicleMaxSpeed = { "VehicleMaxSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficValidationProcessor, VehicleMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleMaxSpeed_MetaData), NewProp_VehicleMaxSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::NewProp_VehicleDeviationDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::NewProp_VehicleMajorDeviationDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::NewProp_VehicleMaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::ClassParams = {
	&UMassTrafficValidationProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficValidationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficValidationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficValidationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficValidationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficValidationProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficValidationProcessor>()
{
	return UMassTrafficValidationProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficValidationProcessor);
UMassTrafficValidationProcessor::~UMassTrafficValidationProcessor() {}
// End Class UMassTrafficValidationProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficValidationProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficValidationProcessor, UMassTrafficValidationProcessor::StaticClass, TEXT("UMassTrafficValidationProcessor"), &Z_Registration_Info_UClass_UMassTrafficValidationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficValidationProcessor), 2693781423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficValidationProcessor_h_415840270(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficValidationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficValidationProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
