// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoverDrone/Public/HoverDronePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDronePawn() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDronePawn();
HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDronePawn_NoRegister();
HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDronePawnBase();
UPackage* Z_Construct_UPackage__Script_HoverDrone();
// End Cross Module References

// Begin Class AHoverDronePawn Function GetAltitude
struct Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics
{
	struct HoverDronePawn_eventGetAltitude_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns drone's current height above the ground. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns drone's current height above the ground." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverDronePawn_eventGetAltitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "GetAltitude", nullptr, nullptr, Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::HoverDronePawn_eventGetAltitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::HoverDronePawn_eventGetAltitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHoverDronePawn_GetAltitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHoverDronePawn::execGetAltitude)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAltitude();
	P_NATIVE_END;
}
// End Class AHoverDronePawn Function GetAltitude

// Begin Class AHoverDronePawn Function GetDroneSpeedIndex
struct Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics
{
	struct HoverDronePawn_eventGetDroneSpeedIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverDronePawn_eventGetDroneSpeedIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "GetDroneSpeedIndex", nullptr, nullptr, Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::HoverDronePawn_eventGetDroneSpeedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::HoverDronePawn_eventGetDroneSpeedIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHoverDronePawn::execGetDroneSpeedIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDroneSpeedIndex();
	P_NATIVE_END;
}
// End Class AHoverDronePawn Function GetDroneSpeedIndex

// Begin Class AHoverDronePawn Function IsMaintainingConstantAltitude
struct Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics
{
	struct HoverDronePawn_eventIsMaintainingConstantAltitude_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this drone has auto-altitude on. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this drone has auto-altitude on." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoverDronePawn_eventIsMaintainingConstantAltitude_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoverDronePawn_eventIsMaintainingConstantAltitude_Parms), &Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "IsMaintainingConstantAltitude", nullptr, nullptr, Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::HoverDronePawn_eventIsMaintainingConstantAltitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::HoverDronePawn_eventIsMaintainingConstantAltitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHoverDronePawn::execIsMaintainingConstantAltitude)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMaintainingConstantAltitude();
	P_NATIVE_END;
}
// End Class AHoverDronePawn Function IsMaintainingConstantAltitude

// Begin Class AHoverDronePawn Function SetAllowSpeedChange
struct Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics
{
	struct HoverDronePawn_eventSetAllowSpeedChange_Parms
	{
		bool bOnOff;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns drone's current height above the ground. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns drone's current height above the ground." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bOnOff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnOff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::NewProp_bOnOff_SetBit(void* Obj)
{
	((HoverDronePawn_eventSetAllowSpeedChange_Parms*)Obj)->bOnOff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::NewProp_bOnOff = { "bOnOff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoverDronePawn_eventSetAllowSpeedChange_Parms), &Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::NewProp_bOnOff_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::NewProp_bOnOff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "SetAllowSpeedChange", nullptr, nullptr, Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::HoverDronePawn_eventSetAllowSpeedChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::HoverDronePawn_eventSetAllowSpeedChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHoverDronePawn::execSetAllowSpeedChange)
{
	P_GET_UBOOL(Z_Param_bOnOff);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllowSpeedChange(Z_Param_bOnOff);
	P_NATIVE_END;
}
// End Class AHoverDronePawn Function SetAllowSpeedChange

// Begin Class AHoverDronePawn
void AHoverDronePawn::StaticRegisterNativesAHoverDronePawn()
{
	UClass* Class = AHoverDronePawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAltitude", &AHoverDronePawn::execGetAltitude },
		{ "GetDroneSpeedIndex", &AHoverDronePawn::execGetDroneSpeedIndex },
		{ "IsMaintainingConstantAltitude", &AHoverDronePawn::execIsMaintainingConstantAltitude },
		{ "SetAllowSpeedChange", &AHoverDronePawn::execSetAllowSpeedChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoverDronePawn);
UClass* Z_Construct_UClass_AHoverDronePawn_NoRegister()
{
	return AHoverDronePawn::StaticClass();
}
struct Z_Construct_UClass_AHoverDronePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HoverDronePawn.h" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSpeedChange_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, speed can be changed by calls to IncreaseHoverDroneSpeed and DecreaseHoverDroneSpeed. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, speed can be changed by calls to IncreaseHoverDroneSpeed and DecreaseHoverDroneSpeed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeAltitudeAction_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeSpeedAction_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingPriority_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowSpeedChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSpeedChange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangeAltitudeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangeSpeedAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputMappingPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHoverDronePawn_GetAltitude, "GetAltitude" }, // 627053346
		{ &Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex, "GetDroneSpeedIndex" }, // 2008109933
		{ &Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude, "IsMaintainingConstantAltitude" }, // 981320741
		{ &Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange, "SetAllowSpeedChange" }, // 2194391622
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoverDronePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAllowSpeedChange_SetBit(void* Obj)
{
	((AHoverDronePawn*)Obj)->bAllowSpeedChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAllowSpeedChange = { "bAllowSpeedChange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHoverDronePawn), &Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAllowSpeedChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSpeedChange_MetaData), NewProp_bAllowSpeedChange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeAltitudeAction = { "ChangeAltitudeAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, ChangeAltitudeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeAltitudeAction_MetaData), NewProp_ChangeAltitudeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeSpeedAction = { "ChangeSpeedAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, ChangeSpeedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeSpeedAction_MetaData), NewProp_ChangeSpeedAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingPriority = { "InputMappingPriority", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, InputMappingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingPriority_MetaData), NewProp_InputMappingPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoverDronePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAllowSpeedChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeAltitudeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeSpeedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHoverDronePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHoverDronePawnBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoverDrone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoverDronePawn_Statics::ClassParams = {
	&AHoverDronePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHoverDronePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoverDronePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHoverDronePawn()
{
	if (!Z_Registration_Info_UClass_AHoverDronePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoverDronePawn.OuterSingleton, Z_Construct_UClass_AHoverDronePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHoverDronePawn.OuterSingleton;
}
template<> HOVERDRONE_API UClass* StaticClass<AHoverDronePawn>()
{
	return AHoverDronePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHoverDronePawn);
AHoverDronePawn::~AHoverDronePawn() {}
// End Class AHoverDronePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHoverDronePawn, AHoverDronePawn::StaticClass, TEXT("AHoverDronePawn"), &Z_Registration_Info_UClass_AHoverDronePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoverDronePawn), 3562133334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_2471636000(TEXT("/Script/HoverDrone"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
