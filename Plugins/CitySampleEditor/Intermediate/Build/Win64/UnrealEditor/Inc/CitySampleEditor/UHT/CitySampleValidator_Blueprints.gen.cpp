// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/Validation/CitySampleValidator_Blueprints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleValidator_Blueprints() {}

// Begin Cross Module References
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleEditorValidator();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleValidator_Blueprints();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleValidator_Blueprints_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References

// Begin Class UCitySampleValidator_Blueprints
void UCitySampleValidator_Blueprints::StaticRegisterNativesUCitySampleValidator_Blueprints()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleValidator_Blueprints);
UClass* Z_Construct_UClass_UCitySampleValidator_Blueprints_NoRegister()
{
	return UCitySampleValidator_Blueprints::StaticClass();
}
struct Z_Construct_UClass_UCitySampleValidator_Blueprints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Validation/CitySampleValidator_Blueprints.h" },
		{ "ModuleRelativePath", "Public/Validation/CitySampleValidator_Blueprints.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleValidator_Blueprints>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCitySampleValidator_Blueprints_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCitySampleEditorValidator,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleValidator_Blueprints_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleValidator_Blueprints_Statics::ClassParams = {
	&UCitySampleValidator_Blueprints::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleValidator_Blueprints_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleValidator_Blueprints_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleValidator_Blueprints()
{
	if (!Z_Registration_Info_UClass_UCitySampleValidator_Blueprints.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleValidator_Blueprints.OuterSingleton, Z_Construct_UClass_UCitySampleValidator_Blueprints_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleValidator_Blueprints.OuterSingleton;
}
template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleValidator_Blueprints>()
{
	return UCitySampleValidator_Blueprints::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleValidator_Blueprints);
UCitySampleValidator_Blueprints::~UCitySampleValidator_Blueprints() {}
// End Class UCitySampleValidator_Blueprints

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Blueprints_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleValidator_Blueprints, UCitySampleValidator_Blueprints::StaticClass, TEXT("UCitySampleValidator_Blueprints"), &Z_Registration_Info_UClass_UCitySampleValidator_Blueprints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleValidator_Blueprints), 4090627285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Blueprints_h_2637086400(TEXT("/Script/CitySampleEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Blueprints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Blueprints_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
