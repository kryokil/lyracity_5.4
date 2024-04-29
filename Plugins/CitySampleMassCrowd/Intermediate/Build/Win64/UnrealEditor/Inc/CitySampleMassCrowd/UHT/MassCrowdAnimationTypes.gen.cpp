// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/MassCrowdAnimationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdAnimationTypes() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdAnimationFragment();
CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassMontageFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin ScriptStruct FMassMontageFragment
static_assert(std::is_polymorphic<FMassMontageFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassMontageFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassMontageFragment;
class UScriptStruct* FMassMontageFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassMontageFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassMontageFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassMontageFragment, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("MassMontageFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassMontageFragment.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FMassMontageFragment>()
{
	return FMassMontageFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassMontageFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// namespace UE::CrowdInteractionAnim\n" },
#endif
		{ "ModuleRelativePath", "Public/MassCrowdAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "namespace UE::CrowdInteractionAnim" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassMontageFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassMontageFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassMontageFragment",
	nullptr,
	0,
	sizeof(FMassMontageFragment),
	alignof(FMassMontageFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMontageFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassMontageFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassMontageFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassMontageFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassMontageFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassMontageFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassMontageFragment.InnerSingleton;
}
// End ScriptStruct FMassMontageFragment

// Begin ScriptStruct FCrowdAnimationFragment
static_assert(std::is_polymorphic<FCrowdAnimationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FCrowdAnimationFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdAnimationFragment;
class UScriptStruct* FCrowdAnimationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdAnimationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdAnimationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdAnimationFragment, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("CrowdAnimationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdAnimationFragment.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FCrowdAnimationFragment>()
{
	return FCrowdAnimationFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdAnimationFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassCrowdAnimationTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdAnimationFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdAnimationFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"CrowdAnimationFragment",
	nullptr,
	0,
	sizeof(FCrowdAnimationFragment),
	alignof(FCrowdAnimationFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAnimationFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdAnimationFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdAnimationFragment()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdAnimationFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdAnimationFragment.InnerSingleton, Z_Construct_UScriptStruct_FCrowdAnimationFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdAnimationFragment.InnerSingleton;
}
// End ScriptStruct FCrowdAnimationFragment

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdAnimationTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassMontageFragment::StaticStruct, Z_Construct_UScriptStruct_FMassMontageFragment_Statics::NewStructOps, TEXT("MassMontageFragment"), &Z_Registration_Info_UScriptStruct_MassMontageFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassMontageFragment), 430525101U) },
		{ FCrowdAnimationFragment::StaticStruct, Z_Construct_UScriptStruct_FCrowdAnimationFragment_Statics::NewStructOps, TEXT("CrowdAnimationFragment"), &Z_Registration_Info_UScriptStruct_CrowdAnimationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdAnimationFragment), 2804315279U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdAnimationTypes_h_1470866222(TEXT("/Script/CitySampleMassCrowd"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdAnimationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_MassCrowdAnimationTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
