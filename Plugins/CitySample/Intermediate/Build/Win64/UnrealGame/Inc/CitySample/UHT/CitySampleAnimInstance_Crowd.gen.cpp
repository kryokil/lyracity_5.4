// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimInstance_Crowd.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimInstance_Crowd() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCrowdCharacter_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimSet_Locomotion_NoRegister();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleLocomotionState();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdAnimInstance();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
MASSNAVIGATION_API UEnum* Z_Construct_UEnum_MassNavigation_EMassMovementAction();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Enum ECitySampleLocomotionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleLocomotionState;
static UEnum* ECitySampleLocomotionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECitySampleLocomotionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECitySampleLocomotionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleLocomotionState, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleLocomotionState"));
	}
	return Z_Registration_Info_UEnum_ECitySampleLocomotionState.OuterSingleton;
}
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleLocomotionState>()
{
	return ECitySampleLocomotionState_StaticEnum();
}
struct Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Animating.Name", "ECitySampleLocomotionState::Animating" },
		{ "BlueprintType", "true" },
		{ "Idle.Name", "ECitySampleLocomotionState::Idle" },
		{ "Jog.Name", "ECitySampleLocomotionState::Jog" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
		{ "Walk.Name", "ECitySampleLocomotionState::Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECitySampleLocomotionState::Idle", (int64)ECitySampleLocomotionState::Idle },
		{ "ECitySampleLocomotionState::Walk", (int64)ECitySampleLocomotionState::Walk },
		{ "ECitySampleLocomotionState::Jog", (int64)ECitySampleLocomotionState::Jog },
		{ "ECitySampleLocomotionState::Animating", (int64)ECitySampleLocomotionState::Animating },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	"ECitySampleLocomotionState",
	"ECitySampleLocomotionState",
	Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CitySample_ECitySampleLocomotionState()
{
	if (!Z_Registration_Info_UEnum_ECitySampleLocomotionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleLocomotionState.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECitySampleLocomotionState.InnerSingleton;
}
// End Enum ECitySampleLocomotionState

// Begin Class UCitySampleAnimInstance_Crowd Function CalculateCycleDirection
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics
{
	struct CitySampleAnimInstance_Crowd_eventCalculateCycleDirection_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventCalculateCycleDirection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "CalculateCycleDirection", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::CitySampleAnimInstance_Crowd_eventCalculateCycleDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::CitySampleAnimInstance_Crowd_eventCalculateCycleDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execCalculateCycleDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateCycleDirection();
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function CalculateCycleDirection

// Begin Class UCitySampleAnimInstance_Crowd Function CalculatePlayRate
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics
{
	struct CitySampleAnimInstance_Crowd_eventCalculatePlayRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventCalculatePlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "CalculatePlayRate", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::CitySampleAnimInstance_Crowd_eventCalculatePlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::CitySampleAnimInstance_Crowd_eventCalculatePlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execCalculatePlayRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculatePlayRate();
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function CalculatePlayRate

// Begin Class UCitySampleAnimInstance_Crowd Function CalculateStride
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics
{
	struct CitySampleAnimInstance_Crowd_eventCalculateStride_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventCalculateStride_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "CalculateStride", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::CitySampleAnimInstance_Crowd_eventCalculateStride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::CitySampleAnimInstance_Crowd_eventCalculateStride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execCalculateStride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateStride();
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function CalculateStride

// Begin Class UCitySampleAnimInstance_Crowd Function Get_BasePose_FTN
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics
{
	struct CitySampleAnimInstance_Crowd_eventGet_BasePose_FTN_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_FTN_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_FTN", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_FTN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->Get_BasePose_FTN();
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function Get_BasePose_FTN

// Begin Class UCitySampleAnimInstance_Crowd Function Get_BasePose_FTO
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics
{
	struct CitySampleAnimInstance_Crowd_eventGet_BasePose_FTO_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_FTO_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_FTO", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTO_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_FTO)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->Get_BasePose_FTO();
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function Get_BasePose_FTO

// Begin Class UCitySampleAnimInstance_Crowd Function Get_BasePose_FTU
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics
{
	struct CitySampleAnimInstance_Crowd_eventGet_BasePose_FTU_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_FTU_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_FTU", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTU_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTU_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_FTU)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->Get_BasePose_FTU();
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function Get_BasePose_FTU

// Begin Class UCitySampleAnimInstance_Crowd Function Get_BasePose_MTN
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics
{
	struct CitySampleAnimInstance_Crowd_eventGet_BasePose_MTN_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_MTN_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_MTN", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_MTN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->Get_BasePose_MTN();
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function Get_BasePose_MTN

// Begin Class UCitySampleAnimInstance_Crowd Function Get_BasePose_MTO
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics
{
	struct CitySampleAnimInstance_Crowd_eventGet_BasePose_MTO_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_MTO_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_MTO", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTO_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_MTO)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->Get_BasePose_MTO();
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function Get_BasePose_MTO

// Begin Class UCitySampleAnimInstance_Crowd Function Get_BasePose_MTU
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics
{
	struct CitySampleAnimInstance_Crowd_eventGet_BasePose_MTU_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_MTU_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_MTU", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTU_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTU_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_MTU)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->Get_BasePose_MTU();
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function Get_BasePose_MTU

// Begin Class UCitySampleAnimInstance_Crowd Function GetGait
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics
{
	struct CitySampleAnimInstance_Crowd_eventGetGait_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGetGait_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "GetGait", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::CitySampleAnimInstance_Crowd_eventGetGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::CitySampleAnimInstance_Crowd_eventGetGait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGetGait)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGait();
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function GetGait

// Begin Class UCitySampleAnimInstance_Crowd Function GetMassMoveState
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics
{
	struct CitySampleAnimInstance_Crowd_eventGetMassMoveState_Parms
	{
		EMassMovementAction OutCurrentMovementAction;
		EMassMovementAction OutPreviousMovementAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutCurrentMovementAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutCurrentMovementAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutPreviousMovementAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPreviousMovementAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutCurrentMovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutCurrentMovementAction = { "OutCurrentMovementAction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGetMassMoveState_Parms, OutCurrentMovementAction), Z_Construct_UEnum_MassNavigation_EMassMovementAction, METADATA_PARAMS(0, nullptr) }; // 2000737615
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutPreviousMovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutPreviousMovementAction = { "OutPreviousMovementAction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGetMassMoveState_Parms, OutPreviousMovementAction), Z_Construct_UEnum_MassNavigation_EMassMovementAction, METADATA_PARAMS(0, nullptr) }; // 2000737615
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutCurrentMovementAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutCurrentMovementAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutPreviousMovementAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutPreviousMovementAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "GetMassMoveState", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::CitySampleAnimInstance_Crowd_eventGetMassMoveState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::CitySampleAnimInstance_Crowd_eventGetMassMoveState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGetMassMoveState)
{
	P_GET_ENUM_REF(EMassMovementAction,Z_Param_Out_OutCurrentMovementAction);
	P_GET_ENUM_REF(EMassMovementAction,Z_Param_Out_OutPreviousMovementAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMassMoveState((EMassMovementAction&)(Z_Param_Out_OutCurrentMovementAction),(EMassMovementAction&)(Z_Param_Out_OutPreviousMovementAction));
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function GetMassMoveState

// Begin Class UCitySampleAnimInstance_Crowd Function LinkAccessoryLayer
struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "LinkAccessoryLayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execLinkAccessoryLayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LinkAccessoryLayer();
	P_NATIVE_END;
}
// End Class UCitySampleAnimInstance_Crowd Function LinkAccessoryLayer

// Begin Class UCitySampleAnimInstance_Crowd
void UCitySampleAnimInstance_Crowd::StaticRegisterNativesUCitySampleAnimInstance_Crowd()
{
	UClass* Class = UCitySampleAnimInstance_Crowd::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateCycleDirection", &UCitySampleAnimInstance_Crowd::execCalculateCycleDirection },
		{ "CalculatePlayRate", &UCitySampleAnimInstance_Crowd::execCalculatePlayRate },
		{ "CalculateStride", &UCitySampleAnimInstance_Crowd::execCalculateStride },
		{ "Get_BasePose_FTN", &UCitySampleAnimInstance_Crowd::execGet_BasePose_FTN },
		{ "Get_BasePose_FTO", &UCitySampleAnimInstance_Crowd::execGet_BasePose_FTO },
		{ "Get_BasePose_FTU", &UCitySampleAnimInstance_Crowd::execGet_BasePose_FTU },
		{ "Get_BasePose_MTN", &UCitySampleAnimInstance_Crowd::execGet_BasePose_MTN },
		{ "Get_BasePose_MTO", &UCitySampleAnimInstance_Crowd::execGet_BasePose_MTO },
		{ "Get_BasePose_MTU", &UCitySampleAnimInstance_Crowd::execGet_BasePose_MTU },
		{ "GetGait", &UCitySampleAnimInstance_Crowd::execGetGait },
		{ "GetMassMoveState", &UCitySampleAnimInstance_Crowd::execGetMassMoveState },
		{ "LinkAccessoryLayer", &UCitySampleAnimInstance_Crowd::execLinkAccessoryLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimInstance_Crowd);
UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_NoRegister()
{
	return UCitySampleAnimInstance_Crowd::StaticClass();
}
struct Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Anim/CitySampleAnimInstance_Crowd.h" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRotation_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtRotation_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomAimPitchVariation_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionState_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeInLocomotionState_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleDirection_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stride_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseMTN_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseFTN_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseFTU_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseFTO_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseMTO_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseMTU_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetLocomotion_MetaData[] = {
		{ "Category", "Anim Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeedThreshold_MetaData[] = {
		{ "Category", "Anim Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeInLocomotionStateThreshold_MetaData[] = {
		{ "Category", "Anim Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomAimPitchVariation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocomotionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocomotionState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInLocomotionState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CycleDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gait;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseMTN;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseFTN;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseFTU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseFTO;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseMTO;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseMTU;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSetLocomotion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInLocomotionStateThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection, "CalculateCycleDirection" }, // 739006728
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate, "CalculatePlayRate" }, // 268477426
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride, "CalculateStride" }, // 396469589
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN, "Get_BasePose_FTN" }, // 4076693582
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO, "Get_BasePose_FTO" }, // 1070537691
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU, "Get_BasePose_FTU" }, // 1867012122
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN, "Get_BasePose_MTN" }, // 523372632
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO, "Get_BasePose_MTO" }, // 2856823038
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU, "Get_BasePose_MTU" }, // 1278919470
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait, "GetGait" }, // 1905615633
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState, "GetMassMoveState" }, // 540275964
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer, "LinkAccessoryLayer" }, // 1357924395
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimInstance_Crowd>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x012408000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, Character), Z_Construct_UClass_ACitySampleCrowdCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x012408000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CharacterRotation = { "CharacterRotation", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, CharacterRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRotation_MetaData), NewProp_CharacterRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LookAtRotation = { "LookAtRotation", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, LookAtRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtRotation_MetaData), NewProp_LookAtRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_RandomAimPitchVariation = { "RandomAimPitchVariation", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, RandomAimPitchVariation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomAimPitchVariation_MetaData), NewProp_RandomAimPitchVariation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LocomotionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LocomotionState = { "LocomotionState", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, LocomotionState), Z_Construct_UEnum_CitySample_ECitySampleLocomotionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionState_MetaData), NewProp_LocomotionState_MetaData) }; // 3993608825
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionState = { "TimeInLocomotionState", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, TimeInLocomotionState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeInLocomotionState_MetaData), NewProp_TimeInLocomotionState_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CycleDirection = { "CycleDirection", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, CycleDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleDirection_MetaData), NewProp_CycleDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Stride = { "Stride", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, Stride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stride_MetaData), NewProp_Stride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, Gait), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gait_MetaData), NewProp_Gait_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTN = { "BasePoseMTN", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseMTN), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoseMTN_MetaData), NewProp_BasePoseMTN_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTN = { "BasePoseFTN", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseFTN), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoseFTN_MetaData), NewProp_BasePoseFTN_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTU = { "BasePoseFTU", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseFTU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoseFTU_MetaData), NewProp_BasePoseFTU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTO = { "BasePoseFTO", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseFTO), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoseFTO_MetaData), NewProp_BasePoseFTO_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTO = { "BasePoseMTO", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseMTO), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoseMTO_MetaData), NewProp_BasePoseMTO_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTU = { "BasePoseMTU", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseMTU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoseMTU_MetaData), NewProp_BasePoseMTU_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_AnimSetLocomotion = { "AnimSetLocomotion", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, AnimSetLocomotion), Z_Construct_UClass_UCitySampleAnimSet_Locomotion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSetLocomotion_MetaData), NewProp_AnimSetLocomotion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_WalkSpeedThreshold = { "WalkSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, WalkSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeedThreshold_MetaData), NewProp_WalkSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionStateThreshold = { "TimeInLocomotionStateThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, TimeInLocomotionStateThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeInLocomotionStateThreshold_MetaData), NewProp_TimeInLocomotionStateThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CharacterRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LookAtRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_RandomAimPitchVariation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LocomotionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LocomotionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CycleDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Stride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Gait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_AnimSetLocomotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_WalkSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionStateThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassCrowdAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::ClassParams = {
	&UCitySampleAnimInstance_Crowd::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd()
{
	if (!Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd.OuterSingleton, Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAnimInstance_Crowd>()
{
	return UCitySampleAnimInstance_Crowd::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimInstance_Crowd);
UCitySampleAnimInstance_Crowd::~UCitySampleAnimInstance_Crowd() {}
// End Class UCitySampleAnimInstance_Crowd

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECitySampleLocomotionState_StaticEnum, TEXT("ECitySampleLocomotionState"), &Z_Registration_Info_UEnum_ECitySampleLocomotionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3993608825U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimInstance_Crowd, UCitySampleAnimInstance_Crowd::StaticClass, TEXT("UCitySampleAnimInstance_Crowd"), &Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimInstance_Crowd), 3759940396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_3037865312(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
