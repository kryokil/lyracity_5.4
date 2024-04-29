// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Util/CitySampleInputModifiers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleInputModifiers() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInputModifierInvertAxis();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInputModifierInvertAxis_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInputModifierLookSensitivity();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInputModifierLookSensitivity_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCitySampleInputModifierLookSensitivity
void UCitySampleInputModifierLookSensitivity::StaticRegisterNativesUCitySampleInputModifierLookSensitivity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleInputModifierLookSensitivity);
UClass* Z_Construct_UClass_UCitySampleInputModifierLookSensitivity_NoRegister()
{
	return UCitySampleInputModifierLookSensitivity::StaticClass();
}
struct Z_Construct_UClass_UCitySampleInputModifierLookSensitivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** CitySample Look Sensitivity\n *  Based on UInputModifierScalar, scales input by a set factor per axis, based on values in CitySampleGameMode\n */" },
#endif
		{ "DisplayName", "CitySample Look Sensitivity" },
		{ "IncludePath", "Util/CitySampleInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CitySample Look Sensitivity\nBased on UInputModifierScalar, scales input by a set factor per axis, based on values in CitySampleGameMode" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleInputModifierLookSensitivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCitySampleInputModifierLookSensitivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInputModifierLookSensitivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleInputModifierLookSensitivity_Statics::ClassParams = {
	&UCitySampleInputModifierLookSensitivity::StaticClass,
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
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInputModifierLookSensitivity_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleInputModifierLookSensitivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleInputModifierLookSensitivity()
{
	if (!Z_Registration_Info_UClass_UCitySampleInputModifierLookSensitivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleInputModifierLookSensitivity.OuterSingleton, Z_Construct_UClass_UCitySampleInputModifierLookSensitivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleInputModifierLookSensitivity.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleInputModifierLookSensitivity>()
{
	return UCitySampleInputModifierLookSensitivity::StaticClass();
}
UCitySampleInputModifierLookSensitivity::UCitySampleInputModifierLookSensitivity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleInputModifierLookSensitivity);
UCitySampleInputModifierLookSensitivity::~UCitySampleInputModifierLookSensitivity() {}
// End Class UCitySampleInputModifierLookSensitivity

// Begin Class UCitySampleInputModifierInvertAxis
void UCitySampleInputModifierInvertAxis::StaticRegisterNativesUCitySampleInputModifierInvertAxis()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleInputModifierInvertAxis);
UClass* Z_Construct_UClass_UCitySampleInputModifierInvertAxis_NoRegister()
{
	return UCitySampleInputModifierInvertAxis::StaticClass();
}
struct Z_Construct_UClass_UCitySampleInputModifierInvertAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** CitySample Global Invert Axis\n *  Based on UInputModifierNegate, inverts input per axis, based on values in CitySampleGameMode\n */" },
#endif
		{ "DisplayName", "CitySample Invert Axis" },
		{ "IncludePath", "Util/CitySampleInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CitySample Global Invert Axis\nBased on UInputModifierNegate, inverts input per axis, based on values in CitySampleGameMode" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleInputModifierInvertAxis>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCitySampleInputModifierInvertAxis_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInputModifierInvertAxis_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleInputModifierInvertAxis_Statics::ClassParams = {
	&UCitySampleInputModifierInvertAxis::StaticClass,
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
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInputModifierInvertAxis_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleInputModifierInvertAxis_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleInputModifierInvertAxis()
{
	if (!Z_Registration_Info_UClass_UCitySampleInputModifierInvertAxis.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleInputModifierInvertAxis.OuterSingleton, Z_Construct_UClass_UCitySampleInputModifierInvertAxis_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleInputModifierInvertAxis.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleInputModifierInvertAxis>()
{
	return UCitySampleInputModifierInvertAxis::StaticClass();
}
UCitySampleInputModifierInvertAxis::UCitySampleInputModifierInvertAxis(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleInputModifierInvertAxis);
UCitySampleInputModifierInvertAxis::~UCitySampleInputModifierInvertAxis() {}
// End Class UCitySampleInputModifierInvertAxis

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleInputModifiers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleInputModifierLookSensitivity, UCitySampleInputModifierLookSensitivity::StaticClass, TEXT("UCitySampleInputModifierLookSensitivity"), &Z_Registration_Info_UClass_UCitySampleInputModifierLookSensitivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleInputModifierLookSensitivity), 4076725135U) },
		{ Z_Construct_UClass_UCitySampleInputModifierInvertAxis, UCitySampleInputModifierInvertAxis::StaticClass, TEXT("UCitySampleInputModifierInvertAxis"), &Z_Registration_Info_UClass_UCitySampleInputModifierInvertAxis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleInputModifierInvertAxis), 1409389387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleInputModifiers_h_3689681809(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleInputModifiers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleInputModifiers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
