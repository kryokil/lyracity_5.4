// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Private/Tasks/MassContextualAnimTask.h"
#include "MassEntity/Public/MassEntityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassContextualAnimTask() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassContextualAnimTask();
CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData();
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin ScriptStruct FMassContextualAnimTaskInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData;
class UScriptStruct* FMassContextualAnimTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("MassContextualAnimTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FMassContextualAnimTaskInstanceData>()
{
	return FMassContextualAnimTaskInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEntity_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
		{ "Optional", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComputedDuration_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Accumulated time used to stop task if a montage is set */" },
#endif
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accumulated time used to stop task if a montage is set" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetEntity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComputedDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassContextualAnimTaskInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity = { "TargetEntity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTaskInstanceData, TargetEntity), Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEntity_MetaData), NewProp_TargetEntity_MetaData) }; // 1338153741
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTaskInstanceData, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration = { "ComputedDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTaskInstanceData, ComputedDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComputedDuration_MetaData), NewProp_ComputedDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTaskInstanceData, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	nullptr,
	&NewStructOps,
	"MassContextualAnimTaskInstanceData",
	Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::PropPointers),
	sizeof(FMassContextualAnimTaskInstanceData),
	alignof(FMassContextualAnimTaskInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.InnerSingleton;
}
// End ScriptStruct FMassContextualAnimTaskInstanceData

// Begin ScriptStruct FMassContextualAnimTask
static_assert(std::is_polymorphic<FMassContextualAnimTask>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassContextualAnimTask cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassContextualAnimTask;
class UScriptStruct* FMassContextualAnimTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassContextualAnimTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassContextualAnimTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassContextualAnimTask, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("MassContextualAnimTask"));
	}
	return Z_Registration_Info_UScriptStruct_MassContextualAnimTask.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FMassContextualAnimTask>()
{
	return FMassContextualAnimTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Mass Contextual Anim Task" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextualAnimAsset_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentTrack_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorRole_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackMontage_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextualAnimAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlignmentTrack;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InteractorRole;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallbackMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassContextualAnimTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_ContextualAnimAsset = { "ContextualAnimAsset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTask, ContextualAnimAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextualAnimAsset_MetaData), NewProp_ContextualAnimAsset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_AlignmentTrack = { "AlignmentTrack", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTask, AlignmentTrack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignmentTrack_MetaData), NewProp_AlignmentTrack_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_InteractorRole = { "InteractorRole", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTask, InteractorRole), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorRole_MetaData), NewProp_InteractorRole_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_FallbackMontage = { "FallbackMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTask, FallbackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackMontage_MetaData), NewProp_FallbackMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_ContextualAnimAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_AlignmentTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_InteractorRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_FallbackMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
	&NewStructOps,
	"MassContextualAnimTask",
	Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::PropPointers),
	sizeof(FMassContextualAnimTask),
	alignof(FMassContextualAnimTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassContextualAnimTask()
{
	if (!Z_Registration_Info_UScriptStruct_MassContextualAnimTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassContextualAnimTask.InnerSingleton, Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassContextualAnimTask.InnerSingleton;
}
// End ScriptStruct FMassContextualAnimTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Private_Tasks_MassContextualAnimTask_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassContextualAnimTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewStructOps, TEXT("MassContextualAnimTaskInstanceData"), &Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassContextualAnimTaskInstanceData), 205087902U) },
		{ FMassContextualAnimTask::StaticStruct, Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewStructOps, TEXT("MassContextualAnimTask"), &Z_Registration_Info_UScriptStruct_MassContextualAnimTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassContextualAnimTask), 3319461832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Private_Tasks_MassContextualAnimTask_h_2013400439(TEXT("/Script/CitySampleMassCrowd"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Private_Tasks_MassContextualAnimTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Private_Tasks_MassContextualAnimTask_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
