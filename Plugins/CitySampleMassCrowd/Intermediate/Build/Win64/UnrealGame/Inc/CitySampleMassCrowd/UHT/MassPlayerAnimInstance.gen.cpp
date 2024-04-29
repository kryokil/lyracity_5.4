// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/Animation/MassPlayerAnimInstance.h"
#include "CitySampleMassCrowd/Public/Animation/MassCharacterProximity_AnimInput.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassPlayerAnimInstance() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassPlayerAnimInstance();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassPlayerAnimInstance_NoRegister();
CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin Class UMassPlayerAnimInstance
void UMassPlayerAnimInstance::StaticRegisterNativesUMassPlayerAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassPlayerAnimInstance);
UClass* Z_Construct_UClass_UMassPlayerAnimInstance_NoRegister()
{
	return UMassPlayerAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UMassPlayerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/MassPlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/MassPlayerAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrowdProximity_MetaData[] = {
		{ "Category", "MassCrowd" },
		{ "ModuleRelativePath", "Public/Animation/MassPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CrowdProximity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassPlayerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassPlayerAnimInstance_Statics::NewProp_CrowdProximity = { "CrowdProximity", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassPlayerAnimInstance, CrowdProximity), Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrowdProximity_MetaData), NewProp_CrowdProximity_MetaData) }; // 1816505738
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassPlayerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassPlayerAnimInstance_Statics::NewProp_CrowdProximity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassPlayerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassPlayerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassPlayerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassPlayerAnimInstance_Statics::ClassParams = {
	&UMassPlayerAnimInstance::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassPlayerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassPlayerAnimInstance_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassPlayerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassPlayerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMassPlayerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UMassPlayerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassPlayerAnimInstance.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UMassPlayerAnimInstance>()
{
	return UMassPlayerAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassPlayerAnimInstance);
UMassPlayerAnimInstance::~UMassPlayerAnimInstance() {}
// End Class UMassPlayerAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassPlayerAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassPlayerAnimInstance, UMassPlayerAnimInstance::StaticClass, TEXT("UMassPlayerAnimInstance"), &Z_Registration_Info_UClass_UMassPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassPlayerAnimInstance), 3909205557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassPlayerAnimInstance_h_3107593379(TEXT("/Script/CitySampleMassCrowd"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassPlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassPlayerAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
