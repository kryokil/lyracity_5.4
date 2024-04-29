// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Vehicles/CitySampleDrivingState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleDrivingState() {}

// Begin Cross Module References
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleDrivingState();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin ScriptStruct FCitySampleDrivingState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleDrivingState;
class UScriptStruct* FCitySampleDrivingState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleDrivingState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleDrivingState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleDrivingState, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleDrivingState"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleDrivingState.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleDrivingState>()
{
	return FCitySampleDrivingState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brake_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steering_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandbrakeOn_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSpeed_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPM_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gear_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomatic_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllWheelsOnGround_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoWheelsOnGround_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Throttle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brake;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Steering;
	static void NewProp_bHandbrakeOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandbrakeOn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RPM;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gear;
	static void NewProp_bAutomatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomatic;
	static void NewProp_bAllWheelsOnGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllWheelsOnGround;
	static void NewProp_bNoWheelsOnGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoWheelsOnGround;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleDrivingState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, Throttle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Throttle_MetaData), NewProp_Throttle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Brake = { "Brake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, Brake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brake_MetaData), NewProp_Brake_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, Steering), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steering_MetaData), NewProp_Steering_MetaData) };
void Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bHandbrakeOn_SetBit(void* Obj)
{
	((FCitySampleDrivingState*)Obj)->bHandbrakeOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bHandbrakeOn = { "bHandbrakeOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleDrivingState), &Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bHandbrakeOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandbrakeOn_MetaData), NewProp_bHandbrakeOn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_ForwardSpeed = { "ForwardSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, ForwardSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardSpeed_MetaData), NewProp_ForwardSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_RPM = { "RPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, RPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPM_MetaData), NewProp_RPM_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Gear = { "Gear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, Gear), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gear_MetaData), NewProp_Gear_MetaData) };
void Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAutomatic_SetBit(void* Obj)
{
	((FCitySampleDrivingState*)Obj)->bAutomatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAutomatic = { "bAutomatic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleDrivingState), &Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomatic_MetaData), NewProp_bAutomatic_MetaData) };
void Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAllWheelsOnGround_SetBit(void* Obj)
{
	((FCitySampleDrivingState*)Obj)->bAllWheelsOnGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAllWheelsOnGround = { "bAllWheelsOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleDrivingState), &Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAllWheelsOnGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllWheelsOnGround_MetaData), NewProp_bAllWheelsOnGround_MetaData) };
void Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bNoWheelsOnGround_SetBit(void* Obj)
{
	((FCitySampleDrivingState*)Obj)->bNoWheelsOnGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bNoWheelsOnGround = { "bNoWheelsOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleDrivingState), &Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bNoWheelsOnGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoWheelsOnGround_MetaData), NewProp_bNoWheelsOnGround_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Throttle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Brake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Steering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bHandbrakeOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_ForwardSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_RPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Gear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAutomatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAllWheelsOnGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bNoWheelsOnGround,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CitySampleDrivingState",
	Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::PropPointers),
	sizeof(FCitySampleDrivingState),
	alignof(FCitySampleDrivingState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCitySampleDrivingState()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleDrivingState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleDrivingState.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CitySampleDrivingState.InnerSingleton;
}
// End ScriptStruct FCitySampleDrivingState

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleDrivingState_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCitySampleDrivingState::StaticStruct, Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewStructOps, TEXT("CitySampleDrivingState"), &Z_Registration_Info_UScriptStruct_CitySampleDrivingState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleDrivingState), 3855659984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleDrivingState_h_2533355703(TEXT("/Script/CitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleDrivingState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleDrivingState_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
