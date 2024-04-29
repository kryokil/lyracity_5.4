// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficTrailerRepresentationActorManagement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficTrailerRepresentationActorManagement() {}

// Begin Cross Module References
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficTrailerRepresentationActorManagement
void UMassTrafficTrailerRepresentationActorManagement::StaticRegisterNativesUMassTrafficTrailerRepresentationActorManagement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficTrailerRepresentationActorManagement);
UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_NoRegister()
{
	return UMassTrafficTrailerRepresentationActorManagement::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden representation actor management traffic vehicle trailers\n */" },
#endif
		{ "IncludePath", "MassTrafficTrailerRepresentationActorManagement.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerRepresentationActorManagement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden representation actor management traffic vehicle trailers" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerRepresentationActorManagement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassRepresentationActorManagement,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::ClassParams = {
	&UMassTrafficTrailerRepresentationActorManagement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement()
{
	if (!Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficTrailerRepresentationActorManagement>()
{
	return UMassTrafficTrailerRepresentationActorManagement::StaticClass();
}
UMassTrafficTrailerRepresentationActorManagement::UMassTrafficTrailerRepresentationActorManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficTrailerRepresentationActorManagement);
UMassTrafficTrailerRepresentationActorManagement::~UMassTrafficTrailerRepresentationActorManagement() {}
// End Class UMassTrafficTrailerRepresentationActorManagement

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement, UMassTrafficTrailerRepresentationActorManagement::StaticClass, TEXT("UMassTrafficTrailerRepresentationActorManagement"), &Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerRepresentationActorManagement), 844098500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h_2851361113(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
