// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficTrailerSpawnDataGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficTrailerSpawnDataGenerator() {}

// Begin Cross Module References
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficTrailerSpawnDataGenerator
void UMassTrafficTrailerSpawnDataGenerator::StaticRegisterNativesUMassTrafficTrailerSpawnDataGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficTrailerSpawnDataGenerator);
UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_NoRegister()
{
	return UMassTrafficTrailerSpawnDataGenerator::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Searches all currently spawned vehicles with UMassTrafficConstrainedTrailerTrait and spawns their\n * TrailerAgentConfigAsset, constrained to each vehicle respectively.\n * \n * Note: Only TrailerAgentConfigAsset's that appear in this spawners entity types list will be spawned. \n */" },
#endif
		{ "IncludePath", "MassTrafficTrailerSpawnDataGenerator.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Searches all currently spawned vehicles with UMassTrafficConstrainedTrailerTrait and spawns their\nTrailerAgentConfigAsset, constrained to each vehicle respectively.\n\nNote: Only TrailerAgentConfigAsset's that appear in this spawners entity types list will be spawned." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerSpawnDataGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::ClassParams = {
	&UMassTrafficTrailerSpawnDataGenerator::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator()
{
	if (!Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficTrailerSpawnDataGenerator>()
{
	return UMassTrafficTrailerSpawnDataGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficTrailerSpawnDataGenerator);
UMassTrafficTrailerSpawnDataGenerator::~UMassTrafficTrailerSpawnDataGenerator() {}
// End Class UMassTrafficTrailerSpawnDataGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator, UMassTrafficTrailerSpawnDataGenerator::StaticClass, TEXT("UMassTrafficTrailerSpawnDataGenerator"), &Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerSpawnDataGenerator), 3592751413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h_1222002873(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
