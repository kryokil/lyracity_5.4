// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/CitySampleMassCrowdRepresentationActorManagement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleMassCrowdRepresentationActorManagement() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement_NoRegister();
MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdRepresentationActorManagement();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin Class UCitySampleMassCrowdRepresentationActorManagement
void UCitySampleMassCrowdRepresentationActorManagement::StaticRegisterNativesUCitySampleMassCrowdRepresentationActorManagement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleMassCrowdRepresentationActorManagement);
UClass* Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement_NoRegister()
{
	return UCitySampleMassCrowdRepresentationActorManagement::StaticClass();
}
struct Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Overridden actor management fro forsty specific\n*/" },
#endif
		{ "DisplayName", "CitySample Crowd Visualization" },
		{ "IncludePath", "CitySampleMassCrowdRepresentationActorManagement.h" },
		{ "ModuleRelativePath", "Public/CitySampleMassCrowdRepresentationActorManagement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden actor management fro forsty specific" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleMassCrowdRepresentationActorManagement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassCrowdRepresentationActorManagement,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement_Statics::ClassParams = {
	&UCitySampleMassCrowdRepresentationActorManagement::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement()
{
	if (!Z_Registration_Info_UClass_UCitySampleMassCrowdRepresentationActorManagement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleMassCrowdRepresentationActorManagement.OuterSingleton, Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleMassCrowdRepresentationActorManagement.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UCitySampleMassCrowdRepresentationActorManagement>()
{
	return UCitySampleMassCrowdRepresentationActorManagement::StaticClass();
}
UCitySampleMassCrowdRepresentationActorManagement::UCitySampleMassCrowdRepresentationActorManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleMassCrowdRepresentationActorManagement);
UCitySampleMassCrowdRepresentationActorManagement::~UCitySampleMassCrowdRepresentationActorManagement() {}
// End Class UCitySampleMassCrowdRepresentationActorManagement

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleMassCrowdRepresentationActorManagement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleMassCrowdRepresentationActorManagement, UCitySampleMassCrowdRepresentationActorManagement::StaticClass, TEXT("UCitySampleMassCrowdRepresentationActorManagement"), &Z_Registration_Info_UClass_UCitySampleMassCrowdRepresentationActorManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleMassCrowdRepresentationActorManagement), 173636310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleMassCrowdRepresentationActorManagement_h_3629374779(TEXT("/Script/CitySampleMassCrowd"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleMassCrowdRepresentationActorManagement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleMassCrowdRepresentationActorManagement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
