// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Camera/CitySampleCam_Driving.h"
#include "CitySample/Public/Util/CitySampleInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCam_Driving() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCam_Driving();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCam_Driving_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCam_ThirdPerson();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCitySampleCam_Driving
void UCitySampleCam_Driving::StaticRegisterNativesUCitySampleCam_Driving()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCam_Driving);
UClass* Z_Construct_UClass_UCitySampleCam_Driving_NoRegister()
{
	return UCitySampleCam_Driving::StaticClass();
}
struct Z_Construct_UClass_UCitySampleCam_Driving_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An extension of the CitySampleCam_ThirdPerson class with extra features meant for driving cameras\n */" },
#endif
		{ "IncludePath", "Camera/CitySampleCam_Driving.h" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An extension of the CitySampleCam_ThirdPerson class with extra features meant for driving cameras" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingLazyFollowLaziness_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Lazy follow laziness to use when driving normally. Higher values mean a lazier auto follow camera. Camera's follow mode must be set to \"LazyFollow\" for this to work. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lazy follow laziness to use when driving normally. Higher values mean a lazier auto follow camera. Camera's follow mode must be set to \"LazyFollow\" for this to work." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverseCamLazyFollowLaziness_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Lazy follow laziness to use when reversing. Higher values mean a lazier auto follow camera. Camera's follow mode must be set to \"LazyFollow\" for this to work. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lazy follow laziness to use when reversing. Higher values mean a lazier auto follow camera. Camera's follow mode must be set to \"LazyFollow\" for this to work." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FowardVelocityThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Velocity threshold used to determine whether the car is properly moving forward or not. We adjust the camera's follow behavior based on this. You want to keep this value positive.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Velocity threshold used to determine whether the car is properly moving forward or not. We adjust the camera's follow behavior based on this. You want to keep this value positive." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverseVelocityThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Velocity threshold used in conjunction with the car's current reverse input state to determine whether the vehicle is currently reversing or not. We adjust the camera's follow behavior based on this. You want to keep this value negative.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Velocity threshold used in conjunction with the car's current reverse input state to determine whether the vehicle is currently reversing or not. We adjust the camera's follow behavior based on this. You want to keep this value negative." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LazyFollowSpeedThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Speed Threshold that must be surpassed before lazy follow camera behavior kicks in*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed Threshold that must be surpassed before lazy follow camera behavior kicks in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeFullFollowPostReleaseTime_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Minimum amount of time that the \"Full Follow\" behavior may be considered active after releasing the handbrake. Used to enhance the feel of sharp handbrake turns. Too low of a number can result in hard to follow handbrake turns, while too high of a number may result in overzealous full follow behavior.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum amount of time that the \"Full Follow\" behavior may be considered active after releasing the handbrake. Used to enhance the feel of sharp handbrake turns. Too low of a number can result in hard to follow handbrake turns, while too high of a number may result in overzealous full follow behavior." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLookAtPointDistance_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Minimum Look At Point Distance from vehicle. A larger distance will make the camera look farther ahead of the vehicle */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum Look At Point Distance from vehicle. A larger distance will make the camera look farther ahead of the vehicle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingLookatWorldSpaceInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Speeds that the LookatWorldSpaceDoubleInterpolator will use */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds that the LookatWorldSpaceDoubleInterpolator will use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At|DrivingLookAtWorldSpaceInterpolator Speeds Scales" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Max scalar to multiply DrivingLookatWorldInterpSpeeds depending on vehicle speeds. This is helpful if at high speeds the default interp speeds are struggling to catch up. Leave at 1.0f if you'd like interp speeds to be unaffected. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max scalar to multiply DrivingLookatWorldInterpSpeeds depending on vehicle speeds. This is helpful if at high speeds the default interp speeds are struggling to catch up. Leave at 1.0f if you'd like interp speeds to be unaffected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingLookatWorldSpaceInterpScaleRange_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At|DrivingLookAtWorldSpaceInterpolator Speeds Scales" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**The speeds in MPH at which the speed scale will start to apply. If you have a range of 80-120 mph and DrivingLookatWorldSpaceInterpMaxSpeedScale is at 2.0, then interp speeds will be scaled like so: 80mph - x1 | 100 mph - x1.5 | 120 mph - x2 */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The speeds in MPH at which the speed scale will start to apply. If you have a range of 80-120 mph and DrivingLookatWorldSpaceInterpMaxSpeedScale is at 2.0, then interp speeds will be scaled like so: 80mph - x1 | 100 mph - x1.5 | 120 mph - x2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtReverseOffset_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**How far back to push the Camera's look at point when the vehicle is reversing. Also used for Forward->Reverse camera transitions */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far back to push the Camera's look at point when the vehicle is reversing. Also used for Forward->Reverse camera transitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtForwardTransitionOffset_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**How far forward to push the Camera's look at point when the vehicle is transitioning from reverse behavior -> forward behavior*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far forward to push the Camera's look at point when the vehicle is transitioning from reverse behavior -> forward behavior" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookatVectorMultiplierInterpolator_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Interpolator that manages the vector multiplier applied to the vehicle's forward vector that determines the look at point. This helps smooth out sudden LookAt changes.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator that manages the vector multiplier applied to the vehicle's forward vector that determines the look at point. This helps smooth out sudden LookAt changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtManualFollowInterpSpeedTransitionTime_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Time it takes to transition from normal LookAtInterpSpeeds to instant interp speeds when manual camera control is active. Used with LookAtManualInterpSpeedTransitionScalar to provide a smooth transition to the instant interp speed.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time it takes to transition from normal LookAtInterpSpeeds to instant interp speeds when manual camera control is active. Used with LookAtManualInterpSpeedTransitionScalar to provide a smooth transition to the instant interp speed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtLazyFollowInterpSpeedTransitionTime_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Time it takes to transition from instant LookAtInterpSpeeds to normal interp speeds when lazy follow camera control is active. Used with LookAtManualInterpSpeedTransitionScalar to provide a smooth transition back to normal interp speeds.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time it takes to transition from instant LookAtInterpSpeeds to normal interp speeds when lazy follow camera control is active. Used with LookAtManualInterpSpeedTransitionScalar to provide a smooth transition back to normal interp speeds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtManualInterpSpeedTransitionScalar_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scalar applied to the vehicle's current LookAt interp speeds to determine the Look At Interp speed goal when transitioning to the \"instant\" interp speed in manual camera mode. Used with LookAtManualFollowInterpSpeedTransitionTime to provide a smooth transition to the instant interp speed. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scalar applied to the vehicle's current LookAt interp speeds to determine the Look At Interp speed goal when transitioning to the \"instant\" interp speed in manual camera mode. Used with LookAtManualFollowInterpSpeedTransitionTime to provide a smooth transition to the instant interp speed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringToLookAtLateralOffset_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve that applies a lateral offset to the Camera's look at point depending on how long the steering threshold has been met. X = Time Steering Threshold Passed, Y = Lateral offset (depends on steering direction) */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve that applies a lateral offset to the Camera's look at point depending on how long the steering threshold has been met. X = Time Steering Threshold Passed, Y = Lateral offset (depends on steering direction)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringToLookAtLateralOffsetScales_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scales the values in the SteeringToLookAtLateralOffset curve. X = Scales Time Axis, Y = Scales Lateral Offset Axis*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales the values in the SteeringToLookAtLateralOffset curve. X = Scales Time Axis, Y = Scales Lateral Offset Axis" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtLateralOffsetSteeringThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Steering threshold to meet so that the SteeringToLookAtLateralOffset curve comes into effect.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering threshold to meet so that the SteeringToLookAtLateralOffset curve comes into effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateralLookAtOffsetRiseAndFallSpeeds_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Rise and Fall Interpolation speeds for the LateralLookAtOffset Target . X = Rise Speed (Steering is triggering lateral offset), Y = Fall Speed. (Weak or zero steering)*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rise and Fall Interpolation speeds for the LateralLookAtOffset Target . X = Rise Speed (Steering is triggering lateral offset), Y = Fall Speed. (Weak or zero steering)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingPivotRotInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Speeds that the PivotRotDoubleInterpolator will use when driving behavior*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds that the PivotRotDoubleInterpolator will use when driving behavior" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivingFullFollowPivotRotInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Speeds that the PivotRotDoubleInterpolator will use when the camera enters full follow mode (happens during handbrake turns)*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds that the PivotRotDoubleInterpolator will use when the camera enters full follow mode (happens during handbrake turns)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManualToAutoCameraPivotRotInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Manual To Auto Camera Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Speeds that the PivotRotDoubleInterpolator will use when transitioning from manual cam to auto cam*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds that the PivotRotDoubleInterpolator will use when transitioning from manual cam to auto cam" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManualToAutoCameraTransitionalYawThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Manual To Auto Camera Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Yaw threshold that must be met before during a manual to auto camera transition before normal pivot rot interp speeds kick in again*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Yaw threshold that must be met before during a manual to auto camera transition before normal pivot rot interp speeds kick in again" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardToReversePivotRotInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Forward Reverse Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Speeds that the PivotRotDoubleInterpolator will use when the camera is switching from the forward to reverse camera following behavior*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds that the PivotRotDoubleInterpolator will use when the camera is switching from the forward to reverse camera following behavior" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverseToForwardPivotRotInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Forward Reverse Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Speeds that the PivotRotDoubleInterpolator will use when the camera is switching from the reverse to forward camera following behavior*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds that the PivotRotDoubleInterpolator will use when the camera is switching from the reverse to forward camera following behavior" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotRotForwardReverseTransitionalYawThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Forward Reverse Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Yaw threshold that must be met before during a forward-reverse camera transition before normal pivot rot interp speeds kick in again*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Yaw threshold that must be met before during a forward-reverse camera transition before normal pivot rot interp speeds kick in again" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotRotSpeedChangeTimeToTransition_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Forward Reverse Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Time for pivot rot speed to change back to normal speeds upon completing a transition. This helps reduce camera snappiness when speeds readjust.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time for pivot rot speed to change back to normal speeds upon completing a transition. This helps reduce camera snappiness when speeds readjust." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFOVSpeedAdjustmentCurve_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|FOV" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** False: Use normal FOV at all times, True: Use FOV_SpeedAdjustmentCurve to determine FOV at runtime. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "False: Use normal FOV at all times, True: Use FOV_SpeedAdjustmentCurve to determine FOV at runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOV_SpeedAdjustmentCurve_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|FOV" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve that applies a dynamic FOV depending on the player's current velocity. */" },
#endif
		{ "EditCondition", "bUseFOVSpeedAdjustmentCurve" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve that applies a dynamic FOV depending on the player's current velocity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOV_SpeedAdjustment_SpeedRange_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|FOV" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Speeds (in MPH) between which the FOV will adjust to at runtime when using the FOV_SpeedAdjustmentCurve*/" },
#endif
		{ "EditCondition", "bUseFOVSpeedAdjustmentCurve" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds (in MPH) between which the FOV will adjust to at runtime when using the FOV_SpeedAdjustmentCurve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSteeringYawModifiers_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** False: Don't apply any Yaw modification based on steering state, True: Use SpeedToYawMultiplierCurve to apply extra Yaw to the camera when turning. This is applied on top of any 'Look At' Camera settings. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "False: Don't apply any Yaw modification based on steering state, True: Use SpeedToYawMultiplierCurve to apply extra Yaw to the camera when turning. This is applied on top of any 'Look At' Camera settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToYawMultiplierCurve_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve that applies a Yaw multiplier based on the vehicles current speed. X = Speed, Y = Yaw Multiplier. The multiplier is applied to the current steering rate which has a range from -1 (leftmost), to 1 (rightmost) */" },
#endif
		{ "EditCondition", "bUseSteeringYawModifiers" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve that applies a Yaw multiplier based on the vehicles current speed. X = Speed, Y = Yaw Multiplier. The multiplier is applied to the current steering rate which has a range from -1 (leftmost), to 1 (rightmost)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringYawModifierInterpolator_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smoothing yaw modifications. Too high of a speed may result in very sudden yaw changes */" },
#endif
		{ "EditCondition", "bUseSteeringYawModifiers" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smoothing yaw modifications. Too high of a speed may result in very sudden yaw changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToYawMultiplierCurve_Scale_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scales Final Multiplier value of SpeedToYawMultiplierCurve*/" },
#endif
		{ "EditCondition", "bUseSteeringYawModifiers" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales Final Multiplier value of SpeedToYawMultiplierCurve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToYawMultiplierCurve_SpeedRange_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Speeds (in MPH) between which the Yaw multiplier will adjust to at runtime when using the SpeedToYawMultiplierCurve*/" },
#endif
		{ "EditCondition", "bUseSteeringYawModifiers" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds (in MPH) between which the Yaw multiplier will adjust to at runtime when using the SpeedToYawMultiplierCurve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeYawModifier_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Yaw Modifier that is added on top of all current Yaw modifiers when using the handbrake. Scales with current steering value and is only applicable when the Vehicle is actually moving. Can be used to apply more extreme camera rotations when drifting.*/" },
#endif
		{ "EditCondition", "bUseSteeringYawModifiers" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Yaw Modifier that is added on top of all current Yaw modifiers when using the handbrake. Scales with current steering value and is only applicable when the Vehicle is actually moving. Can be used to apply more extreme camera rotations when drifting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSteeringRollModifiers_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** False: Don't apply any Roll modification based on steering state, True: Use SpeedToRollMultiplierCurve to apply extra Roll to the camera when turning. This is applied on top of any 'Look At' Camera settings. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "False: Don't apply any Roll modification based on steering state, True: Use SpeedToRollMultiplierCurve to apply extra Roll to the camera when turning. This is applied on top of any 'Look At' Camera settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToRollMultiplierCurve_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve that applies a Roll multiplier based on the vehicles current speed. X = Speed, Y = Roll Multiplier. The multiplier is applied to the current steering rate which has a range from -1 (leftmost), to 1 (rightmost) */" },
#endif
		{ "EditCondition", "bUseSteeringRollModifiers" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve that applies a Roll multiplier based on the vehicles current speed. X = Speed, Y = Roll Multiplier. The multiplier is applied to the current steering rate which has a range from -1 (leftmost), to 1 (rightmost)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringRollModifierRiseAndFallSpeeds_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rise and fall speeds for the SteeringRollModifier interpolator. Rise = Steering Magnitude > Last frame Magnitude, Fall = Steering Magnitude < Last Frame Magnitude */" },
#endif
		{ "EditCondition", "bUseSteeringRollModifiers" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rise and fall speeds for the SteeringRollModifier interpolator. Rise = Steering Magnitude > Last frame Magnitude, Fall = Steering Magnitude < Last Frame Magnitude" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToRollMultiplierCurve_Scale_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scales Final Multiplier value of SpeedToRollMultiplierCurve*/" },
#endif
		{ "EditCondition", "bUseSteeringRollModifiers" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales Final Multiplier value of SpeedToRollMultiplierCurve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToRollMultiplierCurve_SpeedRange_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Speeds (in MPH) between which the Roll multiplier will adjust to at runtime when using the SpeedToRollMultiplierCurve*/" },
#endif
		{ "EditCondition", "bUseSteeringRollModifiers" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds (in MPH) between which the Roll multiplier will adjust to at runtime when using the SpeedToRollMultiplierCurve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeRollModifier_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Roll Modifier that is added on top of all current Roll modifiers when using the handbrake. Scales with current steering value and is only applicable when the Vehicle is actually moving. Can be used to apply more extreme camera rotations when drifting.*/" },
#endif
		{ "EditCondition", "bUseSteeringRollModifiers" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Roll Modifier that is added on top of all current Roll modifiers when using the handbrake. Scales with current steering value and is only applicable when the Vehicle is actually moving. Can be used to apply more extreme camera rotations when drifting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AerialCameraToPivotOffset_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Air Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additive offset to apply to the Camera To Pivot Offset when the vehicle is in the air */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additive offset to apply to the Camera To Pivot Offset when the vehicle is in the air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Air Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Double Interp Speeds to use when transitioning TO the air.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Double Interp Speeds to use when transitioning TO the air." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Air Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Double Interp Speeds to use when transitioning TO the ground.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_Driving.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Double Interp Speeds to use when transitioning TO the ground." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrivingLazyFollowLaziness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseCamLazyFollowLaziness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FowardVelocityThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseVelocityThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LazyFollowSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandbrakeFullFollowPostReleaseTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLookAtPointDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingLookatWorldSpaceInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingLookatWorldSpaceInterpScaleRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtReverseOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtForwardTransitionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookatVectorMultiplierInterpolator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtManualFollowInterpSpeedTransitionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtLazyFollowInterpSpeedTransitionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtManualInterpSpeedTransitionScalar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringToLookAtLateralOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringToLookAtLateralOffsetScales;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtLateralOffsetSteeringThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LateralLookAtOffsetRiseAndFallSpeeds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingPivotRotInterpSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingFullFollowPivotRotInterpSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManualToAutoCameraPivotRotInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualToAutoCameraTransitionalYawThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardToReversePivotRotInterpSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReverseToForwardPivotRotInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotRotForwardReverseTransitionalYawThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotRotSpeedChangeTimeToTransition;
	static void NewProp_bUseFOVSpeedAdjustmentCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFOVSpeedAdjustmentCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FOV_SpeedAdjustmentCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FOV_SpeedAdjustment_SpeedRange;
	static void NewProp_bUseSteeringYawModifiers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSteeringYawModifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedToYawMultiplierCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringYawModifierInterpolator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedToYawMultiplierCurve_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedToYawMultiplierCurve_SpeedRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandbrakeYawModifier;
	static void NewProp_bUseSteeringRollModifiers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSteeringRollModifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedToRollMultiplierCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringRollModifierRiseAndFallSpeeds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedToRollMultiplierCurve_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedToRollMultiplierCurve_SpeedRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandbrakeRollModifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AerialCameraToPivotOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCam_Driving>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLazyFollowLaziness = { "DrivingLazyFollowLaziness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingLazyFollowLaziness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingLazyFollowLaziness_MetaData), NewProp_DrivingLazyFollowLaziness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseCamLazyFollowLaziness = { "ReverseCamLazyFollowLaziness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, ReverseCamLazyFollowLaziness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverseCamLazyFollowLaziness_MetaData), NewProp_ReverseCamLazyFollowLaziness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FowardVelocityThreshold = { "FowardVelocityThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, FowardVelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FowardVelocityThreshold_MetaData), NewProp_FowardVelocityThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseVelocityThreshold = { "ReverseVelocityThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, ReverseVelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverseVelocityThreshold_MetaData), NewProp_ReverseVelocityThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LazyFollowSpeedThreshold = { "LazyFollowSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, LazyFollowSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LazyFollowSpeedThreshold_MetaData), NewProp_LazyFollowSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeFullFollowPostReleaseTime = { "HandbrakeFullFollowPostReleaseTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, HandbrakeFullFollowPostReleaseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbrakeFullFollowPostReleaseTime_MetaData), NewProp_HandbrakeFullFollowPostReleaseTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_MinLookAtPointDistance = { "MinLookAtPointDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, MinLookAtPointDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLookAtPointDistance_MetaData), NewProp_MinLookAtPointDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpSpeed = { "DrivingLookatWorldSpaceInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingLookatWorldSpaceInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingLookatWorldSpaceInterpSpeed_MetaData), NewProp_DrivingLookatWorldSpaceInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale = { "DrivingLookatWorldSpaceInterpMaxSpeedScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingLookatWorldSpaceInterpMaxSpeedScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale_MetaData), NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpScaleRange = { "DrivingLookatWorldSpaceInterpScaleRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingLookatWorldSpaceInterpScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingLookatWorldSpaceInterpScaleRange_MetaData), NewProp_DrivingLookatWorldSpaceInterpScaleRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtReverseOffset = { "LookAtReverseOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtReverseOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtReverseOffset_MetaData), NewProp_LookAtReverseOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtForwardTransitionOffset = { "LookAtForwardTransitionOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtForwardTransitionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtForwardTransitionOffset_MetaData), NewProp_LookAtForwardTransitionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookatVectorMultiplierInterpolator = { "LookatVectorMultiplierInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, LookatVectorMultiplierInterpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookatVectorMultiplierInterpolator_MetaData), NewProp_LookatVectorMultiplierInterpolator_MetaData) }; // 2830033391
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualFollowInterpSpeedTransitionTime = { "LookAtManualFollowInterpSpeedTransitionTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtManualFollowInterpSpeedTransitionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtManualFollowInterpSpeedTransitionTime_MetaData), NewProp_LookAtManualFollowInterpSpeedTransitionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLazyFollowInterpSpeedTransitionTime = { "LookAtLazyFollowInterpSpeedTransitionTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtLazyFollowInterpSpeedTransitionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtLazyFollowInterpSpeedTransitionTime_MetaData), NewProp_LookAtLazyFollowInterpSpeedTransitionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualInterpSpeedTransitionScalar = { "LookAtManualInterpSpeedTransitionScalar", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtManualInterpSpeedTransitionScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtManualInterpSpeedTransitionScalar_MetaData), NewProp_LookAtManualInterpSpeedTransitionScalar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffset = { "SteeringToLookAtLateralOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, SteeringToLookAtLateralOffset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringToLookAtLateralOffset_MetaData), NewProp_SteeringToLookAtLateralOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffsetScales = { "SteeringToLookAtLateralOffsetScales", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, SteeringToLookAtLateralOffsetScales), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringToLookAtLateralOffsetScales_MetaData), NewProp_SteeringToLookAtLateralOffsetScales_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLateralOffsetSteeringThreshold = { "LookAtLateralOffsetSteeringThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtLateralOffsetSteeringThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtLateralOffsetSteeringThreshold_MetaData), NewProp_LookAtLateralOffsetSteeringThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LateralLookAtOffsetRiseAndFallSpeeds = { "LateralLookAtOffsetRiseAndFallSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, LateralLookAtOffsetRiseAndFallSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateralLookAtOffsetRiseAndFallSpeeds_MetaData), NewProp_LateralLookAtOffsetRiseAndFallSpeeds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingPivotRotInterpSpeed = { "DrivingPivotRotInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingPivotRotInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingPivotRotInterpSpeed_MetaData), NewProp_DrivingPivotRotInterpSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingFullFollowPivotRotInterpSpeed = { "DrivingFullFollowPivotRotInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingFullFollowPivotRotInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivingFullFollowPivotRotInterpSpeed_MetaData), NewProp_DrivingFullFollowPivotRotInterpSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraPivotRotInterpSpeed = { "ManualToAutoCameraPivotRotInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, ManualToAutoCameraPivotRotInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManualToAutoCameraPivotRotInterpSpeed_MetaData), NewProp_ManualToAutoCameraPivotRotInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraTransitionalYawThreshold = { "ManualToAutoCameraTransitionalYawThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, ManualToAutoCameraTransitionalYawThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManualToAutoCameraTransitionalYawThreshold_MetaData), NewProp_ManualToAutoCameraTransitionalYawThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ForwardToReversePivotRotInterpSpeed = { "ForwardToReversePivotRotInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, ForwardToReversePivotRotInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardToReversePivotRotInterpSpeed_MetaData), NewProp_ForwardToReversePivotRotInterpSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseToForwardPivotRotInterpSpeed = { "ReverseToForwardPivotRotInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, ReverseToForwardPivotRotInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverseToForwardPivotRotInterpSpeed_MetaData), NewProp_ReverseToForwardPivotRotInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotForwardReverseTransitionalYawThreshold = { "PivotRotForwardReverseTransitionalYawThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, PivotRotForwardReverseTransitionalYawThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotRotForwardReverseTransitionalYawThreshold_MetaData), NewProp_PivotRotForwardReverseTransitionalYawThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotSpeedChangeTimeToTransition = { "PivotRotSpeedChangeTimeToTransition", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, PivotRotSpeedChangeTimeToTransition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotRotSpeedChangeTimeToTransition_MetaData), NewProp_PivotRotSpeedChangeTimeToTransition_MetaData) };
void Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseFOVSpeedAdjustmentCurve_SetBit(void* Obj)
{
	((UCitySampleCam_Driving*)Obj)->bUseFOVSpeedAdjustmentCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseFOVSpeedAdjustmentCurve = { "bUseFOVSpeedAdjustmentCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCam_Driving), &Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseFOVSpeedAdjustmentCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFOVSpeedAdjustmentCurve_MetaData), NewProp_bUseFOVSpeedAdjustmentCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustmentCurve = { "FOV_SpeedAdjustmentCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, FOV_SpeedAdjustmentCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOV_SpeedAdjustmentCurve_MetaData), NewProp_FOV_SpeedAdjustmentCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustment_SpeedRange = { "FOV_SpeedAdjustment_SpeedRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, FOV_SpeedAdjustment_SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOV_SpeedAdjustment_SpeedRange_MetaData), NewProp_FOV_SpeedAdjustment_SpeedRange_MetaData) };
void Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringYawModifiers_SetBit(void* Obj)
{
	((UCitySampleCam_Driving*)Obj)->bUseSteeringYawModifiers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringYawModifiers = { "bUseSteeringYawModifiers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCam_Driving), &Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringYawModifiers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSteeringYawModifiers_MetaData), NewProp_bUseSteeringYawModifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve = { "SpeedToYawMultiplierCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToYawMultiplierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedToYawMultiplierCurve_MetaData), NewProp_SpeedToYawMultiplierCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringYawModifierInterpolator = { "SteeringYawModifierInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, SteeringYawModifierInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringYawModifierInterpolator_MetaData), NewProp_SteeringYawModifierInterpolator_MetaData) }; // 2470232998
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_Scale = { "SpeedToYawMultiplierCurve_Scale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToYawMultiplierCurve_Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedToYawMultiplierCurve_Scale_MetaData), NewProp_SpeedToYawMultiplierCurve_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_SpeedRange = { "SpeedToYawMultiplierCurve_SpeedRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToYawMultiplierCurve_SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedToYawMultiplierCurve_SpeedRange_MetaData), NewProp_SpeedToYawMultiplierCurve_SpeedRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeYawModifier = { "HandbrakeYawModifier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, HandbrakeYawModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbrakeYawModifier_MetaData), NewProp_HandbrakeYawModifier_MetaData) };
void Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringRollModifiers_SetBit(void* Obj)
{
	((UCitySampleCam_Driving*)Obj)->bUseSteeringRollModifiers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringRollModifiers = { "bUseSteeringRollModifiers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCam_Driving), &Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringRollModifiers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSteeringRollModifiers_MetaData), NewProp_bUseSteeringRollModifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve = { "SpeedToRollMultiplierCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToRollMultiplierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedToRollMultiplierCurve_MetaData), NewProp_SpeedToRollMultiplierCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringRollModifierRiseAndFallSpeeds = { "SteeringRollModifierRiseAndFallSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, SteeringRollModifierRiseAndFallSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringRollModifierRiseAndFallSpeeds_MetaData), NewProp_SteeringRollModifierRiseAndFallSpeeds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_Scale = { "SpeedToRollMultiplierCurve_Scale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToRollMultiplierCurve_Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedToRollMultiplierCurve_Scale_MetaData), NewProp_SpeedToRollMultiplierCurve_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_SpeedRange = { "SpeedToRollMultiplierCurve_SpeedRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToRollMultiplierCurve_SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedToRollMultiplierCurve_SpeedRange_MetaData), NewProp_SpeedToRollMultiplierCurve_SpeedRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeRollModifier = { "HandbrakeRollModifier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, HandbrakeRollModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbrakeRollModifier_MetaData), NewProp_HandbrakeRollModifier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffset = { "AerialCameraToPivotOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, AerialCameraToPivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AerialCameraToPivotOffset_MetaData), NewProp_AerialCameraToPivotOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds = { "AerialCameraToPivotOffsetAirTransitionSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, AerialCameraToPivotOffsetAirTransitionSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds_MetaData), NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds = { "AerialCameraToPivotOffsetGroundTransitionSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_Driving, AerialCameraToPivotOffsetGroundTransitionSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds_MetaData), NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCam_Driving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLazyFollowLaziness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseCamLazyFollowLaziness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FowardVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LazyFollowSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeFullFollowPostReleaseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_MinLookAtPointDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtReverseOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtForwardTransitionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookatVectorMultiplierInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualFollowInterpSpeedTransitionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLazyFollowInterpSpeedTransitionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualInterpSpeedTransitionScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffsetScales,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLateralOffsetSteeringThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LateralLookAtOffsetRiseAndFallSpeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingPivotRotInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingFullFollowPivotRotInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraPivotRotInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraTransitionalYawThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ForwardToReversePivotRotInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseToForwardPivotRotInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotForwardReverseTransitionalYawThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotSpeedChangeTimeToTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseFOVSpeedAdjustmentCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustmentCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustment_SpeedRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringYawModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringYawModifierInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_SpeedRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeYawModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringRollModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringRollModifierRiseAndFallSpeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_SpeedRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeRollModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleCam_Driving_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCitySampleCam_ThirdPerson,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::ClassParams = {
	&UCitySampleCam_Driving::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCitySampleCam_Driving_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleCam_Driving_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleCam_Driving()
{
	if (!Z_Registration_Info_UClass_UCitySampleCam_Driving.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCam_Driving.OuterSingleton, Z_Construct_UClass_UCitySampleCam_Driving_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleCam_Driving.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCam_Driving>()
{
	return UCitySampleCam_Driving::StaticClass();
}
UCitySampleCam_Driving::UCitySampleCam_Driving() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCam_Driving);
UCitySampleCam_Driving::~UCitySampleCam_Driving() {}
// End Class UCitySampleCam_Driving

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_Driving_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCam_Driving, UCitySampleCam_Driving::StaticClass, TEXT("UCitySampleCam_Driving"), &Z_Registration_Info_UClass_UCitySampleCam_Driving, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCam_Driving), 1007298937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_Driving_h_467487133(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_Driving_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_Driving_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
