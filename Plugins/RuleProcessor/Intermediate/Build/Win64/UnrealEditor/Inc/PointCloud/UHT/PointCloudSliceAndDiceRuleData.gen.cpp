// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudSliceAndDiceRuleData.h"
#include "PointCloud/Public/PointCloudSliceAndDiceCustomOverrides.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceRuleData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FCustomOverrides();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References

// Begin ScriptStruct FPointCloudRuleData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointCloudRuleData;
class UScriptStruct* FPointCloudRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointCloudRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointCloudRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointCloudRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("PointCloudRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_PointCloudRuleData.OuterSingleton;
}
template<> POINTCLOUD_API UScriptStruct* StaticStruct<FPointCloudRuleData>()
{
	return FPointCloudRuleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPointCloudRuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Anonymous property so we can target rules to different world */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anonymous property so we can target rules to different world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOverrides_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** User defined custom overrides */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleData.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User defined custom overrides" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideableProperties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds list of properties that can be overridden upstream in this rule data */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds list of properties that can be overridden upstream in this rule data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverridenProperties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds list of properties that are overridden for downstream rule data */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds list of properties that are overridden for downstream rule data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOverrides;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideableProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideableProperties;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverridenProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverridenProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointCloudRuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudRuleData, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_CustomOverrides = { "CustomOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudRuleData, CustomOverrides), Z_Construct_UScriptStruct_FCustomOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOverrides_MetaData), NewProp_CustomOverrides_MetaData) }; // 2401021983
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_OverrideableProperties_Inner = { "OverrideableProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_OverrideableProperties = { "OverrideableProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudRuleData, OverrideableProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideableProperties_MetaData), NewProp_OverrideableProperties_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_OverridenProperties_Inner = { "OverridenProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_OverridenProperties = { "OverridenProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudRuleData, OverridenProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverridenProperties_MetaData), NewProp_OverridenProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_CustomOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_OverrideableProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_OverrideableProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_OverridenProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewProp_OverridenProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	nullptr,
	&NewStructOps,
	"PointCloudRuleData",
	Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::PropPointers),
	sizeof(FPointCloudRuleData),
	alignof(FPointCloudRuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData()
{
	if (!Z_Registration_Info_UScriptStruct_PointCloudRuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointCloudRuleData.InnerSingleton, Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PointCloudRuleData.InnerSingleton;
}
// End ScriptStruct FPointCloudRuleData

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPointCloudRuleData::StaticStruct, Z_Construct_UScriptStruct_FPointCloudRuleData_Statics::NewStructOps, TEXT("PointCloudRuleData"), &Z_Registration_Info_UScriptStruct_PointCloudRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointCloudRuleData), 1637228041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleData_h_4149560496(TEXT("/Script/PointCloud"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS