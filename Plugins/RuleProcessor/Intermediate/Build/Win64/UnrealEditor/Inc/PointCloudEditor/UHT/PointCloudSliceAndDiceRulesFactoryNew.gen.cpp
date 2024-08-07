// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Factories/PointCloudSliceAndDiceRulesFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceRulesFactoryNew() {}

// Begin Cross Module References
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin Class UPointCloudSliceAndDiceRuleSetFactoryNew
void UPointCloudSliceAndDiceRuleSetFactoryNew::StaticRegisterNativesUPointCloudSliceAndDiceRuleSetFactoryNew()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudSliceAndDiceRuleSetFactoryNew);
UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew_NoRegister()
{
	return UPointCloudSliceAndDiceRuleSetFactoryNew::StaticClass();
}
struct Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PointCloudSliceAndDiceRulesFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/PointCloudSliceAndDiceRulesFactoryNew.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudSliceAndDiceRuleSetFactoryNew>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew_Statics::ClassParams = {
	&UPointCloudSliceAndDiceRuleSetFactoryNew::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew()
{
	if (!Z_Registration_Info_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew.OuterSingleton, Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UPointCloudSliceAndDiceRuleSetFactoryNew>()
{
	return UPointCloudSliceAndDiceRuleSetFactoryNew::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudSliceAndDiceRuleSetFactoryNew);
UPointCloudSliceAndDiceRuleSetFactoryNew::~UPointCloudSliceAndDiceRuleSetFactoryNew() {}
// End Class UPointCloudSliceAndDiceRuleSetFactoryNew

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudSliceAndDiceRulesFactoryNew_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew, UPointCloudSliceAndDiceRuleSetFactoryNew::StaticClass, TEXT("UPointCloudSliceAndDiceRuleSetFactoryNew"), &Z_Registration_Info_UClass_UPointCloudSliceAndDiceRuleSetFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudSliceAndDiceRuleSetFactoryNew), 2402157619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudSliceAndDiceRulesFactoryNew_h_3429403468(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudSliceAndDiceRulesFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudSliceAndDiceRulesFactoryNew_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
