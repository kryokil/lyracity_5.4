// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Camera/CitySamplePlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySamplePlayerCameraManager() {}

// Begin Cross Module References
CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayerCameraManager();
CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayerCameraManager_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCameraMode_NoRegister();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_EDebugCameraStyle();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveCitySampleCamera();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleCameraModeInstance();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Enum EDebugCameraStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDebugCameraStyle;
static UEnum* EDebugCameraStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDebugCameraStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDebugCameraStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_EDebugCameraStyle, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("EDebugCameraStyle"));
	}
	return Z_Registration_Info_UEnum_EDebugCameraStyle.OuterSingleton;
}
template<> CITYSAMPLE_API UEnum* StaticEnum<EDebugCameraStyle>()
{
	return EDebugCameraStyle_StaticEnum();
}
struct Z_Construct_UEnum_CitySample_EDebugCameraStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enumerated equivalents of default camera modes for ease of use\n */" },
#endif
		{ "FirstPerson.Name", "EDebugCameraStyle::FirstPerson" },
		{ "Fixed.Name", "EDebugCameraStyle::Fixed" },
		{ "FreeCam.Name", "EDebugCameraStyle::FreeCam" },
		{ "FreeCam_Default.Name", "EDebugCameraStyle::FreeCam_Default" },
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
		{ "None.Name", "EDebugCameraStyle::None" },
		{ "ThirdPerson.Name", "EDebugCameraStyle::ThirdPerson" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerated equivalents of default camera modes for ease of use" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDebugCameraStyle::None", (int64)EDebugCameraStyle::None },
		{ "EDebugCameraStyle::Fixed", (int64)EDebugCameraStyle::Fixed },
		{ "EDebugCameraStyle::ThirdPerson", (int64)EDebugCameraStyle::ThirdPerson },
		{ "EDebugCameraStyle::FreeCam", (int64)EDebugCameraStyle::FreeCam },
		{ "EDebugCameraStyle::FreeCam_Default", (int64)EDebugCameraStyle::FreeCam_Default },
		{ "EDebugCameraStyle::FirstPerson", (int64)EDebugCameraStyle::FirstPerson },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_EDebugCameraStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	"EDebugCameraStyle",
	"EDebugCameraStyle",
	Z_Construct_UEnum_CitySample_EDebugCameraStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_EDebugCameraStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_EDebugCameraStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_EDebugCameraStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CitySample_EDebugCameraStyle()
{
	if (!Z_Registration_Info_UEnum_EDebugCameraStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDebugCameraStyle.InnerSingleton, Z_Construct_UEnum_CitySample_EDebugCameraStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDebugCameraStyle.InnerSingleton;
}
// End Enum EDebugCameraStyle

// Begin ScriptStruct FActiveCitySampleCamera
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveCitySampleCamera;
class UScriptStruct* FActiveCitySampleCamera::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveCitySampleCamera.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveCitySampleCamera.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveCitySampleCamera, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ActiveCitySampleCamera"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveCitySampleCamera.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FActiveCitySampleCamera>()
{
	return FActiveCitySampleCamera::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Representations of active cameras that the manager is currently blending between\n */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Representations of active cameras that the manager is currently blending between" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to camera instance */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to camera instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to current view target */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to current view target" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveCitySampleCamera>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveCitySampleCamera, Camera), Z_Construct_UClass_UCitySampleCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveCitySampleCamera, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewTarget_MetaData), NewProp_ViewTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::NewProp_ViewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"ActiveCitySampleCamera",
	Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::PropPointers),
	sizeof(FActiveCitySampleCamera),
	alignof(FActiveCitySampleCamera),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveCitySampleCamera()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveCitySampleCamera.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveCitySampleCamera.InnerSingleton, Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveCitySampleCamera.InnerSingleton;
}
// End ScriptStruct FActiveCitySampleCamera

