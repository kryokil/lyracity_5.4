// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSettings_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSubsystem();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSubsystem_NoRegister();
// End Cross Module References

// Begin Class UMassTrafficSubsystem Function ClearAllTrafficLanes
struct Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear all traffic lanes of their vehicle data. Must be called after deleting all vehicle agents */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all traffic lanes of their vehicle data. Must be called after deleting all vehicle agents" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficSubsystem, nullptr, "ClearAllTrafficLanes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficSubsystem::execClearAllTrafficLanes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllTrafficLanes();
	P_NATIVE_END;
}
// End Class UMassTrafficSubsystem Function ClearAllTrafficLanes

// Begin Class UMassTrafficSubsystem Function GetNumParkedVehicleAgents
struct Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics
{
	struct MassTrafficSubsystem_eventGetNumParkedVehicleAgents_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the number of parked vehicle agents currently present in the world */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of parked vehicle agents currently present in the world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficSubsystem_eventGetNumParkedVehicleAgents_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficSubsystem, nullptr, "GetNumParkedVehicleAgents", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::MassTrafficSubsystem_eventGetNumParkedVehicleAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::MassTrafficSubsystem_eventGetNumParkedVehicleAgents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficSubsystem::execGetNumParkedVehicleAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumParkedVehicleAgents();
	P_NATIVE_END;
}
// End Class UMassTrafficSubsystem Function GetNumParkedVehicleAgents

// Begin Class UMassTrafficSubsystem Function GetNumTrafficVehicleAgents
struct Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics
{
	struct MassTrafficSubsystem_eventGetNumTrafficVehicleAgents_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the number of traffic vehicle agents currently present in the world */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of traffic vehicle agents currently present in the world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficSubsystem_eventGetNumTrafficVehicleAgents_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficSubsystem, nullptr, "GetNumTrafficVehicleAgents", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::MassTrafficSubsystem_eventGetNumTrafficVehicleAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::MassTrafficSubsystem_eventGetNumTrafficVehicleAgents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficSubsystem::execGetNumTrafficVehicleAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumTrafficVehicleAgents();
	P_NATIVE_END;
}
// End Class UMassTrafficSubsystem Function GetNumTrafficVehicleAgents

// Begin Class UMassTrafficSubsystem Function HasParkedVehicleAgents
struct Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics
{
	struct MassTrafficSubsystem_eventHasParkedVehicleAgents_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if there are any parked vehicle agents currently present in the world, false otherwise */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there are any parked vehicle agents currently present in the world, false otherwise" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MassTrafficSubsystem_eventHasParkedVehicleAgents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficSubsystem_eventHasParkedVehicleAgents_Parms), &Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficSubsystem, nullptr, "HasParkedVehicleAgents", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::MassTrafficSubsystem_eventHasParkedVehicleAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::MassTrafficSubsystem_eventHasParkedVehicleAgents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficSubsystem::execHasParkedVehicleAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasParkedVehicleAgents();
	P_NATIVE_END;
}
// End Class UMassTrafficSubsystem Function HasParkedVehicleAgents

// Begin Class UMassTrafficSubsystem Function HasTrafficVehicleAgents
struct Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics
{
	struct MassTrafficSubsystem_eventHasTrafficVehicleAgents_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if there are any traffic vehicle agents currently present in the world, false otherwise */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there are any traffic vehicle agents currently present in the world, false otherwise" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MassTrafficSubsystem_eventHasTrafficVehicleAgents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficSubsystem_eventHasTrafficVehicleAgents_Parms), &Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficSubsystem, nullptr, "HasTrafficVehicleAgents", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::MassTrafficSubsystem_eventHasTrafficVehicleAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::MassTrafficSubsystem_eventHasTrafficVehicleAgents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficSubsystem::execHasTrafficVehicleAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTrafficVehicleAgents();
	P_NATIVE_END;
}
// End Class UMassTrafficSubsystem Function HasTrafficVehicleAgents

// Begin Class UMassTrafficSubsystem
void UMassTrafficSubsystem::StaticRegisterNativesUMassTrafficSubsystem()
{
	UClass* Class = UMassTrafficSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAllTrafficLanes", &UMassTrafficSubsystem::execClearAllTrafficLanes },
		{ "GetNumParkedVehicleAgents", &UMassTrafficSubsystem::execGetNumParkedVehicleAgents },
		{ "GetNumTrafficVehicleAgents", &UMassTrafficSubsystem::execGetNumTrafficVehicleAgents },
		{ "HasParkedVehicleAgents", &UMassTrafficSubsystem::execHasParkedVehicleAgents },
		{ "HasTrafficVehicleAgents", &UMassTrafficSubsystem::execHasTrafficVehicleAgents },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficSubsystem);
UClass* Z_Construct_UClass_UMassTrafficSubsystem_NoRegister()
{
	return UMassTrafficSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Subsystem that tracks mass traffic entities driving on the zone graph.\n * \n * Manages traffic specific runtime data for traffic navigable zone graph lanes. \n */" },
#endif
		{ "IncludePath", "MassTrafficSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subsystem that tracks mass traffic entities driving on the zone graph.\n\nManages traffic specific runtime data for traffic navigable zone graph lanes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassTrafficSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveVehiclesOverlappingPlayersProcessor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MassTrafficSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fields_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fields;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoneGraphSubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemoveVehiclesOverlappingPlayersProcessor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes, "ClearAllTrafficLanes" }, // 4242519988
		{ &Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents, "GetNumParkedVehicleAgents" }, // 1308731552
		{ &Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents, "GetNumTrafficVehicleAgents" }, // 467003723
		{ &Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents, "HasParkedVehicleAgents" }, // 797214827
		{ &Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents, "HasTrafficVehicleAgents" }, // 3934735677
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_MassTrafficSettings = { "MassTrafficSettings", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSubsystem, MassTrafficSettings), Z_Construct_UClass_UMassTrafficSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassTrafficSettings_MetaData), NewProp_MassTrafficSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0124088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSubsystem, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fields_MetaData), NewProp_Fields_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_ZoneGraphSubsystem = { "ZoneGraphSubsystem", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSubsystem, ZoneGraphSubsystem), Z_Construct_UClass_UZoneGraphSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneGraphSubsystem_MetaData), NewProp_ZoneGraphSubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_RemoveVehiclesOverlappingPlayersProcessor = { "RemoveVehiclesOverlappingPlayersProcessor", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSubsystem, RemoveVehiclesOverlappingPlayersProcessor), Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveVehiclesOverlappingPlayersProcessor_MetaData), NewProp_RemoveVehiclesOverlappingPlayersProcessor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_MassTrafficSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_Fields_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_Fields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_ZoneGraphSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_RemoveVehiclesOverlappingPlayersProcessor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::ClassParams = {
	&UMassTrafficSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMassTrafficSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficSubsystem()
{
	if (!Z_Registration_Info_UClass_UMassTrafficSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficSubsystem.OuterSingleton, Z_Construct_UClass_UMassTrafficSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficSubsystem.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficSubsystem>()
{
	return UMassTrafficSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficSubsystem);
UMassTrafficSubsystem::~UMassTrafficSubsystem() {}
// End Class UMassTrafficSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficSubsystem, UMassTrafficSubsystem::StaticClass, TEXT("UMassTrafficSubsystem"), &Z_Registration_Info_UClass_UMassTrafficSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficSubsystem), 293008518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_572186775(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
