// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/MetadataIteratorRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetadataIteratorRule() {}

// Begin Cross Module References
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UMetadataIteratorRule();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UMetadataIteratorRule_NoRegister();
POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetadataIteratorRuleData();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin ScriptStruct FMetadataIteratorRuleData
static_assert(std::is_polymorphic<FMetadataIteratorRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FMetadataIteratorRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetadataIteratorRuleData;
class UScriptStruct* FMetadataIteratorRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetadataIteratorRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetadataIteratorRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetadataIteratorRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("MetadataIteratorRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_MetadataIteratorRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FMetadataIteratorRuleData>()
{
	return FMetadataIteratorRuleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/MetadataIteratorRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/MetadataIteratorRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetadataKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/MetadataIteratorRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetadataValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// this is used by the hidden rule for filtering but we don't it to be visible to the user\n" },
#endif
		{ "ModuleRelativePath", "Private/Rules/MetadataIteratorRule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this is used by the hidden rule for filtering but we don't it to be visible to the user" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetadataIteratorRuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataIteratorRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamePattern_MetaData), NewProp_NamePattern_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::NewProp_MetadataKey = { "MetadataKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataIteratorRuleData, MetadataKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetadataKey_MetaData), NewProp_MetadataKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::NewProp_MetadataValue = { "MetadataValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataIteratorRuleData, MetadataValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetadataValue_MetaData), NewProp_MetadataValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::NewProp_NamePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::NewProp_MetadataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::NewProp_MetadataValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	Z_Construct_UScriptStruct_FPointCloudRuleData,
	&NewStructOps,
	"MetadataIteratorRuleData",
	Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::PropPointers),
	sizeof(FMetadataIteratorRuleData),
	alignof(FMetadataIteratorRuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetadataIteratorRuleData()
{
	if (!Z_Registration_Info_UScriptStruct_MetadataIteratorRuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetadataIteratorRuleData.InnerSingleton, Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetadataIteratorRuleData.InnerSingleton;
}
// End ScriptStruct FMetadataIteratorRuleData

// Begin Class UMetadataIteratorRule
void UMetadataIteratorRule::StaticRegisterNativesUMetadataIteratorRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetadataIteratorRule);
UClass* Z_Construct_UClass_UMetadataIteratorRule_NoRegister()
{
	return UMetadataIteratorRule::StaticClass();
}
struct Z_Construct_UClass_UMetadataIteratorRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/MetadataIteratorRule.h" },
		{ "ModuleRelativePath", "Private/Rules/MetadataIteratorRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/MetadataIteratorRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetadataIteratorRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetadataIteratorRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetadataIteratorRule, Data), Z_Construct_UScriptStruct_FMetadataIteratorRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2785473026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetadataIteratorRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetadataIteratorRule_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataIteratorRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetadataIteratorRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataIteratorRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetadataIteratorRule_Statics::ClassParams = {
	&UMetadataIteratorRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMetadataIteratorRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataIteratorRule_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataIteratorRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetadataIteratorRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetadataIteratorRule()
{
	if (!Z_Registration_Info_UClass_UMetadataIteratorRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetadataIteratorRule.OuterSingleton, Z_Construct_UClass_UMetadataIteratorRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetadataIteratorRule.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UMetadataIteratorRule>()
{
	return UMetadataIteratorRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetadataIteratorRule);
UMetadataIteratorRule::~UMetadataIteratorRule() {}
// End Class UMetadataIteratorRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataIteratorRule_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMetadataIteratorRuleData::StaticStruct, Z_Construct_UScriptStruct_FMetadataIteratorRuleData_Statics::NewStructOps, TEXT("MetadataIteratorRuleData"), &Z_Registration_Info_UScriptStruct_MetadataIteratorRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetadataIteratorRuleData), 2785473026U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetadataIteratorRule, UMetadataIteratorRule::StaticClass, TEXT("UMetadataIteratorRule"), &Z_Registration_Info_UClass_UMetadataIteratorRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetadataIteratorRule), 1503101813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataIteratorRule_h_2812903155(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataIteratorRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataIteratorRule_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataIteratorRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataIteratorRule_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
