// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/WorldPartition/CitySampleHLODBuilderMeshApproximate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleHLODBuilderMeshApproximate() {}

// Begin Cross Module References
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshApproximate();
// End Cross Module References

// Begin Class UCitySampleHLODBuilderMeshApproximate
void UCitySampleHLODBuilderMeshApproximate::StaticRegisterNativesUCitySampleHLODBuilderMeshApproximate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleHLODBuilderMeshApproximate);
UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_NoRegister()
{
	return UCitySampleHLODBuilderMeshApproximate::StaticClass();
}
struct Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Extend the MeshApproximate HLOD builder to feed CitySample specific data to the mesh generation process.\n * In order to have better texture space utilization, we use this class to add the collision meshes of\n * buildings to the actor approximation algorithm. This ensure buildings are processed as watertight blocks.\n */" },
#endif
		{ "IncludePath", "WorldPartition/CitySampleHLODBuilderMeshApproximate.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/CitySampleHLODBuilderMeshApproximate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extend the MeshApproximate HLOD builder to feed CitySample specific data to the mesh generation process.\nIn order to have better texture space utilization, we use this class to add the collision meshes of\nbuildings to the actor approximation algorithm. This ensure buildings are processed as watertight blocks." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleHLODBuilderMeshApproximate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHLODBuilderMeshApproximate,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::ClassParams = {
	&UCitySampleHLODBuilderMeshApproximate::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate()
{
	if (!Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate.OuterSingleton, Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate.OuterSingleton;
}
template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleHLODBuilderMeshApproximate>()
{
	return UCitySampleHLODBuilderMeshApproximate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleHLODBuilderMeshApproximate);
UCitySampleHLODBuilderMeshApproximate::~UCitySampleHLODBuilderMeshApproximate() {}
// End Class UCitySampleHLODBuilderMeshApproximate

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate, UCitySampleHLODBuilderMeshApproximate::StaticClass, TEXT("UCitySampleHLODBuilderMeshApproximate"), &Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleHLODBuilderMeshApproximate), 2879231690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_1361739781(TEXT("/Script/CitySampleEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
