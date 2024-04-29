// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Public/PointCloudSliceAndDiceRulesEditorOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceRulesEditorOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior();
POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudReportLevel();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_NoRegister();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin Class UPointCloudSliceAndDiceRulesEditorOptions
void UPointCloudSliceAndDiceRulesEditorOptions::StaticRegisterNativesUPointCloudSliceAndDiceRulesEditorOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudSliceAndDiceRulesEditorOptions);
UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_NoRegister()
{
	return UPointCloudSliceAndDiceRulesEditorOptions::StaticClass();
}
struct Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Class to hold properties and methods implementing Slice And DIce Toolkit methods\n */" },
#endif
		{ "IncludePath", "PointCloudSliceAndDiceRulesEditorOptions.h" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRulesEditorOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to hold properties and methods implementing Slice And DIce Toolkit methods" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoggingEnabled_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls whether we'll enable logging in the rules or not */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRulesEditorOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls whether we'll enable logging in the rules or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportingLevel_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls the verbosity of the reporting */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRulesEditorOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the verbosity of the reporting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadBehavior_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls the reload behavior for Point Clouds */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRulesEditorOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the reload behavior for Point Clouds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogPath_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls where the logs will be written to, if any */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRulesEditorOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls where the logs will be written to, if any" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bLoggingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoggingEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReportingLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReportingLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReloadBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReloadBehavior;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudSliceAndDiceRulesEditorOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_bLoggingEnabled_SetBit(void* Obj)
{
	((UPointCloudSliceAndDiceRulesEditorOptions*)Obj)->bLoggingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_bLoggingEnabled = { "bLoggingEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPointCloudSliceAndDiceRulesEditorOptions), &Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_bLoggingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoggingEnabled_MetaData), NewProp_bLoggingEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_ReportingLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_ReportingLevel = { "ReportingLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudSliceAndDiceRulesEditorOptions, ReportingLevel), Z_Construct_UEnum_PointCloud_EPointCloudReportLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportingLevel_MetaData), NewProp_ReportingLevel_MetaData) }; // 1667907366
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_ReloadBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_ReloadBehavior = { "ReloadBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudSliceAndDiceRulesEditorOptions, ReloadBehavior), Z_Construct_UEnum_PointCloud_EPointCloudReloadBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadBehavior_MetaData), NewProp_ReloadBehavior_MetaData) }; // 130740866
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_LogPath = { "LogPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudSliceAndDiceRulesEditorOptions, LogPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogPath_MetaData), NewProp_LogPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_bLoggingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_ReportingLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_ReportingLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_ReloadBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_ReloadBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::NewProp_LogPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::ClassParams = {
	&UPointCloudSliceAndDiceRulesEditorOptions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions()
{
	if (!Z_Registration_Info_UClass_UPointCloudSliceAndDiceRulesEditorOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudSliceAndDiceRulesEditorOptions.OuterSingleton, Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPointCloudSliceAndDiceRulesEditorOptions.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UPointCloudSliceAndDiceRulesEditorOptions>()
{
	return UPointCloudSliceAndDiceRulesEditorOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudSliceAndDiceRulesEditorOptions);
UPointCloudSliceAndDiceRulesEditorOptions::~UPointCloudSliceAndDiceRulesEditorOptions() {}
// End Class UPointCloudSliceAndDiceRulesEditorOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudSliceAndDiceRulesEditorOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudSliceAndDiceRulesEditorOptions, UPointCloudSliceAndDiceRulesEditorOptions::StaticClass, TEXT("UPointCloudSliceAndDiceRulesEditorOptions"), &Z_Registration_Info_UClass_UPointCloudSliceAndDiceRulesEditorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudSliceAndDiceRulesEditorOptions), 1895602910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudSliceAndDiceRulesEditorOptions_h_1817536334(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudSliceAndDiceRulesEditorOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudSliceAndDiceRulesEditorOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
