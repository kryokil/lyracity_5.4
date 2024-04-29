// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficLights.h"
#include "MassRepresentation/Public/MassRepresentationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficLights() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc();
MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDescHandle();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightsParameters();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightTypeData();
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin ScriptStruct FMassTrafficLightTypeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData;
class UScriptStruct* FMassTrafficLightTypeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightTypeData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightTypeData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLightTypeData>()
{
	return FMassTrafficLightTypeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MassTrafficLightTypeData" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshInstanceDesc_MetaData[] = {
		{ "Category", "MassTrafficLightTypeData" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLanes_MetaData[] = {
		{ "Category", "MassTrafficLightTypeData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This light is suitable for roads with this many lanes. 0 = Any */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This light is suitable for roads with this many lanes. 0 = Any" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshInstanceDesc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLanes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightTypeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightTypeData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_StaticMeshInstanceDesc = { "StaticMeshInstanceDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightTypeData, StaticMeshInstanceDesc), Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshInstanceDesc_MetaData), NewProp_StaticMeshInstanceDesc_MetaData) }; // 513434978
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_NumLanes = { "NumLanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightTypeData, NumLanes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLanes_MetaData), NewProp_NumLanes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_StaticMeshInstanceDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_NumLanes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLightTypeData",
	Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers),
	sizeof(FMassTrafficLightTypeData),
	alignof(FMassTrafficLightTypeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightTypeData()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.InnerSingleton;
}
// End ScriptStruct FMassTrafficLightTypeData

// Begin Class UMassTrafficLightTypesDataAsset
void UMassTrafficLightTypesDataAsset::StaticRegisterNativesUMassTrafficLightTypesDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficLightTypesDataAsset);
UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister()
{
	return UMassTrafficLightTypesDataAsset::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficLights.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypes_MetaData[] = {
		{ "Category", "MassTrafficLightTypesDataAsset" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
		{ "TitleProperty", "Name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLightTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficLightTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLightTypesDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes_Inner = { "TrafficLightTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficLightTypeData, METADATA_PARAMS(0, nullptr) }; // 3673089206
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes = { "TrafficLightTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightTypesDataAsset, TrafficLightTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypes_MetaData), NewProp_TrafficLightTypes_MetaData) }; // 3673089206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::ClassParams = {
	&UMassTrafficLightTypesDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset()
{
	if (!Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.OuterSingleton, Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficLightTypesDataAsset>()
{
	return UMassTrafficLightTypesDataAsset::StaticClass();
}
UMassTrafficLightTypesDataAsset::UMassTrafficLightTypesDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficLightTypesDataAsset);
UMassTrafficLightTypesDataAsset::~UMassTrafficLightTypesDataAsset() {}
// End Class UMassTrafficLightTypesDataAsset

// Begin ScriptStruct FMassTrafficLightInstanceDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc;
class UScriptStruct* FMassTrafficLightInstanceDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightInstanceDesc"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLightInstanceDesc>()
{
	return FMassTrafficLightInstanceDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledIntersectionSideMidpoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlledIntersectionSideMidpoint;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_TrafficLightTypeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightInstanceDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ZRotation = { "ZRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, ZRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZRotation_MetaData), NewProp_ZRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ControlledIntersectionSideMidpoint = { "ControlledIntersectionSideMidpoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, ControlledIntersectionSideMidpoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledIntersectionSideMidpoint_MetaData), NewProp_ControlledIntersectionSideMidpoint_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_TrafficLightTypeIndex = { "TrafficLightTypeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, TrafficLightTypeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypeIndex_MetaData), NewProp_TrafficLightTypeIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ZRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ControlledIntersectionSideMidpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_TrafficLightTypeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLightInstanceDesc",
	Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers),
	sizeof(FMassTrafficLightInstanceDesc),
	alignof(FMassTrafficLightInstanceDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.InnerSingleton;
}
// End ScriptStruct FMassTrafficLightInstanceDesc

// Begin Class UMassTrafficLightInstancesDataAsset Function ClearTrafficLights
#if WITH_EDITOR
struct Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear / reset the TrafficLightDetails list */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear / reset the TrafficLightDetails list" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficLightInstancesDataAsset, nullptr, "ClearTrafficLights", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UMassTrafficLightInstancesDataAsset::execClearTrafficLights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTrafficLights();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UMassTrafficLightInstancesDataAsset Function ClearTrafficLights

// Begin Class UMassTrafficLightInstancesDataAsset Function PopulateTrafficLightsFromPointCloud
#if WITH_EDITOR
struct Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Populate TrafficLightDetails with point transforms from TrafficLightsPointCloud  \n\x09 * IMPORTANT - The point cloud should be the same point cloud that is used to generate the city lanes, and has a particular format!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Populate TrafficLightDetails with point transforms from TrafficLightsPointCloud\nIMPORTANT - The point cloud should be the same point cloud that is used to generate the city lanes, and has a particular format!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficLightInstancesDataAsset, nullptr, "PopulateTrafficLightsFromPointCloud", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UMassTrafficLightInstancesDataAsset::execPopulateTrafficLightsFromPointCloud)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PopulateTrafficLightsFromPointCloud();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UMassTrafficLightInstancesDataAsset Function PopulateTrafficLightsFromPointCloud

// Begin Class UMassTrafficLightInstancesDataAsset
void UMassTrafficLightInstancesDataAsset::StaticRegisterNativesUMassTrafficLightInstancesDataAsset()
{
#if WITH_EDITOR
	UClass* Class = UMassTrafficLightInstancesDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearTrafficLights", &UMassTrafficLightInstancesDataAsset::execClearTrafficLights },
		{ "PopulateTrafficLightsFromPointCloud", &UMassTrafficLightInstancesDataAsset::execPopulateTrafficLightsFromPointCloud },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficLightInstancesDataAsset);
UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister()
{
	return UMassTrafficLightInstancesDataAsset::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficLights.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypesData_MetaData[] = {
		{ "Category", "Traffic Lights" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLights_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Traffic lights to spawn\n\x09 * @see PopulateTrafficLightsFromPointCloud\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traffic lights to spawn\n@see PopulateTrafficLightsFromPointCloud" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTrafficLights_MetaData[] = {
		{ "ArrayClamp", "" },
		{ "Category", "Traffic Lights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of stored traffic light instances */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of stored traffic light instances" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightsPointCloud_MetaData[] = {
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * RuleProcessor point cloud that contains traffic lights.\n\x09 * IMPORTANT - This should be the same point cloud that is used to generate the city lanes, and has a particular format!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RuleProcessor point cloud that contains traffic lights.\nIMPORTANT - This should be the same point cloud that is used to generate the city lanes, and has a particular format!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyHoudiniToUETransformToTrafficLights_MetaData[] = {
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether Houdini->UE transform should be applied to traffic light locations in point cloud.\n\x09 * This is necessary since the traffic light positions in the point cloud are not automatically converted, since they're not stored in the Px Py Pz fields.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Houdini->UE transform should be applied to traffic light locations in point cloud.\nThis is necessary since the traffic light positions in the point cloud are not automatically converted, since they're not stored in the Px Py Pz fields." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrafficLightTypesData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficLights;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTrafficLights;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TrafficLightsPointCloud;
	static void NewProp_bApplyHoudiniToUETransformToTrafficLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyHoudiniToUETransformToTrafficLights;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights, "ClearTrafficLights" }, // 974862629
		{ &Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud, "PopulateTrafficLightsFromPointCloud" }, // 1760833176
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLightInstancesDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightTypesData = { "TrafficLightTypesData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightInstancesDataAsset, TrafficLightTypesData), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypesData_MetaData), NewProp_TrafficLightTypesData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights_Inner = { "TrafficLights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc, METADATA_PARAMS(0, nullptr) }; // 1317059657
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights = { "TrafficLights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightInstancesDataAsset, TrafficLights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLights_MetaData), NewProp_TrafficLights_MetaData) }; // 1317059657
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_NumTrafficLights = { "NumTrafficLights", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightInstancesDataAsset, NumTrafficLights), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTrafficLights_MetaData), NewProp_NumTrafficLights_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightsPointCloud = { "TrafficLightsPointCloud", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightInstancesDataAsset, TrafficLightsPointCloud), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightsPointCloud_MetaData), NewProp_TrafficLightsPointCloud_MetaData) };
void Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_bApplyHoudiniToUETransformToTrafficLights_SetBit(void* Obj)
{
	((UMassTrafficLightInstancesDataAsset*)Obj)->bApplyHoudiniToUETransformToTrafficLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_bApplyHoudiniToUETransformToTrafficLights = { "bApplyHoudiniToUETransformToTrafficLights", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassTrafficLightInstancesDataAsset), &Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_bApplyHoudiniToUETransformToTrafficLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyHoudiniToUETransformToTrafficLights_MetaData), NewProp_bApplyHoudiniToUETransformToTrafficLights_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightTypesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_NumTrafficLights,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightsPointCloud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_bApplyHoudiniToUETransformToTrafficLights,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::ClassParams = {
	&UMassTrafficLightInstancesDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset()
{
	if (!Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.OuterSingleton, Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficLightInstancesDataAsset>()
{
	return UMassTrafficLightInstancesDataAsset::StaticClass();
}
UMassTrafficLightInstancesDataAsset::UMassTrafficLightInstancesDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficLightInstancesDataAsset);
UMassTrafficLightInstancesDataAsset::~UMassTrafficLightInstancesDataAsset() {}
// End Class UMassTrafficLightInstancesDataAsset

// Begin ScriptStruct FMassTrafficLightsParameters
static_assert(std::is_polymorphic<FMassTrafficLightsParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassTrafficLightsParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters;
class UScriptStruct* FMassTrafficLightsParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightsParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightsParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLightsParameters>()
{
	return FMassTrafficLightsParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypesData_MetaData[] = {
		{ "Category", "MassTrafficLightsParameters" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypesStaticMeshDescHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrafficLightTypesData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLightTypesStaticMeshDescHandle_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficLightTypesStaticMeshDescHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightsParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesData = { "TrafficLightTypesData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightsParameters, TrafficLightTypesData), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypesData_MetaData), NewProp_TrafficLightTypesData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescHandle_Inner = { "TrafficLightTypesStaticMeshDescHandle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDescHandle, METADATA_PARAMS(0, nullptr) }; // 3836179284
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescHandle = { "TrafficLightTypesStaticMeshDescHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightsParameters, TrafficLightTypesStaticMeshDescHandle), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypesStaticMeshDescHandle_MetaData), NewProp_TrafficLightTypesStaticMeshDescHandle_MetaData) }; // 3836179284
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescHandle_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassSharedFragment,
	&NewStructOps,
	"MassTrafficLightsParameters",
	Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers),
	sizeof(FMassTrafficLightsParameters),
	alignof(FMassTrafficLightsParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightsParameters()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.InnerSingleton;
}
// End ScriptStruct FMassTrafficLightsParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficLightTypeData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewStructOps, TEXT("MassTrafficLightTypeData"), &Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightTypeData), 3673089206U) },
		{ FMassTrafficLightInstanceDesc::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewStructOps, TEXT("MassTrafficLightInstanceDesc"), &Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightInstanceDesc), 1317059657U) },
		{ FMassTrafficLightsParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewStructOps, TEXT("MassTrafficLightsParameters"), &Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightsParameters), 147402184U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficLightTypesDataAsset, UMassTrafficLightTypesDataAsset::StaticClass, TEXT("UMassTrafficLightTypesDataAsset"), &Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLightTypesDataAsset), 1825986806U) },
		{ Z_Construct_UClass_UMassTrafficLightInstancesDataAsset, UMassTrafficLightInstancesDataAsset::StaticClass, TEXT("UMassTrafficLightInstancesDataAsset"), &Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLightInstancesDataAsset), 4039288182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_1167845232(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
