// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Camera/CitySampleCameraMode.h"
#include "CitySample/Public/Util/CitySampleInterpolators.h"
#include "Runtime/CinematicCamera/Public/CineCameraSettings.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCameraMode() {}

// Begin Cross Module References
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayerCameraManager_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCameraMode();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCameraMode_NoRegister();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FViewTargetTransitionParams();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCitySampleCameraMode Function GetCustomFocusDistance
struct CitySampleCameraMode_eventGetCustomFocusDistance_Parms
{
	AActor* ViewTarget;
	FTransform ViewToWorld;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	CitySampleCameraMode_eventGetCustomFocusDistance_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UCitySampleCameraMode_GetCustomFocusDistance = FName(TEXT("GetCustomFocusDistance"));
float UCitySampleCameraMode::GetCustomFocusDistance(AActor* ViewTarget, FTransform const& ViewToWorld) const
{
	CitySampleCameraMode_eventGetCustomFocusDistance_Parms Parms;
	Parms.ViewTarget=ViewTarget;
	Parms.ViewToWorld=ViewToWorld;
	const_cast<UCitySampleCameraMode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCitySampleCameraMode_GetCustomFocusDistance),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When UseCustomFocusDistance is true, this event should be implemented to determine a focus distance appropriate for the camera mode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When UseCustomFocusDistance is true, this event should be implemented to determine a focus distance appropriate for the camera mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewToWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewToWorld;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCameraMode_eventGetCustomFocusDistance_Parms, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld = { "ViewToWorld", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCameraMode_eventGetCustomFocusDistance_Parms, ViewToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewToWorld_MetaData), NewProp_ViewToWorld_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCameraMode_eventGetCustomFocusDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCameraMode, nullptr, "GetCustomFocusDistance", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::PropPointers), sizeof(CitySampleCameraMode_eventGetCustomFocusDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleCameraMode_eventGetCustomFocusDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleCameraMode Function GetCustomFocusDistance

// Begin Class UCitySampleCameraMode Function ResetToDefaultSettings
static FName NAME_UCitySampleCameraMode_ResetToDefaultSettings = FName(TEXT("ResetToDefaultSettings"));
void UCitySampleCameraMode::ResetToDefaultSettings()
{
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleCameraMode_ResetToDefaultSettings),NULL);
}
struct Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint native event for camera modes to reset to default settings as needed */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint native event for camera modes to reset to default settings as needed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCameraMode, nullptr, "ResetToDefaultSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleCameraMode::execResetToDefaultSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefaultSettings_Implementation();
	P_NATIVE_END;
}
// End Class UCitySampleCameraMode Function ResetToDefaultSettings

