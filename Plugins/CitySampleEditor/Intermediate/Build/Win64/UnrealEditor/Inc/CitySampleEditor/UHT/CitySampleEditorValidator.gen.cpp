// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/Validation/CitySampleEditorValidator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleEditorValidator() {}

// Begin Cross Module References
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleEditorValidator();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleEditorValidator_NoRegister();
DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase();
UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References

// Begin Class UCitySampleEditorValidator
void UCitySampleEditorValidator::StaticRegisterNativesUCitySampleEditorValidator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleEditorValidator);
UClass* Z_Construct_UClass_UCitySampleEditorValidator_NoRegister()
{
	return UCitySampleEditorValidator::StaticClass();
}
struct Z_Construct_UClass_UCitySampleEditorValidator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Validation/CitySampleEditorValidator.h" },
		{ "ModuleRelativePath", "Public/Validation/CitySampleEditorValidator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleEditorValidator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCitySampleEditorValidator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorValidatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleEditorValidator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleEditorValidator_Statics::ClassParams = {
	&UCitySampleEditorValidator::StaticClass,
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
	0x000000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleEditorValidator_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleEditorValidator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleEditorValidator()
{
	if (!Z_Registration_Info_UClass_UCitySampleEditorValidator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleEditorValidator.OuterSingleton, Z_Construct_UClass_UCitySampleEditorValidator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleEditorValidator.OuterSingleton;
}
template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleEditorValidator>()
{
	return UCitySampleEditorValidator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleEditorValidator);
UCitySampleEditorValidator::~UCitySampleEditorValidator() {}
// End Class UCitySampleEditorValidator

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleEditorValidator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleEditorValidator, UCitySampleEditorValidator::StaticClass, TEXT("UCitySampleEditorValidator"), &Z_Registration_Info_UClass_UCitySampleEditorValidator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleEditorValidator), 1396470654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleEditorValidator_h_2744265915(TEXT("/Script/CitySampleEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleEditorValidator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleEditorValidator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
