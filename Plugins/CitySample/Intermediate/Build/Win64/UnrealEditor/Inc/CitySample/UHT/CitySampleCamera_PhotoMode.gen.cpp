// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Camera/CitySampleCamera_PhotoMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCamera_PhotoMode() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCamera_PhotoMode();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCamera_PhotoMode_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCameraMode();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCitySampleCamera_PhotoMode Function GetPhotoModeCustomFocusDistance
struct Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics
{
	struct CitySampleCamera_PhotoMode_eventGetPhotoModeCustomFocusDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UCitySampleCameraMode Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCamera_PhotoMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCamera_PhotoMode_eventGetPhotoModeCustomFocusDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCamera_PhotoMode, nullptr, "GetPhotoModeCustomFocusDistance", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::CitySampleCamera_PhotoMode_eventGetPhotoModeCustomFocusDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::CitySampleCamera_PhotoMode_eventGetPhotoModeCustomFocusDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleCamera_PhotoMode::execGetPhotoModeCustomFocusDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPhotoModeCustomFocusDistance();
	P_NATIVE_END;
}
// End Class UCitySampleCamera_PhotoMode Function GetPhotoModeCustomFocusDistance

// Begin Class UCitySampleCamera_PhotoMode
void UCitySampleCamera_PhotoMode::StaticRegisterNativesUCitySampleCamera_PhotoMode()
{
	UClass* Class = UCitySampleCamera_PhotoMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPhotoModeCustomFocusDistance", &UCitySampleCamera_PhotoMode::execGetPhotoModeCustomFocusDistance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCamera_PhotoMode);
UClass* Z_Construct_UClass_UCitySampleCamera_PhotoMode_NoRegister()
{
	return UCitySampleCamera_PhotoMode::StaticClass();
}
struct Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Camera mode that works in tandem with the PhotoModeComponent to apply user controlled adjustments to the cine cam component used for Photo Mode\n */" },
#endif
		{ "IncludePath", "Camera/CitySampleCamera_PhotoMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Camera/CitySampleCamera_PhotoMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mode that works in tandem with the PhotoModeComponent to apply user controlled adjustments to the cine cam component used for Photo Mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhotoModeAutoFocusTraceDistance_MetaData[] = {
		{ "Category", "CitySampleCamera_PhotoMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance used for auto focus traces and also a default max value for the focus distance*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCamera_PhotoMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance used for auto focus traces and also a default max value for the focus distance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereTraceRadius_MetaData[] = {
		{ "Category", "CitySampleCamera_PhotoMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius for sphere used in auto focus trace. This gives a bit of leeway when trying to focus on an object in the world*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/CitySampleCamera_PhotoMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius for sphere used in auto focus trace. This gives a bit of leeway when trying to focus on an object in the world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhotoModeAutoFocusTraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereTraceRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance, "GetPhotoModeCustomFocusDistance" }, // 1636964534
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCamera_PhotoMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_PhotoModeAutoFocusTraceDistance = { "PhotoModeAutoFocusTraceDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCamera_PhotoMode, PhotoModeAutoFocusTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhotoModeAutoFocusTraceDistance_MetaData), NewProp_PhotoModeAutoFocusTraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_SphereTraceRadius = { "SphereTraceRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCamera_PhotoMode, SphereTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereTraceRadius_MetaData), NewProp_SphereTraceRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_PhotoModeAutoFocusTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_SphereTraceRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCitySampleCameraMode,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::ClassParams = {
	&UCitySampleCamera_PhotoMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleCamera_PhotoMode()
{
	if (!Z_Registration_Info_UClass_UCitySampleCamera_PhotoMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCamera_PhotoMode.OuterSingleton, Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleCamera_PhotoMode.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCamera_PhotoMode>()
{
	return UCitySampleCamera_PhotoMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCamera_PhotoMode);
UCitySampleCamera_PhotoMode::~UCitySampleCamera_PhotoMode() {}
// End Class UCitySampleCamera_PhotoMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCamera_PhotoMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCamera_PhotoMode, UCitySampleCamera_PhotoMode::StaticClass, TEXT("UCitySampleCamera_PhotoMode"), &Z_Registration_Info_UClass_UCitySampleCamera_PhotoMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCamera_PhotoMode), 1320344422U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCamera_PhotoMode_h_669193198(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCamera_PhotoMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Camera_CitySampleCamera_PhotoMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
