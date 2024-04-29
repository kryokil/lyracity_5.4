// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimInstance_Crowd_Head.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimInstance_Crowd_Head() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCrowdCharacter_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCitySampleAnimInstance_Crowd_Head
void UCitySampleAnimInstance_Crowd_Head::StaticRegisterNativesUCitySampleAnimInstance_Crowd_Head()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimInstance_Crowd_Head);
UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_NoRegister()
{
	return UCitySampleAnimInstance_Crowd_Head::StaticClass();
}
struct Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Anim/CitySampleAnimInstance_Crowd_Head.h" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd_Head.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrowdCharacter_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd_Head.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshComponent_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd_Head.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_Overweight_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd_Head.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_Underweight_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd_Head.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrowdCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMeshComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName_Overweight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName_Underweight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimInstance_Crowd_Head>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CrowdCharacter = { "CrowdCharacter", nullptr, (EPropertyFlags)0x012408000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd_Head, CrowdCharacter), Z_Construct_UClass_ACitySampleCrowdCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrowdCharacter_MetaData), NewProp_CrowdCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_SourceMeshComponent = { "SourceMeshComponent", nullptr, (EPropertyFlags)0x012408000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd_Head, SourceMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMeshComponent_MetaData), NewProp_SourceMeshComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Overweight = { "CurveName_Overweight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd_Head, CurveName_Overweight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveName_Overweight_MetaData), NewProp_CurveName_Overweight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Underweight = { "CurveName_Underweight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd_Head, CurveName_Underweight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveName_Underweight_MetaData), NewProp_CurveName_Underweight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CrowdCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_SourceMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Overweight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::NewProp_CurveName_Underweight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::ClassParams = {
	&UCitySampleAnimInstance_Crowd_Head::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head()
{
	if (!Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd_Head.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd_Head.OuterSingleton, Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd_Head.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAnimInstance_Crowd_Head>()
{
	return UCitySampleAnimInstance_Crowd_Head::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimInstance_Crowd_Head);
UCitySampleAnimInstance_Crowd_Head::~UCitySampleAnimInstance_Crowd_Head() {}
// End Class UCitySampleAnimInstance_Crowd_Head

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_Head_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Head, UCitySampleAnimInstance_Crowd_Head::StaticClass, TEXT("UCitySampleAnimInstance_Crowd_Head"), &Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd_Head, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimInstance_Crowd_Head), 896476907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_Head_h_3295865056(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_Head_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_Head_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
