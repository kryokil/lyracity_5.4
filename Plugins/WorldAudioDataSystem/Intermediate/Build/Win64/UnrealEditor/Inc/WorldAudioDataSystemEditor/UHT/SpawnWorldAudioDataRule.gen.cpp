// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystemEditor/Private/SpawnWorldAudioDataRule.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnWorldAudioDataRule() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystemEditor();
WORLDAUDIODATASYSTEMEDITOR_API UClass* Z_Construct_UClass_USpawnWorldAudioDataRule();
WORLDAUDIODATASYSTEMEDITOR_API UClass* Z_Construct_UClass_USpawnWorldAudioDataRule_NoRegister();
WORLDAUDIODATASYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData();
// End Cross Module References

// Begin ScriptStruct FSpawnWorldAudioDataRuleData
static_assert(std::is_polymorphic<FSpawnWorldAudioDataRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FSpawnWorldAudioDataRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData;
class UScriptStruct* FSpawnWorldAudioDataRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData, (UObject*)Z_Construct_UPackage__Script_WorldAudioDataSystemEditor(), TEXT("SpawnWorldAudioDataRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEMEDITOR_API UScriptStruct* StaticStruct<FSpawnWorldAudioDataRuleData>()
{
	return FSpawnWorldAudioDataRuleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[] = {
		{ "Category", "DataLayers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DataLayers the generated actors will belong to.*/" },
#endif
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataLayers the generated actors will belong to." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaDataKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReverbKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FolderPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnWorldAudioDataRuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_MetaDataKey = { "MetaDataKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnWorldAudioDataRuleData, MetaDataKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaDataKey_MetaData), NewProp_MetaDataKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_ReverbKey = { "ReverbKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnWorldAudioDataRuleData, ReverbKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbKey_MetaData), NewProp_ReverbKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnWorldAudioDataRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamePattern_MetaData), NewProp_NamePattern_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnWorldAudioDataRuleData, FolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderPath_MetaData), NewProp_FolderPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 1894108120
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnWorldAudioDataRuleData, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayers_MetaData), NewProp_DataLayers_MetaData) }; // 1894108120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_MetaDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_ReverbKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_NamePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_FolderPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_DataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_DataLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystemEditor,
	Z_Construct_UScriptStruct_FPointCloudRuleData,
	&NewStructOps,
	"SpawnWorldAudioDataRuleData",
	Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::PropPointers),
	sizeof(FSpawnWorldAudioDataRuleData),
	alignof(FSpawnWorldAudioDataRuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.InnerSingleton, Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.InnerSingleton;
}
// End ScriptStruct FSpawnWorldAudioDataRuleData

// Begin Class USpawnWorldAudioDataRule
void USpawnWorldAudioDataRule::StaticRegisterNativesUSpawnWorldAudioDataRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnWorldAudioDataRule);
UClass* Z_Construct_UClass_USpawnWorldAudioDataRule_NoRegister()
{
	return USpawnWorldAudioDataRule::StaticClass();
}
struct Z_Construct_UClass_USpawnWorldAudioDataRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SpawnWorldAudioDataRule.h" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnWorldAudioDataRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnWorldAudioDataRule, Data), Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2610884978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::ClassParams = {
	&USpawnWorldAudioDataRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpawnWorldAudioDataRule()
{
	if (!Z_Registration_Info_UClass_USpawnWorldAudioDataRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnWorldAudioDataRule.OuterSingleton, Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpawnWorldAudioDataRule.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEMEDITOR_API UClass* StaticClass<USpawnWorldAudioDataRule>()
{
	return USpawnWorldAudioDataRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnWorldAudioDataRule);
USpawnWorldAudioDataRule::~USpawnWorldAudioDataRule() {}
// End Class USpawnWorldAudioDataRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpawnWorldAudioDataRuleData::StaticStruct, Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewStructOps, TEXT("SpawnWorldAudioDataRuleData"), &Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnWorldAudioDataRuleData), 2610884978U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpawnWorldAudioDataRule, USpawnWorldAudioDataRule::StaticClass, TEXT("USpawnWorldAudioDataRule"), &Z_Registration_Info_UClass_USpawnWorldAudioDataRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnWorldAudioDataRule), 622014303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_2359379751(TEXT("/Script/WorldAudioDataSystemEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
