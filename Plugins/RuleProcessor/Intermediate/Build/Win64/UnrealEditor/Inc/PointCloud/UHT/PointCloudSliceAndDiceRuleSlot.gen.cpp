// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudSliceAndDiceRuleSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceRuleSlot() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRuleSlot();
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRuleSlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References

// Begin Class UPointCloudRuleSlot
void UPointCloudRuleSlot::StaticRegisterNativesUPointCloudRuleSlot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudRuleSlot);
UClass* Z_Construct_UClass_UPointCloudRuleSlot_NoRegister()
{
	return UPointCloudRuleSlot::StaticClass();
}
struct Z_Construct_UClass_UPointCloudRuleSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A Slot is a place a rule can be placed. Rules may have none, one or more slots. This object stores information about a slot \n*/" },
#endif
		{ "IncludePath", "PointCloudSliceAndDiceRuleSlot.h" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Slot is a place a rule can be placed. Rules may have none, one or more slots. This object stores information about a slot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExternallyVisible_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static void NewProp_bExternallyVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExternallyVisible;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudRuleSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudRuleSlot, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
void Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_bExternallyVisible_SetBit(void* Obj)
{
	((UPointCloudRuleSlot*)Obj)->bExternallyVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_bExternallyVisible = { "bExternallyVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPointCloudRuleSlot), &Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_bExternallyVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExternallyVisible_MetaData), NewProp_bExternallyVisible_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudRuleSlot, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudRuleSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_bExternallyVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRuleSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPointCloudRuleSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRuleSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudRuleSlot_Statics::ClassParams = {
	&UPointCloudRuleSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPointCloudRuleSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRuleSlot_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRuleSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudRuleSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPointCloudRuleSlot()
{
	if (!Z_Registration_Info_UClass_UPointCloudRuleSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudRuleSlot.OuterSingleton, Z_Construct_UClass_UPointCloudRuleSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPointCloudRuleSlot.OuterSingleton;
}
template<> POINTCLOUD_API UClass* StaticClass<UPointCloudRuleSlot>()
{
	return UPointCloudRuleSlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudRuleSlot);
UPointCloudRuleSlot::~UPointCloudRuleSlot() {}
// End Class UPointCloudRuleSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudRuleSlot, UPointCloudRuleSlot::StaticClass, TEXT("UPointCloudRuleSlot"), &Z_Registration_Info_UClass_UPointCloudRuleSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudRuleSlot), 956126710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSlot_h_3709134020(TEXT("/Script/PointCloud"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
