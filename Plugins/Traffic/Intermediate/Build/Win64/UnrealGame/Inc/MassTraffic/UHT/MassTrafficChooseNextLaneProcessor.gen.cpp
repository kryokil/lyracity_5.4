// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficChooseNextLaneProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficChooseNextLaneProcessor() {}

// Begin Cross Module References
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficChooseNextLaneProcessor
void UMassTrafficChooseNextLaneProcessor::StaticRegisterNativesUMassTrafficChooseNextLaneProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficChooseNextLaneProcessor);
UClass* Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor_NoRegister()
{
	return UMassTrafficChooseNextLaneProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficChooseNextLaneProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficChooseNextLaneProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficChooseNextLaneProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor_Statics::ClassParams = {
	&UMassTrafficChooseNextLaneProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficChooseNextLaneProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficChooseNextLaneProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficChooseNextLaneProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficChooseNextLaneProcessor>()
{
	return UMassTrafficChooseNextLaneProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficChooseNextLaneProcessor);
UMassTrafficChooseNextLaneProcessor::~UMassTrafficChooseNextLaneProcessor() {}
// End Class UMassTrafficChooseNextLaneProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficChooseNextLaneProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficChooseNextLaneProcessor, UMassTrafficChooseNextLaneProcessor::StaticClass, TEXT("UMassTrafficChooseNextLaneProcessor"), &Z_Registration_Info_UClass_UMassTrafficChooseNextLaneProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficChooseNextLaneProcessor), 3782491369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficChooseNextLaneProcessor_h_127878198(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficChooseNextLaneProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficChooseNextLaneProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
