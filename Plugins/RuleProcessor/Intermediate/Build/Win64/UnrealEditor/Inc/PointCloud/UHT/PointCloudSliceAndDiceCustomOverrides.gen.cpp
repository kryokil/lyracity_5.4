// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudSliceAndDiceCustomOverrides.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceCustomOverrides() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FCustomOverrides();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References

// Begin ScriptStruct FCustomOverrides
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomOverrides;
class UScriptStruct* FCustomOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomOverrides, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("CustomOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_CustomOverrides.OuterSingleton;
}
template<> POINTCLOUD_API UScriptStruct* StaticStruct<FCustomOverrides>()
{
	return FCustomOverrides::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceCustomOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the dynamically created struct class */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceCustomOverrides.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the dynamically created struct class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructInstance_MetaData[] = {
		{ "Category", "CustomOverrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the struct instance */" },
#endif
		{ "DisplayName", "Custom override values" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceCustomOverrides.h" },
		{ "StructTypeConst", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the struct instance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StructClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructClass = { "StructClass", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomOverrides, StructClass), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructClass_MetaData), NewProp_StructClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructInstance = { "StructInstance", nullptr, (EPropertyFlags)0x0020080000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomOverrides, StructInstance), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructInstance_MetaData), NewProp_StructInstance_MetaData) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	nullptr,
	&NewStructOps,
	"CustomOverrides",
	Z_Construct_UScriptStruct_FCustomOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOverrides_Statics::PropPointers),
	sizeof(FCustomOverrides),
	alignof(FCustomOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_CustomOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomOverrides.InnerSingleton, Z_Construct_UScriptStruct_FCustomOverrides_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomOverrides.InnerSingleton;
}
// End ScriptStruct FCustomOverrides

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCustomOverrides_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCustomOverrides::StaticStruct, Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewStructOps, TEXT("CustomOverrides"), &Z_Registration_Info_UScriptStruct_CustomOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomOverrides), 2401021983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCustomOverrides_h_852681765(TEXT("/Script/PointCloud"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCustomOverrides_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCustomOverrides_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