// Begin ScriptStruct FCitySampleCameraModeInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleCameraModeInstance;
class UScriptStruct* FCitySampleCameraModeInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleCameraModeInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleCameraModeInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleCameraModeInstance, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleCameraModeInstance"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleCameraModeInstance.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleCameraModeInstance>()
{
	return FCitySampleCameraModeInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Instances of camera modes that can be used/reused to support active cameras */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instances of camera modes that can be used/reused to support active cameras" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera mode class associated with the instance */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mode class associated with the instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** View target that the instance is focusing */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "View target that the instance is focusing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMode_MetaData[] = {
		{ "Category", "CitySampleCameraModeInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera mode object associated with the instance */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mode object associated with the instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CineCameraComponent_MetaData[] = {
		{ "Category", "CitySampleCameraModeInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cine cam component associated with the instance */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cine cam component associated with the instance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraModeClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CineCameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleCameraModeInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::NewProp_CameraModeClass = { "CameraModeClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCameraModeInstance, CameraModeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCitySampleCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeClass_MetaData), NewProp_CameraModeClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCameraModeInstance, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewTarget_MetaData), NewProp_ViewTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCameraModeInstance, CameraMode), Z_Construct_UClass_UCitySampleCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMode_MetaData), NewProp_CameraMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::NewProp_CineCameraComponent = { "CineCameraComponent", nullptr, (EPropertyFlags)0x001000000008081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCameraModeInstance, CineCameraComponent), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CineCameraComponent_MetaData), NewProp_CineCameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::NewProp_CameraModeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::NewProp_ViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::NewProp_CameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::NewProp_CineCameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CitySampleCameraModeInstance",
	Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::PropPointers),
	sizeof(FCitySampleCameraModeInstance),
	alignof(FCitySampleCameraModeInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCitySampleCameraModeInstance()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleCameraModeInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleCameraModeInstance.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CitySampleCameraModeInstance.InnerSingleton;
}
// End ScriptStruct FCitySampleCameraModeInstance

// Begin Class ACitySamplePlayerCameraManager Function ClearAlternateCamera
struct Z_Construct_UFunction_ACitySamplePlayerCameraManager_ClearAlternateCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears any alternate camera settings stored*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears any alternate camera settings stored" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_ClearAlternateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerCameraManager, nullptr, "ClearAlternateCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_ClearAlternateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerCameraManager_ClearAlternateCamera_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACitySamplePlayerCameraManager_ClearAlternateCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerCameraManager_ClearAlternateCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACitySamplePlayerCameraManager::execClearAlternateCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAlternateCamera();
	P_NATIVE_END;
}
// End Class ACitySamplePlayerCameraManager Function ClearAlternateCamera

