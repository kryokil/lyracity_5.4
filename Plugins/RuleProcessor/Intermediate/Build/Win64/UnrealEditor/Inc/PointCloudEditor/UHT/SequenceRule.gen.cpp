// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/SequenceRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRule() {}

// Begin Cross Module References
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USequenceRule();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USequenceRule_NoRegister();
POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceRuleData();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin ScriptStruct FSequenceRuleData
static_assert(std::is_polymorphic<FSequenceRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FSequenceRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequenceRuleData;
class UScriptStruct* FSequenceRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequenceRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequenceRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequenceRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("SequenceRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_SequenceRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FSequenceRuleData>()
{
	return FSequenceRuleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSequenceRuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/SequenceRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rules/SequenceRule.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequenceRuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSequenceRuleData_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequenceRuleData, NumSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSlots_MetaData), NewProp_NumSlots_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequenceRuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceRuleData_Statics::NewProp_NumSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequenceRuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	Z_Construct_UScriptStruct_FPointCloudRuleData,
	&NewStructOps,
	"SequenceRuleData",
	Z_Construct_UScriptStruct_FSequenceRuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRuleData_Statics::PropPointers),
	sizeof(FSequenceRuleData),
	alignof(FSequenceRuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSequenceRuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSequenceRuleData()
{
	if (!Z_Registration_Info_UScriptStruct_SequenceRuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequenceRuleData.InnerSingleton, Z_Construct_UScriptStruct_FSequenceRuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SequenceRuleData.InnerSingleton;
}
// End ScriptStruct FSequenceRuleData

// Begin Class USequenceRule
void USequenceRule::StaticRegisterNativesUSequenceRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequenceRule);
UClass* Z_Construct_UClass_USequenceRule_NoRegister()
{
	return USequenceRule::StaticClass();
}
struct Z_Construct_UClass_USequenceRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/SequenceRule.h" },
		{ "ModuleRelativePath", "Private/Rules/SequenceRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SequenceRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USequenceRule, Data), Z_Construct_UScriptStruct_FSequenceRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3483752672
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequenceRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRule_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USequenceRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceRule_Statics::ClassParams = {
	&USequenceRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USequenceRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRule_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRule_Statics::Class_MetaDataParams), Z_Construct_UClass_USequenceRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USequenceRule()
{
	if (!Z_Registration_Info_UClass_USequenceRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceRule.OuterSingleton, Z_Construct_UClass_USequenceRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USequenceRule.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<USequenceRule>()
{
	return USequenceRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceRule);
USequenceRule::~USequenceRule() {}
// End Class USequenceRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSequenceRuleData::StaticStruct, Z_Construct_UScriptStruct_FSequenceRuleData_Statics::NewStructOps, TEXT("SequenceRuleData"), &Z_Registration_Info_UScriptStruct_SequenceRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequenceRuleData), 3483752672U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USequenceRule, USequenceRule::StaticClass, TEXT("USequenceRule"), &Z_Registration_Info_UClass_USequenceRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceRule), 2252091155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_1538701998(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
