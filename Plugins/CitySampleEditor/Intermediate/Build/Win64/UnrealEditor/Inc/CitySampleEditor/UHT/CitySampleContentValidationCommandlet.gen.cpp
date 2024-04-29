// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/Commandlets/CitySampleContentValidationCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleContentValidationCommandlet() {}

// Begin Cross Module References
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleContentValidationCommandlet();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleContentValidationCommandlet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References

// Begin Class UCitySampleContentValidationCommandlet
void UCitySampleContentValidationCommandlet::StaticRegisterNativesUCitySampleContentValidationCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleContentValidationCommandlet);
UClass* Z_Construct_UClass_UCitySampleContentValidationCommandlet_NoRegister()
{
	return UCitySampleContentValidationCommandlet::StaticClass();
}
struct Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/CitySampleContentValidationCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/CitySampleContentValidationCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleContentValidationCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::ClassParams = {
	&UCitySampleContentValidationCommandlet::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleContentValidationCommandlet()
{
	if (!Z_Registration_Info_UClass_UCitySampleContentValidationCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleContentValidationCommandlet.OuterSingleton, Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleContentValidationCommandlet.OuterSingleton;
}
template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleContentValidationCommandlet>()
{
	return UCitySampleContentValidationCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleContentValidationCommandlet);
UCitySampleContentValidationCommandlet::~UCitySampleContentValidationCommandlet() {}
// End Class UCitySampleContentValidationCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_CitySampleContentValidationCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleContentValidationCommandlet, UCitySampleContentValidationCommandlet::StaticClass, TEXT("UCitySampleContentValidationCommandlet"), &Z_Registration_Info_UClass_UCitySampleContentValidationCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleContentValidationCommandlet), 86462871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_CitySampleContentValidationCommandlet_h_85094071(TEXT("/Script/CitySampleEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_CitySampleContentValidationCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_CitySampleContentValidationCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
