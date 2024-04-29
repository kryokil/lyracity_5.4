// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/IMassCrowdActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMassCrowdActor() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdActorInterface();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdActorInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin Interface UMassCrowdActorInterface
void UMassCrowdActorInterface::StaticRegisterNativesUMassCrowdActorInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdActorInterface);
UClass* Z_Construct_UClass_UMassCrowdActorInterface_NoRegister()
{
	return UMassCrowdActorInterface::StaticClass();
}
struct Z_Construct_UClass_UMassCrowdActorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IMassCrowdActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMassCrowdActorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassCrowdActorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdActorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdActorInterface_Statics::ClassParams = {
	&UMassCrowdActorInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassCrowdActorInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassCrowdActorInterface()
{
	if (!Z_Registration_Info_UClass_UMassCrowdActorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdActorInterface.OuterSingleton, Z_Construct_UClass_UMassCrowdActorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassCrowdActorInterface.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UMassCrowdActorInterface>()
{
	return UMassCrowdActorInterface::StaticClass();
}
UMassCrowdActorInterface::UMassCrowdActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdActorInterface);
UMassCrowdActorInterface::~UMassCrowdActorInterface() {}
// End Interface UMassCrowdActorInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_IMassCrowdActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdActorInterface, UMassCrowdActorInterface::StaticClass, TEXT("UMassCrowdActorInterface"), &Z_Registration_Info_UClass_UMassCrowdActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdActorInterface), 2196422297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_IMassCrowdActor_h_2942585289(TEXT("/Script/CitySampleMassCrowd"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_IMassCrowdActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_IMassCrowdActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
