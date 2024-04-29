// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudSliceAndDiceCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceCommandlet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
POINTCLOUD_API UClass* Z_Construct_UClass_USliceAndDiceCommandlet();
POINTCLOUD_API UClass* Z_Construct_UClass_USliceAndDiceCommandlet_NoRegister();
UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References

// Begin Class USliceAndDiceCommandlet
void USliceAndDiceCommandlet::StaticRegisterNativesUSliceAndDiceCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USliceAndDiceCommandlet);
UClass* Z_Construct_UClass_USliceAndDiceCommandlet_NoRegister()
{
	return USliceAndDiceCommandlet::StaticClass();
}
struct Z_Construct_UClass_USliceAndDiceCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PointCloudSliceAndDiceCommandlet.h" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USliceAndDiceCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USliceAndDiceCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USliceAndDiceCommandlet_Statics::ClassParams = {
	&USliceAndDiceCommandlet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_USliceAndDiceCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USliceAndDiceCommandlet()
{
	if (!Z_Registration_Info_UClass_USliceAndDiceCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USliceAndDiceCommandlet.OuterSingleton, Z_Construct_UClass_USliceAndDiceCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USliceAndDiceCommandlet.OuterSingleton;
}
template<> POINTCLOUD_API UClass* StaticClass<USliceAndDiceCommandlet>()
{
	return USliceAndDiceCommandlet::StaticClass();
}
USliceAndDiceCommandlet::USliceAndDiceCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USliceAndDiceCommandlet);
USliceAndDiceCommandlet::~USliceAndDiceCommandlet() {}
// End Class USliceAndDiceCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USliceAndDiceCommandlet, USliceAndDiceCommandlet::StaticClass, TEXT("USliceAndDiceCommandlet"), &Z_Registration_Info_UClass_USliceAndDiceCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USliceAndDiceCommandlet), 4108428359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCommandlet_h_1399228541(TEXT("/Script/PointCloud"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
