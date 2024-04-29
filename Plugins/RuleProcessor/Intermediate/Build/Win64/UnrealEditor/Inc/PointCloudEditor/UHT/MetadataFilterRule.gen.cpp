// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/MetadataFilterRule.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetadataFilterRule() {}

// Begin Cross Module References
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UMetadataFilterRule();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UMetadataFilterRule_NoRegister();
POINTCLOUDEDITOR_API UEnum* Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType();
POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetadataFilterRuleData();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin Enum EPointCloudMetadataFilterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPointCloudMetadataFilterType;
static UEnum* EPointCloudMetadataFilterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("EPointCloudMetadataFilterType"));
	}
	return Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UEnum* StaticEnum<EPointCloudMetadataFilterType>()
{
	return EPointCloudMetadataFilterType_StaticEnum();
}
struct Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
		{ "Pattern.DisplayName", "Matches against Pattern" },
		{ "Pattern.Name", "EPointCloudMetadataFilterType::Pattern" },
		{ "Value.DisplayName", "Matches the given value exactly" },
		{ "Value.Name", "EPointCloudMetadataFilterType::Value" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPointCloudMetadataFilterType::Value", (int64)EPointCloudMetadataFilterType::Value },
		{ "EPointCloudMetadataFilterType::Pattern", (int64)EPointCloudMetadataFilterType::Pattern },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PointCloudEditor,
	nullptr,
	"EPointCloudMetadataFilterType",
	"EPointCloudMetadataFilterType",
	Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType()
{
	if (!Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.InnerSingleton, Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.InnerSingleton;
}
// End Enum EPointCloudMetadataFilterType

// Begin ScriptStruct FMetadataFilterRuleData
static_assert(std::is_polymorphic<FMetadataFilterRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FMetadataFilterRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetadataFilterRuleData;
class UScriptStruct* FMetadataFilterRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetadataFilterRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("MetadataFilterRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FMetadataFilterRuleData>()
{
	return FMetadataFilterRuleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "MetadataFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Making this invisible as it is deprecated\n" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Value And Row Key Map Instead" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Making this invisible as it is deprecated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueAndRowKeyMap_MetaData[] = {
		{ "Category", "MetadataFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
		{ "Category", "MetadataFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueAndRowKeyMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueAndRowKeyMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ValueAndRowKeyMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FilterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetadataFilterRuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataFilterRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamePattern_MetaData), NewProp_NamePattern_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataFilterRuleData, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataFilterRuleData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap_ValueProp = { "ValueAndRowKeyMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap_Key_KeyProp = { "ValueAndRowKeyMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap = { "ValueAndRowKeyMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataFilterRuleData, ValueAndRowKeyMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueAndRowKeyMap_MetaData), NewProp_ValueAndRowKeyMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataFilterRuleData, FilterType), Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterType_MetaData), NewProp_FilterType_MetaData) }; // 3242005620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_NamePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_FilterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_FilterType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	Z_Construct_UScriptStruct_FPointCloudRuleData,
	&NewStructOps,
	"MetadataFilterRuleData",
	Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::PropPointers),
	sizeof(FMetadataFilterRuleData),
	alignof(FMetadataFilterRuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetadataFilterRuleData()
{
	if (!Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.InnerSingleton, Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.InnerSingleton;
}
// End ScriptStruct FMetadataFilterRuleData

// Begin Class UMetadataFilterRule
void UMetadataFilterRule::StaticRegisterNativesUMetadataFilterRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetadataFilterRule);
UClass* Z_Construct_UClass_UMetadataFilterRule_NoRegister()
{
	return UMetadataFilterRule::StaticClass();
}
struct Z_Construct_UClass_UMetadataFilterRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/MetadataFilterRule.h" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetadataFilterRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetadataFilterRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetadataFilterRule, Data), Z_Construct_UScriptStruct_FMetadataFilterRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4079259816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetadataFilterRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetadataFilterRule_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataFilterRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetadataFilterRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataFilterRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetadataFilterRule_Statics::ClassParams = {
	&UMetadataFilterRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMetadataFilterRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataFilterRule_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataFilterRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetadataFilterRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetadataFilterRule()
{
	if (!Z_Registration_Info_UClass_UMetadataFilterRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetadataFilterRule.OuterSingleton, Z_Construct_UClass_UMetadataFilterRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetadataFilterRule.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UMetadataFilterRule>()
{
	return UMetadataFilterRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetadataFilterRule);
UMetadataFilterRule::~UMetadataFilterRule() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMetadataFilterRule)
// End Class UMetadataFilterRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPointCloudMetadataFilterType_StaticEnum, TEXT("EPointCloudMetadataFilterType"), &Z_Registration_Info_UEnum_EPointCloudMetadataFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3242005620U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMetadataFilterRuleData::StaticStruct, Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewStructOps, TEXT("MetadataFilterRuleData"), &Z_Registration_Info_UScriptStruct_MetadataFilterRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetadataFilterRuleData), 4079259816U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetadataFilterRule, UMetadataFilterRule::StaticClass, TEXT("UMetadataFilterRule"), &Z_Registration_Info_UClass_UMetadataFilterRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetadataFilterRule), 4109107081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_3151887537(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
