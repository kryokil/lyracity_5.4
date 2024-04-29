// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficInstancePlaybackHelpers.h"
#include "Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficInstancePlaybackHelpers() {}

// Begin Cross Module References
ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficAnimationSyncData();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficAnimState();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficInstanceData();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin ScriptStruct FMassTrafficAnimState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficAnimState;
class UScriptStruct* FMassTrafficAnimState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficAnimState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficAnimState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficAnimState, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficAnimState"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficAnimState.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficAnimState>()
{
	return FMassTrafficAnimState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use floats to match custom floats of instanced static mesh\n// We could pack a float w/ more parameters if desired\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use floats to match custom floats of instanced static mesh\nWe could pack a float w/ more parameters if desired" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[] = {
		{ "Category", "MassTraffic" },
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[] = {
		{ "Category", "MassTraffic" },
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "MassTraffic" },
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "MassTraffic" },
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalStartTime_MetaData[] = {
		{ "Category", "MassTraffic" },
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumFrames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalStartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficAnimState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficAnimState, StartFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrame_MetaData), NewProp_StartFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficAnimState, NumFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFrames_MetaData), NewProp_NumFrames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficAnimState, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficAnimState, bLooping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::NewProp_GlobalStartTime = { "GlobalStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficAnimState, GlobalStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalStartTime_MetaData), NewProp_GlobalStartTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::NewProp_StartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::NewProp_NumFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::NewProp_GlobalStartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficAnimState",
	Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::PropPointers),
	sizeof(FMassTrafficAnimState),
	alignof(FMassTrafficAnimState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficAnimState()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficAnimState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficAnimState.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficAnimState.InnerSingleton;
}
// End ScriptStruct FMassTrafficAnimState

// Begin ScriptStruct FMassTrafficInstancePlaybackData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficInstancePlaybackData;
class UScriptStruct* FMassTrafficInstancePlaybackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficInstancePlaybackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficInstancePlaybackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficInstancePlaybackData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficInstancePlaybackData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficInstancePlaybackData>()
{
	return FMassTrafficInstancePlaybackData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "MassTraffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Store prev state to allow blending of prev->current state in material\n// Uncomment this if we start blending states\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"MassTraffic\")\n//FMassTrafficAnimState PrevState;\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Store prev state to allow blending of prev->current state in material\nUncomment this if we start blending states\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"MassTraffic\")\nFMassTrafficAnimState PrevState;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficInstancePlaybackData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficInstancePlaybackData, CurrentState), Z_Construct_UScriptStruct_FMassTrafficAnimState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 2891151555
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficInstancePlaybackData",
	Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics::PropPointers),
	sizeof(FMassTrafficInstancePlaybackData),
	alignof(FMassTrafficInstancePlaybackData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficInstancePlaybackData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficInstancePlaybackData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficInstancePlaybackData.InnerSingleton;
}
// End ScriptStruct FMassTrafficInstancePlaybackData

