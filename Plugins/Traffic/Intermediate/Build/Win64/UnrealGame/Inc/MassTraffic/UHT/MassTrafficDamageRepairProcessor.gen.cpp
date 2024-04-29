// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficDamageRepairProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficDamageRepairProcessor() {}

// Begin Cross Module References
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficDamageRepairProcessor
void UMassTrafficDamageRepairProcessor::StaticRegisterNativesUMassTrafficDamageRepairProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficDamageRepairProcessor);
UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor_NoRegister()
{
	return UMassTrafficDamageRepairProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficDamageRepairProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficDamageRepairProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficDamageRepairProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::ClassParams = {
	&UMassTrafficDamageRepairProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficDamageRepairProcessor>()
{
	return UMassTrafficDamageRepairProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficDamageRepairProcessor);
UMassTrafficDamageRepairProcessor::~UMassTrafficDamageRepairProcessor() {}
// End Class UMassTrafficDamageRepairProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficDamageRepairProcessor, UMassTrafficDamageRepairProcessor::StaticClass, TEXT("UMassTrafficDamageRepairProcessor"), &Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficDamageRepairProcessor), 2338937885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h_1962528389(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
