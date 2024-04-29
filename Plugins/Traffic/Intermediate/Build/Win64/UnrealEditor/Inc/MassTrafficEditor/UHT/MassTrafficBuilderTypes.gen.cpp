// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficEditor/Public/MassTrafficBuilderTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficBuilderTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MASSTRAFFICEDITOR_API UEnum* Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType();
MASSTRAFFICEDITOR_API UEnum* Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType();
MASSTRAFFICEDITOR_API UEnum* Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDebugPoint();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersection();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionLink();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPoint();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPointHints();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSegment();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSpline();
MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey();
UPackage* Z_Construct_UPackage__Script_MassTrafficEditor();
// End Cross Module References

// Begin Enum EMassTrafficUser
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficUser;
static UEnum* EMassTrafficUser_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficUser.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassTrafficUser.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("EMassTrafficUser"));
	}
	return Z_Registration_Info_UEnum_EMassTrafficUser.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UEnum* StaticEnum<EMassTrafficUser>()
{
	return EMassTrafficUser_StaticEnum();
}
struct Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
		{ "None.Name", "EMassTrafficUser::None" },
		{ "Pedestrian.Name", "EMassTrafficUser::Pedestrian" },
		{ "Unknown.Name", "EMassTrafficUser::Unknown" },
		{ "Vehicle.Name", "EMassTrafficUser::Vehicle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassTrafficUser::None", (int64)EMassTrafficUser::None },
		{ "EMassTrafficUser::Vehicle", (int64)EMassTrafficUser::Vehicle },
		{ "EMassTrafficUser::Pedestrian", (int64)EMassTrafficUser::Pedestrian },
		{ "EMassTrafficUser::Unknown", (int64)EMassTrafficUser::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	"EMassTrafficUser",
	"EMassTrafficUser",
	Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficUser.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficUser.InnerSingleton, Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassTrafficUser.InnerSingleton;
}
// End Enum EMassTrafficUser

