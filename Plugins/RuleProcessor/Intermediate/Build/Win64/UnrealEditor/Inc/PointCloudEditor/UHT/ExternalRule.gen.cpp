// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/ExternalRule.h"
#include "PointCloud/Public/PointCloudSliceAndDiceRuleData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalRule() {}

// Begin Cross Module References
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_NoRegister();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UExternalRule();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UExternalRule_NoRegister();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin Class UExternalRule
void UExternalRule::StaticRegisterNativesUExternalRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExternalRule);
UClass* Z_Construct_UClass_UExternalRule_NoRegister()
{
	return UExternalRule::StaticClass();
}
struct Z_Construct_UClass_UExternalRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/ExternalRule.h" },
		{ "ModuleRelativePath", "Private/Rules/ExternalRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleSet_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/ExternalRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data is trivial here because we use it just to support overrides */" },
#endif
		{ "ModuleRelativePath", "Private/Rules/ExternalRule.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data is trivial here because we use it just to support overrides" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuleSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExternalRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExternalRule_Statics::NewProp_RuleSet = { "RuleSet", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExternalRule, RuleSet), Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleSet_MetaData), NewProp_RuleSet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExternalRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExternalRule, Data), Z_Construct_UScriptStruct_FPointCloudRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1637228041
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExternalRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalRule_Statics::NewProp_RuleSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalRule_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExternalRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExternalRule_Statics::ClassParams = {
	&UExternalRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExternalRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExternalRule_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UExternalRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExternalRule()
{
	if (!Z_Registration_Info_UClass_UExternalRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExternalRule.OuterSingleton, Z_Construct_UClass_UExternalRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExternalRule.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UExternalRule>()
{
	return UExternalRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalRule);
UExternalRule::~UExternalRule() {}
// End Class UExternalRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExternalRule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExternalRule, UExternalRule::StaticClass, TEXT("UExternalRule"), &Z_Registration_Info_UClass_UExternalRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExternalRule), 789902131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExternalRule_h_1469251511(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExternalRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExternalRule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
