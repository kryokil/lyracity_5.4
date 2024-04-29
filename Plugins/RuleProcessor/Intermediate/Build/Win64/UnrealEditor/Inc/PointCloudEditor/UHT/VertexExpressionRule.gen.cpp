// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/VertexExpressionRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexExpressionRule() {}

// Begin Cross Module References
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UVertexExpressionRule();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UVertexExpressionRule_NoRegister();
POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVertexExpressionRuleData();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin ScriptStruct FVertexExpressionRuleData
static_assert(std::is_polymorphic<FVertexExpressionRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FVertexExpressionRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexExpressionRuleData;
class UScriptStruct* FVertexExpressionRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexExpressionRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("VertexExpressionRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FVertexExpressionRuleData>()
{
	return FVertexExpressionRuleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/VertexExpressionRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/VertexExpressionRule.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexExpressionRuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexExpressionRuleData, Expression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expression_MetaData), NewProp_Expression_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::NewProp_Expression,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	Z_Construct_UScriptStruct_FPointCloudRuleData,
	&NewStructOps,
	"VertexExpressionRuleData",
	Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::PropPointers),
	sizeof(FVertexExpressionRuleData),
	alignof(FVertexExpressionRuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVertexExpressionRuleData()
{
	if (!Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.InnerSingleton, Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.InnerSingleton;
}
// End ScriptStruct FVertexExpressionRuleData

// Begin Class UVertexExpressionRule
void UVertexExpressionRule::StaticRegisterNativesUVertexExpressionRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexExpressionRule);
UClass* Z_Construct_UClass_UVertexExpressionRule_NoRegister()
{
	return UVertexExpressionRule::StaticClass();
}
struct Z_Construct_UClass_UVertexExpressionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/VertexExpressionRule.h" },
		{ "ModuleRelativePath", "Private/Rules/VertexExpressionRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/VertexExpressionRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexExpressionRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexExpressionRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexExpressionRule, Data), Z_Construct_UScriptStruct_FVertexExpressionRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3876445187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexExpressionRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexExpressionRule_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexExpressionRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVertexExpressionRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexExpressionRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexExpressionRule_Statics::ClassParams = {
	&UVertexExpressionRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVertexExpressionRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVertexExpressionRule_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexExpressionRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexExpressionRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVertexExpressionRule()
{
	if (!Z_Registration_Info_UClass_UVertexExpressionRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexExpressionRule.OuterSingleton, Z_Construct_UClass_UVertexExpressionRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVertexExpressionRule.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UVertexExpressionRule>()
{
	return UVertexExpressionRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexExpressionRule);
UVertexExpressionRule::~UVertexExpressionRule() {}
// End Class UVertexExpressionRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVertexExpressionRuleData::StaticStruct, Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::NewStructOps, TEXT("VertexExpressionRuleData"), &Z_Registration_Info_UScriptStruct_VertexExpressionRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexExpressionRuleData), 3876445187U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVertexExpressionRule, UVertexExpressionRule::StaticClass, TEXT("UVertexExpressionRule"), &Z_Registration_Info_UClass_UVertexExpressionRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexExpressionRule), 560011594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_873096375(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
