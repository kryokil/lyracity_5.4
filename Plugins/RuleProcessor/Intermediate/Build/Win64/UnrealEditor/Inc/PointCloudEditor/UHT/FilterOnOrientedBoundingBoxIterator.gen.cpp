// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/FilterOnOrientedBoundingBoxIterator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterOnOrientedBoundingBoxIterator() {}

// Begin Cross Module References
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_NoRegister();
POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin ScriptStruct FFilterOnOrientedBoundingBoxIteratorData
static_assert(std::is_polymorphic<FFilterOnOrientedBoundingBoxIteratorData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FFilterOnOrientedBoundingBoxIteratorData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData;
class UScriptStruct* FFilterOnOrientedBoundingBoxIteratorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("FilterOnOrientedBoundingBoxIteratorData"));
	}
	return Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FFilterOnOrientedBoundingBoxIteratorData>()
{
	return FFilterOnOrientedBoundingBoxIteratorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnOrientedBoundingBoxIterator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[] = {
		{ "Category", "FilterOnOrientedBoundingBoxIteratorData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnOrientedBoundingBoxIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilterOnOrientedBoundingBoxIteratorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFilterOnOrientedBoundingBoxIteratorData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamePattern_MetaData), NewProp_NamePattern_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::NewProp_NamePattern,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	Z_Construct_UScriptStruct_FPointCloudRuleData,
	&NewStructOps,
	"FilterOnOrientedBoundingBoxIteratorData",
	Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::PropPointers),
	sizeof(FFilterOnOrientedBoundingBoxIteratorData),
	alignof(FFilterOnOrientedBoundingBoxIteratorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData()
{
	if (!Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.InnerSingleton, Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.InnerSingleton;
}
// End ScriptStruct FFilterOnOrientedBoundingBoxIteratorData

// Begin Class UFilterOnOrientedBoundingBoxIterator
void UFilterOnOrientedBoundingBoxIterator::StaticRegisterNativesUFilterOnOrientedBoundingBoxIterator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilterOnOrientedBoundingBoxIterator);
UClass* Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_NoRegister()
{
	return UFilterOnOrientedBoundingBoxIterator::StaticClass();
}
struct Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/FilterOnOrientedBoundingBoxIterator.h" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnOrientedBoundingBoxIterator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OBBNameRegex_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnOrientedBoundingBoxIterator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnOrientedBoundingBoxIterator.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OBBNameRegex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilterOnOrientedBoundingBoxIterator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_OBBNameRegex = { "OBBNameRegex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilterOnOrientedBoundingBoxIterator, OBBNameRegex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OBBNameRegex_MetaData), NewProp_OBBNameRegex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilterOnOrientedBoundingBoxIterator, Data), Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1462572333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_OBBNameRegex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::ClassParams = {
	&UFilterOnOrientedBoundingBoxIterator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::Class_MetaDataParams), Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator()
{
	if (!Z_Registration_Info_UClass_UFilterOnOrientedBoundingBoxIterator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilterOnOrientedBoundingBoxIterator.OuterSingleton, Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFilterOnOrientedBoundingBoxIterator.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UFilterOnOrientedBoundingBoxIterator>()
{
	return UFilterOnOrientedBoundingBoxIterator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFilterOnOrientedBoundingBoxIterator);
UFilterOnOrientedBoundingBoxIterator::~UFilterOnOrientedBoundingBoxIterator() {}
// End Class UFilterOnOrientedBoundingBoxIterator

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFilterOnOrientedBoundingBoxIteratorData::StaticStruct, Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::NewStructOps, TEXT("FilterOnOrientedBoundingBoxIteratorData"), &Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFilterOnOrientedBoundingBoxIteratorData), 1462572333U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator, UFilterOnOrientedBoundingBoxIterator::StaticClass, TEXT("UFilterOnOrientedBoundingBoxIterator"), &Z_Registration_Info_UClass_UFilterOnOrientedBoundingBoxIterator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilterOnOrientedBoundingBoxIterator), 1148480614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_2696212921(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