// Begin Class ACitySamplePlayerCameraManager Function ConfigureAlternateCamera
struct Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics
{
	struct CitySamplePlayerCameraManager_eventConfigureAlternateCamera_Parms
	{
		TSubclassOf<UCitySampleCameraMode> NewAltCameraMode;
		AActor* NewAltViewTarget;
		float NewAltCameraTransitionTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets camera mode, potential view target, and transition time when alternate camera mode is enabled */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets camera mode, potential view target, and transition time when alternate camera mode is enabled" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewAltCameraMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAltViewTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAltCameraTransitionTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltCameraMode = { "NewAltCameraMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerCameraManager_eventConfigureAlternateCamera_Parms, NewAltCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UCitySampleCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltViewTarget = { "NewAltViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerCameraManager_eventConfigureAlternateCamera_Parms, NewAltViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltCameraTransitionTime = { "NewAltCameraTransitionTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerCameraManager_eventConfigureAlternateCamera_Parms, NewAltCameraTransitionTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltCameraTransitionTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerCameraManager, nullptr, "ConfigureAlternateCamera", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::CitySamplePlayerCameraManager_eventConfigureAlternateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::CitySamplePlayerCameraManager_eventConfigureAlternateCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACitySamplePlayerCameraManager::execConfigureAlternateCamera)
{
	P_GET_OBJECT(UClass,Z_Param_NewAltCameraMode);
	P_GET_OBJECT(AActor,Z_Param_NewAltViewTarget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewAltCameraTransitionTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureAlternateCamera(Z_Param_NewAltCameraMode,Z_Param_NewAltViewTarget,Z_Param_NewAltCameraTransitionTime);
	P_NATIVE_END;
}
// End Class ACitySamplePlayerCameraManager Function ConfigureAlternateCamera

// Begin Class ACitySamplePlayerCameraManager Function GetCameraClassForCharacter
struct CitySamplePlayerCameraManager_eventGetCameraClassForCharacter_Parms
{
	const AActor* InViewTarget;
	TSubclassOf<UCitySampleCameraMode> ReturnValue;

	/** Constructor, initializes return property only **/
	CitySamplePlayerCameraManager_eventGetCameraClassForCharacter_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_ACitySamplePlayerCameraManager_GetCameraClassForCharacter = FName(TEXT("GetCameraClassForCharacter"));
TSubclassOf<UCitySampleCameraMode> ACitySamplePlayerCameraManager::GetCameraClassForCharacter(const AActor* InViewTarget) const
{
	CitySamplePlayerCameraManager_eventGetCameraClassForCharacter_Parms Parms;
	Parms.InViewTarget=InViewTarget;
	const_cast<ACitySamplePlayerCameraManager*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACitySamplePlayerCameraManager_GetCameraClassForCharacter),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns camera mode that is deemed appropriate for the current view target */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns camera mode that is deemed appropriate for the current view target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InViewTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InViewTarget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::NewProp_InViewTarget = { "InViewTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerCameraManager_eventGetCameraClassForCharacter_Parms, InViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InViewTarget_MetaData), NewProp_InViewTarget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerCameraManager_eventGetCameraClassForCharacter_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UCitySampleCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::NewProp_InViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerCameraManager, nullptr, "GetCameraClassForCharacter", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::PropPointers), sizeof(CitySamplePlayerCameraManager_eventGetCameraClassForCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySamplePlayerCameraManager_eventGetCameraClassForCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACitySamplePlayerCameraManager::execGetCameraClassForCharacter)
{
	P_GET_OBJECT(AActor,Z_Param_InViewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UCitySampleCameraMode>*)Z_Param__Result=P_THIS->GetCameraClassForCharacter_Implementation(Z_Param_InViewTarget);
	P_NATIVE_END;
}
// End Class ACitySamplePlayerCameraManager Function GetCameraClassForCharacter

// Begin Class ACitySamplePlayerCameraManager Function GetCurrentCameraMode
struct Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics
{
	struct CitySamplePlayerCameraManager_eventGetCurrentCameraMode_Parms
	{
		UCitySampleCameraMode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the camera mode that is currently in use by the Camera Manager */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the camera mode that is currently in use by the Camera Manager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerCameraManager_eventGetCurrentCameraMode_Parms, ReturnValue), Z_Construct_UClass_UCitySampleCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerCameraManager, nullptr, "GetCurrentCameraMode", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::CitySamplePlayerCameraManager_eventGetCurrentCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::CitySamplePlayerCameraManager_eventGetCurrentCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACitySamplePlayerCameraManager::execGetCurrentCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCitySampleCameraMode**)Z_Param__Result=P_THIS->GetCurrentCameraMode();
	P_NATIVE_END;
}
// End Class ACitySamplePlayerCameraManager Function GetCurrentCameraMode

// Begin Class ACitySamplePlayerCameraManager Function IsUsingAlternateCamera
struct Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics
{
	struct CitySamplePlayerCameraManager_eventIsUsingAlternateCamera_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySamplePlayerCameraManager_eventIsUsingAlternateCamera_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePlayerCameraManager_eventIsUsingAlternateCamera_Parms), &Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerCameraManager, nullptr, "IsUsingAlternateCamera", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::CitySamplePlayerCameraManager_eventIsUsingAlternateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::CitySamplePlayerCameraManager_eventIsUsingAlternateCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACitySamplePlayerCameraManager::execIsUsingAlternateCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingAlternateCamera();
	P_NATIVE_END;
}
// End Class ACitySamplePlayerCameraManager Function IsUsingAlternateCamera

// Begin Class ACitySamplePlayerCameraManager Function ResetViewPitchLimits
struct Z_Construct_UFunction_ACitySamplePlayerCameraManager_ResetViewPitchLimits_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets view pitch limits to values that were originally set in class defaults */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets view pitch limits to values that were originally set in class defaults" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_ResetViewPitchLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerCameraManager, nullptr, "ResetViewPitchLimits", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_ResetViewPitchLimits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerCameraManager_ResetViewPitchLimits_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACitySamplePlayerCameraManager_ResetViewPitchLimits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerCameraManager_ResetViewPitchLimits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACitySamplePlayerCameraManager::execResetViewPitchLimits)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetViewPitchLimits();
	P_NATIVE_END;
}
// End Class ACitySamplePlayerCameraManager Function ResetViewPitchLimits

// Begin Class ACitySamplePlayerCameraManager Function SetDebugCameraStyle
struct Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics
{
	struct CitySamplePlayerCameraManager_eventSetDebugCameraStyle_Parms
	{
		EDebugCameraStyle NewDebugCameraStyle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies a premade camera style for debugging purposes */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a premade camera style for debugging purposes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewDebugCameraStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDebugCameraStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::NewProp_NewDebugCameraStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::NewProp_NewDebugCameraStyle = { "NewDebugCameraStyle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerCameraManager_eventSetDebugCameraStyle_Parms, NewDebugCameraStyle), Z_Construct_UEnum_CitySample_EDebugCameraStyle, METADATA_PARAMS(0, nullptr) }; // 3656510390
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::NewProp_NewDebugCameraStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::NewProp_NewDebugCameraStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerCameraManager, nullptr, "SetDebugCameraStyle", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::CitySamplePlayerCameraManager_eventSetDebugCameraStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::CitySamplePlayerCameraManager_eventSetDebugCameraStyle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACitySamplePlayerCameraManager::execSetDebugCameraStyle)
{
	P_GET_ENUM(EDebugCameraStyle,Z_Param_NewDebugCameraStyle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDebugCameraStyle(EDebugCameraStyle(Z_Param_NewDebugCameraStyle));
	P_NATIVE_END;
}
// End Class ACitySamplePlayerCameraManager Function SetDebugCameraStyle

// Begin Class ACitySamplePlayerCameraManager Function SetUsingAlternateCamera
struct Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics
{
	struct CitySamplePlayerCameraManager_eventSetUsingAlternateCamera_Parms
	{
		bool bNewUsingAltCamera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to use the current alternate camera settings or not */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use the current alternate camera settings or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNewUsingAltCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewUsingAltCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::NewProp_bNewUsingAltCamera_SetBit(void* Obj)
{
	((CitySamplePlayerCameraManager_eventSetUsingAlternateCamera_Parms*)Obj)->bNewUsingAltCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::NewProp_bNewUsingAltCamera = { "bNewUsingAltCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePlayerCameraManager_eventSetUsingAlternateCamera_Parms), &Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::NewProp_bNewUsingAltCamera_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::NewProp_bNewUsingAltCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerCameraManager, nullptr, "SetUsingAlternateCamera", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::CitySamplePlayerCameraManager_eventSetUsingAlternateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::CitySamplePlayerCameraManager_eventSetUsingAlternateCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACitySamplePlayerCameraManager::execSetUsingAlternateCamera)
{
	P_GET_UBOOL(Z_Param_bNewUsingAltCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUsingAlternateCamera(Z_Param_bNewUsingAltCamera);
	P_NATIVE_END;
}
// End Class ACitySamplePlayerCameraManager Function SetUsingAlternateCamera

// Begin Class ACitySamplePlayerCameraManager Function SetViewPitchLimits
struct Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics
{
	struct CitySamplePlayerCameraManager_eventSetViewPitchLimits_Parms
	{
		float MinPitch;
		float MaxPitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets view pitch limits to the values passed in */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets view pitch limits to the values passed in" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerCameraManager_eventSetViewPitchLimits_Parms, MinPitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerCameraManager_eventSetViewPitchLimits_Parms, MaxPitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::NewProp_MinPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::NewProp_MaxPitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerCameraManager, nullptr, "SetViewPitchLimits", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::CitySamplePlayerCameraManager_eventSetViewPitchLimits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::CitySamplePlayerCameraManager_eventSetViewPitchLimits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACitySamplePlayerCameraManager::execSetViewPitchLimits)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinPitch);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxPitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewPitchLimits(Z_Param_MinPitch,Z_Param_MaxPitch);
	P_NATIVE_END;
}
// End Class ACitySamplePlayerCameraManager Function SetViewPitchLimits

// Begin Class ACitySamplePlayerCameraManager
void ACitySamplePlayerCameraManager::StaticRegisterNativesACitySamplePlayerCameraManager()
{
	UClass* Class = ACitySamplePlayerCameraManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAlternateCamera", &ACitySamplePlayerCameraManager::execClearAlternateCamera },
		{ "ConfigureAlternateCamera", &ACitySamplePlayerCameraManager::execConfigureAlternateCamera },
		{ "GetCameraClassForCharacter", &ACitySamplePlayerCameraManager::execGetCameraClassForCharacter },
		{ "GetCurrentCameraMode", &ACitySamplePlayerCameraManager::execGetCurrentCameraMode },
		{ "IsUsingAlternateCamera", &ACitySamplePlayerCameraManager::execIsUsingAlternateCamera },
		{ "ResetViewPitchLimits", &ACitySamplePlayerCameraManager::execResetViewPitchLimits },
		{ "SetDebugCameraStyle", &ACitySamplePlayerCameraManager::execSetDebugCameraStyle },
		{ "SetUsingAlternateCamera", &ACitySamplePlayerCameraManager::execSetUsingAlternateCamera },
		{ "SetViewPitchLimits", &ACitySamplePlayerCameraManager::execSetViewPitchLimits },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySamplePlayerCameraManager);
UClass* Z_Construct_UClass_ACitySamplePlayerCameraManager_NoRegister()
{
	return ACitySamplePlayerCameraManager::StaticClass();
}
struct Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Representations of active cameras that the manager is currently blending between\n */" },
#endif
		{ "IncludePath", "Camera/CitySamplePlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Representations of active cameras that the manager is currently blending between" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePelvisRelativeZ_MetaData[] = {
		{ "Category", "CitySamplePlayerCameraManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pelvis Z height, in component space. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pelvis Z height, in component space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBoneName_MetaData[] = {
		{ "Category", "CitySamplePlayerCameraManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pelvis bone name for characters acting as camera view targets */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pelvis bone name for characters acting as camera view targets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltViewTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** View target to focus when using alt camera mode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "View target to focus when using alt camera mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedMainViewTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** View target to return to when leaving the alt camera mode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "View target to return to when leaving the alt camera mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBlendStack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stack of active camera the manager will attempt to blend between */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stack of active camera the manager will attempt to blend between" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeInstances_MetaData[] = {
		{ "Category", "CitySamplePlayerCameraManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of available camera mode instances */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySamplePlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of available camera mode instances" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePelvisRelativeZ;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PelvisBoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AltViewTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SavedMainViewTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraBlendStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraBlendStack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACitySamplePlayerCameraManager_ClearAlternateCamera, "ClearAlternateCamera" }, // 217312553
		{ &Z_Construct_UFunction_ACitySamplePlayerCameraManager_ConfigureAlternateCamera, "ConfigureAlternateCamera" }, // 1281240383
		{ &Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCameraClassForCharacter, "GetCameraClassForCharacter" }, // 1491668151
		{ &Z_Construct_UFunction_ACitySamplePlayerCameraManager_GetCurrentCameraMode, "GetCurrentCameraMode" }, // 2042482454
		{ &Z_Construct_UFunction_ACitySamplePlayerCameraManager_IsUsingAlternateCamera, "IsUsingAlternateCamera" }, // 2547867296
		{ &Z_Construct_UFunction_ACitySamplePlayerCameraManager_ResetViewPitchLimits, "ResetViewPitchLimits" }, // 1894131338
		{ &Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetDebugCameraStyle, "SetDebugCameraStyle" }, // 1387870632
		{ &Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetUsingAlternateCamera, "SetUsingAlternateCamera" }, // 550165030
		{ &Z_Construct_UFunction_ACitySamplePlayerCameraManager_SetViewPitchLimits, "SetViewPitchLimits" }, // 1624131016
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySamplePlayerCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_BasePelvisRelativeZ = { "BasePelvisRelativeZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerCameraManager, BasePelvisRelativeZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePelvisRelativeZ_MetaData), NewProp_BasePelvisRelativeZ_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_PelvisBoneName = { "PelvisBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerCameraManager, PelvisBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisBoneName_MetaData), NewProp_PelvisBoneName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_AltViewTarget = { "AltViewTarget", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerCameraManager, AltViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltViewTarget_MetaData), NewProp_AltViewTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_SavedMainViewTarget = { "SavedMainViewTarget", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerCameraManager, SavedMainViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedMainViewTarget_MetaData), NewProp_SavedMainViewTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_CameraBlendStack_Inner = { "CameraBlendStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveCitySampleCamera, METADATA_PARAMS(0, nullptr) }; // 324666857
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_CameraBlendStack = { "CameraBlendStack", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerCameraManager, CameraBlendStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBlendStack_MetaData), NewProp_CameraBlendStack_MetaData) }; // 324666857
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_CameraModeInstances_Inner = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCitySampleCameraModeInstance, METADATA_PARAMS(0, nullptr) }; // 1213730505
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_CameraModeInstances = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0020088000002815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerCameraManager, CameraModeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeInstances_MetaData), NewProp_CameraModeInstances_MetaData) }; // 1213730505
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_BasePelvisRelativeZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_PelvisBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_AltViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_SavedMainViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_CameraBlendStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_CameraBlendStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_CameraModeInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::NewProp_CameraModeInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::ClassParams = {
	&ACitySamplePlayerCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACitySamplePlayerCameraManager()
{
	if (!Z_Registration_Info_UClass_ACitySamplePlayerCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySamplePlayerCameraManager.OuterSingleton, Z_Construct_UClass_ACitySamplePlayerCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACitySamplePlayerCameraManager.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<ACitySamplePlayerCameraManager>()
{
	return ACitySamplePlayerCameraManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySamplePlayerCameraManager);
ACitySamplePlayerCameraManager::~ACitySamplePlayerCameraManager() {}
// End Class ACitySamplePlayerCameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDebugCameraStyle_StaticEnum, TEXT("EDebugCameraStyle"), &Z_Registration_Info_UEnum_EDebugCameraStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3656510390U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActiveCitySampleCamera::StaticStruct, Z_Construct_UScriptStruct_FActiveCitySampleCamera_Statics::NewStructOps, TEXT("ActiveCitySampleCamera"), &Z_Registration_Info_UScriptStruct_ActiveCitySampleCamera, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveCitySampleCamera), 324666857U) },
		{ FCitySampleCameraModeInstance::StaticStruct, Z_Construct_UScriptStruct_FCitySampleCameraModeInstance_Statics::NewStructOps, TEXT("CitySampleCameraModeInstance"), &Z_Registration_Info_UScriptStruct_CitySampleCameraModeInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleCameraModeInstance), 1213730505U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACitySamplePlayerCameraManager, ACitySamplePlayerCameraManager::StaticClass, TEXT("ACitySamplePlayerCameraManager"), &Z_Registration_Info_UClass_ACitySamplePlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySamplePlayerCameraManager), 1715088838U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_213157019(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySamplePlayerCameraManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
