// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Util/CitySampleRumbleInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleRumbleInfo() {}

// Begin Cross Module References
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleRumbleInfo();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin ScriptStruct FCitySampleRumbleInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo;
class UScriptStruct* FCitySampleRumbleInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleRumbleInfo, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleRumbleInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleRumbleInfo>()
{
	return FCitySampleRumbleInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct for storing generic rumble info and what specific motors in the gamepad will be affected\n */" },
#endif
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for storing generic rumble info and what specific motors in the gamepad will be affected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRightLarge_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRightSmall_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLeftLarge_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLeftSmall_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static void NewProp_bUseRightLarge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRightLarge;
	static void NewProp_bUseRightSmall_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRightSmall;
	static void NewProp_bUseLeftLarge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLeftLarge;
	static void NewProp_bUseLeftSmall_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLeftSmall;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleRumbleInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleRumbleInfo, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleRumbleInfo, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
void Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightLarge_SetBit(void* Obj)
{
	((FCitySampleRumbleInfo*)Obj)->bUseRightLarge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightLarge = { "bUseRightLarge", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleRumbleInfo), &Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightLarge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRightLarge_MetaData), NewProp_bUseRightLarge_MetaData) };
void Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightSmall_SetBit(void* Obj)
{
	((FCitySampleRumbleInfo*)Obj)->bUseRightSmall = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightSmall = { "bUseRightSmall", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleRumbleInfo), &Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightSmall_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRightSmall_MetaData), NewProp_bUseRightSmall_MetaData) };
void Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftLarge_SetBit(void* Obj)
{
	((FCitySampleRumbleInfo*)Obj)->bUseLeftLarge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftLarge = { "bUseLeftLarge", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleRumbleInfo), &Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftLarge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLeftLarge_MetaData), NewProp_bUseLeftLarge_MetaData) };
void Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftSmall_SetBit(void* Obj)
{
	((FCitySampleRumbleInfo*)Obj)->bUseLeftSmall = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftSmall = { "bUseLeftSmall", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleRumbleInfo), &Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftSmall_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLeftSmall_MetaData), NewProp_bUseLeftSmall_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightLarge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightSmall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftLarge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftSmall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CitySampleRumbleInfo",
	Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::PropPointers),
	sizeof(FCitySampleRumbleInfo),
	alignof(FCitySampleRumbleInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCitySampleRumbleInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.InnerSingleton;
}
// End ScriptStruct FCitySampleRumbleInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleRumbleInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCitySampleRumbleInfo::StaticStruct, Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewStructOps, TEXT("CitySampleRumbleInfo"), &Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleRumbleInfo), 3747837415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleRumbleInfo_h_358163122(TEXT("/Script/CitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleRumbleInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleRumbleInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
