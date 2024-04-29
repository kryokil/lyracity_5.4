// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/DebugBuildRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugBuildRule() {}

// Begin Cross Module References
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UDebugBuildRule();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UDebugBuildRule_NoRegister();
POINTCLOUDEDITOR_API UEnum* Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh();
POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDebugBuildRuleData();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin Enum EDebugBuildRuleMesh
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDebugBuildRuleMesh;
static UEnum* EDebugBuildRuleMesh_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDebugBuildRuleMesh.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDebugBuildRuleMesh.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("EDebugBuildRuleMesh"));
	}
	return Z_Registration_Info_UEnum_EDebugBuildRuleMesh.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UEnum* StaticEnum<EDebugBuildRuleMesh>()
{
	return EDebugBuildRuleMesh_StaticEnum();
}
struct Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DebugBuildRuleMesh_Axis.DisplayName", "Axis" },
		{ "DebugBuildRuleMesh_Axis.Name", "EDebugBuildRuleMesh::DebugBuildRuleMesh_Axis" },
		{ "DebugBuildRuleMesh_Cube.DisplayName", "Cube" },
		{ "DebugBuildRuleMesh_Cube.Name", "EDebugBuildRuleMesh::DebugBuildRuleMesh_Cube" },
		{ "DebugBuildRuleMesh_Sphere.DisplayName", "Sphere" },
		{ "DebugBuildRuleMesh_Sphere.Name", "EDebugBuildRuleMesh::DebugBuildRuleMesh_Sphere" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDebugBuildRuleMesh::DebugBuildRuleMesh_Sphere", (int64)EDebugBuildRuleMesh::DebugBuildRuleMesh_Sphere },
		{ "EDebugBuildRuleMesh::DebugBuildRuleMesh_Cube", (int64)EDebugBuildRuleMesh::DebugBuildRuleMesh_Cube },
		{ "EDebugBuildRuleMesh::DebugBuildRuleMesh_Axis", (int64)EDebugBuildRuleMesh::DebugBuildRuleMesh_Axis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PointCloudEditor,
	nullptr,
	"EDebugBuildRuleMesh",
	"EDebugBuildRuleMesh",
	Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh()
{
	if (!Z_Registration_Info_UEnum_EDebugBuildRuleMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDebugBuildRuleMesh.InnerSingleton, Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDebugBuildRuleMesh.InnerSingleton;
}
// End Enum EDebugBuildRuleMesh

// Begin ScriptStruct FDebugBuildRuleData
static_assert(std::is_polymorphic<FDebugBuildRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FDebugBuildRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugBuildRuleData;
class UScriptStruct* FDebugBuildRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugBuildRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugBuildRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugBuildRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("DebugBuildRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_DebugBuildRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FDebugBuildRuleData>()
{
	return FDebugBuildRuleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMesh_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DebugMesh_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DebugMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugBuildRuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugBuildRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamePattern_MetaData), NewProp_NamePattern_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_DebugMesh_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_DebugMesh = { "DebugMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugBuildRuleData, DebugMesh), Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMesh_MetaData), NewProp_DebugMesh_MetaData) }; // 2713299579
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugBuildRuleData, ScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFactor_MetaData), NewProp_ScaleFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_NamePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_DebugMesh_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_DebugMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_ScaleFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	Z_Construct_UScriptStruct_FPointCloudRuleData,
	&NewStructOps,
	"DebugBuildRuleData",
	Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::PropPointers),
	sizeof(FDebugBuildRuleData),
	alignof(FDebugBuildRuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDebugBuildRuleData()
{
	if (!Z_Registration_Info_UScriptStruct_DebugBuildRuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugBuildRuleData.InnerSingleton, Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DebugBuildRuleData.InnerSingleton;
}
// End ScriptStruct FDebugBuildRuleData

// Begin Class UDebugBuildRule
void UDebugBuildRule::StaticRegisterNativesUDebugBuildRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugBuildRule);
UClass* Z_Construct_UClass_UDebugBuildRule_NoRegister()
{
	return UDebugBuildRule::StaticClass();
}
struct Z_Construct_UClass_UDebugBuildRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/DebugBuildRule.h" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugBuildRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugBuildRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDebugBuildRule, Data), Z_Construct_UScriptStruct_FDebugBuildRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4176948341
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebugBuildRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugBuildRule_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugBuildRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDebugBuildRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugBuildRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugBuildRule_Statics::ClassParams = {
	&UDebugBuildRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDebugBuildRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDebugBuildRule_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugBuildRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UDebugBuildRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDebugBuildRule()
{
	if (!Z_Registration_Info_UClass_UDebugBuildRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugBuildRule.OuterSingleton, Z_Construct_UClass_UDebugBuildRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDebugBuildRule.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UDebugBuildRule>()
{
	return UDebugBuildRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugBuildRule);
UDebugBuildRule::~UDebugBuildRule() {}
// End Class UDebugBuildRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDebugBuildRuleMesh_StaticEnum, TEXT("EDebugBuildRuleMesh"), &Z_Registration_Info_UEnum_EDebugBuildRuleMesh, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2713299579U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDebugBuildRuleData::StaticStruct, Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewStructOps, TEXT("DebugBuildRuleData"), &Z_Registration_Info_UScriptStruct_DebugBuildRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugBuildRuleData), 4176948341U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDebugBuildRule, UDebugBuildRule::StaticClass, TEXT("UDebugBuildRule"), &Z_Registration_Info_UClass_UDebugBuildRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugBuildRule), 1268276379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_212999247(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
