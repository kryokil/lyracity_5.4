// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudImpl.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudImpl() {}

// Begin Cross Module References
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloud();
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudImpl();
POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudImpl_NoRegister();
UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References

// Begin Class UPointCloudImpl
void UPointCloudImpl::StaticRegisterNativesUPointCloudImpl()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudImpl);
UClass* Z_Construct_UClass_UPointCloudImpl_NoRegister()
{
	return UPointCloudImpl::StaticClass();
}
struct Z_Construct_UClass_UPointCloudImpl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Private implementation of the UPointCloud class\n*/" },
#endif
		{ "DisplayName", "Point Cloud" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PointCloudImpl.h" },
		{ "ModuleRelativePath", "Public/PointCloudImpl.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Private implementation of the UPointCloud class" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudImpl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPointCloudImpl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointCloud,
	(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudImpl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudImpl_Statics::ClassParams = {
	&UPointCloudImpl::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudImpl_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudImpl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPointCloudImpl()
{
	if (!Z_Registration_Info_UClass_UPointCloudImpl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudImpl.OuterSingleton, Z_Construct_UClass_UPointCloudImpl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPointCloudImpl.OuterSingleton;
}
template<> POINTCLOUD_API UClass* StaticClass<UPointCloudImpl>()
{
	return UPointCloudImpl::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudImpl);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPointCloudImpl)
// End Class UPointCloudImpl

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudImpl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudImpl, UPointCloudImpl::StaticClass, TEXT("UPointCloudImpl"), &Z_Registration_Info_UClass_UPointCloudImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudImpl), 739680119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudImpl_h_759795688(TEXT("/Script/PointCloud"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudImpl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudImpl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