// Begin ScriptStruct FMassTrafficAnimationSyncData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficAnimationSyncData;
class UScriptStruct* FMassTrafficAnimationSyncData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficAnimationSyncData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficAnimationSyncData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficAnimationSyncData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficAnimationSyncData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficAnimationSyncData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficAnimationSyncData>()
{
	return FMassTrafficAnimationSyncData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficAnimationSyncData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficAnimationSyncData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficAnimationSyncData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficAnimationSyncData",
	nullptr,
	0,
	sizeof(FMassTrafficAnimationSyncData),
	alignof(FMassTrafficAnimationSyncData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficAnimationSyncData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficAnimationSyncData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficAnimationSyncData()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficAnimationSyncData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficAnimationSyncData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficAnimationSyncData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficAnimationSyncData.InnerSingleton;
}
// End ScriptStruct FMassTrafficAnimationSyncData

// Begin ScriptStruct FMassTrafficInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficInstanceData;
class UScriptStruct* FMassTrafficInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficInstanceData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficInstanceData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficInstanceData>()
{
	return FMassTrafficInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshInstanceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaybackData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshInstanceData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshInstanceData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::NewProp_PlaybackData_Inner = { "PlaybackData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData, METADATA_PARAMS(0, nullptr) }; // 2005656539
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::NewProp_PlaybackData = { "PlaybackData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficInstanceData, PlaybackData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackData_MetaData), NewProp_PlaybackData_MetaData) }; // 2005656539
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::NewProp_StaticMeshInstanceData_Inner = { "StaticMeshInstanceData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(0, nullptr) }; // 3453875991
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::NewProp_StaticMeshInstanceData = { "StaticMeshInstanceData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficInstanceData, StaticMeshInstanceData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshInstanceData_MetaData), NewProp_StaticMeshInstanceData_MetaData) }; // 3453875991
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::NewProp_PlaybackData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::NewProp_PlaybackData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::NewProp_StaticMeshInstanceData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::NewProp_StaticMeshInstanceData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficInstanceData",
	Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::PropPointers),
	sizeof(FMassTrafficInstanceData),
	alignof(FMassTrafficInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficInstanceData.InnerSingleton;
}
// End ScriptStruct FMassTrafficInstanceData

// Begin Class UMassTrafficInstancePlaybackLibrary Function AnimStateFromDataAsset
struct Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics
{
	struct MassTrafficInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms
	{
		const UAnimToTextureDataAsset* DataAsset;
		int32 StateIndex;
		FMassTrafficAnimState AnimState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MassTraffic|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"MassTraffic|Playback\")\n//static bool GetInstanceTransform(UPARAM(ref) const FMassTrafficInstanceData& InstanceData, int32 InstanceIndex, FTransform& InstanceTransform);\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"MassTraffic|Playback\")\nstatic bool GetInstanceTransform(UPARAM(ref) const FMassTrafficInstanceData& InstanceData, int32 InstanceIndex, FTransform& InstanceTransform);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms, DataAsset), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms, StateIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_AnimState = { "AnimState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms, AnimState), Z_Construct_UScriptStruct_FMassTrafficAnimState, METADATA_PARAMS(0, nullptr) }; // 2891151555
void Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MassTrafficInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms), &Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_DataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_StateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_AnimState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary, nullptr, "AnimStateFromDataAsset", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::MassTrafficInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::MassTrafficInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficInstancePlaybackLibrary::execAnimStateFromDataAsset)
{
	P_GET_OBJECT(UAnimToTextureDataAsset,Z_Param_DataAsset);
	P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
	P_GET_STRUCT_REF(FMassTrafficAnimState,Z_Param_Out_AnimState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMassTrafficInstancePlaybackLibrary::AnimStateFromDataAsset(Z_Param_DataAsset,Z_Param_StateIndex,Z_Param_Out_AnimState);
	P_NATIVE_END;
}
// End Class UMassTrafficInstancePlaybackLibrary Function AnimStateFromDataAsset

// Begin Class UMassTrafficInstancePlaybackLibrary
void UMassTrafficInstancePlaybackLibrary::StaticRegisterNativesUMassTrafficInstancePlaybackLibrary()
{
	UClass* Class = UMassTrafficInstancePlaybackLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimStateFromDataAsset", &UMassTrafficInstancePlaybackLibrary::execAnimStateFromDataAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficInstancePlaybackLibrary);
UClass* Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_NoRegister()
{
	return UMassTrafficInstancePlaybackLibrary::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// class UMassTrafficDataAsset;\n" },
#endif
		{ "IncludePath", "MassTrafficInstancePlaybackHelpers.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInstancePlaybackHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class UMassTrafficDataAsset;" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassTrafficInstancePlaybackLibrary_AnimStateFromDataAsset, "AnimStateFromDataAsset" }, // 3318080003
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInstancePlaybackLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_Statics::ClassParams = {
	&UMassTrafficInstancePlaybackLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary()
{
	if (!Z_Registration_Info_UClass_UMassTrafficInstancePlaybackLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInstancePlaybackLibrary.OuterSingleton, Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficInstancePlaybackLibrary.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficInstancePlaybackLibrary>()
{
	return UMassTrafficInstancePlaybackLibrary::StaticClass();
}
UMassTrafficInstancePlaybackLibrary::UMassTrafficInstancePlaybackLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficInstancePlaybackLibrary);
UMassTrafficInstancePlaybackLibrary::~UMassTrafficInstancePlaybackLibrary() {}
// End Class UMassTrafficInstancePlaybackLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficAnimState::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics::NewStructOps, TEXT("MassTrafficAnimState"), &Z_Registration_Info_UScriptStruct_MassTrafficAnimState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficAnimState), 2891151555U) },
		{ FMassTrafficInstancePlaybackData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics::NewStructOps, TEXT("MassTrafficInstancePlaybackData"), &Z_Registration_Info_UScriptStruct_MassTrafficInstancePlaybackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficInstancePlaybackData), 2005656539U) },
		{ FMassTrafficAnimationSyncData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficAnimationSyncData_Statics::NewStructOps, TEXT("MassTrafficAnimationSyncData"), &Z_Registration_Info_UScriptStruct_MassTrafficAnimationSyncData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficAnimationSyncData), 3830862215U) },
		{ FMassTrafficInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics::NewStructOps, TEXT("MassTrafficInstanceData"), &Z_Registration_Info_UScriptStruct_MassTrafficInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficInstanceData), 651956465U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary, UMassTrafficInstancePlaybackLibrary::StaticClass, TEXT("UMassTrafficInstancePlaybackLibrary"), &Z_Registration_Info_UClass_UMassTrafficInstancePlaybackLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInstancePlaybackLibrary), 735484957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_2412471034(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS