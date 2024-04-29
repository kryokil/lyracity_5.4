// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystemEditor/Private/WADVehAudioPresetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWADVehAudioPresetFactory() {}

// Begin Cross Module References
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystemEditor();
WORLDAUDIODATASYSTEMEDITOR_API UClass* Z_Construct_UClass_UWADVehAudioPresetFactory();
WORLDAUDIODATASYSTEMEDITOR_API UClass* Z_Construct_UClass_UWADVehAudioPresetFactory_NoRegister();
// End Cross Module References

// Begin Class UWADVehAudioPresetFactory
void UWADVehAudioPresetFactory::StaticRegisterNativesUWADVehAudioPresetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWADVehAudioPresetFactory);
UClass* Z_Construct_UClass_UWADVehAudioPresetFactory_NoRegister()
{
	return UWADVehAudioPresetFactory::StaticClass();
}
struct Z_Construct_UClass_UWADVehAudioPresetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WADVehAudioPresetFactory.h" },
		{ "ModuleRelativePath", "Private/WADVehAudioPresetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWADVehAudioPresetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWADVehAudioPresetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWADVehAudioPresetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWADVehAudioPresetFactory_Statics::ClassParams = {
	&UWADVehAudioPresetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWADVehAudioPresetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWADVehAudioPresetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWADVehAudioPresetFactory()
{
	if (!Z_Registration_Info_UClass_UWADVehAudioPresetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWADVehAudioPresetFactory.OuterSingleton, Z_Construct_UClass_UWADVehAudioPresetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWADVehAudioPresetFactory.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEMEDITOR_API UClass* StaticClass<UWADVehAudioPresetFactory>()
{
	return UWADVehAudioPresetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWADVehAudioPresetFactory);
UWADVehAudioPresetFactory::~UWADVehAudioPresetFactory() {}
// End Class UWADVehAudioPresetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_WADVehAudioPresetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWADVehAudioPresetFactory, UWADVehAudioPresetFactory::StaticClass, TEXT("UWADVehAudioPresetFactory"), &Z_Registration_Info_UClass_UWADVehAudioPresetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWADVehAudioPresetFactory), 1730455746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_WADVehAudioPresetFactory_h_2592928251(TEXT("/Script/WorldAudioDataSystemEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_WADVehAudioPresetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_WADVehAudioPresetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
