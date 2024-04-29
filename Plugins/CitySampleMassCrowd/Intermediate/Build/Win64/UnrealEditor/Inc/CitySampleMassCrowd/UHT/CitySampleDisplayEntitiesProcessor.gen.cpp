// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/CitySampleDisplayEntitiesProcessor.h"
#include "MassRepresentation/Public/MassRepresentationTypes.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleDisplayEntitiesProcessor() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_NoRegister();
CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister();
MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin ScriptStruct FCitySampleDisplayEntitiesConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleDisplayEntitiesConfig;
class UScriptStruct* FCitySampleDisplayEntitiesConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleDisplayEntitiesConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleDisplayEntitiesConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("CitySampleDisplayEntitiesConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleDisplayEntitiesConfig.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FCitySampleDisplayEntitiesConfig>()
{
	return FCitySampleDisplayEntitiesConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CitySampleDisplayEntitiesProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagFilter_MetaData[] = {
		{ "BaseStruct", "/Script/MassEntity.MassTag" },
		{ "Category", "CitySample|DisplayEntities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Component Tag that will be used to associate LOD config */" },
#endif
		{ "ModuleRelativePath", "Public/CitySampleDisplayEntitiesProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component Tag that will be used to associate LOD config" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshInstanceDesc_MetaData[] = {
		{ "Category", "CitySample|DisplayEntities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Instanced static mesh information for this agent */" },
#endif
		{ "ModuleRelativePath", "Public/CitySampleDisplayEntitiesProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instanced static mesh information for this agent" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshInstanceDesc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleDisplayEntitiesConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::NewProp_TagFilter = { "TagFilter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDisplayEntitiesConfig, TagFilter), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagFilter_MetaData), NewProp_TagFilter_MetaData) }; // 174410355
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::NewProp_StaticMeshInstanceDesc = { "StaticMeshInstanceDesc", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDisplayEntitiesConfig, StaticMeshInstanceDesc), Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshInstanceDesc_MetaData), NewProp_StaticMeshInstanceDesc_MetaData) }; // 513434978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::NewProp_TagFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::NewProp_StaticMeshInstanceDesc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	nullptr,
	&NewStructOps,
	"CitySampleDisplayEntitiesConfig",
	Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::PropPointers),
	sizeof(FCitySampleDisplayEntitiesConfig),
	alignof(FCitySampleDisplayEntitiesConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleDisplayEntitiesConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleDisplayEntitiesConfig.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CitySampleDisplayEntitiesConfig.InnerSingleton;
}
// End ScriptStruct FCitySampleDisplayEntitiesConfig

// Begin Class UCitySampleDisplayEntitiesProcessor
void UCitySampleDisplayEntitiesProcessor::StaticRegisterNativesUCitySampleDisplayEntitiesProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleDisplayEntitiesProcessor);
UClass* Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_NoRegister()
{
	return UCitySampleDisplayEntitiesProcessor::StaticClass();
}
struct Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Display a simple representation of all the mass entities handled in CitySample\n */" },
#endif
		{ "IncludePath", "CitySampleDisplayEntitiesProcessor.h" },
		{ "ModuleRelativePath", "Public/CitySampleDisplayEntitiesProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display a simple representation of all the mass entities handled in CitySample" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayConfigs_MetaData[] = {
		{ "Category", "CitySample|DisplayEntities" },
		{ "ModuleRelativePath", "Public/CitySampleDisplayEntitiesProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepresentationSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/CitySampleDisplayEntitiesProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayConfigs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RepresentationSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleDisplayEntitiesProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::NewProp_DisplayConfigs_Inner = { "DisplayConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig, METADATA_PARAMS(0, nullptr) }; // 2084788729
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::NewProp_DisplayConfigs = { "DisplayConfigs", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleDisplayEntitiesProcessor, DisplayConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayConfigs_MetaData), NewProp_DisplayConfigs_MetaData) }; // 2084788729
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::NewProp_RepresentationSubsystem = { "RepresentationSubsystem", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleDisplayEntitiesProcessor, RepresentationSubsystem), Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepresentationSubsystem_MetaData), NewProp_RepresentationSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::NewProp_DisplayConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::NewProp_DisplayConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::NewProp_RepresentationSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::ClassParams = {
	&UCitySampleDisplayEntitiesProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor()
{
	if (!Z_Registration_Info_UClass_UCitySampleDisplayEntitiesProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleDisplayEntitiesProcessor.OuterSingleton, Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleDisplayEntitiesProcessor.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UCitySampleDisplayEntitiesProcessor>()
{
	return UCitySampleDisplayEntitiesProcessor::StaticClass();
}
UCitySampleDisplayEntitiesProcessor::UCitySampleDisplayEntitiesProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleDisplayEntitiesProcessor);
UCitySampleDisplayEntitiesProcessor::~UCitySampleDisplayEntitiesProcessor() {}
// End Class UCitySampleDisplayEntitiesProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleDisplayEntitiesProcessor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCitySampleDisplayEntitiesConfig::StaticStruct, Z_Construct_UScriptStruct_FCitySampleDisplayEntitiesConfig_Statics::NewStructOps, TEXT("CitySampleDisplayEntitiesConfig"), &Z_Registration_Info_UScriptStruct_CitySampleDisplayEntitiesConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleDisplayEntitiesConfig), 2084788729U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleDisplayEntitiesProcessor, UCitySampleDisplayEntitiesProcessor::StaticClass, TEXT("UCitySampleDisplayEntitiesProcessor"), &Z_Registration_Info_UClass_UCitySampleDisplayEntitiesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleDisplayEntitiesProcessor), 1473667036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleDisplayEntitiesProcessor_h_2062496699(TEXT("/Script/CitySampleMassCrowd"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleDisplayEntitiesProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleDisplayEntitiesProcessor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleDisplayEntitiesProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_CitySampleDisplayEntitiesProcessor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
