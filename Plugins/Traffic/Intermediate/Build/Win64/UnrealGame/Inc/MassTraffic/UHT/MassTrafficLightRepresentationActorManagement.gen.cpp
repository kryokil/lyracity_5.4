// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficLightRepresentationActorManagement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficLightRepresentationActorManagement() {}

// Begin Cross Module References
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficLightRepresentationActorManagement
void UMassTrafficLightRepresentationActorManagement::StaticRegisterNativesUMassTrafficLightRepresentationActorManagement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficLightRepresentationActorManagement);
UClass* Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_NoRegister()
{
	return UMassTrafficLightRepresentationActorManagement::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden representation actor management for traffic light\n */" },
#endif
		{ "IncludePath", "MassTrafficLightRepresentationActorManagement.h" },
		{ "ModuleRelativePath", "Public/MassTrafficLightRepresentationActorManagement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden representation actor management for traffic light" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLightRepresentationActorManagement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassRepresentationActorManagement,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::ClassParams = {
	&UMassTrafficLightRepresentationActorManagement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement()
{
	if (!Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement.OuterSingleton, Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficLightRepresentationActorManagement>()
{
	return UMassTrafficLightRepresentationActorManagement::StaticClass();
}
UMassTrafficLightRepresentationActorManagement::UMassTrafficLightRepresentationActorManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficLightRepresentationActorManagement);
UMassTrafficLightRepresentationActorManagement::~UMassTrafficLightRepresentationActorManagement() {}
// End Class UMassTrafficLightRepresentationActorManagement

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightRepresentationActorManagement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement, UMassTrafficLightRepresentationActorManagement::StaticClass, TEXT("UMassTrafficLightRepresentationActorManagement"), &Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLightRepresentationActorManagement), 2842057192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightRepresentationActorManagement_h_241583826(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightRepresentationActorManagement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightRepresentationActorManagement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
