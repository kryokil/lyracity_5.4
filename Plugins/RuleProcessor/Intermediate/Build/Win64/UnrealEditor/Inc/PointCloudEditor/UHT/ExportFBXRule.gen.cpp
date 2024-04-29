// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/ExportFBXRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportFBXRule() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UExportFBXRule();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UExportFBXRule_NoRegister();
POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FExportFBXRuleData();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin ScriptStruct FExportFBXRuleData
static_assert(std::is_polymorphic<FExportFBXRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FExportFBXRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExportFBXRuleData;
class UScriptStruct* FExportFBXRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExportFBXRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExportFBXRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExportFBXRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("ExportFBXRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_ExportFBXRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FExportFBXRuleData>()
{
	return FExportFBXRuleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExportFBXRuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[] = {
		{ "Category", "ExportFBXRuleData" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportDirectory_MetaData[] = {
		{ "Category", "ExportFBXRuleData" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverwriteExistingFile_MetaData[] = {
		{ "Category", "ExportFBXRuleData" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomated_MetaData[] = {
		{ "Category", "ExportFBXRuleData" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExportDirectory;
	static void NewProp_bOverwriteExistingFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteExistingFile;
	static void NewProp_bAutomated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExportFBXRuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportFBXRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamePattern_MetaData), NewProp_NamePattern_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_ExportDirectory = { "ExportDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExportFBXRuleData, ExportDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportDirectory_MetaData), NewProp_ExportDirectory_MetaData) };
void Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bOverwriteExistingFile_SetBit(void* Obj)
{
	((FExportFBXRuleData*)Obj)->bOverwriteExistingFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bOverwriteExistingFile = { "bOverwriteExistingFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FExportFBXRuleData), &Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bOverwriteExistingFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverwriteExistingFile_MetaData), NewProp_bOverwriteExistingFile_MetaData) };
void Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bAutomated_SetBit(void* Obj)
{
	((FExportFBXRuleData*)Obj)->bAutomated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bAutomated = { "bAutomated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FExportFBXRuleData), &Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bAutomated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomated_MetaData), NewProp_bAutomated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_NamePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_ExportDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bOverwriteExistingFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewProp_bAutomated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	Z_Construct_UScriptStruct_FPointCloudRuleData,
	&NewStructOps,
	"ExportFBXRuleData",
	Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::PropPointers),
	sizeof(FExportFBXRuleData),
	alignof(FExportFBXRuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExportFBXRuleData()
{
	if (!Z_Registration_Info_UScriptStruct_ExportFBXRuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExportFBXRuleData.InnerSingleton, Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExportFBXRuleData.InnerSingleton;
}
// End ScriptStruct FExportFBXRuleData

// Begin Class UExportFBXRule
void UExportFBXRule::StaticRegisterNativesUExportFBXRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExportFBXRule);
UClass* Z_Construct_UClass_UExportFBXRule_NoRegister()
{
	return UExportFBXRule::StaticClass();
}
struct Z_Construct_UClass_UExportFBXRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/ExportFBXRule.h" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/ExportFBXRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportFBXRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportFBXRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExportFBXRule, Data), Z_Construct_UScriptStruct_FExportFBXRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3342935885
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExportFBXRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportFBXRule_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExportFBXRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExportFBXRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExportFBXRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExportFBXRule_Statics::ClassParams = {
	&UExportFBXRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExportFBXRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExportFBXRule_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExportFBXRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UExportFBXRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExportFBXRule()
{
	if (!Z_Registration_Info_UClass_UExportFBXRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExportFBXRule.OuterSingleton, Z_Construct_UClass_UExportFBXRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExportFBXRule.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UExportFBXRule>()
{
	return UExportFBXRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExportFBXRule);
UExportFBXRule::~UExportFBXRule() {}
// End Class UExportFBXRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FExportFBXRuleData::StaticStruct, Z_Construct_UScriptStruct_FExportFBXRuleData_Statics::NewStructOps, TEXT("ExportFBXRuleData"), &Z_Registration_Info_UScriptStruct_ExportFBXRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExportFBXRuleData), 3342935885U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExportFBXRule, UExportFBXRule::StaticClass, TEXT("UExportFBXRule"), &Z_Registration_Info_UClass_UExportFBXRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExportFBXRule), 3413165166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_705900687(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExportFBXRule_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
