// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficPIDController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficPIDController() {}

// Begin Cross Module References
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDController();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin ScriptStruct FMassTrafficPIDControllerParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficPIDControllerParams;
class UScriptStruct* FMassTrafficPIDControllerParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPIDControllerParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficPIDControllerParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPIDControllerParams"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPIDControllerParams.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficPIDControllerParams>()
{
	return FMassTrafficPIDControllerParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProportionalFactor_MetaData[] = {
		{ "Category", "MassTrafficPIDControllerParams" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegralFactor_MetaData[] = {
		{ "Category", "MassTrafficPIDControllerParams" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegralWindow_MetaData[] = {
		{ "Category", "MassTrafficPIDControllerParams" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DerivativeFactor_MetaData[] = {
		{ "Category", "MassTrafficPIDControllerParams" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProportionalFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntegralFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntegralWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DerivativeFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPIDControllerParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_ProportionalFactor = { "ProportionalFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDControllerParams, ProportionalFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProportionalFactor_MetaData), NewProp_ProportionalFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_IntegralFactor = { "IntegralFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDControllerParams, IntegralFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegralFactor_MetaData), NewProp_IntegralFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_IntegralWindow = { "IntegralWindow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDControllerParams, IntegralWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegralWindow_MetaData), NewProp_IntegralWindow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_DerivativeFactor = { "DerivativeFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDControllerParams, DerivativeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DerivativeFactor_MetaData), NewProp_DerivativeFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_ProportionalFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_IntegralFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_IntegralWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_DerivativeFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficPIDControllerParams",
	Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::PropPointers),
	sizeof(FMassTrafficPIDControllerParams),
	alignof(FMassTrafficPIDControllerParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPIDControllerParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficPIDControllerParams.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPIDControllerParams.InnerSingleton;
}
// End ScriptStruct FMassTrafficPIDControllerParams

// Begin ScriptStruct FMassTrafficPIDController
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficPIDController;
class UScriptStruct* FMassTrafficPIDController::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPIDController.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficPIDController.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPIDController, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPIDController"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPIDController.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficPIDController>()
{
	return FMassTrafficPIDController::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorIntegral_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastError_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorIntegral;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPIDController>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::NewProp_ErrorIntegral = { "ErrorIntegral", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDController, ErrorIntegral), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorIntegral_MetaData), NewProp_ErrorIntegral_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::NewProp_LastError = { "LastError", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDController, LastError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastError_MetaData), NewProp_LastError_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::NewProp_ErrorIntegral,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::NewProp_LastError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficPIDController",
	Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::PropPointers),
	sizeof(FMassTrafficPIDController),
	alignof(FMassTrafficPIDController),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDController()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPIDController.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficPIDController.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPIDController.InnerSingleton;
}
// End ScriptStruct FMassTrafficPIDController

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPIDController_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficPIDControllerParams::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewStructOps, TEXT("MassTrafficPIDControllerParams"), &Z_Registration_Info_UScriptStruct_MassTrafficPIDControllerParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPIDControllerParams), 4184525337U) },
		{ FMassTrafficPIDController::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::NewStructOps, TEXT("MassTrafficPIDController"), &Z_Registration_Info_UScriptStruct_MassTrafficPIDController, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPIDController), 1589903998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPIDController_h_707420430(TEXT("/Script/MassTraffic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPIDController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPIDController_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
