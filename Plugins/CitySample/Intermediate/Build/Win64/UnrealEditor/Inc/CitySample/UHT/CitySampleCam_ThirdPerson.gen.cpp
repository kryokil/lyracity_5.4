// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Camera/CitySampleCam_ThirdPerson.h"
#include "CitySample/Public/Util/CitySampleInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCam_ThirdPerson() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCam_ThirdPerson();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCam_ThirdPerson_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCameraMode();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECameraAutoFollowMode();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorVector();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FPenetrationAvoidanceRay();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Enum ECameraAutoFollowMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraAutoFollowMode;
static UEnum* ECameraAutoFollowMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraAutoFollowMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraAutoFollowMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECameraAutoFollowMode, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECameraAutoFollowMode"));
	}
	return Z_Registration_Info_UEnum_ECameraAutoFollowMode.OuterSingleton;
}
template<> CITYSAMPLE_API UEnum* StaticEnum<ECameraAutoFollowMode>()
{
	return ECameraAutoFollowMode_StaticEnum();
}
struct Z_Construct_UEnum_CitySample_ECameraAutoFollowMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Auto follow types this camera mode supports\n */" },
#endif
		{ "FullFollow.Name", "ECameraAutoFollowMode::FullFollow" },
		{ "LazyFollow.Name", "ECameraAutoFollowMode::LazyFollow" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
		{ "None.Name", "ECameraAutoFollowMode::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto follow types this camera mode supports" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraAutoFollowMode::None", (int64)ECameraAutoFollowMode::None },
		{ "ECameraAutoFollowMode::LazyFollow", (int64)ECameraAutoFollowMode::LazyFollow },
		{ "ECameraAutoFollowMode::FullFollow", (int64)ECameraAutoFollowMode::FullFollow },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECameraAutoFollowMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	"ECameraAutoFollowMode",
	"ECameraAutoFollowMode",
	Z_Construct_UEnum_CitySample_ECameraAutoFollowMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECameraAutoFollowMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECameraAutoFollowMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECameraAutoFollowMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CitySample_ECameraAutoFollowMode()
{
	if (!Z_Registration_Info_UEnum_ECameraAutoFollowMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraAutoFollowMode.InnerSingleton, Z_Construct_UEnum_CitySample_ECameraAutoFollowMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraAutoFollowMode.InnerSingleton;
}
// End Enum ECameraAutoFollowMode

// Begin ScriptStruct FPenetrationAvoidanceRay
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay;
class UScriptStruct* FPenetrationAvoidanceRay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("PenetrationAvoidanceRay"));
	}
	return Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FPenetrationAvoidanceRay>()
{
	return FPenetrationAvoidanceRay::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct defining a feeler ray used for camera penetration avoidance.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct defining a feeler ray used for camera penetration avoidance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustmentRot_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FRotator describing deviance from main ray */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FRotator describing deviance from main ray" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldWeight_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** how much this feeler affects the final position if it hits the world */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how much this feeler affects the final position if it hits the world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** extent to use for collision when tracing this feeler */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "extent to use for collision when tracing this feeler" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceInterval_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** minimum frame interval between traces with this feeler if nothing was hit last frame */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "minimum frame interval between traces with this feeler if nothing was hit last frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesUntilNextTrace_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** number of frames since this feeler was used */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "number of frames since this feeler was used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrimaryRay_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdjustmentRot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TraceInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FramesUntilNextTrace;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bPrimaryRay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrimaryRay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPenetrationAvoidanceRay>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_AdjustmentRot = { "AdjustmentRot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceRay, AdjustmentRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustmentRot_MetaData), NewProp_AdjustmentRot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_WorldWeight = { "WorldWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceRay, WorldWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldWeight_MetaData), NewProp_WorldWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceRay, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_TraceInterval = { "TraceInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceRay, TraceInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceInterval_MetaData), NewProp_TraceInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_FramesUntilNextTrace = { "FramesUntilNextTrace", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceRay, FramesUntilNextTrace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesUntilNextTrace_MetaData), NewProp_FramesUntilNextTrace_MetaData) };
void Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FPenetrationAvoidanceRay*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPenetrationAvoidanceRay), &Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bPrimaryRay_SetBit(void* Obj)
{
	((FPenetrationAvoidanceRay*)Obj)->bPrimaryRay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bPrimaryRay = { "bPrimaryRay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPenetrationAvoidanceRay), &Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bPrimaryRay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrimaryRay_MetaData), NewProp_bPrimaryRay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_AdjustmentRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_WorldWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_TraceInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_FramesUntilNextTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bPrimaryRay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"PenetrationAvoidanceRay",
	Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::PropPointers),
	sizeof(FPenetrationAvoidanceRay),
	alignof(FPenetrationAvoidanceRay),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPenetrationAvoidanceRay()
{
	if (!Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.InnerSingleton, Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.InnerSingleton;
}
// End ScriptStruct FPenetrationAvoidanceRay

// Begin Class UCitySampleCam_ThirdPerson
void UCitySampleCam_ThirdPerson::StaticRegisterNativesUCitySampleCam_ThirdPerson()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCam_ThirdPerson);
UClass* Z_Construct_UClass_UCitySampleCam_ThirdPerson_NoRegister()
{
	return UCitySampleCam_ThirdPerson::StaticClass();
}
struct Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Third person camera implementation of the CitySampleCameraMode. \n * Features camera smoothing, auto follow behaviors, and penetration avoidance.\n */" },
#endif
		{ "IncludePath", "Camera/CitySampleCam_ThirdPerson.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Third person camera implementation of the CitySampleCameraMode.\nFeatures camera smoothing, auto follow behaviors, and penetration avoidance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotToViewTarget_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transform for the Pivot, in the ViewTarget's space. This is the point the camera rotates around. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform for the Pivot, in the ViewTarget's space. This is the point the camera rotates around." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotLocInterpolator_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth changes to the camera pivot's location in world space. Note: For very fast moving objects you may want to set this to 0,0 for instant pivot updates */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth changes to the camera pivot's location in world space. Note: For very fast moving objects you may want to set this to 0,0 for instant pivot updates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotRotInterpolator_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth changes to the camera pivot's rotation in world space */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth changes to the camera pivot's rotation in world space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotPitchLimits_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Min and Max pitch thresholds for the camera pivot, in degrees  */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min and Max pitch thresholds for the camera pivot, in degrees" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotYawLimits_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Min and Max yaw thresholds for the camera pivot in degrees */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min and Max yaw thresholds for the camera pivot in degrees" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default transform for the camera in pivot space */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default transform for the camera in pivot space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivotTranslationInterpolator_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth changes to the camera's translation in pivot space */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth changes to the camera's translation in pivot space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_PitchAdjustmentCurve_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** 0 on this curve corresponds to PitchMin (PitchLimits.X, looking down). 1 corresponds to max pitch (PitchLimits.Y, looking up). */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 on this curve corresponds to PitchMin (PitchLimits.X, looking down). 1 corresponds to max pitch (PitchLimits.Y, looking up)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_PitchAdjustmentCurveScale_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scalar applied to pitch adjustment scale curve output, for cases where you want to make a 0..1 curve shape and set magnitude here. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scalar applied to pitch adjustment scale curve output, for cases where you want to make a 0..1 curve shape and set magnitude here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_SpeedAdjustmentCurve_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** 0 on this curve corresponds to CameraToPivot_SpeedAdjustment_SpeedRange.X (range min). 1 corresponds to CameraToPivot_SpeedAdjustment_SpeedRange.Y (range max). */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 on this curve corresponds to CameraToPivot_SpeedAdjustment_SpeedRange.X (range min). 1 corresponds to CameraToPivot_SpeedAdjustment_SpeedRange.Y (range max)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_SpeedAdjustmentCurveScale_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scalar applied to speed adjustment scale curve output, for cases where you want to make a 0..1 curve shape and set magnitude here. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scalar applied to speed adjustment scale curve output, for cases where you want to make a 0..1 curve shape and set magnitude here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_SpeedAdjustment_SpeedRange_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Speeds between which the camera to pivot translation is interpolated between base CameraToPivot translation and the translation obtained from the CameraToPivot_SpeedAdjustmentCurve curve.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds between which the camera to pivot translation is interpolated between base CameraToPivot translation and the translation obtained from the CameraToPivot_SpeedAdjustmentCurve curve." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoFollowMode_MetaData[] = {
		{ "Category", "AutoFollow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto follow behavior to apply to the camera */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto follow behavior to apply to the camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LazyAutoFollowPitchLimits_MetaData[] = {
		{ "Category", "AutoFollow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pitch limits to apply when the LazyFollow CameraAutoFollowMode is enabled and AllowLazyAutoFollowPitchControl is false */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pitch limits to apply when the LazyFollow CameraAutoFollowMode is enabled and AllowLazyAutoFollowPitchControl is false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLazyAutoFollowPitchControl_MetaData[] = {
		{ "Category", "AutoFollow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, manual camera pitch set by player will be used when in LazyFollow mode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, manual camera pitch set by player will be used when in LazyFollow mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LazyFollowLaziness_MetaData[] = {
		{ "Category", "AutoFollow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Higher numbers == slower following behavior, lower == faster. 0 == perfectly tight. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher numbers == slower following behavior, lower == faster. 0 == perfectly tight." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LazyFollowDelayAfterUserControl_MetaData[] = {
		{ "Category", "AutoFollow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delay in seconds before lazy follow behavior kicks in after manual control of the camera */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay in seconds before lazy follow behavior kicks in after manual control of the camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookatOffsetLocal_MetaData[] = {
		{ "Category", "LookAt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset of the camera's look at point relative to the ViewTarget's transform */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset of the camera's look at point relative to the ViewTarget's transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookatWorldSpaceInterpolator_MetaData[] = {
		{ "Category", "LookAt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth updates to the final world position of the camera look at point */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth updates to the final world position of the camera look at point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLookatPoint_MetaData[] = {
		{ "Category", "LookAt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled the camera will automatically rotate to focus the look at point. If false, the camera will just look straight ahead. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled the camera will automatically rotate to focus the look at point. If false, the camera will just look straight ahead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoPredictiveLookat_MetaData[] = {
		{ "Category", "LookAt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, the view target's velocity will be taken into account when calculating our goal look at point */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, the view target's velocity will be taken into account when calculating our goal look at point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictiveLookatTime_MetaData[] = {
		{ "Category", "LookAt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The length of time in seconds in the future the camera will predict the look at point to be when DoPredictiveLookat is enabled */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The length of time in seconds in the future the camera will predict the look at point to be when DoPredictiveLookat is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPenetrationAvoidanceRays_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rays used when detecting obstacles that the camera needs to avoid */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rays used when detecting obstacles that the camera needs to avoid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeLocPenetrationAvoidanceRays_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rays used when ensuring that the camera's safe location remains unobstructed */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rays used when ensuring that the camera's safe location remains unobstructed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeLocationOffset_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset relative to view target to the \"safe\" place for the camera.  This is where penetration ray traces originate. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset relative to view target to the \"safe\" place for the camera.  This is where penetration ray traces originate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeLocationInterpolator_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth updates to the camera's safe location */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth updates to the camera's safe location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValidateSafeLoc_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, does an extra ray trace to make sure the safe loc is actually safe. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, does an extra ray trace to make sure the safe loc is actually safe." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventCameraPenetration_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the camera will perform ray traces to detect potential obstacles and adjust accordingly */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the camera will perform ray traces to detect potential obstacles and adjust accordingly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoPredictiveAvoidance_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationBlendInTime_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blend time when having to bring the camera closer to the safe loc to avoid penetration */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blend time when having to bring the camera closer to the safe loc to avoid penetration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationBlendOutTime_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blend time when bringing the camera away from the safe loc when space is available */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blend time when bringing the camera away from the safe loc when space is available" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSafeLocationLocal_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cache of camera safe location calculated on the previous update */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache of camera safe location calculated on the previous update" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPenetrationBlockedPct_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cache of the percentage of the distance blocked between the camera location and safe location calculated on the previous update */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache of the percentage of the distance blocked between the camera location and safe location calculated on the previous update" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugPivot_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, debug visuals will be rendered for the camera pivot point */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, debug visuals will be rendered for the camera pivot point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLookat_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, debug visuals will be rendered for the camera look at point */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, debug visuals will be rendered for the camera look at point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugSafeLoc_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, debug visuals will be rendered for the camera safe location, where penetration avoidance ray traces originate */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, debug visuals will be rendered for the camera safe location, where penetration avoidance ray traces originate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugPenetrationAvoidance_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, debug visuals will be rendered for the penetration avoidance ray traces */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, debug visuals will be rendered for the penetration avoidance ray traces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotToViewTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotLocInterpolator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotRotInterpolator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotPitchLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotYawLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraToPivot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraToPivotTranslationInterpolator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraToPivot_PitchAdjustmentCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraToPivot_PitchAdjustmentCurveScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraToPivot_SpeedAdjustmentCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraToPivot_SpeedAdjustmentCurveScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraToPivot_SpeedAdjustment_SpeedRange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoFollowMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoFollowMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LazyAutoFollowPitchLimits;
	static void NewProp_bAllowLazyAutoFollowPitchControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLazyAutoFollowPitchControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LazyFollowLaziness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LazyFollowDelayAfterUserControl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookatOffsetLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookatWorldSpaceInterpolator;
	static void NewProp_bUseLookatPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLookatPoint;
	static void NewProp_bDoPredictiveLookat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPredictiveLookat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictiveLookatTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPenetrationAvoidanceRays_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraPenetrationAvoidanceRays;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SafeLocPenetrationAvoidanceRays_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SafeLocPenetrationAvoidanceRays;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SafeLocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SafeLocationInterpolator;
	static void NewProp_bValidateSafeLoc_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateSafeLoc;
	static void NewProp_bPreventCameraPenetration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventCameraPenetration;
	static void NewProp_bDoPredictiveAvoidance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPredictiveAvoidance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationBlendInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationBlendOutTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSafeLocationLocal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastPenetrationBlockedPct;
	static void NewProp_bDrawDebugPivot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugPivot;
	static void NewProp_bDrawDebugLookat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLookat;
	static void NewProp_bDrawDebugSafeLoc_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugSafeLoc;
	static void NewProp_bDrawDebugPenetrationAvoidance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugPenetrationAvoidance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCam_ThirdPerson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PivotToViewTarget = { "PivotToViewTarget", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, PivotToViewTarget), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotToViewTarget_MetaData), NewProp_PivotToViewTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PivotLocInterpolator = { "PivotLocInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, PivotLocInterpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotLocInterpolator_MetaData), NewProp_PivotLocInterpolator_MetaData) }; // 2373571042
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PivotRotInterpolator = { "PivotRotInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, PivotRotInterpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotRotInterpolator_MetaData), NewProp_PivotRotInterpolator_MetaData) }; // 3405218105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PivotPitchLimits = { "PivotPitchLimits", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, PivotPitchLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotPitchLimits_MetaData), NewProp_PivotPitchLimits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PivotYawLimits = { "PivotYawLimits", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, PivotYawLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotYawLimits_MetaData), NewProp_PivotYawLimits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot = { "CameraToPivot", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, CameraToPivot), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraToPivot_MetaData), NewProp_CameraToPivot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivotTranslationInterpolator = { "CameraToPivotTranslationInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, CameraToPivotTranslationInterpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraToPivotTranslationInterpolator_MetaData), NewProp_CameraToPivotTranslationInterpolator_MetaData) }; // 2373571042
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurve = { "CameraToPivot_PitchAdjustmentCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, CameraToPivot_PitchAdjustmentCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraToPivot_PitchAdjustmentCurve_MetaData), NewProp_CameraToPivot_PitchAdjustmentCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurveScale = { "CameraToPivot_PitchAdjustmentCurveScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, CameraToPivot_PitchAdjustmentCurveScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraToPivot_PitchAdjustmentCurveScale_MetaData), NewProp_CameraToPivot_PitchAdjustmentCurveScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurve = { "CameraToPivot_SpeedAdjustmentCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, CameraToPivot_SpeedAdjustmentCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraToPivot_SpeedAdjustmentCurve_MetaData), NewProp_CameraToPivot_SpeedAdjustmentCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurveScale = { "CameraToPivot_SpeedAdjustmentCurveScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, CameraToPivot_SpeedAdjustmentCurveScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraToPivot_SpeedAdjustmentCurveScale_MetaData), NewProp_CameraToPivot_SpeedAdjustmentCurveScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustment_SpeedRange = { "CameraToPivot_SpeedAdjustment_SpeedRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, CameraToPivot_SpeedAdjustment_SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraToPivot_SpeedAdjustment_SpeedRange_MetaData), NewProp_CameraToPivot_SpeedAdjustment_SpeedRange_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_AutoFollowMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_AutoFollowMode = { "AutoFollowMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, AutoFollowMode), Z_Construct_UEnum_CitySample_ECameraAutoFollowMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoFollowMode_MetaData), NewProp_AutoFollowMode_MetaData) }; // 2715688556
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LazyAutoFollowPitchLimits = { "LazyAutoFollowPitchLimits", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, LazyAutoFollowPitchLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LazyAutoFollowPitchLimits_MetaData), NewProp_LazyAutoFollowPitchLimits_MetaData) };
void Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bAllowLazyAutoFollowPitchControl_SetBit(void* Obj)
{
	((UCitySampleCam_ThirdPerson*)Obj)->bAllowLazyAutoFollowPitchControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bAllowLazyAutoFollowPitchControl = { "bAllowLazyAutoFollowPitchControl", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCam_ThirdPerson), &Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bAllowLazyAutoFollowPitchControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowLazyAutoFollowPitchControl_MetaData), NewProp_bAllowLazyAutoFollowPitchControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LazyFollowLaziness = { "LazyFollowLaziness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, LazyFollowLaziness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LazyFollowLaziness_MetaData), NewProp_LazyFollowLaziness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LazyFollowDelayAfterUserControl = { "LazyFollowDelayAfterUserControl", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, LazyFollowDelayAfterUserControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LazyFollowDelayAfterUserControl_MetaData), NewProp_LazyFollowDelayAfterUserControl_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LookatOffsetLocal = { "LookatOffsetLocal", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, LookatOffsetLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookatOffsetLocal_MetaData), NewProp_LookatOffsetLocal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LookatWorldSpaceInterpolator = { "LookatWorldSpaceInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, LookatWorldSpaceInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookatWorldSpaceInterpolator_MetaData), NewProp_LookatWorldSpaceInterpolator_MetaData) }; // 218063719
void Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bUseLookatPoint_SetBit(void* Obj)
{
	((UCitySampleCam_ThirdPerson*)Obj)->bUseLookatPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bUseLookatPoint = { "bUseLookatPoint", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCitySampleCam_ThirdPerson), &Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bUseLookatPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLookatPoint_MetaData), NewProp_bUseLookatPoint_MetaData) };
void Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDoPredictiveLookat_SetBit(void* Obj)
{
	((UCitySampleCam_ThirdPerson*)Obj)->bDoPredictiveLookat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDoPredictiveLookat = { "bDoPredictiveLookat", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCitySampleCam_ThirdPerson), &Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDoPredictiveLookat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoPredictiveLookat_MetaData), NewProp_bDoPredictiveLookat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PredictiveLookatTime = { "PredictiveLookatTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, PredictiveLookatTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictiveLookatTime_MetaData), NewProp_PredictiveLookatTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraPenetrationAvoidanceRays_Inner = { "CameraPenetrationAvoidanceRays", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPenetrationAvoidanceRay, METADATA_PARAMS(0, nullptr) }; // 1082121403
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraPenetrationAvoidanceRays = { "CameraPenetrationAvoidanceRays", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, CameraPenetrationAvoidanceRays), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPenetrationAvoidanceRays_MetaData), NewProp_CameraPenetrationAvoidanceRays_MetaData) }; // 1082121403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_SafeLocPenetrationAvoidanceRays_Inner = { "SafeLocPenetrationAvoidanceRays", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPenetrationAvoidanceRay, METADATA_PARAMS(0, nullptr) }; // 1082121403
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_SafeLocPenetrationAvoidanceRays = { "SafeLocPenetrationAvoidanceRays", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, SafeLocPenetrationAvoidanceRays), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeLocPenetrationAvoidanceRays_MetaData), NewProp_SafeLocPenetrationAvoidanceRays_MetaData) }; // 1082121403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_SafeLocationOffset = { "SafeLocationOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, SafeLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeLocationOffset_MetaData), NewProp_SafeLocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_SafeLocationInterpolator = { "SafeLocationInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, SafeLocationInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeLocationInterpolator_MetaData), NewProp_SafeLocationInterpolator_MetaData) }; // 218063719
void Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bValidateSafeLoc_SetBit(void* Obj)
{
	((UCitySampleCam_ThirdPerson*)Obj)->bValidateSafeLoc = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bValidateSafeLoc = { "bValidateSafeLoc", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCitySampleCam_ThirdPerson), &Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bValidateSafeLoc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValidateSafeLoc_MetaData), NewProp_bValidateSafeLoc_MetaData) };
void Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bPreventCameraPenetration_SetBit(void* Obj)
{
	((UCitySampleCam_ThirdPerson*)Obj)->bPreventCameraPenetration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bPreventCameraPenetration = { "bPreventCameraPenetration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCitySampleCam_ThirdPerson), &Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bPreventCameraPenetration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventCameraPenetration_MetaData), NewProp_bPreventCameraPenetration_MetaData) };
void Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_SetBit(void* Obj)
{
	((UCitySampleCam_ThirdPerson*)Obj)->bDoPredictiveAvoidance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance = { "bDoPredictiveAvoidance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCitySampleCam_ThirdPerson), &Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoPredictiveAvoidance_MetaData), NewProp_bDoPredictiveAvoidance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PenetrationBlendInTime = { "PenetrationBlendInTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, PenetrationBlendInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationBlendInTime_MetaData), NewProp_PenetrationBlendInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime = { "PenetrationBlendOutTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, PenetrationBlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationBlendOutTime_MetaData), NewProp_PenetrationBlendOutTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LastSafeLocationLocal = { "LastSafeLocationLocal", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, LastSafeLocationLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSafeLocationLocal_MetaData), NewProp_LastSafeLocationLocal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LastPenetrationBlockedPct = { "LastPenetrationBlockedPct", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCam_ThirdPerson, LastPenetrationBlockedPct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPenetrationBlockedPct_MetaData), NewProp_LastPenetrationBlockedPct_MetaData) };
void Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugPivot_SetBit(void* Obj)
{
	((UCitySampleCam_ThirdPerson*)Obj)->bDrawDebugPivot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugPivot = { "bDrawDebugPivot", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCam_ThirdPerson), &Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugPivot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugPivot_MetaData), NewProp_bDrawDebugPivot_MetaData) };
void Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugLookat_SetBit(void* Obj)
{
	((UCitySampleCam_ThirdPerson*)Obj)->bDrawDebugLookat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugLookat = { "bDrawDebugLookat", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCam_ThirdPerson), &Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugLookat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugLookat_MetaData), NewProp_bDrawDebugLookat_MetaData) };
void Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugSafeLoc_SetBit(void* Obj)
{
	((UCitySampleCam_ThirdPerson*)Obj)->bDrawDebugSafeLoc = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugSafeLoc = { "bDrawDebugSafeLoc", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCam_ThirdPerson), &Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugSafeLoc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugSafeLoc_MetaData), NewProp_bDrawDebugSafeLoc_MetaData) };
void Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugPenetrationAvoidance_SetBit(void* Obj)
{
	((UCitySampleCam_ThirdPerson*)Obj)->bDrawDebugPenetrationAvoidance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugPenetrationAvoidance = { "bDrawDebugPenetrationAvoidance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCam_ThirdPerson), &Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugPenetrationAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugPenetrationAvoidance_MetaData), NewProp_bDrawDebugPenetrationAvoidance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PivotToViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PivotLocInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PivotRotInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PivotPitchLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PivotYawLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivotTranslationInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurveScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurveScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustment_SpeedRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_AutoFollowMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_AutoFollowMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LazyAutoFollowPitchLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bAllowLazyAutoFollowPitchControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LazyFollowLaziness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LazyFollowDelayAfterUserControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LookatOffsetLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LookatWorldSpaceInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bUseLookatPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDoPredictiveLookat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PredictiveLookatTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraPenetrationAvoidanceRays_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_CameraPenetrationAvoidanceRays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_SafeLocPenetrationAvoidanceRays_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_SafeLocPenetrationAvoidanceRays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_SafeLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_SafeLocationInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bValidateSafeLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bPreventCameraPenetration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PenetrationBlendInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LastSafeLocationLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_LastPenetrationBlockedPct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugPivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugLookat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugSafeLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::NewProp_bDrawDebugPenetrationAvoidance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCitySampleCameraMode,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::ClassParams = {
	&UCitySampleCam_ThirdPerson::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleCam_ThirdPerson()
{
	if (!Z_Registration_Info_UClass_UCitySampleCam_ThirdPerson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCam_ThirdPerson.OuterSingleton, Z_Construct_UClass_UCitySampleCam_ThirdPerson_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleCam_ThirdPerson.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCam_ThirdPerson>()
{
	return UCitySampleCam_ThirdPerson::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCam_ThirdPerson);
UCitySampleCam_ThirdPerson::~UCitySampleCam_ThirdPerson() {}
// End Class UCitySampleCam_ThirdPerson

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraAutoFollowMode_StaticEnum, TEXT("ECameraAutoFollowMode"), &Z_Registration_Info_UEnum_ECameraAutoFollowMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2715688556U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPenetrationAvoidanceRay::StaticStruct, Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewStructOps, TEXT("PenetrationAvoidanceRay"), &Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPenetrationAvoidanceRay), 1082121403U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCam_ThirdPerson, UCitySampleCam_ThirdPerson::StaticClass, TEXT("UCitySampleCam_ThirdPerson"), &Z_Registration_Info_UClass_UCitySampleCam_ThirdPerson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCam_ThirdPerson), 1199431711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_626822829(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCam_ThirdPerson_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