// Begin ScriptStruct FMassTrafficExplicitLaneProfileRefMapKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficExplicitLaneProfileRefMapKey;
class UScriptStruct* FMassTrafficExplicitLaneProfileRefMapKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficExplicitLaneProfileRefMapKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficExplicitLaneProfileRefMapKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficExplicitLaneProfileRefMapKey"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficExplicitLaneProfileRefMapKey.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficExplicitLaneProfileRefMapKey>()
{
	return FMassTrafficExplicitLaneProfileRefMapKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[] = {
		{ "Category", "MassTrafficExplicitLaneProfileRefMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfLanes_MetaData[] = {
		{ "Category", "MassTrafficExplicitLaneProfileRefMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnidirectional_MetaData[] = {
		{ "Category", "MassTrafficExplicitLaneProfileRefMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseLaneProfile_MetaData[] = {
		{ "Category", "MassTrafficExplicitLaneProfileRefMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCenterDivider_MetaData[] = {
		{ "Category", "MassTrafficExplicitLaneProfileRefMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneWidthCM_MetaData[] = {
		{ "Category", "MassTrafficExplicitLaneProfileRefMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterDividerWidthCM_MetaData[] = {
		{ "Category", "MassTrafficExplicitLaneProfileRefMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanSupportLongVehicles_MetaData[] = {
		{ "Category", "MassTrafficExplicitLaneProfileRefMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLanes;
	static void NewProp_bIsUnidirectional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnidirectional;
	static void NewProp_bReverseLaneProfile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseLaneProfile;
	static void NewProp_bHasCenterDivider_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCenterDivider;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneWidthCM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterDividerWidthCM;
	static void NewProp_bCanSupportLongVehicles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSupportLongVehicles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficExplicitLaneProfileRefMapKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficExplicitLaneProfileRefMapKey, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_User_MetaData), NewProp_User_MetaData) }; // 353950271
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_NumberOfLanes = { "NumberOfLanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficExplicitLaneProfileRefMapKey, NumberOfLanes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfLanes_MetaData), NewProp_NumberOfLanes_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bIsUnidirectional_SetBit(void* Obj)
{
	((FMassTrafficExplicitLaneProfileRefMapKey*)Obj)->bIsUnidirectional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bIsUnidirectional = { "bIsUnidirectional", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficExplicitLaneProfileRefMapKey), &Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bIsUnidirectional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUnidirectional_MetaData), NewProp_bIsUnidirectional_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bReverseLaneProfile_SetBit(void* Obj)
{
	((FMassTrafficExplicitLaneProfileRefMapKey*)Obj)->bReverseLaneProfile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bReverseLaneProfile = { "bReverseLaneProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficExplicitLaneProfileRefMapKey), &Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bReverseLaneProfile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseLaneProfile_MetaData), NewProp_bReverseLaneProfile_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bHasCenterDivider_SetBit(void* Obj)
{
	((FMassTrafficExplicitLaneProfileRefMapKey*)Obj)->bHasCenterDivider = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bHasCenterDivider = { "bHasCenterDivider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficExplicitLaneProfileRefMapKey), &Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bHasCenterDivider_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCenterDivider_MetaData), NewProp_bHasCenterDivider_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_LaneWidthCM = { "LaneWidthCM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficExplicitLaneProfileRefMapKey, LaneWidthCM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneWidthCM_MetaData), NewProp_LaneWidthCM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_CenterDividerWidthCM = { "CenterDividerWidthCM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficExplicitLaneProfileRefMapKey, CenterDividerWidthCM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterDividerWidthCM_MetaData), NewProp_CenterDividerWidthCM_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bCanSupportLongVehicles_SetBit(void* Obj)
{
	((FMassTrafficExplicitLaneProfileRefMapKey*)Obj)->bCanSupportLongVehicles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bCanSupportLongVehicles = { "bCanSupportLongVehicles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficExplicitLaneProfileRefMapKey), &Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bCanSupportLongVehicles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanSupportLongVehicles_MetaData), NewProp_bCanSupportLongVehicles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_User_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_NumberOfLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bIsUnidirectional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bReverseLaneProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bHasCenterDivider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_LaneWidthCM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_CenterDividerWidthCM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewProp_bCanSupportLongVehicles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficExplicitLaneProfileRefMapKey",
	Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::PropPointers),
	sizeof(FMassTrafficExplicitLaneProfileRefMapKey),
	alignof(FMassTrafficExplicitLaneProfileRefMapKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficExplicitLaneProfileRefMapKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficExplicitLaneProfileRefMapKey.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficExplicitLaneProfileRefMapKey.InnerSingleton;
}
// End ScriptStruct FMassTrafficExplicitLaneProfileRefMapKey

// Begin ScriptStruct FMassTrafficDebugPoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficDebugPoint;
class UScriptStruct* FMassTrafficDebugPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficDebugPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficDebugPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficDebugPoint, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficDebugPoint"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficDebugPoint.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficDebugPoint>()
{
	return FMassTrafficDebugPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "Category", "MassTrafficDebugPoint" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "MassTrafficDebugPoint" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "MassTrafficDebugPoint" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficDebugPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDebugPoint, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDebugPoint, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDebugPoint, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficDebugPoint",
	Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::PropPointers),
	sizeof(FMassTrafficDebugPoint),
	alignof(FMassTrafficDebugPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDebugPoint()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficDebugPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficDebugPoint.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficDebugPoint.InnerSingleton;
}
// End ScriptStruct FMassTrafficDebugPoint

// Begin ScriptStruct FMassTrafficDebugLineSegment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficDebugLineSegment;
class UScriptStruct* FMassTrafficDebugLineSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficDebugLineSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficDebugLineSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficDebugLineSegment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficDebugLineSegment.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficDebugLineSegment>()
{
	return FMassTrafficDebugLineSegment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point1_MetaData[] = {
		{ "Category", "MassTrafficDebugLineSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point2_MetaData[] = {
		{ "Category", "MassTrafficDebugLineSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "MassTrafficDebugLineSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "MassTrafficDebugLineSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficDebugLineSegment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::NewProp_Point1 = { "Point1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDebugLineSegment, Point1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point1_MetaData), NewProp_Point1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::NewProp_Point2 = { "Point2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDebugLineSegment, Point2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point2_MetaData), NewProp_Point2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDebugLineSegment, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDebugLineSegment, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::NewProp_Point1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::NewProp_Point2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficDebugLineSegment",
	Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::PropPointers),
	sizeof(FMassTrafficDebugLineSegment),
	alignof(FMassTrafficDebugLineSegment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficDebugLineSegment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficDebugLineSegment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficDebugLineSegment.InnerSingleton;
}
// End ScriptStruct FMassTrafficDebugLineSegment

// Begin ScriptStruct FMassTrafficPoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficPoint;
class UScriptStruct* FMassTrafficPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPoint, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficPoint"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPoint.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficPoint>()
{
	return FMassTrafficPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "MassTrafficPoint" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardVector_MetaData[] = {
		{ "Category", "MassTrafficPoint" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[] = {
		{ "Category", "MassTrafficPoint" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalTangentVector_MetaData[] = {
		{ "Category", "MassTrafficPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This vector is invalid (and will be ignored and/or automatically computed) when length zero. This might end up\n\x09 * being set to non-zero by internal functionality that performs spline looping and chopping. It that case, this\n\x09 * vector will/should be left *un-normalized* - and represents vector from previous point to next point.\n\x09 * INTERNAL USE ONLY\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This vector is invalid (and will be ignored and/or automatically computed) when length zero. This might end up\nbeing set to non-zero by internal functionality that performs spline looping and chopping. It that case, this\nvector will/should be left *un-normalized* - and represents vector from previous point to next point.\nINTERNAL USE ONLY" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficForwardVector_MetaData[] = {
		{ "Category", "MassTrafficPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Direction of traffic flow. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction of traffic flow." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLanesMergeToOneDestination_MetaData[] = {
		{ "Category", "MassTrafficPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lanes originating from this point (if any) should all merge to one destination. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lanes originating from this point (if any) should all merge to one destination." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLanesConnectWithOneLanePerDestination_MetaData[] = {
		{ "Category", "MassTrafficPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lanes originating from this point (if any) should only connect to one destination. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lanes originating from this point (if any) should only connect to one destination." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLanesConnectWithNoLeftTurn_MetaData[] = {
		{ "Category", "MassTrafficPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lanes originating from this point (if any) should no make left turns to arrive at a destination. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lanes originating from this point (if any) should no make left turns to arrive at a destination." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLanesConnectWithNoRightTurn_MetaData[] = {
		{ "Category", "MassTrafficPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lanes originating from this point (if any) should no make right turns to arrive at a destination. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lanes originating from this point (if any) should no make right turns to arrive at a destination." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalTangentVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficForwardVector;
	static void NewProp_bLanesMergeToOneDestination_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLanesMergeToOneDestination;
	static void NewProp_bLanesConnectWithOneLanePerDestination_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLanesConnectWithOneLanePerDestination;
	static void NewProp_bLanesConnectWithNoLeftTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLanesConnectWithNoLeftTurn;
	static void NewProp_bLanesConnectWithNoRightTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLanesConnectWithNoRightTurn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPoint, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardVector_MetaData), NewProp_ForwardVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPoint, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpVector_MetaData), NewProp_UpVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_OptionalTangentVector = { "OptionalTangentVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPoint, OptionalTangentVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalTangentVector_MetaData), NewProp_OptionalTangentVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_TrafficForwardVector = { "TrafficForwardVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPoint, TrafficForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficForwardVector_MetaData), NewProp_TrafficForwardVector_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesMergeToOneDestination_SetBit(void* Obj)
{
	((FMassTrafficPoint*)Obj)->bLanesMergeToOneDestination = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesMergeToOneDestination = { "bLanesMergeToOneDestination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPoint), &Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesMergeToOneDestination_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLanesMergeToOneDestination_MetaData), NewProp_bLanesMergeToOneDestination_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithOneLanePerDestination_SetBit(void* Obj)
{
	((FMassTrafficPoint*)Obj)->bLanesConnectWithOneLanePerDestination = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithOneLanePerDestination = { "bLanesConnectWithOneLanePerDestination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPoint), &Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithOneLanePerDestination_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLanesConnectWithOneLanePerDestination_MetaData), NewProp_bLanesConnectWithOneLanePerDestination_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithNoLeftTurn_SetBit(void* Obj)
{
	((FMassTrafficPoint*)Obj)->bLanesConnectWithNoLeftTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithNoLeftTurn = { "bLanesConnectWithNoLeftTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPoint), &Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithNoLeftTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLanesConnectWithNoLeftTurn_MetaData), NewProp_bLanesConnectWithNoLeftTurn_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithNoRightTurn_SetBit(void* Obj)
{
	((FMassTrafficPoint*)Obj)->bLanesConnectWithNoRightTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithNoRightTurn = { "bLanesConnectWithNoRightTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPoint), &Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithNoRightTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLanesConnectWithNoRightTurn_MetaData), NewProp_bLanesConnectWithNoRightTurn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_ForwardVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_UpVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_OptionalTangentVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_TrafficForwardVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesMergeToOneDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithOneLanePerDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithNoLeftTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewProp_bLanesConnectWithNoRightTurn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficPoint",
	Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::PropPointers),
	sizeof(FMassTrafficPoint),
	alignof(FMassTrafficPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPoint()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficPoint.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPoint.InnerSingleton;
}
// End ScriptStruct FMassTrafficPoint

// Begin ScriptStruct FMassTrafficRoadSegment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficRoadSegment;
class UScriptStruct* FMassTrafficRoadSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRoadSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficRoadSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficRoadSegment, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficRoadSegment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRoadSegment.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficRoadSegment>()
{
	return FMassTrafficRoadSegment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadSegmentID_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfLanes_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCenterDivider_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneWidthCM_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterDividerWidthCM_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanSupportLongVehicles_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrosswalk_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFreeway_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMainPartOfFreeway_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDensity_MetaData[] = {
		{ "Category", "MassTrafficRoadSegment" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoadSegmentID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLanes;
	static void NewProp_bHasCenterDivider_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCenterDivider;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneWidthCM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterDividerWidthCM;
	static void NewProp_bCanSupportLongVehicles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSupportLongVehicles;
	static void NewProp_bIsCrosswalk_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrosswalk;
	static void NewProp_bIsFreeway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreeway;
	static void NewProp_bIsMainPartOfFreeway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMainPartOfFreeway;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserDensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficRoadSegment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_RoadSegmentID = { "RoadSegmentID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSegment, RoadSegmentID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadSegmentID_MetaData), NewProp_RoadSegmentID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSegment, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_User_MetaData), NewProp_User_MetaData) }; // 353950271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSegment, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSegment, StartPoint), Z_Construct_UScriptStruct_FMassTrafficPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) }; // 739101939
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSegment, EndPoint), Z_Construct_UScriptStruct_FMassTrafficPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) }; // 739101939
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_NumberOfLanes = { "NumberOfLanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSegment, NumberOfLanes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfLanes_MetaData), NewProp_NumberOfLanes_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bHasCenterDivider_SetBit(void* Obj)
{
	((FMassTrafficRoadSegment*)Obj)->bHasCenterDivider = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bHasCenterDivider = { "bHasCenterDivider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSegment), &Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bHasCenterDivider_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCenterDivider_MetaData), NewProp_bHasCenterDivider_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_LaneWidthCM = { "LaneWidthCM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSegment, LaneWidthCM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneWidthCM_MetaData), NewProp_LaneWidthCM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_CenterDividerWidthCM = { "CenterDividerWidthCM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSegment, CenterDividerWidthCM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterDividerWidthCM_MetaData), NewProp_CenterDividerWidthCM_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bCanSupportLongVehicles_SetBit(void* Obj)
{
	((FMassTrafficRoadSegment*)Obj)->bCanSupportLongVehicles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bCanSupportLongVehicles = { "bCanSupportLongVehicles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSegment), &Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bCanSupportLongVehicles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanSupportLongVehicles_MetaData), NewProp_bCanSupportLongVehicles_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsCrosswalk_SetBit(void* Obj)
{
	((FMassTrafficRoadSegment*)Obj)->bIsCrosswalk = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsCrosswalk = { "bIsCrosswalk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSegment), &Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsCrosswalk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrosswalk_MetaData), NewProp_bIsCrosswalk_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsFreeway_SetBit(void* Obj)
{
	((FMassTrafficRoadSegment*)Obj)->bIsFreeway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsFreeway = { "bIsFreeway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSegment), &Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsFreeway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFreeway_MetaData), NewProp_bIsFreeway_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsMainPartOfFreeway_SetBit(void* Obj)
{
	((FMassTrafficRoadSegment*)Obj)->bIsMainPartOfFreeway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsMainPartOfFreeway = { "bIsMainPartOfFreeway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSegment), &Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsMainPartOfFreeway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMainPartOfFreeway_MetaData), NewProp_bIsMainPartOfFreeway_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_UserDensity = { "UserDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSegment, UserDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDensity_MetaData), NewProp_UserDensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_RoadSegmentID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_User_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_NumberOfLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bHasCenterDivider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_LaneWidthCM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_CenterDividerWidthCM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bCanSupportLongVehicles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsCrosswalk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsFreeway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_bIsMainPartOfFreeway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewProp_UserDensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficRoadSegment",
	Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::PropPointers),
	sizeof(FMassTrafficRoadSegment),
	alignof(FMassTrafficRoadSegment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSegment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRoadSegment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficRoadSegment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRoadSegment.InnerSingleton;
}
// End ScriptStruct FMassTrafficRoadSegment

// Begin ScriptStruct FMassTrafficRoadSegmentMapKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficRoadSegmentMapKey;
class UScriptStruct* FMassTrafficRoadSegmentMapKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRoadSegmentMapKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficRoadSegmentMapKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficRoadSegmentMapKey"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRoadSegmentMapKey.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficRoadSegmentMapKey>()
{
	return FMassTrafficRoadSegmentMapKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadSegmentID_MetaData[] = {
		{ "Category", "MassTrafficRoadSegmentMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[] = {
		{ "Category", "MassTrafficRoadSegmentMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoadSegmentID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficRoadSegmentMapKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::NewProp_RoadSegmentID = { "RoadSegmentID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSegmentMapKey, RoadSegmentID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadSegmentID_MetaData), NewProp_RoadSegmentID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSegmentMapKey, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_User_MetaData), NewProp_User_MetaData) }; // 353950271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::NewProp_RoadSegmentID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::NewProp_User_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::NewProp_User,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficRoadSegmentMapKey",
	Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::PropPointers),
	sizeof(FMassTrafficRoadSegmentMapKey),
	alignof(FMassTrafficRoadSegmentMapKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRoadSegmentMapKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficRoadSegmentMapKey.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRoadSegmentMapKey.InnerSingleton;
}
// End ScriptStruct FMassTrafficRoadSegmentMapKey

// Begin ScriptStruct FMassTrafficRoadSpline
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficRoadSpline;
class UScriptStruct* FMassTrafficRoadSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRoadSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficRoadSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficRoadSpline, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficRoadSpline"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRoadSpline.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficRoadSpline>()
{
	return FMassTrafficRoadSpline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadSplineID_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfLanes_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCenterDivider_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneWidthCM_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterDividerWidthCM_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnidirectional_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsClosed_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEPRECATED\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanSupportLongVehicles_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFreeway_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMainPartOfFreeway_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFreewayOnramp_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFreewayOfframp_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDensity_MetaData[] = {
		{ "Category", "MassTrafficRoadSpline" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoadSplineID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLanes;
	static void NewProp_bHasCenterDivider_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCenterDivider;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneWidthCM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterDividerWidthCM;
	static void NewProp_bIsUnidirectional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnidirectional;
	static void NewProp_bIsClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClosed;
	static void NewProp_bCanSupportLongVehicles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSupportLongVehicles;
	static void NewProp_bIsFreeway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreeway;
	static void NewProp_bIsMainPartOfFreeway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMainPartOfFreeway;
	static void NewProp_bIsFreewayOnramp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreewayOnramp;
	static void NewProp_bIsFreewayOfframp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreewayOfframp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserDensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficRoadSpline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_RoadSplineID = { "RoadSplineID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSpline, RoadSplineID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadSplineID_MetaData), NewProp_RoadSplineID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSpline, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_User_MetaData), NewProp_User_MetaData) }; // 353950271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSpline, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficPoint, METADATA_PARAMS(0, nullptr) }; // 739101939
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSpline, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) }; // 739101939
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_NumberOfLanes = { "NumberOfLanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSpline, NumberOfLanes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfLanes_MetaData), NewProp_NumberOfLanes_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bHasCenterDivider_SetBit(void* Obj)
{
	((FMassTrafficRoadSpline*)Obj)->bHasCenterDivider = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bHasCenterDivider = { "bHasCenterDivider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSpline), &Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bHasCenterDivider_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCenterDivider_MetaData), NewProp_bHasCenterDivider_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_LaneWidthCM = { "LaneWidthCM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSpline, LaneWidthCM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneWidthCM_MetaData), NewProp_LaneWidthCM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_CenterDividerWidthCM = { "CenterDividerWidthCM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSpline, CenterDividerWidthCM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterDividerWidthCM_MetaData), NewProp_CenterDividerWidthCM_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsUnidirectional_SetBit(void* Obj)
{
	((FMassTrafficRoadSpline*)Obj)->bIsUnidirectional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsUnidirectional = { "bIsUnidirectional", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSpline), &Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsUnidirectional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUnidirectional_MetaData), NewProp_bIsUnidirectional_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsClosed_SetBit(void* Obj)
{
	((FMassTrafficRoadSpline*)Obj)->bIsClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsClosed = { "bIsClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSpline), &Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsClosed_MetaData), NewProp_bIsClosed_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bCanSupportLongVehicles_SetBit(void* Obj)
{
	((FMassTrafficRoadSpline*)Obj)->bCanSupportLongVehicles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bCanSupportLongVehicles = { "bCanSupportLongVehicles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSpline), &Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bCanSupportLongVehicles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanSupportLongVehicles_MetaData), NewProp_bCanSupportLongVehicles_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreeway_SetBit(void* Obj)
{
	((FMassTrafficRoadSpline*)Obj)->bIsFreeway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreeway = { "bIsFreeway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSpline), &Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreeway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFreeway_MetaData), NewProp_bIsFreeway_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsMainPartOfFreeway_SetBit(void* Obj)
{
	((FMassTrafficRoadSpline*)Obj)->bIsMainPartOfFreeway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsMainPartOfFreeway = { "bIsMainPartOfFreeway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSpline), &Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsMainPartOfFreeway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMainPartOfFreeway_MetaData), NewProp_bIsMainPartOfFreeway_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreewayOnramp_SetBit(void* Obj)
{
	((FMassTrafficRoadSpline*)Obj)->bIsFreewayOnramp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreewayOnramp = { "bIsFreewayOnramp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSpline), &Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreewayOnramp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFreewayOnramp_MetaData), NewProp_bIsFreewayOnramp_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreewayOfframp_SetBit(void* Obj)
{
	((FMassTrafficRoadSpline*)Obj)->bIsFreewayOfframp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreewayOfframp = { "bIsFreewayOfframp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficRoadSpline), &Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreewayOfframp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFreewayOfframp_MetaData), NewProp_bIsFreewayOfframp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_UserDensity = { "UserDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSpline, UserDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDensity_MetaData), NewProp_UserDensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_RoadSplineID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_User_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_NumberOfLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bHasCenterDivider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_LaneWidthCM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_CenterDividerWidthCM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsUnidirectional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bCanSupportLongVehicles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreeway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsMainPartOfFreeway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreewayOnramp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_bIsFreewayOfframp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewProp_UserDensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficRoadSpline",
	Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::PropPointers),
	sizeof(FMassTrafficRoadSpline),
	alignof(FMassTrafficRoadSpline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSpline()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRoadSpline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficRoadSpline.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRoadSpline.InnerSingleton;
}
// End ScriptStruct FMassTrafficRoadSpline

// Begin ScriptStruct FMassTrafficRoadSplineMapKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficRoadSplineMapKey;
class UScriptStruct* FMassTrafficRoadSplineMapKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRoadSplineMapKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficRoadSplineMapKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficRoadSplineMapKey"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRoadSplineMapKey.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficRoadSplineMapKey>()
{
	return FMassTrafficRoadSplineMapKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadSplineID_MetaData[] = {
		{ "Category", "MassTrafficRoadSplineMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[] = {
		{ "Category", "MassTrafficRoadSplineMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoadSplineID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficRoadSplineMapKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::NewProp_RoadSplineID = { "RoadSplineID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSplineMapKey, RoadSplineID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadSplineID_MetaData), NewProp_RoadSplineID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficRoadSplineMapKey, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_User_MetaData), NewProp_User_MetaData) }; // 353950271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::NewProp_RoadSplineID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::NewProp_User_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::NewProp_User,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficRoadSplineMapKey",
	Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::PropPointers),
	sizeof(FMassTrafficRoadSplineMapKey),
	alignof(FMassTrafficRoadSplineMapKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficRoadSplineMapKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficRoadSplineMapKey.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficRoadSplineMapKey.InnerSingleton;
}
// End ScriptStruct FMassTrafficRoadSplineMapKey

// Begin Enum EMassTrafficSpecialConnectionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficSpecialConnectionType;
static UEnum* EMassTrafficSpecialConnectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficSpecialConnectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassTrafficSpecialConnectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("EMassTrafficSpecialConnectionType"));
	}
	return Z_Registration_Info_UEnum_EMassTrafficSpecialConnectionType.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UEnum* StaticEnum<EMassTrafficSpecialConnectionType>()
{
	return EMassTrafficSpecialConnectionType_StaticEnum();
}
struct Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CityIntersectionLinkConnectsRoadSegmentNeedingToBeBuilt.Name", "EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsRoadSegmentNeedingToBeBuilt" },
		{ "CityIntersectionLinkConnectsToIncomingFreewayRamp.Name", "EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsToIncomingFreewayRamp" },
		{ "CityIntersectionLinkConnectsToOutgoingFreewayRamp.Name", "EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsToOutgoingFreewayRamp" },
		{ "CityIntersectionLinkIsConnectionIsBlocked.Comment", "// No special connection needed.\n" },
		{ "CityIntersectionLinkIsConnectionIsBlocked.Name", "EMassTrafficSpecialConnectionType::CityIntersectionLinkIsConnectionIsBlocked" },
		{ "CityIntersectionLinkIsConnectionIsBlocked.ToolTip", "No special connection needed." },
		{ "FreewayIntersectionLinkConnectsToIncomingFreewayRamp.Name", "EMassTrafficSpecialConnectionType::FreewayIntersectionLinkConnectsToIncomingFreewayRamp" },
		{ "FreewayIntersectionLinkConnectsToOutgoingFreewayRamp.Name", "EMassTrafficSpecialConnectionType::FreewayIntersectionLinkConnectsToOutgoingFreewayRamp" },
		{ "IntersectionLinkConnectsAsStraightLaneAdapter.Name", "EMassTrafficSpecialConnectionType::IntersectionLinkConnectsAsStraightLaneAdapter" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
		{ "None.Name", "EMassTrafficSpecialConnectionType::None" },
		{ "Unknown.Name", "EMassTrafficSpecialConnectionType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassTrafficSpecialConnectionType::None", (int64)EMassTrafficSpecialConnectionType::None },
		{ "EMassTrafficSpecialConnectionType::CityIntersectionLinkIsConnectionIsBlocked", (int64)EMassTrafficSpecialConnectionType::CityIntersectionLinkIsConnectionIsBlocked },
		{ "EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsRoadSegmentNeedingToBeBuilt", (int64)EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsRoadSegmentNeedingToBeBuilt },
		{ "EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsToIncomingFreewayRamp", (int64)EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsToIncomingFreewayRamp },
		{ "EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsToOutgoingFreewayRamp", (int64)EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsToOutgoingFreewayRamp },
		{ "EMassTrafficSpecialConnectionType::FreewayIntersectionLinkConnectsToIncomingFreewayRamp", (int64)EMassTrafficSpecialConnectionType::FreewayIntersectionLinkConnectsToIncomingFreewayRamp },
		{ "EMassTrafficSpecialConnectionType::FreewayIntersectionLinkConnectsToOutgoingFreewayRamp", (int64)EMassTrafficSpecialConnectionType::FreewayIntersectionLinkConnectsToOutgoingFreewayRamp },
		{ "EMassTrafficSpecialConnectionType::IntersectionLinkConnectsAsStraightLaneAdapter", (int64)EMassTrafficSpecialConnectionType::IntersectionLinkConnectsAsStraightLaneAdapter },
		{ "EMassTrafficSpecialConnectionType::Unknown", (int64)EMassTrafficSpecialConnectionType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	"EMassTrafficSpecialConnectionType",
	"EMassTrafficSpecialConnectionType",
	Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficSpecialConnectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficSpecialConnectionType.InnerSingleton, Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassTrafficSpecialConnectionType.InnerSingleton;
}
// End Enum EMassTrafficSpecialConnectionType

// Begin ScriptStruct FMassTrafficIntersectionLink
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficIntersectionLink;
class UScriptStruct* FMassTrafficIntersectionLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficIntersectionLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersectionLink, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficIntersectionLink"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionLink.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficIntersectionLink>()
{
	return FMassTrafficIntersectionLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionID_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionSequenceNumber_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedIntersectionID_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedIntersectionSequenceNumber_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfLanes_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCenterDivider_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneWidthCM_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterDividerWidthCM_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnidirectional_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTrafficLight_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialConnectionType_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightPosition_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDensity_MetaData[] = {
		{ "Category", "MassTrafficIntersectionLink" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntersectionSequenceNumber;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectedIntersectionID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectedIntersectionSequenceNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLanes;
	static void NewProp_bHasCenterDivider_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCenterDivider;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneWidthCM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterDividerWidthCM;
	static void NewProp_bIsUnidirectional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnidirectional;
	static void NewProp_bHasTrafficLight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTrafficLight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpecialConnectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpecialConnectionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLightPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserDensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersectionLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_IntersectionID = { "IntersectionID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, IntersectionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionID_MetaData), NewProp_IntersectionID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_IntersectionSequenceNumber = { "IntersectionSequenceNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, IntersectionSequenceNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionSequenceNumber_MetaData), NewProp_IntersectionSequenceNumber_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FMassTrafficIntersectionLink*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersectionLink), &Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_User_MetaData), NewProp_User_MetaData) }; // 353950271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, Point), Z_Construct_UScriptStruct_FMassTrafficPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) }; // 739101939
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_ConnectedIntersectionID = { "ConnectedIntersectionID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, ConnectedIntersectionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedIntersectionID_MetaData), NewProp_ConnectedIntersectionID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_ConnectedIntersectionSequenceNumber = { "ConnectedIntersectionSequenceNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, ConnectedIntersectionSequenceNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedIntersectionSequenceNumber_MetaData), NewProp_ConnectedIntersectionSequenceNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_NumberOfLanes = { "NumberOfLanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, NumberOfLanes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfLanes_MetaData), NewProp_NumberOfLanes_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bHasCenterDivider_SetBit(void* Obj)
{
	((FMassTrafficIntersectionLink*)Obj)->bHasCenterDivider = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bHasCenterDivider = { "bHasCenterDivider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersectionLink), &Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bHasCenterDivider_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCenterDivider_MetaData), NewProp_bHasCenterDivider_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_LaneWidthCM = { "LaneWidthCM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, LaneWidthCM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneWidthCM_MetaData), NewProp_LaneWidthCM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_CenterDividerWidthCM = { "CenterDividerWidthCM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, CenterDividerWidthCM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterDividerWidthCM_MetaData), NewProp_CenterDividerWidthCM_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bIsUnidirectional_SetBit(void* Obj)
{
	((FMassTrafficIntersectionLink*)Obj)->bIsUnidirectional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bIsUnidirectional = { "bIsUnidirectional", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersectionLink), &Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bIsUnidirectional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUnidirectional_MetaData), NewProp_bIsUnidirectional_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bHasTrafficLight_SetBit(void* Obj)
{
	((FMassTrafficIntersectionLink*)Obj)->bHasTrafficLight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bHasTrafficLight = { "bHasTrafficLight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersectionLink), &Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bHasTrafficLight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTrafficLight_MetaData), NewProp_bHasTrafficLight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_SpecialConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_SpecialConnectionType = { "SpecialConnectionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, SpecialConnectionType), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialConnectionType_MetaData), NewProp_SpecialConnectionType_MetaData) }; // 2891153590
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_TrafficLightPosition = { "TrafficLightPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, TrafficLightPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightPosition_MetaData), NewProp_TrafficLightPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_UserDensity = { "UserDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionLink, UserDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDensity_MetaData), NewProp_UserDensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_IntersectionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_IntersectionSequenceNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_User_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_ConnectedIntersectionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_ConnectedIntersectionSequenceNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_NumberOfLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bHasCenterDivider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_LaneWidthCM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_CenterDividerWidthCM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bIsUnidirectional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_bHasTrafficLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_SpecialConnectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_SpecialConnectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_TrafficLightPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewProp_UserDensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficIntersectionLink",
	Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::PropPointers),
	sizeof(FMassTrafficIntersectionLink),
	alignof(FMassTrafficIntersectionLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionLink()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficIntersectionLink.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionLink.InnerSingleton;
}
// End ScriptStruct FMassTrafficIntersectionLink

// Begin ScriptStruct FMassTrafficIntersection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficIntersection;
class UScriptStruct* FMassTrafficIntersection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficIntersection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersection, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficIntersection"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersection.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficIntersection>()
{
	return FMassTrafficIntersection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionID_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIntersectionID_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// i.e. for pedestrian intersections controled by vehicle intersections. \n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "i.e. for pedestrian intersections controled by vehicle intersections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionLinks_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCenterPointValid_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterPoint_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrosswalk_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanSupportLongVehicles_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFreeway_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMainPartOfFreeway_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFreewayOnramp_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFreewayOfframp_MetaData[] = {
		{ "Category", "MassTrafficIntersection" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentIntersectionID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionLinks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntersectionLinks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static void NewProp_bIsCenterPointValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCenterPointValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterPoint;
	static void NewProp_bIsCrosswalk_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrosswalk;
	static void NewProp_bCanSupportLongVehicles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSupportLongVehicles;
	static void NewProp_bIsFreeway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreeway;
	static void NewProp_bIsMainPartOfFreeway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMainPartOfFreeway;
	static void NewProp_bIsFreewayOnramp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreewayOnramp;
	static void NewProp_bIsFreewayOfframp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreewayOfframp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_IntersectionID = { "IntersectionID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersection, IntersectionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionID_MetaData), NewProp_IntersectionID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_ParentIntersectionID = { "ParentIntersectionID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersection, ParentIntersectionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIntersectionID_MetaData), NewProp_ParentIntersectionID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersection, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_User_MetaData), NewProp_User_MetaData) }; // 353950271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_IntersectionLinks_Inner = { "IntersectionLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficIntersectionLink, METADATA_PARAMS(0, nullptr) }; // 2495598769
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_IntersectionLinks = { "IntersectionLinks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersection, IntersectionLinks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionLinks_MetaData), NewProp_IntersectionLinks_MetaData) }; // 2495598769
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersection, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsCenterPointValid_SetBit(void* Obj)
{
	((FMassTrafficIntersection*)Obj)->bIsCenterPointValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsCenterPointValid = { "bIsCenterPointValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersection), &Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsCenterPointValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCenterPointValid_MetaData), NewProp_bIsCenterPointValid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_CenterPoint = { "CenterPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersection, CenterPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterPoint_MetaData), NewProp_CenterPoint_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsCrosswalk_SetBit(void* Obj)
{
	((FMassTrafficIntersection*)Obj)->bIsCrosswalk = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsCrosswalk = { "bIsCrosswalk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersection), &Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsCrosswalk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrosswalk_MetaData), NewProp_bIsCrosswalk_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bCanSupportLongVehicles_SetBit(void* Obj)
{
	((FMassTrafficIntersection*)Obj)->bCanSupportLongVehicles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bCanSupportLongVehicles = { "bCanSupportLongVehicles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersection), &Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bCanSupportLongVehicles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanSupportLongVehicles_MetaData), NewProp_bCanSupportLongVehicles_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreeway_SetBit(void* Obj)
{
	((FMassTrafficIntersection*)Obj)->bIsFreeway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreeway = { "bIsFreeway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersection), &Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreeway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFreeway_MetaData), NewProp_bIsFreeway_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsMainPartOfFreeway_SetBit(void* Obj)
{
	((FMassTrafficIntersection*)Obj)->bIsMainPartOfFreeway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsMainPartOfFreeway = { "bIsMainPartOfFreeway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersection), &Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsMainPartOfFreeway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMainPartOfFreeway_MetaData), NewProp_bIsMainPartOfFreeway_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreewayOnramp_SetBit(void* Obj)
{
	((FMassTrafficIntersection*)Obj)->bIsFreewayOnramp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreewayOnramp = { "bIsFreewayOnramp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersection), &Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreewayOnramp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFreewayOnramp_MetaData), NewProp_bIsFreewayOnramp_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreewayOfframp_SetBit(void* Obj)
{
	((FMassTrafficIntersection*)Obj)->bIsFreewayOfframp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreewayOfframp = { "bIsFreewayOfframp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersection), &Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreewayOfframp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFreewayOfframp_MetaData), NewProp_bIsFreewayOfframp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_IntersectionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_ParentIntersectionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_User_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_IntersectionLinks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_IntersectionLinks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsCenterPointValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_CenterPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsCrosswalk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bCanSupportLongVehicles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreeway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsMainPartOfFreeway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreewayOnramp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewProp_bIsFreewayOfframp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficIntersection",
	Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::PropPointers),
	sizeof(FMassTrafficIntersection),
	alignof(FMassTrafficIntersection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersection()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficIntersection.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersection.InnerSingleton;
}
// End ScriptStruct FMassTrafficIntersection

// Begin ScriptStruct FMassTrafficIntersectionMapKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficIntersectionMapKey;
class UScriptStruct* FMassTrafficIntersectionMapKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionMapKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficIntersectionMapKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficIntersectionMapKey"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionMapKey.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficIntersectionMapKey>()
{
	return FMassTrafficIntersectionMapKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionID_MetaData[] = {
		{ "Category", "MassTrafficIntersectionMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[] = {
		{ "Category", "MassTrafficIntersectionMapKey" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersectionMapKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::NewProp_IntersectionID = { "IntersectionID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionMapKey, IntersectionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionID_MetaData), NewProp_IntersectionID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionMapKey, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_User_MetaData), NewProp_User_MetaData) }; // 353950271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::NewProp_IntersectionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::NewProp_User_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::NewProp_User,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficIntersectionMapKey",
	Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::PropPointers),
	sizeof(FMassTrafficIntersectionMapKey),
	alignof(FMassTrafficIntersectionMapKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionMapKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficIntersectionMapKey.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionMapKey.InnerSingleton;
}
// End ScriptStruct FMassTrafficIntersectionMapKey

// Begin ScriptStruct FMassTrafficPointHints
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficPointHints;
class UScriptStruct* FMassTrafficPointHints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPointHints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficPointHints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPointHints, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("MassTrafficPointHints"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPointHints.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<FMassTrafficPointHints>()
{
	return FMassTrafficPointHints::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRoadPoint_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRoadSegmentPoint_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRoadSegmentStartPoint_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRoadSegmentEndPoint_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRoadSplinePoint_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIntersectionLinkPoint_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIntersectionCenterPoint_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadSegmentIDs_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadSplineIDs_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionIDs_MetaData[] = {
		{ "Category", "MassTrafficPointHints" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static void NewProp_bIsRoadPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoadPoint;
	static void NewProp_bIsRoadSegmentPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoadSegmentPoint;
	static void NewProp_bIsRoadSegmentStartPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoadSegmentStartPoint;
	static void NewProp_bIsRoadSegmentEndPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoadSegmentEndPoint;
	static void NewProp_bIsRoadSplinePoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoadSplinePoint;
	static void NewProp_bIsIntersectionLinkPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIntersectionLinkPoint;
	static void NewProp_bIsIntersectionCenterPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIntersectionCenterPoint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoadSegmentIDs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RoadSegmentIDs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoadSplineIDs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RoadSplineIDs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionIDs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_IntersectionIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPointHints>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FMassTrafficPointHints*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPointHints), &Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPointHints, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadPoint_SetBit(void* Obj)
{
	((FMassTrafficPointHints*)Obj)->bIsRoadPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadPoint = { "bIsRoadPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPointHints), &Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRoadPoint_MetaData), NewProp_bIsRoadPoint_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentPoint_SetBit(void* Obj)
{
	((FMassTrafficPointHints*)Obj)->bIsRoadSegmentPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentPoint = { "bIsRoadSegmentPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPointHints), &Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRoadSegmentPoint_MetaData), NewProp_bIsRoadSegmentPoint_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentStartPoint_SetBit(void* Obj)
{
	((FMassTrafficPointHints*)Obj)->bIsRoadSegmentStartPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentStartPoint = { "bIsRoadSegmentStartPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPointHints), &Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentStartPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRoadSegmentStartPoint_MetaData), NewProp_bIsRoadSegmentStartPoint_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentEndPoint_SetBit(void* Obj)
{
	((FMassTrafficPointHints*)Obj)->bIsRoadSegmentEndPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentEndPoint = { "bIsRoadSegmentEndPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPointHints), &Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentEndPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRoadSegmentEndPoint_MetaData), NewProp_bIsRoadSegmentEndPoint_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSplinePoint_SetBit(void* Obj)
{
	((FMassTrafficPointHints*)Obj)->bIsRoadSplinePoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSplinePoint = { "bIsRoadSplinePoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPointHints), &Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSplinePoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRoadSplinePoint_MetaData), NewProp_bIsRoadSplinePoint_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsIntersectionLinkPoint_SetBit(void* Obj)
{
	((FMassTrafficPointHints*)Obj)->bIsIntersectionLinkPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsIntersectionLinkPoint = { "bIsIntersectionLinkPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPointHints), &Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsIntersectionLinkPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIntersectionLinkPoint_MetaData), NewProp_bIsIntersectionLinkPoint_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsIntersectionCenterPoint_SetBit(void* Obj)
{
	((FMassTrafficPointHints*)Obj)->bIsIntersectionCenterPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsIntersectionCenterPoint = { "bIsIntersectionCenterPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficPointHints), &Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsIntersectionCenterPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIntersectionCenterPoint_MetaData), NewProp_bIsIntersectionCenterPoint_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_RoadSegmentIDs_ElementProp = { "RoadSegmentIDs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_RoadSegmentIDs = { "RoadSegmentIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPointHints, RoadSegmentIDs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadSegmentIDs_MetaData), NewProp_RoadSegmentIDs_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_RoadSplineIDs_ElementProp = { "RoadSplineIDs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_RoadSplineIDs = { "RoadSplineIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPointHints, RoadSplineIDs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadSplineIDs_MetaData), NewProp_RoadSplineIDs_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_IntersectionIDs_ElementProp = { "IntersectionIDs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_IntersectionIDs = { "IntersectionIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPointHints, IntersectionIDs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionIDs_MetaData), NewProp_IntersectionIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentStartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSegmentEndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsRoadSplinePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsIntersectionLinkPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_bIsIntersectionCenterPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_RoadSegmentIDs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_RoadSegmentIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_RoadSplineIDs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_RoadSplineIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_IntersectionIDs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewProp_IntersectionIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	&NewStructOps,
	"MassTrafficPointHints",
	Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::PropPointers),
	sizeof(FMassTrafficPointHints),
	alignof(FMassTrafficPointHints),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPointHints()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficPointHints.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficPointHints.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficPointHints.InnerSingleton;
}
// End ScriptStruct FMassTrafficPointHints

// Begin Enum EMassTrafficBuildType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficBuildType;
static UEnum* EMassTrafficBuildType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficBuildType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassTrafficBuildType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("EMassTrafficBuildType"));
	}
	return Z_Registration_Info_UEnum_EMassTrafficBuildType.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UEnum* StaticEnum<EMassTrafficBuildType>()
{
	return EMassTrafficBuildType_StaticEnum();
}
struct Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Actors.Name", "EMassTrafficBuildType::Actors" },
		{ "BlueprintType", "true" },
		{ "Components.Name", "EMassTrafficBuildType::Components" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassTrafficBuildType::Components", (int64)EMassTrafficBuildType::Components },
		{ "EMassTrafficBuildType::Actors", (int64)EMassTrafficBuildType::Actors },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	nullptr,
	"EMassTrafficBuildType",
	"EMassTrafficBuildType",
	Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficBuildType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficBuildType.InnerSingleton, Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassTrafficBuildType.InnerSingleton;
}
// End Enum EMassTrafficBuildType

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMassTrafficUser_StaticEnum, TEXT("EMassTrafficUser"), &Z_Registration_Info_UEnum_EMassTrafficUser, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 353950271U) },
		{ EMassTrafficSpecialConnectionType_StaticEnum, TEXT("EMassTrafficSpecialConnectionType"), &Z_Registration_Info_UEnum_EMassTrafficSpecialConnectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2891153590U) },
		{ EMassTrafficBuildType_StaticEnum, TEXT("EMassTrafficBuildType"), &Z_Registration_Info_UEnum_EMassTrafficBuildType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2572681986U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficExplicitLaneProfileRefMapKey::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics::NewStructOps, TEXT("MassTrafficExplicitLaneProfileRefMapKey"), &Z_Registration_Info_UScriptStruct_MassTrafficExplicitLaneProfileRefMapKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficExplicitLaneProfileRefMapKey), 2266203288U) },
		{ FMassTrafficDebugPoint::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics::NewStructOps, TEXT("MassTrafficDebugPoint"), &Z_Registration_Info_UScriptStruct_MassTrafficDebugPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficDebugPoint), 677498209U) },
		{ FMassTrafficDebugLineSegment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics::NewStructOps, TEXT("MassTrafficDebugLineSegment"), &Z_Registration_Info_UScriptStruct_MassTrafficDebugLineSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficDebugLineSegment), 2008845036U) },
		{ FMassTrafficPoint::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPoint_Statics::NewStructOps, TEXT("MassTrafficPoint"), &Z_Registration_Info_UScriptStruct_MassTrafficPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPoint), 739101939U) },
		{ FMassTrafficRoadSegment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics::NewStructOps, TEXT("MassTrafficRoadSegment"), &Z_Registration_Info_UScriptStruct_MassTrafficRoadSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficRoadSegment), 592248565U) },
		{ FMassTrafficRoadSegmentMapKey::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics::NewStructOps, TEXT("MassTrafficRoadSegmentMapKey"), &Z_Registration_Info_UScriptStruct_MassTrafficRoadSegmentMapKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficRoadSegmentMapKey), 56204210U) },
		{ FMassTrafficRoadSpline::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics::NewStructOps, TEXT("MassTrafficRoadSpline"), &Z_Registration_Info_UScriptStruct_MassTrafficRoadSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficRoadSpline), 3531694550U) },
		{ FMassTrafficRoadSplineMapKey::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics::NewStructOps, TEXT("MassTrafficRoadSplineMapKey"), &Z_Registration_Info_UScriptStruct_MassTrafficRoadSplineMapKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficRoadSplineMapKey), 3047444807U) },
		{ FMassTrafficIntersectionLink::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics::NewStructOps, TEXT("MassTrafficIntersectionLink"), &Z_Registration_Info_UScriptStruct_MassTrafficIntersectionLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersectionLink), 2495598769U) },
		{ FMassTrafficIntersection::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics::NewStructOps, TEXT("MassTrafficIntersection"), &Z_Registration_Info_UScriptStruct_MassTrafficIntersection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersection), 3459031300U) },
		{ FMassTrafficIntersectionMapKey::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics::NewStructOps, TEXT("MassTrafficIntersectionMapKey"), &Z_Registration_Info_UScriptStruct_MassTrafficIntersectionMapKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersectionMapKey), 2056848307U) },
		{ FMassTrafficPointHints::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics::NewStructOps, TEXT("MassTrafficPointHints"), &Z_Registration_Info_UScriptStruct_MassTrafficPointHints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPointHints), 1609919926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_4175016701(TEXT("/Script/MassTrafficEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
