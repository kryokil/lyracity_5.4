// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/SpawnPackedBlueprintsBuildRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnPackedBlueprintsBuildRule() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstancePivotType();
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USpawnPackedBlueprintsBuildRule();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_NoRegister();
POINTCLOUDEDITOR_API UEnum* Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType();
POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin Enum EPointCloudLevelInstanceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPointCloudLevelInstanceType;
static UEnum* EPointCloudLevelInstanceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("EPointCloudLevelInstanceType"));
	}
	return Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UEnum* StaticEnum<EPointCloudLevelInstanceType>()
{
	return EPointCloudLevelInstanceType_StaticEnum();
}
struct Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LevelInstance.DisplayName", "Level Instance" },
		{ "LevelInstance.Name", "EPointCloudLevelInstanceType::LevelInstance" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
		{ "PackedLevelInstance.DisplayName", "Packed Level Instance" },
		{ "PackedLevelInstance.Name", "EPointCloudLevelInstanceType::PackedLevelInstance" },
		{ "PackedLevelInstanceBlueprint.DisplayName", "Packed Level Instance Blueprint" },
		{ "PackedLevelInstanceBlueprint.Name", "EPointCloudLevelInstanceType::PackedLevelInstanceBlueprint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPointCloudLevelInstanceType::LevelInstance", (int64)EPointCloudLevelInstanceType::LevelInstance },
		{ "EPointCloudLevelInstanceType::PackedLevelInstance", (int64)EPointCloudLevelInstanceType::PackedLevelInstance },
		{ "EPointCloudLevelInstanceType::PackedLevelInstanceBlueprint", (int64)EPointCloudLevelInstanceType::PackedLevelInstanceBlueprint },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PointCloudEditor,
	nullptr,
	"EPointCloudLevelInstanceType",
	"EPointCloudLevelInstanceType",
	Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType()
{
	if (!Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.InnerSingleton, Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.InnerSingleton;
}
// End Enum EPointCloudLevelInstanceType

// Begin ScriptStruct FSpawnPackedBlueprintsBuildRuleData
static_assert(std::is_polymorphic<FSpawnPackedBlueprintsBuildRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FSpawnPackedBlueprintsBuildRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData;
class UScriptStruct* FSpawnPackedBlueprintsBuildRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("SpawnPackedBlueprintsBuildRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FSpawnPackedBlueprintsBuildRuleData>()
{
	return FSpawnPackedBlueprintsBuildRuleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceType_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExternalActors_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentFolder_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotType_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LevelInstanceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LevelInstanceType;
	static void NewProp_bExternalActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExternalActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentFolder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PivotType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnPackedBlueprintsBuildRuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_LevelInstanceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_LevelInstanceType = { "LevelInstanceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnPackedBlueprintsBuildRuleData, LevelInstanceType), Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelInstanceType_MetaData), NewProp_LevelInstanceType_MetaData) }; // 4625415
void Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_bExternalActors_SetBit(void* Obj)
{
	((FSpawnPackedBlueprintsBuildRuleData*)Obj)->bExternalActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_bExternalActors = { "bExternalActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnPackedBlueprintsBuildRuleData), &Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_bExternalActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExternalActors_MetaData), NewProp_bExternalActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_ContentFolder = { "ContentFolder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnPackedBlueprintsBuildRuleData, ContentFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentFolder_MetaData), NewProp_ContentFolder_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_PivotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_PivotType = { "PivotType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnPackedBlueprintsBuildRuleData, PivotType), Z_Construct_UEnum_Engine_ELevelInstancePivotType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotType_MetaData), NewProp_PivotType_MetaData) }; // 3115312188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_LevelInstanceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_LevelInstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_bExternalActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_ContentFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_PivotType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_PivotType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	Z_Construct_UScriptStruct_FPointCloudRuleData,
	&NewStructOps,
	"SpawnPackedBlueprintsBuildRuleData",
	Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::PropPointers),
	sizeof(FSpawnPackedBlueprintsBuildRuleData),
	alignof(FSpawnPackedBlueprintsBuildRuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.InnerSingleton, Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.InnerSingleton;
}
// End ScriptStruct FSpawnPackedBlueprintsBuildRuleData

// Begin Class USpawnPackedBlueprintsBuildRule
void USpawnPackedBlueprintsBuildRule::StaticRegisterNativesUSpawnPackedBlueprintsBuildRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnPackedBlueprintsBuildRule);
UClass* Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_NoRegister()
{
	return USpawnPackedBlueprintsBuildRule::StaticClass();
}
struct Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/SpawnPackedBlueprintsBuildRule.h" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnPackedBlueprintsBuildRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnPackedBlueprintsBuildRule, Data), Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3716630218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::ClassParams = {
	&USpawnPackedBlueprintsBuildRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpawnPackedBlueprintsBuildRule()
{
	if (!Z_Registration_Info_UClass_USpawnPackedBlueprintsBuildRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnPackedBlueprintsBuildRule.OuterSingleton, Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpawnPackedBlueprintsBuildRule.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<USpawnPackedBlueprintsBuildRule>()
{
	return USpawnPackedBlueprintsBuildRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnPackedBlueprintsBuildRule);
USpawnPackedBlueprintsBuildRule::~USpawnPackedBlueprintsBuildRule() {}
// End Class USpawnPackedBlueprintsBuildRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPointCloudLevelInstanceType_StaticEnum, TEXT("EPointCloudLevelInstanceType"), &Z_Registration_Info_UEnum_EPointCloudLevelInstanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4625415U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpawnPackedBlueprintsBuildRuleData::StaticStruct, Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewStructOps, TEXT("SpawnPackedBlueprintsBuildRuleData"), &Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnPackedBlueprintsBuildRuleData), 3716630218U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpawnPackedBlueprintsBuildRule, USpawnPackedBlueprintsBuildRule::StaticClass, TEXT("USpawnPackedBlueprintsBuildRule"), &Z_Registration_Info_UClass_USpawnPackedBlueprintsBuildRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnPackedBlueprintsBuildRule), 1786186408U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_2527530644(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
