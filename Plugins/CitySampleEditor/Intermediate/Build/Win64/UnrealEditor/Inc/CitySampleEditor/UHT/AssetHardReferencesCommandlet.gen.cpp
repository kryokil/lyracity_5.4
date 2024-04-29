// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/Commandlets/AssetHardReferencesCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetHardReferencesCommandlet() {}

// Begin Cross Module References
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UAssetHardReferencesCommandlet();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UAssetHardReferencesCommandlet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References

// Begin Class UAssetHardReferencesCommandlet
void UAssetHardReferencesCommandlet::StaticRegisterNativesUAssetHardReferencesCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetHardReferencesCommandlet);
UClass* Z_Construct_UClass_UAssetHardReferencesCommandlet_NoRegister()
{
	return UAssetHardReferencesCommandlet::StaticClass();
}
struct Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/AssetHardReferencesCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/AssetHardReferencesCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetHardReferencesCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::ClassParams = {
	&UAssetHardReferencesCommandlet::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetHardReferencesCommandlet()
{
	if (!Z_Registration_Info_UClass_UAssetHardReferencesCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetHardReferencesCommandlet.OuterSingleton, Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetHardReferencesCommandlet.OuterSingleton;
}
template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UAssetHardReferencesCommandlet>()
{
	return UAssetHardReferencesCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetHardReferencesCommandlet);
UAssetHardReferencesCommandlet::~UAssetHardReferencesCommandlet() {}
// End Class UAssetHardReferencesCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_AssetHardReferencesCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetHardReferencesCommandlet, UAssetHardReferencesCommandlet::StaticClass, TEXT("UAssetHardReferencesCommandlet"), &Z_Registration_Info_UClass_UAssetHardReferencesCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetHardReferencesCommandlet), 3897660081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_AssetHardReferencesCommandlet_h_2625271013(TEXT("/Script/CitySampleEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_AssetHardReferencesCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_AssetHardReferencesCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
