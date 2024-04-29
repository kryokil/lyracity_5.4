// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficConstrainedTrailerTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficConstrainedTrailerTrait() {}

// Begin Cross Module References
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin ScriptStruct FMassTrafficConstrainedTrailerParameters
static_assert(std::is_polymorphic<FMassTrafficConstrainedTrailerParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassTrafficConstrainedTrailerParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerParameters;
class UScriptStruct* FMassTrafficConstrainedTrailerParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficConstrainedTrailerParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerParameters.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficConstrainedTrailerParameters>()
{
	return FMassTrafficConstrainedTrailerParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficConstrainedTrailerTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailerAgentConfigAsset_MetaData[] = {
		{ "Category", "MassTrafficConstrainedTrailerParameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The trailer agent to spawn attached to this vehicle.\n\x09 * @see UMassTrafficTrailerSpawnDataGenerator\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficConstrainedTrailerTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The trailer agent to spawn attached to this vehicle.\n@see UMassTrafficTrailerSpawnDataGenerator" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailerAgentConfigAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficConstrainedTrailerParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::NewProp_TrailerAgentConfigAsset = { "TrailerAgentConfigAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficConstrainedTrailerParameters, TrailerAgentConfigAsset), Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailerAgentConfigAsset_MetaData), NewProp_TrailerAgentConfigAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::NewProp_TrailerAgentConfigAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassSharedFragment,
	&NewStructOps,
	"MassTrafficConstrainedTrailerParameters",
	Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::PropPointers),
	sizeof(FMassTrafficConstrainedTrailerParameters),
	alignof(FMassTrafficConstrainedTrailerParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerParameters.InnerSingleton;
}
// End ScriptStruct FMassTrafficConstrainedTrailerParameters

// Begin Class UMassTrafficConstrainedTrailerTrait
void UMassTrafficConstrainedTrailerTrait::StaticRegisterNativesUMassTrafficConstrainedTrailerTrait()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficConstrainedTrailerTrait);
UClass* Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_NoRegister()
{
	return UMassTrafficConstrainedTrailerTrait::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * In concert with UMassTrafficTrailerSpawnDataGenerator, spawns a TrailerAgentConfigAsset entity and point constrains\n * its vehicle simulation to this vehicle.\n */" },
#endif
		{ "DisplayName", "Constrained Trailer" },
		{ "IncludePath", "MassTrafficConstrainedTrailerTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficConstrainedTrailerTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In concert with UMassTrafficTrailerSpawnDataGenerator, spawns a TrailerAgentConfigAsset entity and point constrains\nits vehicle simulation to this vehicle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Mass Traffic" },
		{ "ModuleRelativePath", "Public/MassTrafficConstrainedTrailerTrait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficConstrainedTrailerTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficConstrainedTrailerTrait, Params), Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 681824274
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::ClassParams = {
	&UMassTrafficConstrainedTrailerTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficConstrainedTrailerTrait>()
{
	return UMassTrafficConstrainedTrailerTrait::StaticClass();
}
UMassTrafficConstrainedTrailerTrait::UMassTrafficConstrainedTrailerTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficConstrainedTrailerTrait);
UMassTrafficConstrainedTrailerTrait::~UMassTrafficConstrainedTrailerTrait() {}
// End Class UMassTrafficConstrainedTrailerTrait

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficConstrainedTrailerParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::NewStructOps, TEXT("MassTrafficConstrainedTrailerParameters"), &Z_Registration_Info_UScriptStruct_MassTrafficConstrainedTrailerParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficConstrainedTrailerParameters), 681824274U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait, UMassTrafficConstrainedTrailerTrait::StaticClass, TEXT("UMassTrafficConstrainedTrailerTrait"), &Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficConstrainedTrailerTrait), 1070478544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h_4256410241(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
