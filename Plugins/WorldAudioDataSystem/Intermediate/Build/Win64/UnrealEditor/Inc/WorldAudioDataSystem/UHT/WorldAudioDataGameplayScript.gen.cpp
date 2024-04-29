// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystem/Public/WorldAudioDataGameplayScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldAudioDataGameplayScript() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystem();
WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_AWorldAudioDataGameplayScript();
WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_AWorldAudioDataGameplayScript_NoRegister();
// End Cross Module References

// Begin Class AWorldAudioDataGameplayScript
void AWorldAudioDataGameplayScript::StaticRegisterNativesAWorldAudioDataGameplayScript()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldAudioDataGameplayScript);
UClass* Z_Construct_UClass_AWorldAudioDataGameplayScript_NoRegister()
{
	return AWorldAudioDataGameplayScript::StaticClass();
}
struct Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WorldAudioDataGameplayScript.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WorldAudioDataGameplayScript.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldAudioDataGameplayScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::ClassParams = {
	&AWorldAudioDataGameplayScript::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldAudioDataGameplayScript()
{
	if (!Z_Registration_Info_UClass_AWorldAudioDataGameplayScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldAudioDataGameplayScript.OuterSingleton, Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldAudioDataGameplayScript.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<AWorldAudioDataGameplayScript>()
{
	return AWorldAudioDataGameplayScript::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldAudioDataGameplayScript);
AWorldAudioDataGameplayScript::~AWorldAudioDataGameplayScript() {}
// End Class AWorldAudioDataGameplayScript

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataGameplayScript_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldAudioDataGameplayScript, AWorldAudioDataGameplayScript::StaticClass, TEXT("AWorldAudioDataGameplayScript"), &Z_Registration_Info_UClass_AWorldAudioDataGameplayScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldAudioDataGameplayScript), 1351242988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataGameplayScript_h_1414921011(TEXT("/Script/WorldAudioDataSystem"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataGameplayScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataGameplayScript_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
