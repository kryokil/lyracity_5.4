// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/Commandlets/NaniteMeshLodGroupUpdateCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaniteMeshLodGroupUpdateCommandlet() {}

// Begin Cross Module References
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References

// Begin Class UNaniteMeshLodGroupUpdateCommandlet
void UNaniteMeshLodGroupUpdateCommandlet::StaticRegisterNativesUNaniteMeshLodGroupUpdateCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNaniteMeshLodGroupUpdateCommandlet);
UClass* Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_NoRegister()
{
	return UNaniteMeshLodGroupUpdateCommandlet::StaticClass();
}
struct Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/NaniteMeshLodGroupUpdateCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/NaniteMeshLodGroupUpdateCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNaniteMeshLodGroupUpdateCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::ClassParams = {
	&UNaniteMeshLodGroupUpdateCommandlet::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet()
{
	if (!Z_Registration_Info_UClass_UNaniteMeshLodGroupUpdateCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNaniteMeshLodGroupUpdateCommandlet.OuterSingleton, Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNaniteMeshLodGroupUpdateCommandlet.OuterSingleton;
}
template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UNaniteMeshLodGroupUpdateCommandlet>()
{
	return UNaniteMeshLodGroupUpdateCommandlet::StaticClass();
}
UNaniteMeshLodGroupUpdateCommandlet::UNaniteMeshLodGroupUpdateCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNaniteMeshLodGroupUpdateCommandlet);
UNaniteMeshLodGroupUpdateCommandlet::~UNaniteMeshLodGroupUpdateCommandlet() {}
// End Class UNaniteMeshLodGroupUpdateCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_NaniteMeshLodGroupUpdateCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet, UNaniteMeshLodGroupUpdateCommandlet::StaticClass, TEXT("UNaniteMeshLodGroupUpdateCommandlet"), &Z_Registration_Info_UClass_UNaniteMeshLodGroupUpdateCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNaniteMeshLodGroupUpdateCommandlet), 3914057164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_NaniteMeshLodGroupUpdateCommandlet_h_1476769755(TEXT("/Script/CitySampleEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_NaniteMeshLodGroupUpdateCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_NaniteMeshLodGroupUpdateCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
