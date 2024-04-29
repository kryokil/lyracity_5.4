// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/CitySampleDebugVisualization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleDebugVisualization() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UCitySampleDebugVisProcessor();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UCitySampleDebugVisProcessor_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin Class UCitySampleDebugVisProcessor
void UCitySampleDebugVisProcessor::StaticRegisterNativesUCitySampleDebugVisProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleDebugVisProcessor);
UClass* Z_Construct_UClass_UCitySampleDebugVisProcessor_NoRegister()
{
	return UCitySampleDebugVisProcessor::StaticClass();
}
struct Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CitySampleDebugVisualization.h" },
		{ "ModuleRelativePath", "Public/CitySampleDebugVisualization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentRadiusToUse_MetaData[] = {
		{ "Category", "CitySampleDebugVisProcessor" },
		{ "ModuleRelativePath", "Public/CitySampleDebugVisualization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentRadiusToUse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleDebugVisProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::NewProp_AgentRadiusToUse = { "AgentRadiusToUse", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleDebugVisProcessor, AgentRadiusToUse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentRadiusToUse_MetaData), NewProp_AgentRadiusToUse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::NewProp_AgentRadiusToUse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::ClassParams = {
	&UCitySampleDebugVisProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleDebugVisProcessor()
{
	if (!Z_Registration_Info_UClass_UCitySampleDebugVisProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleDebugVisProcessor.OuterSingleton, Z_Construct_UClass_UCitySampleDebugVisProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleDebugVisProcessor.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UCitySampleDebugVisProcessor>()
{
	return UCitySampleDebugVisProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleDebugVisProcessor);
UCitySampleDebugVisProcessor::~UCitySampleDebugVisProcessor() {}
// End Class UCitySampleDebugVisProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleDebugVisualization_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleDebugVisProcessor, UCitySampleDebugVisProcessor::StaticClass, TEXT("UCitySampleDebugVisProcessor"), &Z_Registration_Info_UClass_UCitySampleDebugVisProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleDebugVisProcessor), 1504126823U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleDebugVisualization_h_3460663344(TEXT("/Script/CitySampleMassCrowd"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleDebugVisualization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleDebugVisualization_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
