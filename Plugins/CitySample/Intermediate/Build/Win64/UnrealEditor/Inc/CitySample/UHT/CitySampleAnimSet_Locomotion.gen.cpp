// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimSet_Locomotion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimSet_Locomotion() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimSet_Locomotion();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimSet_Locomotion_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCitySampleAnimSet_Locomotion
void UCitySampleAnimSet_Locomotion::StaticRegisterNativesUCitySampleAnimSet_Locomotion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimSet_Locomotion);
UClass* Z_Construct_UClass_UCitySampleAnimSet_Locomotion_NoRegister()
{
	return UCitySampleAnimSet_Locomotion::StaticClass();
}
struct Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Anim/CitySampleAnimSet_Locomotion.h" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimSet_Locomotion.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkFwdCycle_MetaData[] = {
		{ "Category", "Core Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimSet_Locomotion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkFwdQuicklyCycle_MetaData[] = {
		{ "Category", "Core Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimSet_Locomotion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkFwdCycle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkFwdQuicklyCycle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimSet_Locomotion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdCycle = { "WalkFwdCycle", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimSet_Locomotion, WalkFwdCycle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkFwdCycle_MetaData), NewProp_WalkFwdCycle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdQuicklyCycle = { "WalkFwdQuicklyCycle", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimSet_Locomotion, WalkFwdQuicklyCycle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkFwdQuicklyCycle_MetaData), NewProp_WalkFwdQuicklyCycle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::NewProp_WalkFwdQuicklyCycle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::ClassParams = {
	&UCitySampleAnimSet_Locomotion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleAnimSet_Locomotion()
{
	if (!Z_Registration_Info_UClass_UCitySampleAnimSet_Locomotion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimSet_Locomotion.OuterSingleton, Z_Construct_UClass_UCitySampleAnimSet_Locomotion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleAnimSet_Locomotion.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAnimSet_Locomotion>()
{
	return UCitySampleAnimSet_Locomotion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimSet_Locomotion);
UCitySampleAnimSet_Locomotion::~UCitySampleAnimSet_Locomotion() {}
// End Class UCitySampleAnimSet_Locomotion

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Locomotion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimSet_Locomotion, UCitySampleAnimSet_Locomotion::StaticClass, TEXT("UCitySampleAnimSet_Locomotion"), &Z_Registration_Info_UClass_UCitySampleAnimSet_Locomotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimSet_Locomotion), 2635915694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Locomotion_h_311192845(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Locomotion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Locomotion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
