// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/MassCrowdAnimationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdAnimationProcessor() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassFragmentInitializer_Animation();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassFragmentInitializer_Animation_NoRegister();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassProcessor_Animation();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassProcessor_Animation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin Class UMassFragmentInitializer_Animation
void UMassFragmentInitializer_Animation::StaticRegisterNativesUMassFragmentInitializer_Animation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassFragmentInitializer_Animation);
UClass* Z_Construct_UClass_UMassFragmentInitializer_Animation_NoRegister()
{
	return UMassFragmentInitializer_Animation::StaticClass();
}
struct Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassCrowdAnimationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdAnimationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdAnimationProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassFragmentInitializer_Animation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassFragmentInitializer_Animation, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::ClassParams = {
	&UMassFragmentInitializer_Animation::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassFragmentInitializer_Animation()
{
	if (!Z_Registration_Info_UClass_UMassFragmentInitializer_Animation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassFragmentInitializer_Animation.OuterSingleton, Z_Construct_UClass_UMassFragmentInitializer_Animation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassFragmentInitializer_Animation.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UMassFragmentInitializer_Animation>()
{
	return UMassFragmentInitializer_Animation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassFragmentInitializer_Animation);
UMassFragmentInitializer_Animation::~UMassFragmentInitializer_Animation() {}
// End Class UMassFragmentInitializer_Animation

// Begin Class UMassProcessor_Animation
void UMassProcessor_Animation::StaticRegisterNativesUMassProcessor_Animation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassProcessor_Animation);
UClass* Z_Construct_UClass_UMassProcessor_Animation_NoRegister()
{
	return UMassProcessor_Animation::StaticClass();
}
struct Z_Construct_UClass_UMassProcessor_Animation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassCrowdAnimationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdAnimationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveThresholdSq_MetaData[] = {
		{ "Category", "Animation" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MassCrowdAnimationProcessor.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdAnimationProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveThresholdSq;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassProcessor_Animation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassProcessor_Animation_Statics::NewProp_MoveThresholdSq = { "MoveThresholdSq", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassProcessor_Animation, MoveThresholdSq), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveThresholdSq_MetaData), NewProp_MoveThresholdSq_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassProcessor_Animation_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassProcessor_Animation, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassProcessor_Animation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Animation_Statics::NewProp_MoveThresholdSq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Animation_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Animation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassProcessor_Animation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Animation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassProcessor_Animation_Statics::ClassParams = {
	&UMassProcessor_Animation::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassProcessor_Animation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Animation_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Animation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassProcessor_Animation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassProcessor_Animation()
{
	if (!Z_Registration_Info_UClass_UMassProcessor_Animation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassProcessor_Animation.OuterSingleton, Z_Construct_UClass_UMassProcessor_Animation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassProcessor_Animation.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UMassProcessor_Animation>()
{
	return UMassProcessor_Animation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassProcessor_Animation);
UMassProcessor_Animation::~UMassProcessor_Animation() {}
// End Class UMassProcessor_Animation

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdAnimationProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassFragmentInitializer_Animation, UMassFragmentInitializer_Animation::StaticClass, TEXT("UMassFragmentInitializer_Animation"), &Z_Registration_Info_UClass_UMassFragmentInitializer_Animation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassFragmentInitializer_Animation), 1926630107U) },
		{ Z_Construct_UClass_UMassProcessor_Animation, UMassProcessor_Animation::StaticClass, TEXT("UMassProcessor_Animation"), &Z_Registration_Info_UClass_UMassProcessor_Animation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassProcessor_Animation), 2927532801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdAnimationProcessor_h_2867464730(TEXT("/Script/CitySampleMassCrowd"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdAnimationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdAnimationProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