// Begin Class UCitySampleCameraMode
void UCitySampleCameraMode::StaticRegisterNativesUCitySampleCameraMode()
{
	UClass* Class = UCitySampleCameraMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetToDefaultSettings", &UCitySampleCameraMode::execResetToDefaultSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCameraMode);
UClass* Z_Construct_UClass_UCitySampleCameraMode_NoRegister()
{
	return UCitySampleCameraMode::StaticClass();
}
struct Z_Construct_UClass_UCitySampleCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for Camera Mode implementations. Has functions and settings for camera activation, updating, and whether or not to use cine cam properties\n */" },
#endif
		{ "IncludePath", "Camera/CitySampleCameraMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for Camera Mode implementations. Has functions and settings for camera activation, updating, and whether or not to use cine cam properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera actor this mode is bound to */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera actor this mode is bound to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionInTime_MetaData[] = {
		{ "Category", "Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time camera transition should take when entering this camera mode */" },
#endif
		{ "DisplayName", "Transition In Time" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time camera transition should take when entering this camera mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionParams_MetaData[] = {
		{ "Category", "Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transition parameters for this camera mode type */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transition parameters for this camera mode type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Desired FOV.  Full angle, in degrees (e.g. 90.f) */" },
#endif
		{ "EditCondition", "!bUseCineCamSettings" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Desired FOV.  Full angle, in degrees (e.g. 90.f)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCineCam_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this camera mode will use a cine cam component, allowing access to cinematic camera settings */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this camera mode will use a cine cam component, allowing access to cinematic camera settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCineCamSettings_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, custom cine cam settings will be applied when UseCinecam is enabled */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, custom cine cam settings will be applied when UseCinecam is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFilmback_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, default cinecam filmback settings will be overriden by what is set in CineCam_FilmbackOverride */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, default cinecam filmback settings will be overriden by what is set in CineCam_FilmbackOverride" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_FilmbackOverride_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom filmback settings to use when OverrideFilmback is enabled */" },
#endif
		{ "EditCondition", "bOverrideFilmback" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom filmback settings to use when OverrideFilmback is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_CurrentFocalLength_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera focal length to use when UseCinecamSettings is enabled */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera focal length to use when UseCinecamSettings is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_CurrentAperture_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera aperture to use when UseCinecamSettings is enabled */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera aperture to use when UseCinecamSettings is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_FocusDistanceAdjustment_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom focus distance adjustment to use when UseCinecamSettings is enabled */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom focus distance adjustment to use when UseCinecamSettings is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_DisplayOnly_FOV_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FOV to use when UseCineCam is enabled */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOV to use when UseCineCam is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List for tracking actors that block the camera */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List for tracking actors that block the camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera shake class to create when this camera mode becomes active */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera shake class to create when this camera mode becomes active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Shake object instance created when this camera mode is activated and a valid CameraShakeClass is set */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Shake object instance created when this camera mode is activated and a valid CameraShakeClass is set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleShakeWithViewTargetVelocity_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, camera shake will be scaled using the ShakeScaling_SpeedRange and the ShakeScaling_ScaleRange */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, camera shake will be scaled using the ShakeScaling_SpeedRange and the ShakeScaling_ScaleRange" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScaling_SpeedRange_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ranges of view target velocity that will be mapped to a camera shake scale */" },
#endif
		{ "EditCondition", "bScaleShakeWithViewTargetVelocity" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranges of view target velocity that will be mapped to a camera shake scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScaling_ScaleRange_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maps to ShakeScaling_SpeedRange, such that at SpeedRange.X, shake will scale to ScaleRange.X */" },
#endif
		{ "EditCondition", "bScaleShakeWithViewTargetVelocity" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps to ShakeScaling_SpeedRange, such that at SpeedRange.X, shake will scale to ScaleRange.X" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScaleInterpolator_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth changes in camera shake intensities */" },
#endif
		{ "EditCondition", "bScaleShakeWithViewTargetVelocity" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth changes in camera shake intensities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugShake_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, the camera mode will attempt to display debug information related to camera shake*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, the camera mode will attempt to display debug information related to camera shake" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomFocusDistance_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, a custom focus distance will be provided to the cine cam via an implementation of the GetCustomFocusDistance Blueprint Implementable Event */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, a custom focus distance will be provided to the cine cam via an implementation of the GetCustomFocusDistance Blueprint Implementable Event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideViewPitchMinAndMax_MetaData[] = {
		{ "Category", "Camera Manager Overrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, custom view pitch limits will be used for this camera mode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, custom view pitch limits will be used for this camera mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMinOverride_MetaData[] = {
		{ "Category", "Camera Manager Overrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pitch minimum limit to use when OverrideViewPitchMinAndMax is true */" },
#endif
		{ "EditCondition", "bOverrideViewPitchMinAndMax" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pitch minimum limit to use when OverrideViewPitchMinAndMax is true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMaxOverride_MetaData[] = {
		{ "Category", "Camera Manager Overrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pitch maximum limit to use when OverrideViewPitchMinAndMax is true */" },
#endif
		{ "EditCondition", "bOverrideViewPitchMinAndMax" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pitch maximum limit to use when OverrideViewPitchMinAndMax is true" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionInTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionParams;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
	static void NewProp_bUseCineCam_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCineCam;
	static void NewProp_bUseCineCamSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCineCamSettings;
	static void NewProp_bOverrideFilmback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFilmback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CineCam_FilmbackOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_CurrentFocalLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_CurrentAperture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_FocusDistanceAdjustment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_DisplayOnly_FOV;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockingActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockingActors;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraShakeInstance;
	static void NewProp_bScaleShakeWithViewTargetVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleShakeWithViewTargetVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeScaling_SpeedRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeScaling_ScaleRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeScaleInterpolator;
	static void NewProp_bDrawDebugShake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugShake;
	static void NewProp_bUseCustomFocusDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomFocusDistance;
	static void NewProp_bOverrideViewPitchMinAndMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideViewPitchMinAndMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMinOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMaxOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance, "GetCustomFocusDistance" }, // 3546393287
		{ &Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings, "ResetToDefaultSettings" }, // 3853627903
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCameraMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, PlayerCamera), Z_Construct_UClass_ACitySamplePlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCamera_MetaData), NewProp_PlayerCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionInTime = { "TransitionInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, TransitionInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionInTime_MetaData), NewProp_TransitionInTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionParams = { "TransitionParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, TransitionParams), Z_Construct_UScriptStruct_FViewTargetTransitionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionParams_MetaData), NewProp_TransitionParams_MetaData) }; // 290970485
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOV_MetaData), NewProp_FOV_MetaData) };
void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCam_SetBit(void* Obj)
{
	((UCitySampleCameraMode*)Obj)->bUseCineCam = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCam = { "bUseCineCam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCineCam_MetaData), NewProp_bUseCineCam_MetaData) };
void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCamSettings_SetBit(void* Obj)
{
	((UCitySampleCameraMode*)Obj)->bUseCineCamSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCamSettings = { "bUseCineCamSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCamSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCineCamSettings_MetaData), NewProp_bUseCineCamSettings_MetaData) };
void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideFilmback_SetBit(void* Obj)
{
	((UCitySampleCameraMode*)Obj)->bOverrideFilmback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideFilmback = { "bOverrideFilmback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideFilmback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideFilmback_MetaData), NewProp_bOverrideFilmback_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FilmbackOverride = { "CineCam_FilmbackOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, CineCam_FilmbackOverride), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CineCam_FilmbackOverride_MetaData), NewProp_CineCam_FilmbackOverride_MetaData) }; // 2566076393
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentFocalLength = { "CineCam_CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, CineCam_CurrentFocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CineCam_CurrentFocalLength_MetaData), NewProp_CineCam_CurrentFocalLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentAperture = { "CineCam_CurrentAperture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, CineCam_CurrentAperture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CineCam_CurrentAperture_MetaData), NewProp_CineCam_CurrentAperture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment = { "CineCam_FocusDistanceAdjustment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, CineCam_FocusDistanceAdjustment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CineCam_FocusDistanceAdjustment_MetaData), NewProp_CineCam_FocusDistanceAdjustment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV = { "CineCam_DisplayOnly_FOV", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, CineCam_DisplayOnly_FOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CineCam_DisplayOnly_FOV_MetaData), NewProp_CineCam_DisplayOnly_FOV_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_BlockingActors_Inner = { "BlockingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_BlockingActors = { "BlockingActors", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, BlockingActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingActors_MetaData), NewProp_BlockingActors_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, CameraShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakeClass_MetaData), NewProp_CameraShakeClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeInstance = { "CameraShakeInstance", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, CameraShakeInstance), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakeInstance_MetaData), NewProp_CameraShakeInstance_MetaData) };
void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_SetBit(void* Obj)
{
	((UCitySampleCameraMode*)Obj)->bScaleShakeWithViewTargetVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity = { "bScaleShakeWithViewTargetVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleShakeWithViewTargetVelocity_MetaData), NewProp_bScaleShakeWithViewTargetVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_SpeedRange = { "ShakeScaling_SpeedRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, ShakeScaling_SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeScaling_SpeedRange_MetaData), NewProp_ShakeScaling_SpeedRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_ScaleRange = { "ShakeScaling_ScaleRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, ShakeScaling_ScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeScaling_ScaleRange_MetaData), NewProp_ShakeScaling_ScaleRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaleInterpolator = { "ShakeScaleInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, ShakeScaleInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeScaleInterpolator_MetaData), NewProp_ShakeScaleInterpolator_MetaData) }; // 2470232998
