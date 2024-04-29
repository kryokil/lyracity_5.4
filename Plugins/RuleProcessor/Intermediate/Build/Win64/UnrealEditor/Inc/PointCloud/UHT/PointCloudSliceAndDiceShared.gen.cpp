// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudSliceAndDiceShared.h"
#include "Runtime/Engine/Classes/Engine/ActorInstanceHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceShared() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceHandle();
POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption();
POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudPivotType();
POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior();
POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudReportLevel();
POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudReportMode();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FSliceAndDiceActorMapping();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry();
UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References

// Begin Enum EPointCloudBoundsOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPointCloudBoundsOption;
static UEnum* EPointCloudBoundsOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPointCloudBoundsOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPointCloudBoundsOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("EPointCloudBoundsOption"));
	}
	return Z_Registration_Info_UEnum_EPointCloudBoundsOption.OuterSingleton;
}
template<> POINTCLOUD_API UEnum* StaticEnum<EPointCloudBoundsOption>()
{
	return EPointCloudBoundsOption_StaticEnum();
}
struct Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Compute.DisplayName", "Incoming Points" },
		{ "Compute.Name", "EPointCloudBoundsOption::Compute" },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "EPointCloudBoundsOption::Manual" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPointCloudBoundsOption::Compute", (int64)EPointCloudBoundsOption::Compute },
		{ "EPointCloudBoundsOption::Manual", (int64)EPointCloudBoundsOption::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PointCloud,
	nullptr,
	"EPointCloudBoundsOption",
	"EPointCloudBoundsOption",
	Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption()
{
	if (!Z_Registration_Info_UEnum_EPointCloudBoundsOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPointCloudBoundsOption.InnerSingleton, Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPointCloudBoundsOption.InnerSingleton;
}
// End Enum EPointCloudBoundsOption

// Begin Enum EPointCloudPivotType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPointCloudPivotType;
static UEnum* EPointCloudPivotType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPointCloudPivotType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPointCloudPivotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloud_EPointCloudPivotType, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("EPointCloudPivotType"));
	}
	return Z_Registration_Info_UEnum_EPointCloudPivotType.OuterSingleton;
}
template<> POINTCLOUD_API UEnum* StaticEnum<EPointCloudPivotType>()
{
	return EPointCloudPivotType_StaticEnum();
}
struct Z_Construct_UEnum_PointCloud_EPointCloudPivotType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Center.DisplayName", "AABB Center" },
		{ "Center.Name", "EPointCloudPivotType::Center" },
		{ "CenterMinZ.DisplayName", "AABB Center Min Z" },
		{ "CenterMinZ.Name", "EPointCloudPivotType::CenterMinZ" },
		{ "Default.DisplayName", "Default Pivot" },
		{ "Default.Name", "EPointCloudPivotType::Default" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
		{ "WorldOrigin.DisplayName", "World Origin" },
		{ "WorldOrigin.Name", "EPointCloudPivotType::WorldOrigin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPointCloudPivotType::Default", (int64)EPointCloudPivotType::Default },
		{ "EPointCloudPivotType::WorldOrigin", (int64)EPointCloudPivotType::WorldOrigin },
		{ "EPointCloudPivotType::Center", (int64)EPointCloudPivotType::Center },
		{ "EPointCloudPivotType::CenterMinZ", (int64)EPointCloudPivotType::CenterMinZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloud_EPointCloudPivotType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PointCloud,
	nullptr,
	"EPointCloudPivotType",
	"EPointCloudPivotType",
	Z_Construct_UEnum_PointCloud_EPointCloudPivotType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EPointCloudPivotType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EPointCloudPivotType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloud_EPointCloudPivotType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PointCloud_EPointCloudPivotType()
{
	if (!Z_Registration_Info_UEnum_EPointCloudPivotType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPointCloudPivotType.InnerSingleton, Z_Construct_UEnum_PointCloud_EPointCloudPivotType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPointCloudPivotType.InnerSingleton;
}
// End Enum EPointCloudPivotType

// Begin Enum EPointCloudReportLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPointCloudReportLevel;
static UEnum* EPointCloudReportLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPointCloudReportLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPointCloudReportLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloud_EPointCloudReportLevel, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("EPointCloudReportLevel"));
	}
	return Z_Registration_Info_UEnum_EPointCloudReportLevel.OuterSingleton;
}
template<> POINTCLOUD_API UEnum* StaticEnum<EPointCloudReportLevel>()
{
	return EPointCloudReportLevel_StaticEnum();
}
struct Z_Construct_UEnum_PointCloud_EPointCloudReportLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Basic.DisplayName", "Basic Rule Information" },
		{ "Basic.Name", "EPointCloudReportLevel::Basic" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
		{ "Properties.DisplayName", "Rule, Property and Override Information" },
		{ "Properties.Name", "EPointCloudReportLevel::Properties" },
		{ "Values.DisplayName", "Full information including point counts" },
		{ "Values.Name", "EPointCloudReportLevel::Values" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPointCloudReportLevel::Basic", (int64)EPointCloudReportLevel::Basic },
		{ "EPointCloudReportLevel::Properties", (int64)EPointCloudReportLevel::Properties },
		{ "EPointCloudReportLevel::Values", (int64)EPointCloudReportLevel::Values },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloud_EPointCloudReportLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PointCloud,
	nullptr,
	"EPointCloudReportLevel",
	"EPointCloudReportLevel",
	Z_Construct_UEnum_PointCloud_EPointCloudReportLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EPointCloudReportLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EPointCloudReportLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloud_EPointCloudReportLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PointCloud_EPointCloudReportLevel()
{
	if (!Z_Registration_Info_UEnum_EPointCloudReportLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPointCloudReportLevel.InnerSingleton, Z_Construct_UEnum_PointCloud_EPointCloudReportLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPointCloudReportLevel.InnerSingleton;
}
// End Enum EPointCloudReportLevel

// Begin Enum EPointCloudReloadBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPointCloudReloadBehavior;
static UEnum* EPointCloudReloadBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPointCloudReloadBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPointCloudReloadBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("EPointCloudReloadBehavior"));
	}
	return Z_Registration_Info_UEnum_EPointCloudReloadBehavior.OuterSingleton;
}
template<> POINTCLOUD_API UEnum* StaticEnum<EPointCloudReloadBehavior>()
{
	return EPointCloudReloadBehavior_StaticEnum();
}
struct Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontReload.DisplayName", "Don't Reload" },
		{ "DontReload.Name", "EPointCloudReloadBehavior::DontReload" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
		{ "ReloadOnRun.DisplayName", "Reload On Run" },
		{ "ReloadOnRun.Name", "EPointCloudReloadBehavior::ReloadOnRun" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPointCloudReloadBehavior::DontReload", (int64)EPointCloudReloadBehavior::DontReload },
		{ "EPointCloudReloadBehavior::ReloadOnRun", (int64)EPointCloudReloadBehavior::ReloadOnRun },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PointCloud,
	nullptr,
	"EPointCloudReloadBehavior",
	"EPointCloudReloadBehavior",
	Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior()
{
	if (!Z_Registration_Info_UEnum_EPointCloudReloadBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPointCloudReloadBehavior.InnerSingleton, Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPointCloudReloadBehavior.InnerSingleton;
}
// End Enum EPointCloudReloadBehavior

// Begin Enum EPointCloudReportMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPointCloudReportMode;
static UEnum* EPointCloudReportMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPointCloudReportMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPointCloudReportMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloud_EPointCloudReportMode, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("EPointCloudReportMode"));
	}
	return Z_Registration_Info_UEnum_EPointCloudReportMode.OuterSingleton;
}
template<> POINTCLOUD_API UEnum* StaticEnum<EPointCloudReportMode>()
{
	return EPointCloudReportMode_StaticEnum();
}
struct Z_Construct_UEnum_PointCloud_EPointCloudReportMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Execute.DisplayName", "Execute Only" },
		{ "Execute.Name", "EPointCloudReportMode::Execute" },
		{ "Invalid.DisplayName", "Invalid State" },
		{ "Invalid.Name", "EPointCloudReportMode::Invalid" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
		{ "Report.DisplayName", "Report Only" },
		{ "Report.Name", "EPointCloudReportMode::Report" },
		{ "ReportAndExecute.DisplayName", "Execute And Report" },
		{ "ReportAndExecute.Name", "EPointCloudReportMode::ReportAndExecute" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPointCloudReportMode::Invalid", (int64)EPointCloudReportMode::Invalid },
		{ "EPointCloudReportMode::Report", (int64)EPointCloudReportMode::Report },
		{ "EPointCloudReportMode::Execute", (int64)EPointCloudReportMode::Execute },
		{ "EPointCloudReportMode::ReportAndExecute", (int64)EPointCloudReportMode::ReportAndExecute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloud_EPointCloudReportMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PointCloud,
	nullptr,
	"EPointCloudReportMode",
	"EPointCloudReportMode",
	Z_Construct_UEnum_PointCloud_EPointCloudReportMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EPointCloudReportMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EPointCloudReportMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloud_EPointCloudReportMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PointCloud_EPointCloudReportMode()
{
	if (!Z_Registration_Info_UEnum_EPointCloudReportMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPointCloudReportMode.InnerSingleton, Z_Construct_UEnum_PointCloud_EPointCloudReportMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPointCloudReportMode.InnerSingleton;
}
// End Enum EPointCloudReportMode

// Begin ScriptStruct FSliceAndDiceActorMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SliceAndDiceActorMapping;
class UScriptStruct* FSliceAndDiceActorMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SliceAndDiceActorMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SliceAndDiceActorMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSliceAndDiceActorMapping, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("SliceAndDiceActorMapping"));
	}
	return Z_Registration_Info_UScriptStruct_SliceAndDiceActorMapping.OuterSingleton;
}
template<> POINTCLOUD_API UScriptStruct* StaticStruct<FSliceAndDiceActorMapping>()
{
	return FSliceAndDiceActorMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorHandles_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statements_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorHandles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Statements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Statements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSliceAndDiceActorMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceAndDiceActorMapping, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_ActorHandles_Inner = { "ActorHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 2065137789
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_ActorHandles = { "ActorHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceAndDiceActorMapping, ActorHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorHandles_MetaData), NewProp_ActorHandles_MetaData) }; // 2065137789
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_Statements_Inner = { "Statements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_Statements = { "Statements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceAndDiceActorMapping, Statements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statements_MetaData), NewProp_Statements_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_ActorHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_ActorHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_Statements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewProp_Statements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	nullptr,
	&NewStructOps,
	"SliceAndDiceActorMapping",
	Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::PropPointers),
	sizeof(FSliceAndDiceActorMapping),
	alignof(FSliceAndDiceActorMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSliceAndDiceActorMapping()
{
	if (!Z_Registration_Info_UScriptStruct_SliceAndDiceActorMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SliceAndDiceActorMapping.InnerSingleton, Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SliceAndDiceActorMapping.InnerSingleton;
}
// End ScriptStruct FSliceAndDiceActorMapping

// Begin ScriptStruct FSliceAndDiceManagedActorsEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsEntry;
class UScriptStruct* FSliceAndDiceManagedActorsEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("SliceAndDiceManagedActorsEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsEntry.OuterSingleton;
}
template<> POINTCLOUD_API UScriptStruct* StaticStruct<FSliceAndDiceManagedActorsEntry>()
{
	return FSliceAndDiceManagedActorsEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of actors/handles that are created from the same data set (e.g. points) */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection of actors/handles that are created from the same data set (e.g. points)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceShared.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSliceAndDiceManagedActorsEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::NewProp_ParentHash = { "ParentHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceAndDiceManagedActorsEntry, ParentHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentHash_MetaData), NewProp_ParentHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceAndDiceManagedActorsEntry, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::NewProp_ActorMappings_Inner = { "ActorMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSliceAndDiceActorMapping, METADATA_PARAMS(0, nullptr) }; // 2537423392
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::NewProp_ActorMappings = { "ActorMappings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceAndDiceManagedActorsEntry, ActorMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorMappings_MetaData), NewProp_ActorMappings_MetaData) }; // 2537423392
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::NewProp_ParentHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::NewProp_ActorMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::NewProp_ActorMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	nullptr,
	&NewStructOps,
	"SliceAndDiceManagedActorsEntry",
	Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::PropPointers),
	sizeof(FSliceAndDiceManagedActorsEntry),
	alignof(FSliceAndDiceManagedActorsEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry()
{
	if (!Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsEntry.InnerSingleton, Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsEntry.InnerSingleton;
}
// End ScriptStruct FSliceAndDiceManagedActorsEntry

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceShared_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPointCloudBoundsOption_StaticEnum, TEXT("EPointCloudBoundsOption"), &Z_Registration_Info_UEnum_EPointCloudBoundsOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3055611713U) },
		{ EPointCloudPivotType_StaticEnum, TEXT("EPointCloudPivotType"), &Z_Registration_Info_UEnum_EPointCloudPivotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3984929976U) },
		{ EPointCloudReportLevel_StaticEnum, TEXT("EPointCloudReportLevel"), &Z_Registration_Info_UEnum_EPointCloudReportLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1667907366U) },
		{ EPointCloudReloadBehavior_StaticEnum, TEXT("EPointCloudReloadBehavior"), &Z_Registration_Info_UEnum_EPointCloudReloadBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 130740866U) },
		{ EPointCloudReportMode_StaticEnum, TEXT("EPointCloudReportMode"), &Z_Registration_Info_UEnum_EPointCloudReportMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2602188095U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSliceAndDiceActorMapping::StaticStruct, Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics::NewStructOps, TEXT("SliceAndDiceActorMapping"), &Z_Registration_Info_UScriptStruct_SliceAndDiceActorMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSliceAndDiceActorMapping), 2537423392U) },
		{ FSliceAndDiceManagedActorsEntry::StaticStruct, Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics::NewStructOps, TEXT("SliceAndDiceManagedActorsEntry"), &Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSliceAndDiceManagedActorsEntry), 1089879623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceShared_h_388012276(TEXT("/Script/PointCloud"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceShared_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceShared_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceShared_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceShared_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS