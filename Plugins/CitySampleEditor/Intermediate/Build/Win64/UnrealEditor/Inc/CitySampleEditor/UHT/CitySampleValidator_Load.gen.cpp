// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/Validation/CitySampleValidator_Load.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleValidator_Load() {}

// Begin Cross Module References
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleEditorValidator();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleValidator_Load();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleValidator_Load_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References

// Begin Class UCitySampleValidator_Load
void UCitySampleValidator_Load::StaticRegisterNativesUCitySampleValidator_Load()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleValidator_Load);
UClass* Z_Construct_UClass_UCitySampleValidator_Load_NoRegister()
{
	return UCitySampleValidator_Load::StaticClass();
}
struct Z_Construct_UClass_UCitySampleValidator_Load_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Validation/CitySampleValidator_Load.h" },
		{ "ModuleRelativePath", "Public/Validation/CitySampleValidator_Load.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleValidator_Load>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCitySampleValidator_Load_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCitySampleEditorValidator,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleValidator_Load_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleValidator_Load_Statics::ClassParams = {
	&UCitySampleValidator_Load::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleValidator_Load_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleValidator_Load_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleValidator_Load()
{
	if (!Z_Registration_Info_UClass_UCitySampleValidator_Load.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleValidator_Load.OuterSingleton, Z_Construct_UClass_UCitySampleValidator_Load_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleValidator_Load.OuterSingleton;
}
template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleValidator_Load>()
{
	return UCitySampleValidator_Load::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleValidator_Load);
UCitySampleValidator_Load::~UCitySampleValidator_Load() {}
// End Class UCitySampleValidator_Load

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Load_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleValidator_Load, UCitySampleValidator_Load::StaticClass, TEXT("UCitySampleValidator_Load"), &Z_Registration_Info_UClass_UCitySampleValidator_Load, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleValidator_Load), 2160663751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Load_h_1997584758(TEXT("/Script/CitySampleEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Load_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Load_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
