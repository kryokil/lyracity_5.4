// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Factories/PointCloudFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudFactory() {}

// Begin Cross Module References
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudFactory();
POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

// Begin Class UPointCloudFactory
void UPointCloudFactory::StaticRegisterNativesUPointCloudFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudFactory);
UClass* Z_Construct_UClass_UPointCloudFactory_NoRegister()
{
	return UPointCloudFactory::StaticClass();
}
struct Z_Construct_UClass_UPointCloudFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PointCloudFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/PointCloudFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPointCloudFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudFactory_Statics::ClassParams = {
	&UPointCloudFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPointCloudFactory()
{
	if (!Z_Registration_Info_UClass_UPointCloudFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudFactory.OuterSingleton, Z_Construct_UClass_UPointCloudFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPointCloudFactory.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UClass* StaticClass<UPointCloudFactory>()
{
	return UPointCloudFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudFactory);
UPointCloudFactory::~UPointCloudFactory() {}
// End Class UPointCloudFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudFactory, UPointCloudFactory::StaticClass, TEXT("UPointCloudFactory"), &Z_Registration_Info_UClass_UPointCloudFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudFactory), 1116565840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudFactory_h_4024135424(TEXT("/Script/PointCloudEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Factories_PointCloudFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
