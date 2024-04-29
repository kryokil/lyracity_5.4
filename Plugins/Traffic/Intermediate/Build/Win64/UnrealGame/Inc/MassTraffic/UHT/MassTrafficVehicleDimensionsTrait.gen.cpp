// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehicleDimensionsTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleDimensionsTrait() {}

// Begin Cross Module References
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin ScriptStruct FMassTrafficVehicleDimensionsParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehicleDimensionsParameters;
class UScriptStruct* FMassTrafficVehicleDimensionsParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleDimensionsParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehicleDimensionsParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleDimensionsParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleDimensionsParameters.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehicleDimensionsParameters>()
{
	return FMassTrafficVehicleDimensionsParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficVehicleDimensionsTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfLength_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Distance from vehicle origin to front most point or rear most point (whichever is greater). Used for vehicle\n\x09 * avoidance collision detection.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleDimensionsTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from vehicle origin to front most point or rear most point (whichever is greater). Used for vehicle\navoidance collision detection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfWidth_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Distance from vehicle origin to left most point or right most point (whichever is greater). Used for vehicle\n\x09* avoidance collision detection.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleDimensionsTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from vehicle origin to left most point or right most point (whichever is greater). Used for vehicle\navoidance collision detection." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleDimensionsParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::NewProp_HalfLength = { "HalfLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleDimensionsParameters, HalfLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfLength_MetaData), NewProp_HalfLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::NewProp_HalfWidth = { "HalfWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleDimensionsParameters, HalfWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfWidth_MetaData), NewProp_HalfWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::NewProp_HalfLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::NewProp_HalfWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficVehicleDimensionsParameters",
	Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::PropPointers),
	sizeof(FMassTrafficVehicleDimensionsParameters),
	alignof(FMassTrafficVehicleDimensionsParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleDimensionsParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehicleDimensionsParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleDimensionsParameters.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehicleDimensionsParameters

// Begin Class UMassTrafficVehicleDimensionsTrait
void UMassTrafficVehicleDimensionsTrait::StaticRegisterNativesUMassTrafficVehicleDimensionsTrait()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleDimensionsTrait);
UClass* Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_NoRegister()
{
	return UMassTrafficVehicleDimensionsTrait::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Vehicle Dimensions" },
		{ "IncludePath", "MassTrafficVehicleDimensionsTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleDimensionsTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Mass Traffic" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleDimensionsTrait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleDimensionsTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleDimensionsTrait, Params), Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 318787587
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::ClassParams = {
	&UMassTrafficVehicleDimensionsTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleDimensionsTrait>()
{
	return UMassTrafficVehicleDimensionsTrait::StaticClass();
}
UMassTrafficVehicleDimensionsTrait::UMassTrafficVehicleDimensionsTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleDimensionsTrait);
UMassTrafficVehicleDimensionsTrait::~UMassTrafficVehicleDimensionsTrait() {}
// End Class UMassTrafficVehicleDimensionsTrait

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficVehicleDimensionsParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::NewStructOps, TEXT("MassTrafficVehicleDimensionsParameters"), &Z_Registration_Info_UScriptStruct_MassTrafficVehicleDimensionsParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleDimensionsParameters), 318787587U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait, UMassTrafficVehicleDimensionsTrait::StaticClass, TEXT("UMassTrafficVehicleDimensionsTrait"), &Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleDimensionsTrait), 2509814570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_3353821042(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
