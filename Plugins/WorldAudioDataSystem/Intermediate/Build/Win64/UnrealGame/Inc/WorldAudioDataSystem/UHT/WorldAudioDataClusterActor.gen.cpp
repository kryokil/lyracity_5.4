// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystem/Public/WorldAudioDataClusterActor.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldAudioDataClusterActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister();
UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystem();
WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_AWorldAudioDataClusterActor();
WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_AWorldAudioDataClusterActor_NoRegister();
WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UContinuousSoundSystemVectorCollection_NoRegister();
WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioReverbDataCollection();
WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioReverbDataCollection_NoRegister();
WORLDAUDIODATASYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary();
WORLDAUDIODATASYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWorldAudioReverbData();
// End Cross Module References

// Begin ScriptStruct FWorldAudioReverbData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldAudioReverbData;
class UScriptStruct* FWorldAudioReverbData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldAudioReverbData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldAudioReverbData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldAudioReverbData, (UObject*)Z_Construct_UPackage__Script_WorldAudioDataSystem(), TEXT("WorldAudioReverbData"));
	}
	return Z_Registration_Info_UScriptStruct_WorldAudioReverbData.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UScriptStruct* StaticStruct<FWorldAudioReverbData>()
{
	return FWorldAudioReverbData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Uses UPROPERTY for serialization purposes\n */" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Uses UPROPERTY for serialization purposes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataCellAverage_MetaData[] = {
		{ "Category", "WorldAudioReverbData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Average value of the cell\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Average value of the cell" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataCellWeighting_MetaData[] = {
		{ "Category", "WorldAudioReverbData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of data points in cell\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of data points in cell" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataCellAverage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataCellWeighting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldAudioReverbData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellAverage = { "DataCellAverage", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioReverbData, DataCellAverage), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataCellAverage_MetaData), NewProp_DataCellAverage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellWeighting = { "DataCellWeighting", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioReverbData, DataCellWeighting), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataCellWeighting_MetaData), NewProp_DataCellWeighting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellAverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellWeighting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	nullptr,
	&NewStructOps,
	"WorldAudioReverbData",
	Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::PropPointers),
	sizeof(FWorldAudioReverbData),
	alignof(FWorldAudioReverbData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldAudioReverbData()
{
	if (!Z_Registration_Info_UScriptStruct_WorldAudioReverbData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldAudioReverbData.InnerSingleton, Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldAudioReverbData.InnerSingleton;
}
// End ScriptStruct FWorldAudioReverbData

// Begin Class UWorldAudioReverbDataCollection
void UWorldAudioReverbDataCollection::StaticRegisterNativesUWorldAudioReverbDataCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldAudioReverbDataCollection);
UClass* Z_Construct_UClass_UWorldAudioReverbDataCollection_NoRegister()
{
	return UWorldAudioReverbDataCollection::StaticClass();
}
struct Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldAudioDataClusterActor.h" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataCollection_ValueProp;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataCollection_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DataCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldAudioReverbDataCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection_ValueProp = { "DataCollection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWorldAudioReverbData, METADATA_PARAMS(0, nullptr) }; // 3007792844
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection_Key_KeyProp = { "DataCollection_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection = { "DataCollection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioReverbDataCollection, DataCollection), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataCollection_MetaData), NewProp_DataCollection_MetaData) }; // 3007792844
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::ClassParams = {
	&UWorldAudioReverbDataCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldAudioReverbDataCollection()
{
	if (!Z_Registration_Info_UClass_UWorldAudioReverbDataCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldAudioReverbDataCollection.OuterSingleton, Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldAudioReverbDataCollection.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<UWorldAudioReverbDataCollection>()
{
	return UWorldAudioReverbDataCollection::StaticClass();
}
UWorldAudioReverbDataCollection::UWorldAudioReverbDataCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldAudioReverbDataCollection);
UWorldAudioReverbDataCollection::~UWorldAudioReverbDataCollection() {}
// End Class UWorldAudioReverbDataCollection

// Begin ScriptStruct FWorldAudioDataClusterActorDataSummary
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary;
class UScriptStruct* FWorldAudioDataClusterActorDataSummary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary, (UObject*)Z_Construct_UPackage__Script_WorldAudioDataSystem(), TEXT("WorldAudioDataClusterActorDataSummary"));
	}
	return Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UScriptStruct* StaticStruct<FWorldAudioDataClusterActorDataSummary>()
{
	return FWorldAudioDataClusterActorDataSummary::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type only needed in Editor\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type only needed in Editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD1ColorPointHashWidth_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell Width for LOD1\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell Width for LOD1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD1ColorPointHashDistance_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell LOD1 Max Distance\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell LOD1 Max Distance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD1DensityTotals_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD2ColorPointHashWidth_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell Width for LOD2\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell Width for LOD2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD2ColorPointHashDistance_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell LOD2 Max Distance\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell LOD2 Max Distance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD2DensityTotals_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD3ColorPointHashWidth_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell Width for LOD3\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell Width for LOD3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD3DensityTotals_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD1ColorPointHashWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD1ColorPointHashDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD1DensityTotals_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LOD1DensityTotals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LOD1DensityTotals;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD2ColorPointHashWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD2ColorPointHashDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD2DensityTotals_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LOD2DensityTotals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LOD2DensityTotals;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD3ColorPointHashWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD3DensityTotals_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LOD3DensityTotals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LOD3DensityTotals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldAudioDataClusterActorDataSummary>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashWidth = { "LOD1ColorPointHashWidth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD1ColorPointHashWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD1ColorPointHashWidth_MetaData), NewProp_LOD1ColorPointHashWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashDistance = { "LOD1ColorPointHashDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD1ColorPointHashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD1ColorPointHashDistance_MetaData), NewProp_LOD1ColorPointHashDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals_ValueProp = { "LOD1DensityTotals", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals_Key_KeyProp = { "LOD1DensityTotals_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals = { "LOD1DensityTotals", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD1DensityTotals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD1DensityTotals_MetaData), NewProp_LOD1DensityTotals_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashWidth = { "LOD2ColorPointHashWidth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD2ColorPointHashWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD2ColorPointHashWidth_MetaData), NewProp_LOD2ColorPointHashWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashDistance = { "LOD2ColorPointHashDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD2ColorPointHashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD2ColorPointHashDistance_MetaData), NewProp_LOD2ColorPointHashDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals_ValueProp = { "LOD2DensityTotals", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals_Key_KeyProp = { "LOD2DensityTotals_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals = { "LOD2DensityTotals", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD2DensityTotals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD2DensityTotals_MetaData), NewProp_LOD2DensityTotals_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3ColorPointHashWidth = { "LOD3ColorPointHashWidth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD3ColorPointHashWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD3ColorPointHashWidth_MetaData), NewProp_LOD3ColorPointHashWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals_ValueProp = { "LOD3DensityTotals", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals_Key_KeyProp = { "LOD3DensityTotals_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals = { "LOD3DensityTotals", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD3DensityTotals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD3DensityTotals_MetaData), NewProp_LOD3DensityTotals_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3ColorPointHashWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	nullptr,
	&NewStructOps,
	"WorldAudioDataClusterActorDataSummary",
	Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::PropPointers),
	sizeof(FWorldAudioDataClusterActorDataSummary),
	alignof(FWorldAudioDataClusterActorDataSummary),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary()
{
	if (!Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.InnerSingleton, Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.InnerSingleton;
}
// End ScriptStruct FWorldAudioDataClusterActorDataSummary

// Begin Class AWorldAudioDataClusterActor
void AWorldAudioDataClusterActor::StaticRegisterNativesAWorldAudioDataClusterActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldAudioDataClusterActor);
UClass* Z_Construct_UClass_AWorldAudioDataClusterActor_NoRegister()
{
	return AWorldAudioDataClusterActor::StaticClass();
}
struct Z_Construct_UClass_AWorldAudioDataClusterActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldAudioDataClusterActor.h" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundscapeColorPointHashMapCollection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached Hash Map data \n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached Hash Map data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousSoundSystemVectorCollections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached continuous sound data collection\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached continuous sound data collection" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterActorDataSummary_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data only needed in Editor for debug\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data only needed in Editor for debug" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbCollection_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActor" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundscapeColorPointHashMapCollection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinuousSoundSystemVectorCollections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContinuousSoundSystemVectorCollections;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterActorDataSummary;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReverbCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldAudioDataClusterActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_SoundscapeColorPointHashMapCollection = { "SoundscapeColorPointHashMapCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldAudioDataClusterActor, SoundscapeColorPointHashMapCollection), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundscapeColorPointHashMapCollection_MetaData), NewProp_SoundscapeColorPointHashMapCollection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ContinuousSoundSystemVectorCollections_Inner = { "ContinuousSoundSystemVectorCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UContinuousSoundSystemVectorCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ContinuousSoundSystemVectorCollections = { "ContinuousSoundSystemVectorCollections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldAudioDataClusterActor, ContinuousSoundSystemVectorCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinuousSoundSystemVectorCollections_MetaData), NewProp_ContinuousSoundSystemVectorCollections_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ClusterActorDataSummary = { "ClusterActorDataSummary", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldAudioDataClusterActor, ClusterActorDataSummary), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterActorDataSummary_MetaData), NewProp_ClusterActorDataSummary_MetaData) }; // 731579085
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ReverbCollection = { "ReverbCollection", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldAudioDataClusterActor, ReverbCollection), Z_Construct_UClass_UWorldAudioReverbDataCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbCollection_MetaData), NewProp_ReverbCollection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_SoundscapeColorPointHashMapCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ContinuousSoundSystemVectorCollections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ContinuousSoundSystemVectorCollections,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ClusterActorDataSummary,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ReverbCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::ClassParams = {
	&AWorldAudioDataClusterActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldAudioDataClusterActor()
{
	if (!Z_Registration_Info_UClass_AWorldAudioDataClusterActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldAudioDataClusterActor.OuterSingleton, Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldAudioDataClusterActor.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<AWorldAudioDataClusterActor>()
{
	return AWorldAudioDataClusterActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldAudioDataClusterActor);
AWorldAudioDataClusterActor::~AWorldAudioDataClusterActor() {}
// End Class AWorldAudioDataClusterActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorldAudioReverbData::StaticStruct, Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewStructOps, TEXT("WorldAudioReverbData"), &Z_Registration_Info_UScriptStruct_WorldAudioReverbData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldAudioReverbData), 3007792844U) },
		{ FWorldAudioDataClusterActorDataSummary::StaticStruct, Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewStructOps, TEXT("WorldAudioDataClusterActorDataSummary"), &Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldAudioDataClusterActorDataSummary), 731579085U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldAudioReverbDataCollection, UWorldAudioReverbDataCollection::StaticClass, TEXT("UWorldAudioReverbDataCollection"), &Z_Registration_Info_UClass_UWorldAudioReverbDataCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldAudioReverbDataCollection), 189966000U) },
		{ Z_Construct_UClass_AWorldAudioDataClusterActor, AWorldAudioDataClusterActor::StaticClass, TEXT("AWorldAudioDataClusterActor"), &Z_Registration_Info_UClass_AWorldAudioDataClusterActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldAudioDataClusterActor), 1114125759U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_2329616362(TEXT("/Script/WorldAudioDataSystem"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
