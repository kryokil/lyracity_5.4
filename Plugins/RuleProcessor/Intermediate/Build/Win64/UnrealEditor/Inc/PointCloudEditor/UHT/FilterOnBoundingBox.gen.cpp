// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/FilterOnBoundingBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterOnBoundingBox() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UBoundingBoxFilterRule();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UBoundingBoxFilterRule_NoRegister();
POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin ScriptStruct FBoundingBoxFilterRuleData
static_assert(std::is_polymorphic<FBoundingBoxFilterRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FBoundingBoxFilterRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData;
class UScriptStruct* FBoundingBoxFilterRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("BoundingBoxFilterRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FBoundingBoxFilterRuleData>()
{
	return FBoundingBoxFilterRuleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnBoundingBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "BoundingBoxFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnBoundingBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[] = {
		{ "Category", "BoundingBoxFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnBoundingBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoundingBoxFilterRuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoundingBoxFilterRuleData, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoundingBoxFilterRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamePattern_MetaData), NewProp_NamePattern_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_NamePattern,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	Z_Construct_UScriptStruct_FPointCloudRuleData,
	&NewStructOps,
	"BoundingBoxFilterRuleData",
	Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::PropPointers),
	sizeof(FBoundingBoxFilterRuleData),
	alignof(FBoundingBoxFilterRuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData()
{
	if (!Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.InnerSingleton, Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.InnerSingleton;
}
// End ScriptStruct FBoundingBoxFilterRuleData

// Begin Class UBoundingBoxFilterRule
void UBoundingBoxFilterRule::StaticRegisterNativesUBoundingBoxFilterRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoundingBoxFilterRule);
UClass* Z_Construct_UClass_UBoundingBoxFilterRule_NoRegister()
{
	return UBoundingBoxFilterRule::StaticClass();
}
struct Z_Construct_UClass_UBoundingBoxFilterRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/FilterOnBoundingBox.h" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnBoundingBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnBoundingBox.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoundingBoxFilterRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoundingBoxFilterRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoundingBoxFilterRule, Data), Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3150756816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoundingBoxFilterRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundingBoxFilterRule_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundingBoxFilterRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBoundingBoxFilterRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundingBoxFilterRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoundingBoxFilterRule_Statics::ClassParams = {
	&UBoundingBoxFilterRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBoundingBoxFilterRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBoundingBoxFilterRule_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundingBoxFilterRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoundingBoxFilterRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoundingBoxFilterRule()
{
	if (!Z_Registration_Info_UClass_UBoundingBoxFilterRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoundingBoxFilterRule.OuterSingleton, Z_Construct_UClass_UBoundingBoxFilterRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoundingBoxFilterRule.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UBoundingBoxFilterRule>()
{
	return UBoundingBoxFilterRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoundingBoxFilterRule);
UBoundingBoxFilterRule::~UBoundingBoxFilterRule() {}
// End Class UBoundingBoxFilterRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoundingBoxFilterRuleData::StaticStruct, Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewStructOps, TEXT("BoundingBoxFilterRuleData"), &Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoundingBoxFilterRuleData), 3150756816U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoundingBoxFilterRule, UBoundingBoxFilterRule::StaticClass, TEXT("UBoundingBoxFilterRule"), &Z_Registration_Info_UClass_UBoundingBoxFilterRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoundingBoxFilterRule), 100557177U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_365090781(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
