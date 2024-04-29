// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoverDrone/Public/HoverDroneTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDroneTypes() {}

// Begin Cross Module References
HOVERDRONE_API UScriptStruct* Z_Construct_UScriptStruct_FDroneSpeedParameters();
UPackage* Z_Construct_UPackage__Script_HoverDrone();
// End Cross Module References

// Begin ScriptStruct FDroneSpeedParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DroneSpeedParameters;
class UScriptStruct* FDroneSpeedParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DroneSpeedParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DroneSpeedParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDroneSpeedParameters, (UObject*)Z_Construct_UPackage__Script_HoverDrone(), TEXT("DroneSpeedParameters"));
	}
	return Z_Registration_Info_UScriptStruct_DroneSpeedParameters.OuterSingleton;
}
template<> HOVERDRONE_API UScriptStruct* StaticStruct<FDroneSpeedParameters>()
{
	return FDroneSpeedParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearAccelScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDecelScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotAccelScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotDecelScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotSpeedScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverThrustScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearAccelScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDecelScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotAccelScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotDecelScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRotSpeedScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverThrustScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDroneSpeedParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearAccelScale = { "LinearAccelScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, LinearAccelScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearAccelScale_MetaData), NewProp_LinearAccelScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearDecelScale = { "LinearDecelScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, LinearDecelScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDecelScale_MetaData), NewProp_LinearDecelScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotAccelScale = { "RotAccelScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, RotAccelScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotAccelScale_MetaData), NewProp_RotAccelScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotDecelScale = { "RotDecelScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, RotDecelScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotDecelScale_MetaData), NewProp_RotDecelScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_MaxRotSpeedScale = { "MaxRotSpeedScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, MaxRotSpeedScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRotSpeedScale_MetaData), NewProp_MaxRotSpeedScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_HoverThrustScale = { "HoverThrustScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, HoverThrustScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverThrustScale_MetaData), NewProp_HoverThrustScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearAccelScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearDecelScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotAccelScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotDecelScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_MaxRotSpeedScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_HoverThrustScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoverDrone,
	nullptr,
	&NewStructOps,
	"DroneSpeedParameters",
	Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::PropPointers),
	sizeof(FDroneSpeedParameters),
	alignof(FDroneSpeedParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDroneSpeedParameters()
{
	if (!Z_Registration_Info_UScriptStruct_DroneSpeedParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DroneSpeedParameters.InnerSingleton, Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DroneSpeedParameters.InnerSingleton;
}
// End ScriptStruct FDroneSpeedParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDroneSpeedParameters::StaticStruct, Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewStructOps, TEXT("DroneSpeedParameters"), &Z_Registration_Info_UScriptStruct_DroneSpeedParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDroneSpeedParameters), 2673327074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneTypes_h_745567562(TEXT("/Script/HoverDrone"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
