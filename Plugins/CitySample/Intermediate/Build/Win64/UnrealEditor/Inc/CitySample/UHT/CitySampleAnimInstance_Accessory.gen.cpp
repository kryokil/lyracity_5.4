// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimInstance_Accessory.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimInstance_Accessory() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Accessory();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Accessory_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCitySampleAnimInstance_Accessory
void UCitySampleAnimInstance_Accessory::StaticRegisterNativesUCitySampleAnimInstance_Accessory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimInstance_Accessory);
UClass* Z_Construct_UClass_UCitySampleAnimInstance_Accessory_NoRegister()
{
	return UCitySampleAnimInstance_Accessory::StaticClass();
}
struct Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Anim/CitySampleAnimInstance_Accessory.h" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GaitCurveName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockReactCurveName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GaitLayerOverride_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockReact_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Accessory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GaitCurveName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BlockReactCurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gait;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GaitLayerOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockReact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimInstance_Accessory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitCurveName = { "GaitCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Accessory, GaitCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GaitCurveName_MetaData), NewProp_GaitCurveName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReactCurveName = { "BlockReactCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Accessory, BlockReactCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockReactCurveName_MetaData), NewProp_BlockReactCurveName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Accessory, Gait), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gait_MetaData), NewProp_Gait_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitLayerOverride = { "GaitLayerOverride", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Accessory, GaitLayerOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GaitLayerOverride_MetaData), NewProp_GaitLayerOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReact = { "BlockReact", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Accessory, BlockReact), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockReact_MetaData), NewProp_BlockReact_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReactCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_Gait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_GaitLayerOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::NewProp_BlockReact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::ClassParams = {
	&UCitySampleAnimInstance_Accessory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleAnimInstance_Accessory()
{
	if (!Z_Registration_Info_UClass_UCitySampleAnimInstance_Accessory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimInstance_Accessory.OuterSingleton, Z_Construct_UClass_UCitySampleAnimInstance_Accessory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleAnimInstance_Accessory.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAnimInstance_Accessory>()
{
	return UCitySampleAnimInstance_Accessory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimInstance_Accessory);
UCitySampleAnimInstance_Accessory::~UCitySampleAnimInstance_Accessory() {}
// End Class UCitySampleAnimInstance_Accessory

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Accessory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimInstance_Accessory, UCitySampleAnimInstance_Accessory::StaticClass, TEXT("UCitySampleAnimInstance_Accessory"), &Z_Registration_Info_UClass_UCitySampleAnimInstance_Accessory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimInstance_Accessory), 537206942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Accessory_h_2407493542(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Accessory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Accessory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
