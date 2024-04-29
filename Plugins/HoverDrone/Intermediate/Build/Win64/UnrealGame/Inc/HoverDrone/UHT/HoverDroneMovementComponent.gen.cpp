// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoverDrone/Public/HoverDroneMovementComponent.h"
#include "HoverDrone/Public/HoverDroneTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDroneMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement();
HOVERDRONE_API UClass* Z_Construct_UClass_UHoverDroneMovementComponent();
HOVERDRONE_API UClass* Z_Construct_UClass_UHoverDroneMovementComponent_NoRegister();
HOVERDRONE_API UEnum* Z_Construct_UEnum_HoverDrone_EHoverDroneDebug();
HOVERDRONE_API UFunction* Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature();
HOVERDRONE_API UScriptStruct* Z_Construct_UScriptStruct_FDroneSpeedParameters();
UPackage* Z_Construct_UPackage__Script_HoverDrone();
// End Cross Module References

// Begin Delegate FMaxAllowedSpeedUpdated
struct Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HoverDrone, nullptr, "MaxAllowedSpeedUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMaxAllowedSpeedUpdated_DelegateWrapper(const FMulticastScriptDelegate& MaxAllowedSpeedUpdated)
{
	MaxAllowedSpeedUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FMaxAllowedSpeedUpdated

// Begin Enum EHoverDroneDebug
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoverDroneDebug;
static UEnum* EHoverDroneDebug_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoverDroneDebug.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoverDroneDebug.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoverDrone_EHoverDroneDebug, (UObject*)Z_Construct_UPackage__Script_HoverDrone(), TEXT("EHoverDroneDebug"));
	}
	return Z_Registration_Info_UEnum_EHoverDroneDebug.OuterSingleton;
}
template<> HOVERDRONE_API UEnum* StaticEnum<EHoverDroneDebug>()
{
	return EHoverDroneDebug_StaticEnum();
}
struct Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Name", "EHoverDroneDebug::All" },
		{ "Altitude.Name", "EHoverDroneDebug::Altitude" },
		{ "ForceFacing.Name", "EHoverDroneDebug::ForceFacing" },
		{ "FOV.Name", "EHoverDroneDebug::FOV" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "Off.Name", "EHoverDroneDebug::Off" },
		{ "Position.Name", "EHoverDroneDebug::Position" },
		{ "RotationalVelocity.Name", "EHoverDroneDebug::RotationalVelocity" },
		{ "Velocity.Name", "EHoverDroneDebug::Velocity" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoverDroneDebug::Off", (int64)EHoverDroneDebug::Off },
		{ "EHoverDroneDebug::Position", (int64)EHoverDroneDebug::Position },
		{ "EHoverDroneDebug::Velocity", (int64)EHoverDroneDebug::Velocity },
		{ "EHoverDroneDebug::RotationalVelocity", (int64)EHoverDroneDebug::RotationalVelocity },
		{ "EHoverDroneDebug::Altitude", (int64)EHoverDroneDebug::Altitude },
		{ "EHoverDroneDebug::ForceFacing", (int64)EHoverDroneDebug::ForceFacing },
		{ "EHoverDroneDebug::FOV", (int64)EHoverDroneDebug::FOV },
		{ "EHoverDroneDebug::All", (int64)EHoverDroneDebug::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoverDrone,
	nullptr,
	"EHoverDroneDebug",
	"EHoverDroneDebug",
	Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoverDrone_EHoverDroneDebug()
{
	if (!Z_Registration_Info_UEnum_EHoverDroneDebug.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoverDroneDebug.InnerSingleton, Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoverDroneDebug.InnerSingleton;
}
// End Enum EHoverDroneDebug

// Begin Class UHoverDroneMovementComponent Function SetCurrentFOV
struct Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics
{
	struct HoverDroneMovementComponent_eventSetCurrentFOV_Parms
	{
		float NewFOV;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::NewProp_NewFOV = { "NewFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverDroneMovementComponent_eventSetCurrentFOV_Parms, NewFOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::NewProp_NewFOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoverDroneMovementComponent, nullptr, "SetCurrentFOV", nullptr, nullptr, Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::HoverDroneMovementComponent_eventSetCurrentFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::HoverDroneMovementComponent_eventSetCurrentFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoverDroneMovementComponent::execSetCurrentFOV)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFOV);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentFOV(Z_Param_NewFOV);
	P_NATIVE_END;
}
// End Class UHoverDroneMovementComponent Function SetCurrentFOV

// Begin Class UHoverDroneMovementComponent
void UHoverDroneMovementComponent::StaticRegisterNativesUHoverDroneMovementComponent()
{
	UClass* Class = UHoverDroneMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCurrentFOV", &UHoverDroneMovementComponent::execSetCurrentFOV },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoverDroneMovementComponent);
UClass* Z_Construct_UClass_UHoverDroneMovementComponent_NoRegister()
{
	return UHoverDroneMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UHoverDroneMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoverDroneMovementComponent.h" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedSpeedIndex_MetaData[] = {
		{ "Category", "HoverDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedSpeedUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectRotationInputYawScale_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectRotationInputPitchScale_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectRotationInputInterpSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFOVScaling_MetaData[] = {
		{ "Category", "HoverDroneMovement|FOVScaling" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFovRange_MetaData[] = {
		{ "Category", "HoverDroneMovement|FOVScaling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera FOV ranges the drone should expect to deal with*/" },
#endif
		{ "EditCondition", "bUseFOVScaling" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera FOV ranges the drone should expect to deal with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputFovScaleRange_MetaData[] = {
		{ "Category", "HoverDroneMovement|FOVScaling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Value scaling that is mapped to the CameraFOVRange. Affects how intense inputs can be at certain FOV values.*/" },
#endif
		{ "EditCondition", "bUseFOVScaling" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Value scaling that is mapped to the CameraFOVRange. Affects how intense inputs can be at certain FOV values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotAcceleration_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotational acceleration when turning. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotational acceleration when turning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotDeceleration_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotational deceleration when not turning. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotational deceleration when not turning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitchRotSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum rotational speed, pitch */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum rotational speed, pitch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxYawRotSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum rotational speed, yaw */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum rotational speed, yaw" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullAirFrictionVelocity_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls how much Deceleration to apply based on velocity. At this velocity, air friction will be 100% of Deceleration. Uncapped. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls how much Deceleration to apply based on velocity. At this velocity, air friction will be 100% of Deceleration. Uncapped." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementAccelFactor_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum rotational speed, yaw */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum rotational speed, yaw" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroneSpeedParameters_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAirFriction_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroneSpeedParamIndex_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeedHeight_MetaData[] = {
		{ "Category", "HoverDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedHeight_MetaData[] = {
		{ "Category", "HoverDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedHeightMultiplier_MetaData[] = {
		{ "Category", "HoverDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPitch_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Valid Pitch range */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Valid Pitch range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroneMaxAltitude_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Height limit for the drone. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height limit for the drone." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHoverHeight_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set hover height must exceed this value. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set hover height must exceed this value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaintainHoverHeightTolerance_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Within this absolute distance of DesiredHoverHeight, we are considered to be at the desired height and making no corrections. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Within this absolute distance of DesiredHoverHeight, we are considered to be at the desired height and making no corrections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaintainHoverHeightPredictionTime_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How far ahead, in seconds, to check for and respond to upcoming ground height changes. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far ahead, in seconds, to check for and respond to upcoming ground height changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceFacingInterpInTime_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateRotation_MetaData[] = {
		{ "Category", "HoverDroneMovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** true to simulate rotation with rot acceleration, false to ignore rotation. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "true to simulate rotation with rot acceleration, false to ignore rotation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowedActorPositionInterpSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAllowedSpeedIndex;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MaxAllowedSpeedUpdated;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectRotationInputYawScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectRotationInputPitchScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectRotationInputInterpSpeed;
	static void NewProp_bUseFOVScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFOVScaling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraFovRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputFovScaleRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitchRotSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxYawRotSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FullAirFrictionVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementAccelFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DroneSpeedParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DroneSpeedParameters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAirFriction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DroneSpeedParamIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeedHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedHeightMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DroneMaxAltitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHoverHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaintainHoverHeightTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaintainHoverHeightPredictionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceFacingInterpInTime;
	static void NewProp_bSimulateRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowedActorPositionInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV, "SetCurrentFOV" }, // 107867008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoverDroneMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedIndex = { "MaxAllowedSpeedIndex", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxAllowedSpeedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedSpeedIndex_MetaData), NewProp_MaxAllowedSpeedIndex_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedUpdated = { "MaxAllowedSpeedUpdated", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxAllowedSpeedUpdated), Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedSpeedUpdated_MetaData), NewProp_MaxAllowedSpeedUpdated_MetaData) }; // 2284204803
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputYawScale = { "DirectRotationInputYawScale", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DirectRotationInputYawScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectRotationInputYawScale_MetaData), NewProp_DirectRotationInputYawScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputPitchScale = { "DirectRotationInputPitchScale", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DirectRotationInputPitchScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectRotationInputPitchScale_MetaData), NewProp_DirectRotationInputPitchScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputInterpSpeed = { "DirectRotationInputInterpSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DirectRotationInputInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectRotationInputInterpSpeed_MetaData), NewProp_DirectRotationInputInterpSpeed_MetaData) };
void Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bUseFOVScaling_SetBit(void* Obj)
{
	((UHoverDroneMovementComponent*)Obj)->bUseFOVScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bUseFOVScaling = { "bUseFOVScaling", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoverDroneMovementComponent), &Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bUseFOVScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFOVScaling_MetaData), NewProp_bUseFOVScaling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_CameraFovRange = { "CameraFovRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, CameraFovRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFovRange_MetaData), NewProp_CameraFovRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_InputFovScaleRange = { "InputFovScaleRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, InputFovScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputFovScaleRange_MetaData), NewProp_InputFovScaleRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration = { "RotAcceleration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, RotAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotAcceleration_MetaData), NewProp_RotAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration = { "RotDeceleration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, RotDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotDeceleration_MetaData), NewProp_RotDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed = { "MaxPitchRotSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxPitchRotSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitchRotSpeed_MetaData), NewProp_MaxPitchRotSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed = { "MaxYawRotSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxYawRotSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxYawRotSpeed_MetaData), NewProp_MaxYawRotSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FullAirFrictionVelocity = { "FullAirFrictionVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, FullAirFrictionVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullAirFrictionVelocity_MetaData), NewProp_FullAirFrictionVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MovementAccelFactor = { "MovementAccelFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MovementAccelFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementAccelFactor_MetaData), NewProp_MovementAccelFactor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParameters_Inner = { "DroneSpeedParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDroneSpeedParameters, METADATA_PARAMS(0, nullptr) }; // 2673327074
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParameters = { "DroneSpeedParameters", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DroneSpeedParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroneSpeedParameters_MetaData), NewProp_DroneSpeedParameters_MetaData) }; // 2673327074
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinAirFriction = { "MinAirFriction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MinAirFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAirFriction_MetaData), NewProp_MinAirFriction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParamIndex = { "DroneSpeedParamIndex", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DroneSpeedParamIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroneSpeedParamIndex_MetaData), NewProp_DroneSpeedParamIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinSpeedHeight = { "MinSpeedHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MinSpeedHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeedHeight_MetaData), NewProp_MinSpeedHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeight = { "MaxSpeedHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxSpeedHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeedHeight_MetaData), NewProp_MaxSpeedHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeightMultiplier = { "MaxSpeedHeightMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxSpeedHeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeedHeightMultiplier_MetaData), NewProp_MaxSpeedHeightMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MinPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPitch_MetaData), NewProp_MinPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitch_MetaData), NewProp_MaxPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneMaxAltitude = { "DroneMaxAltitude", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DroneMaxAltitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroneMaxAltitude_MetaData), NewProp_DroneMaxAltitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinHoverHeight = { "MinHoverHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MinHoverHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHoverHeight_MetaData), NewProp_MinHoverHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightTolerance = { "MaintainHoverHeightTolerance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaintainHoverHeightTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaintainHoverHeightTolerance_MetaData), NewProp_MaintainHoverHeightTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightPredictionTime = { "MaintainHoverHeightPredictionTime", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaintainHoverHeightPredictionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaintainHoverHeightPredictionTime_MetaData), NewProp_MaintainHoverHeightPredictionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_ForceFacingInterpInTime = { "ForceFacingInterpInTime", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, ForceFacingInterpInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceFacingInterpInTime_MetaData), NewProp_ForceFacingInterpInTime_MetaData) };
void Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bSimulateRotation_SetBit(void* Obj)
{
	((UHoverDroneMovementComponent*)Obj)->bSimulateRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bSimulateRotation = { "bSimulateRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoverDroneMovementComponent), &Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bSimulateRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulateRotation_MetaData), NewProp_bSimulateRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FollowedActorPositionInterpSpeed = { "FollowedActorPositionInterpSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, FollowedActorPositionInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowedActorPositionInterpSpeed_MetaData), NewProp_FollowedActorPositionInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoverDroneMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputYawScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputPitchScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bUseFOVScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_CameraFovRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_InputFovScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FullAirFrictionVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MovementAccelFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinAirFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParamIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinSpeedHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneMaxAltitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinHoverHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightPredictionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_ForceFacingInterpInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bSimulateRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FollowedActorPositionInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoverDroneMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USpectatorPawnMovement,
	(UObject* (*)())Z_Construct_UPackage__Script_HoverDrone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::ClassParams = {
	&UHoverDroneMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHoverDroneMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoverDroneMovementComponent()
{
	if (!Z_Registration_Info_UClass_UHoverDroneMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoverDroneMovementComponent.OuterSingleton, Z_Construct_UClass_UHoverDroneMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoverDroneMovementComponent.OuterSingleton;
}
template<> HOVERDRONE_API UClass* StaticClass<UHoverDroneMovementComponent>()
{
	return UHoverDroneMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoverDroneMovementComponent);
UHoverDroneMovementComponent::~UHoverDroneMovementComponent() {}
// End Class UHoverDroneMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoverDroneDebug_StaticEnum, TEXT("EHoverDroneDebug"), &Z_Registration_Info_UEnum_EHoverDroneDebug, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3092288054U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoverDroneMovementComponent, UHoverDroneMovementComponent::StaticClass, TEXT("UHoverDroneMovementComponent"), &Z_Registration_Info_UClass_UHoverDroneMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoverDroneMovementComponent), 2655533727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_638989553(TEXT("/Script/HoverDrone"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
