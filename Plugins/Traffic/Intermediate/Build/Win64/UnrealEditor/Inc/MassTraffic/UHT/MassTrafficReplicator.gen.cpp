// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficReplicator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficReplicator() {}

// Begin Cross Module References
MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicatorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficReplicator();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficReplicator_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficReplicator
void UMassTrafficReplicator::StaticRegisterNativesUMassTrafficReplicator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficReplicator);
UClass* Z_Construct_UClass_UMassTrafficReplicator_NoRegister()
{
	return UMassTrafficReplicator::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficReplicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class that handles replication and only runs on the server. It queries Mass entity fragments and sets those values when appropriate using the MassClientBubbleHandler. */" },
#endif
		{ "IncludePath", "MassTrafficReplicator.h" },
		{ "ModuleRelativePath", "Public/MassTrafficReplicator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class that handles replication and only runs on the server. It queries Mass entity fragments and sets those values when appropriate using the MassClientBubbleHandler." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficReplicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficReplicator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassReplicatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficReplicator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficReplicator_Statics::ClassParams = {
	&UMassTrafficReplicator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficReplicator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficReplicator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficReplicator()
{
	if (!Z_Registration_Info_UClass_UMassTrafficReplicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficReplicator.OuterSingleton, Z_Construct_UClass_UMassTrafficReplicator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficReplicator.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficReplicator>()
{
	return UMassTrafficReplicator::StaticClass();
}
UMassTrafficReplicator::UMassTrafficReplicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficReplicator);
UMassTrafficReplicator::~UMassTrafficReplicator() {}
// End Class UMassTrafficReplicator

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficReplicator, UMassTrafficReplicator::StaticClass, TEXT("UMassTrafficReplicator"), &Z_Registration_Info_UClass_UMassTrafficReplicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficReplicator), 37859556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicator_h_481587734(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
