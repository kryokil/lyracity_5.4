// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficReplicatedAgent.h"
#include "MassReplication/Public/MassReplicationTransformHandlers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficReplicatedAgent() {}

// Begin Cross Module References
MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassFastArrayItemBase();
MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentBase();
MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedTrafficAgent();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FTrafficFastArrayItem();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin ScriptStruct FReplicatedTrafficAgent
static_assert(std::is_polymorphic<FReplicatedTrafficAgent>() == std::is_polymorphic<FReplicatedAgentBase>(), "USTRUCT FReplicatedTrafficAgent cannot be polymorphic unless super FReplicatedAgentBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent;
class UScriptStruct* FReplicatedTrafficAgent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedTrafficAgent, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ReplicatedTrafficAgent"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FReplicatedTrafficAgent>()
{
	return FReplicatedTrafficAgent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The data that is replicated for each agent */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficReplicatedAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The data that is replicated for each agent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficReplicatedAgent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionYaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedTrafficAgent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::NewProp_PositionYaw = { "PositionYaw", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplicatedTrafficAgent, PositionYaw), Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionYaw_MetaData), NewProp_PositionYaw_MetaData) }; // 1524889984
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::NewProp_PositionYaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FReplicatedAgentBase,
	&NewStructOps,
	"ReplicatedTrafficAgent",
	Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::PropPointers),
	sizeof(FReplicatedTrafficAgent),
	alignof(FReplicatedTrafficAgent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplicatedTrafficAgent()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.InnerSingleton, Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.InnerSingleton;
}
// End ScriptStruct FReplicatedTrafficAgent

// Begin ScriptStruct FTrafficFastArrayItem
static_assert(std::is_polymorphic<FTrafficFastArrayItem>() == std::is_polymorphic<FMassFastArrayItemBase>(), "USTRUCT FTrafficFastArrayItem cannot be polymorphic unless super FMassFastArrayItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrafficFastArrayItem;
class UScriptStruct* FTrafficFastArrayItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrafficFastArrayItem, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("TrafficFastArrayItem"));
	}
	return Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FTrafficFastArrayItem>()
{
	return FTrafficFastArrayItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fast array item for efficient agent replication. Remember to make this dirty if any FReplicatedTrafficAgent member variables are modified */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficReplicatedAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fast array item for efficient agent replication. Remember to make this dirty if any FReplicatedTrafficAgent member variables are modified" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Agent_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficReplicatedAgent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Agent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrafficFastArrayItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrafficFastArrayItem, Agent), Z_Construct_UScriptStruct_FReplicatedTrafficAgent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Agent_MetaData), NewProp_Agent_MetaData) }; // 2563712972
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::NewProp_Agent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFastArrayItemBase,
	&NewStructOps,
	"TrafficFastArrayItem",
	Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::PropPointers),
	sizeof(FTrafficFastArrayItem),
	alignof(FTrafficFastArrayItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTrafficFastArrayItem()
{
	if (!Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.InnerSingleton, Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.InnerSingleton;
}
// End ScriptStruct FTrafficFastArrayItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicatedAgent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FReplicatedTrafficAgent::StaticStruct, Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::NewStructOps, TEXT("ReplicatedTrafficAgent"), &Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicatedTrafficAgent), 2563712972U) },
		{ FTrafficFastArrayItem::StaticStruct, Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::NewStructOps, TEXT("TrafficFastArrayItem"), &Z_Registration_Info_UScriptStruct_TrafficFastArrayItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrafficFastArrayItem), 3832827052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicatedAgent_h_3662436065(TEXT("/Script/MassTraffic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicatedAgent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicatedAgent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
