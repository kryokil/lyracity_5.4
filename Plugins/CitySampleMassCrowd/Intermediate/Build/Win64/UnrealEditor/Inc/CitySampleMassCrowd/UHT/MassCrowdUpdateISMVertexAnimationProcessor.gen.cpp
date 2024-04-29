// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/MassCrowdUpdateISMVertexAnimationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdUpdateISMVertexAnimationProcessor() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor_NoRegister();
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassUpdateISMProcessor();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin Class UMassCrowdUpdateISMVertexAnimationProcessor
void UMassCrowdUpdateISMVertexAnimationProcessor::StaticRegisterNativesUMassCrowdUpdateISMVertexAnimationProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdUpdateISMVertexAnimationProcessor);
UClass* Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor_NoRegister()
{
	return UMassCrowdUpdateISMVertexAnimationProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassCrowdUpdateISMVertexAnimationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdUpdateISMVertexAnimationProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdUpdateISMVertexAnimationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassUpdateISMProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor_Statics::ClassParams = {
	&UMassCrowdUpdateISMVertexAnimationProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassCrowdUpdateISMVertexAnimationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdUpdateISMVertexAnimationProcessor.OuterSingleton, Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassCrowdUpdateISMVertexAnimationProcessor.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UMassCrowdUpdateISMVertexAnimationProcessor>()
{
	return UMassCrowdUpdateISMVertexAnimationProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdUpdateISMVertexAnimationProcessor);
UMassCrowdUpdateISMVertexAnimationProcessor::~UMassCrowdUpdateISMVertexAnimationProcessor() {}
// End Class UMassCrowdUpdateISMVertexAnimationProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdUpdateISMVertexAnimationProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdUpdateISMVertexAnimationProcessor, UMassCrowdUpdateISMVertexAnimationProcessor::StaticClass, TEXT("UMassCrowdUpdateISMVertexAnimationProcessor"), &Z_Registration_Info_UClass_UMassCrowdUpdateISMVertexAnimationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdUpdateISMVertexAnimationProcessor), 981751624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdUpdateISMVertexAnimationProcessor_h_2369102683(TEXT("/Script/CitySampleMassCrowd"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdUpdateISMVertexAnimationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdUpdateISMVertexAnimationProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
