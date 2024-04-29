// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehicleVisualizationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleVisualizationProcessor() {}

// Begin Cross Module References
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin ScriptStruct FMassTrafficVehicleInstanceCustomData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehicleInstanceCustomData;
class UScriptStruct* FMassTrafficVehicleInstanceCustomData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleInstanceCustomData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehicleInstanceCustomData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleInstanceCustomData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleInstanceCustomData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehicleInstanceCustomData>()
{
	return FMassTrafficVehicleInstanceCustomData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* Vehicle visualization parameters to be passed to vehicle ISMCs as PerInstanceCustomData and PrimitiveComponent's\n* via UPrimitiveComponent::SetCustomPrimitiveDataFloat. Note, these raw values aren't passed directly - they're passed\n* as packed data via FMassTrafficPackedVehicleInstanceCustomData\n* \n* @see FMassTrafficPackedVehicleInstanceCustomData\n*/" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Vehicle visualization parameters to be passed to vehicle ISMCs as PerInstanceCustomData and PrimitiveComponent's\n* via UPrimitiveComponent::SetCustomPrimitiveDataFloat. Note, these raw values aren't passed directly - they're passed\n* as packed data via FMassTrafficPackedVehicleInstanceCustomData\n*\n* @see FMassTrafficPackedVehicleInstanceCustomData" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomFraction_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrontLeftRunningLights_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Packed as FFloat16 into PackedParam1[0 : 15]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Packed as FFloat16 into PackedParam1[0 : 15]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrontRightRunningLights_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PackedParam1[16 + 0]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PackedParam1[16 + 0]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRearLeftRunningLights_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PackedParam1[16 + 1]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PackedParam1[16 + 1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRearRightRunningLights_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PackedParam1[16 + 2]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PackedParam1[16 + 2]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftBrakeLights_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PackedParam1[16 + 3]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PackedParam1[16 + 3]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRightBrakeLights_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PackedParam1[16 + 4]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PackedParam1[16 + 4]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftTurnSignalLights_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PackedParam1[16 + 5]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PackedParam1[16 + 5]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRightTurnSignalLights_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PackedParam1[16 + 6]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PackedParam1[16 + 6]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftHeadlight_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PackedParam1[16 + 7]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PackedParam1[16 + 7]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRightHeadlight_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PackedParam1[16 + 8]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PackedParam1[16 + 8]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReversingLights_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PackedParam1[16 + 9]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PackedParam1[16 + 9]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAccessoryLights_MetaData[] = {
		{ "Category", "MassTrafficVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PackedParam1[16 + 10]\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PackedParam1[16 + 10]" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomFraction;
	static void NewProp_bFrontLeftRunningLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrontLeftRunningLights;
	static void NewProp_bFrontRightRunningLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrontRightRunningLights;
	static void NewProp_bRearLeftRunningLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRearLeftRunningLights;
	static void NewProp_bRearRightRunningLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRearRightRunningLights;
	static void NewProp_bLeftBrakeLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftBrakeLights;
	static void NewProp_bRightBrakeLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightBrakeLights;
	static void NewProp_bLeftTurnSignalLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftTurnSignalLights;
	static void NewProp_bRightTurnSignalLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightTurnSignalLights;
	static void NewProp_bLeftHeadlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftHeadlight;
	static void NewProp_bRightHeadlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightHeadlight;
	static void NewProp_bReversingLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversingLights;
	static void NewProp_bAccessoryLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccessoryLights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleInstanceCustomData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_RandomFraction = { "RandomFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleInstanceCustomData, RandomFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomFraction_MetaData), NewProp_RandomFraction_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bFrontLeftRunningLights_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bFrontLeftRunningLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bFrontLeftRunningLights = { "bFrontLeftRunningLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bFrontLeftRunningLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrontLeftRunningLights_MetaData), NewProp_bFrontLeftRunningLights_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bFrontRightRunningLights_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bFrontRightRunningLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bFrontRightRunningLights = { "bFrontRightRunningLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bFrontRightRunningLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrontRightRunningLights_MetaData), NewProp_bFrontRightRunningLights_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRearLeftRunningLights_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bRearLeftRunningLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRearLeftRunningLights = { "bRearLeftRunningLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRearLeftRunningLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRearLeftRunningLights_MetaData), NewProp_bRearLeftRunningLights_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRearRightRunningLights_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bRearRightRunningLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRearRightRunningLights = { "bRearRightRunningLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRearRightRunningLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRearRightRunningLights_MetaData), NewProp_bRearRightRunningLights_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftBrakeLights_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bLeftBrakeLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftBrakeLights = { "bLeftBrakeLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftBrakeLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftBrakeLights_MetaData), NewProp_bLeftBrakeLights_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightBrakeLights_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bRightBrakeLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightBrakeLights = { "bRightBrakeLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightBrakeLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRightBrakeLights_MetaData), NewProp_bRightBrakeLights_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftTurnSignalLights_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bLeftTurnSignalLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftTurnSignalLights = { "bLeftTurnSignalLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftTurnSignalLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftTurnSignalLights_MetaData), NewProp_bLeftTurnSignalLights_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightTurnSignalLights_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bRightTurnSignalLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightTurnSignalLights = { "bRightTurnSignalLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightTurnSignalLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRightTurnSignalLights_MetaData), NewProp_bRightTurnSignalLights_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftHeadlight_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bLeftHeadlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftHeadlight = { "bLeftHeadlight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftHeadlight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftHeadlight_MetaData), NewProp_bLeftHeadlight_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightHeadlight_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bRightHeadlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightHeadlight = { "bRightHeadlight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightHeadlight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRightHeadlight_MetaData), NewProp_bRightHeadlight_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bReversingLights_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bReversingLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bReversingLights = { "bReversingLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bReversingLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReversingLights_MetaData), NewProp_bReversingLights_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bAccessoryLights_SetBit(void* Obj)
{
	((FMassTrafficVehicleInstanceCustomData*)Obj)->bAccessoryLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bAccessoryLights = { "bAccessoryLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleInstanceCustomData), &Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bAccessoryLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAccessoryLights_MetaData), NewProp_bAccessoryLights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_RandomFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bFrontLeftRunningLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bFrontRightRunningLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRearLeftRunningLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRearRightRunningLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftBrakeLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightBrakeLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftTurnSignalLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightTurnSignalLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bLeftHeadlight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bRightHeadlight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bReversingLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewProp_bAccessoryLights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficVehicleInstanceCustomData",
	Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::PropPointers),
	sizeof(FMassTrafficVehicleInstanceCustomData),
	alignof(FMassTrafficVehicleInstanceCustomData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleInstanceCustomData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehicleInstanceCustomData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleInstanceCustomData.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehicleInstanceCustomData

// Begin ScriptStruct FMassTrafficPackedVehicleInstanceCustomData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficPackedVehicleInstanceCustomData;
class UScriptStruct* FMassTrafficPackedVehicleInstanceCustomData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPackedVehicleInstanceCustomData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficPackedVehicleInstanceCustomData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPackedVehicleInstanceCustomData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPackedVehicleInstanceCustomData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficPackedVehicleInstanceCustomData>()
{
	return FMassTrafficPackedVehicleInstanceCustomData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FMassTrafficVehicleInstanceCustomData packed into a single 32 bit float to be passed as ISMC PerInstanceCustomData\n * which is currently limited to a single float for Nanite ISMCs. We also pass this to PrimitiveComponent's via \n * UPrimitiveComponent::SetCustomPrimitiveDataFloat\n *\n * @see FMassTrafficVehicleInstanceCustomData\n */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMassTrafficVehicleInstanceCustomData packed into a single 32 bit float to be passed as ISMC PerInstanceCustomData\nwhich is currently limited to a single float for Nanite ISMCs. We also pass this to PrimitiveComponent's via\nUPrimitiveComponent::SetCustomPrimitiveDataFloat\n\n@see FMassTrafficVehicleInstanceCustomData" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackedParam1_MetaData[] = {
		{ "Category", "MassTrafficPackedVehicleInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Bit packed param with EMassTrafficVehicleVisualizationFlags and RandomFraction packed into the least significant\n\x09 * bits\n\x09 * e.g: [ 0000000000000000 | VisualizationFlags | RandomFraction ]\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bit packed param with EMassTrafficVehicleVisualizationFlags and RandomFraction packed into the least significant\nbits\ne.g: [ 0000000000000000 | VisualizationFlags | RandomFraction ]" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PackedParam1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPackedVehicleInstanceCustomData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics::NewProp_PackedParam1 = { "PackedParam1", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPackedVehicleInstanceCustomData, PackedParam1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackedParam1_MetaData), NewProp_PackedParam1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics::NewProp_PackedParam1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficPackedVehicleInstanceCustomData",
	Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics::PropPointers),
	sizeof(FMassTrafficPackedVehicleInstanceCustomData),
	alignof(FMassTrafficPackedVehicleInstanceCustomData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPackedVehicleInstanceCustomData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficPackedVehicleInstanceCustomData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPackedVehicleInstanceCustomData.InnerSingleton;
}
// End ScriptStruct FMassTrafficPackedVehicleInstanceCustomData

// Begin Class UMassTrafficVehicleVisualizationProcessor
void UMassTrafficVehicleVisualizationProcessor::StaticRegisterNativesUMassTrafficVehicleVisualizationProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleVisualizationProcessor);
UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor_NoRegister()
{
	return UMassTrafficVehicleVisualizationProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden visualization processor to make it tied to the TrafficVehicle via the requirements\n */" },
#endif
		{ "IncludePath", "MassTrafficVehicleVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden visualization processor to make it tied to the TrafficVehicle via the requirements" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleVisualizationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor_Statics::ClassParams = {
	&UMassTrafficVehicleVisualizationProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleVisualizationProcessor>()
{
	return UMassTrafficVehicleVisualizationProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleVisualizationProcessor);
UMassTrafficVehicleVisualizationProcessor::~UMassTrafficVehicleVisualizationProcessor() {}
// End Class UMassTrafficVehicleVisualizationProcessor

// Begin Class UMassTrafficVehicleUpdateCustomVisualizationProcessor
void UMassTrafficVehicleUpdateCustomVisualizationProcessor::StaticRegisterNativesUMassTrafficVehicleUpdateCustomVisualizationProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleUpdateCustomVisualizationProcessor);
UClass* Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor_NoRegister()
{
	return UMassTrafficVehicleUpdateCustomVisualizationProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Custom visualization updates for TrafficVehicle\n */" },
#endif
		{ "IncludePath", "MassTrafficVehicleVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom visualization updates for TrafficVehicle" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleUpdateCustomVisualizationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor_Statics::ClassParams = {
	&UMassTrafficVehicleUpdateCustomVisualizationProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleUpdateCustomVisualizationProcessor>()
{
	return UMassTrafficVehicleUpdateCustomVisualizationProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleUpdateCustomVisualizationProcessor);
UMassTrafficVehicleUpdateCustomVisualizationProcessor::~UMassTrafficVehicleUpdateCustomVisualizationProcessor() {}
// End Class UMassTrafficVehicleUpdateCustomVisualizationProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationProcessor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficVehicleInstanceCustomData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleInstanceCustomData_Statics::NewStructOps, TEXT("MassTrafficVehicleInstanceCustomData"), &Z_Registration_Info_UScriptStruct_MassTrafficVehicleInstanceCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleInstanceCustomData), 2867777869U) },
		{ FMassTrafficPackedVehicleInstanceCustomData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPackedVehicleInstanceCustomData_Statics::NewStructOps, TEXT("MassTrafficPackedVehicleInstanceCustomData"), &Z_Registration_Info_UScriptStruct_MassTrafficPackedVehicleInstanceCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPackedVehicleInstanceCustomData), 3927789238U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleVisualizationProcessor, UMassTrafficVehicleVisualizationProcessor::StaticClass, TEXT("UMassTrafficVehicleVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleVisualizationProcessor), 4206676179U) },
		{ Z_Construct_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor, UMassTrafficVehicleUpdateCustomVisualizationProcessor::StaticClass, TEXT("UMassTrafficVehicleUpdateCustomVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficVehicleUpdateCustomVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleUpdateCustomVisualizationProcessor), 1311638202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationProcessor_h_3991929171(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationProcessor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationProcessor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS