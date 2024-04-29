// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimSet_Accessory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimSet_Accessory() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimSet_Accessory();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimSet_Accessory_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCitySampleAnimSet_Accessory
void UCitySampleAnimSet_Accessory::StaticRegisterNativesUCitySampleAnimSet_Accessory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimSet_Accessory);
UClass* Z_Construct_UClass_UCitySampleAnimSet_Accessory_NoRegister()
{
	return UCitySampleAnimSet_Accessory::StaticClass();
}
struct Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Anim/CitySampleAnimSet_Accessory.h" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimSet_Accessory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryAnimGraphClass_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimSet_Accessory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AccessoryAnimGraphClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimSet_Accessory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::NewProp_AccessoryAnimGraphClass = { "AccessoryAnimGraphClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimSet_Accessory, AccessoryAnimGraphClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessoryAnimGraphClass_MetaData), NewProp_AccessoryAnimGraphClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::NewProp_AccessoryAnimGraphClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::ClassParams = {
	&UCitySampleAnimSet_Accessory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleAnimSet_Accessory()
{
	if (!Z_Registration_Info_UClass_UCitySampleAnimSet_Accessory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimSet_Accessory.OuterSingleton, Z_Construct_UClass_UCitySampleAnimSet_Accessory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleAnimSet_Accessory.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAnimSet_Accessory>()
{
	return UCitySampleAnimSet_Accessory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimSet_Accessory);
UCitySampleAnimSet_Accessory::~UCitySampleAnimSet_Accessory() {}
// End Class UCitySampleAnimSet_Accessory

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Accessory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimSet_Accessory, UCitySampleAnimSet_Accessory::StaticClass, TEXT("UCitySampleAnimSet_Accessory"), &Z_Registration_Info_UClass_UCitySampleAnimSet_Accessory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimSet_Accessory), 3457566150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Accessory_h_158874764(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Accessory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimSet_Accessory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