void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bDrawDebugShake_SetBit(void* Obj)
{
	((UCitySampleCameraMode*)Obj)->bDrawDebugShake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bDrawDebugShake = { "bDrawDebugShake", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bDrawDebugShake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugShake_MetaData), NewProp_bDrawDebugShake_MetaData) };
void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCustomFocusDistance_SetBit(void* Obj)
{
	((UCitySampleCameraMode*)Obj)->bUseCustomFocusDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCustomFocusDistance = { "bUseCustomFocusDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCustomFocusDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomFocusDistance_MetaData), NewProp_bUseCustomFocusDistance_MetaData) };
void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_SetBit(void* Obj)
{
	((UCitySampleCameraMode*)Obj)->bOverrideViewPitchMinAndMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax = { "bOverrideViewPitchMinAndMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideViewPitchMinAndMax_MetaData), NewProp_bOverrideViewPitchMinAndMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMinOverride = { "ViewPitchMinOverride", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, ViewPitchMinOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMinOverride_MetaData), NewProp_ViewPitchMinOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMaxOverride = { "ViewPitchMaxOverride", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCameraMode, ViewPitchMaxOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMaxOverride_MetaData), NewProp_ViewPitchMaxOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_PlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_FOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCamSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideFilmback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FilmbackOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentFocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentAperture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_BlockingActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_BlockingActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_SpeedRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_ScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaleInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bDrawDebugShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCustomFocusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMinOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMaxOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleCameraMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCameraMode_Statics::ClassParams = {
	&UCitySampleCameraMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCitySampleCameraMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleCameraMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleCameraMode()
{
	if (!Z_Registration_Info_UClass_UCitySampleCameraMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCameraMode.OuterSingleton, Z_Construct_UClass_UCitySampleCameraMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleCameraMode.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCameraMode>()
{
	return UCitySampleCameraMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCameraMode);
UCitySampleCameraMode::~UCitySampleCameraMode() {}
// End Class UCitySampleCameraMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCameraMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCameraMode, UCitySampleCameraMode::StaticClass, TEXT("UCitySampleCameraMode"), &Z_Registration_Info_UClass_UCitySampleCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCameraMode), 2520349379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCameraMode_h_2947498421(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCameraMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
