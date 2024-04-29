// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Character/CitySampleCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCharacterMovementComponent() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCharacterMovementComponent();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCitySampleCharacterMovementComponent Function WasSlideAlongSurfaceBlockedRecently
struct Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics
{
	struct CitySampleCharacterMovementComponent_eventWasSlideAlongSurfaceBlockedRecently_Parms
	{
		float Tolerance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Tolerance", "0.010000" },
		{ "ModuleRelativePath", "Public/Character/CitySampleCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCharacterMovementComponent_eventWasSlideAlongSurfaceBlockedRecently_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleCharacterMovementComponent_eventWasSlideAlongSurfaceBlockedRecently_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleCharacterMovementComponent_eventWasSlideAlongSurfaceBlockedRecently_Parms), &Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCharacterMovementComponent, nullptr, "WasSlideAlongSurfaceBlockedRecently", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::CitySampleCharacterMovementComponent_eventWasSlideAlongSurfaceBlockedRecently_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::CitySampleCharacterMovementComponent_eventWasSlideAlongSurfaceBlockedRecently_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleCharacterMovementComponent::execWasSlideAlongSurfaceBlockedRecently)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasSlideAlongSurfaceBlockedRecently(Z_Param_Tolerance);
	P_NATIVE_END;
}
// End Class UCitySampleCharacterMovementComponent Function WasSlideAlongSurfaceBlockedRecently

// Begin Class UCitySampleCharacterMovementComponent
void UCitySampleCharacterMovementComponent::StaticRegisterNativesUCitySampleCharacterMovementComponent()
{
	UClass* Class = UCitySampleCharacterMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WasSlideAlongSurfaceBlockedRecently", &UCitySampleCharacterMovementComponent::execWasSlideAlongSurfaceBlockedRecently },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCharacterMovementComponent);
UClass* Z_Construct_UClass_UCitySampleCharacterMovementComponent_NoRegister()
{
	return UCitySampleCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/CitySampleCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Character/CitySampleCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinInputAccelerationSize_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ConstraintInputAcceleration will interpolate the input size to go from this value to 1.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/CitySampleCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ConstraintInputAcceleration will interpolate the input size to go from this value to 1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHorizontalSurfaceSlideAngle_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum angle for movement to slide against. This prevents sliding against very sharp angles that will result in very small movements. Only active if greater than 0.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/CitySampleCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum angle for movement to slide against. This prevents sliding against very sharp angles that will result in very small movements. Only active if greater than 0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHorizontalSurfaceSlideAngleCharacter_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum angle for movement to slide against when colliding against a character\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/CitySampleCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum angle for movement to slide against when colliding against a character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastSurfaceWasCharacter_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/Character/CitySampleCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAnimAuthoritativeRotation_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/Character/CitySampleCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMassEntityRotation_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/Character/CitySampleCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinInputAccelerationSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHorizontalSurfaceSlideAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHorizontalSurfaceSlideAngleCharacter;
	static void NewProp_bLastSurfaceWasCharacter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastSurfaceWasCharacter;
	static void NewProp_bUseAnimAuthoritativeRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAnimAuthoritativeRotation;
	static void NewProp_bUseMassEntityRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMassEntityRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently, "WasSlideAlongSurfaceBlockedRecently" }, // 710460158
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinInputAccelerationSize = { "MinInputAccelerationSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCharacterMovementComponent, MinInputAccelerationSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinInputAccelerationSize_MetaData), NewProp_MinInputAccelerationSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngle = { "MinHorizontalSurfaceSlideAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCharacterMovementComponent, MinHorizontalSurfaceSlideAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHorizontalSurfaceSlideAngle_MetaData), NewProp_MinHorizontalSurfaceSlideAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngleCharacter = { "MinHorizontalSurfaceSlideAngleCharacter", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCharacterMovementComponent, MinHorizontalSurfaceSlideAngleCharacter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHorizontalSurfaceSlideAngleCharacter_MetaData), NewProp_MinHorizontalSurfaceSlideAngleCharacter_MetaData) };
void Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bLastSurfaceWasCharacter_SetBit(void* Obj)
{
	((UCitySampleCharacterMovementComponent*)Obj)->bLastSurfaceWasCharacter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bLastSurfaceWasCharacter = { "bLastSurfaceWasCharacter", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCharacterMovementComponent), &Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bLastSurfaceWasCharacter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastSurfaceWasCharacter_MetaData), NewProp_bLastSurfaceWasCharacter_MetaData) };
void Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseAnimAuthoritativeRotation_SetBit(void* Obj)
{
	((UCitySampleCharacterMovementComponent*)Obj)->bUseAnimAuthoritativeRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseAnimAuthoritativeRotation = { "bUseAnimAuthoritativeRotation", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCharacterMovementComponent), &Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseAnimAuthoritativeRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAnimAuthoritativeRotation_MetaData), NewProp_bUseAnimAuthoritativeRotation_MetaData) };
void Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseMassEntityRotation_SetBit(void* Obj)
{
	((UCitySampleCharacterMovementComponent*)Obj)->bUseMassEntityRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseMassEntityRotation = { "bUseMassEntityRotation", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCharacterMovementComponent), &Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseMassEntityRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMassEntityRotation_MetaData), NewProp_bUseMassEntityRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinInputAccelerationSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngleCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bLastSurfaceWasCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseAnimAuthoritativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseMassEntityRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::ClassParams = {
	&UCitySampleCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UCitySampleCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleCharacterMovementComponent.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCharacterMovementComponent>()
{
	return UCitySampleCharacterMovementComponent::StaticClass();
}
UCitySampleCharacterMovementComponent::UCitySampleCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCharacterMovementComponent);
UCitySampleCharacterMovementComponent::~UCitySampleCharacterMovementComponent() {}
// End Class UCitySampleCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacterMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCharacterMovementComponent, UCitySampleCharacterMovementComponent::StaticClass, TEXT("UCitySampleCharacterMovementComponent"), &Z_Registration_Info_UClass_UCitySampleCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCharacterMovementComponent), 1035305861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacterMovementComponent_h_4139071028(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
