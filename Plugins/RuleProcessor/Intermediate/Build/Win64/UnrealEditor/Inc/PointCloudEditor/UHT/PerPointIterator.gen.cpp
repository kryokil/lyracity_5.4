// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/PerPointIterator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerPointIterator() {}

// Begin Cross Module References
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPerPointIterator();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPerPointIterator_NoRegister();
POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPerPointIteratorData();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin ScriptStruct FPerPointIteratorData
static_assert(std::is_polymorphic<FPerPointIteratorData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FPerPointIteratorData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerPointIteratorData;
class UScriptStruct* FPerPointIteratorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerPointIteratorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerPointIteratorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPointIteratorData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("PerPointIteratorData"));
	}
	return Z_Registration_Info_UScriptStruct_PerPointIteratorData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FPerPointIteratorData>()
{
	return FPerPointIteratorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerPointIteratorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/PerPointIterator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[] = {
		{ "Category", "PerPointIteratorData" },
		{ "ModuleRelativePath", "Private/Rules/PerPointIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPointIteratorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerPointIteratorData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerPointIteratorData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamePattern_MetaData), NewProp_NamePattern_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPointIteratorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPointIteratorData_Statics::NewProp_NamePattern,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPointIteratorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPointIteratorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	Z_Construct_UScriptStruct_FPointCloudRuleData,
	&NewStructOps,
	"PerPointIteratorData",
	Z_Construct_UScriptStruct_FPerPointIteratorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPointIteratorData_Statics::PropPointers),
	sizeof(FPerPointIteratorData),
	alignof(FPerPointIteratorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPointIteratorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerPointIteratorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerPointIteratorData()
{
	if (!Z_Registration_Info_UScriptStruct_PerPointIteratorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerPointIteratorData.InnerSingleton, Z_Construct_UScriptStruct_FPerPointIteratorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerPointIteratorData.InnerSingleton;
}
// End ScriptStruct FPerPointIteratorData

// Begin Class UPerPointIterator
void UPerPointIterator::StaticRegisterNativesUPerPointIterator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerPointIterator);
UClass* Z_Construct_UClass_UPerPointIterator_NoRegister()
{
	return UPerPointIterator::StaticClass();
}
struct Z_Construct_UClass_UPerPointIterator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/PerPointIterator.h" },
		{ "ModuleRelativePath", "Private/Rules/PerPointIterator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/PerPointIterator.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerPointIterator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerPointIterator_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerPointIterator, Data), Z_Construct_UScriptStruct_FPerPointIteratorData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 664882798
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerPointIterator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerPointIterator_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerPointIterator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPerPointIterator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerPointIterator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerPointIterator_Statics::ClassParams = {
	&UPerPointIterator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPerPointIterator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPerPointIterator_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerPointIterator_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerPointIterator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerPointIterator()
{
	if (!Z_Registration_Info_UClass_UPerPointIterator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerPointIterator.OuterSingleton, Z_Construct_UClass_UPerPointIterator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerPointIterator.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UPerPointIterator>()
{
	return UPerPointIterator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerPointIterator);
UPerPointIterator::~UPerPointIterator() {}
// End Class UPerPointIterator

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_PerPointIterator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPerPointIteratorData::StaticStruct, Z_Construct_UScriptStruct_FPerPointIteratorData_Statics::NewStructOps, TEXT("PerPointIteratorData"), &Z_Registration_Info_UScriptStruct_PerPointIteratorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerPointIteratorData), 664882798U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerPointIterator, UPerPointIterator::StaticClass, TEXT("UPerPointIterator"), &Z_Registration_Info_UClass_UPerPointIterator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerPointIterator), 3183556650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_PerPointIterator_h_2876832209(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_PerPointIterator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_PerPointIterator_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_PerPointIterator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_PerPointIterator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
