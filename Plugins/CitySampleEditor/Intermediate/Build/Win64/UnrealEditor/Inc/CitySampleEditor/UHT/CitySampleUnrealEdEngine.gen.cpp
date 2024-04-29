// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/CitySampleUnrealEdEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleUnrealEdEngine() {}

// Begin Cross Module References
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleUnrealEdEngine();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleUnrealEdEngine_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine();
UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References

// Begin Class UCitySampleUnrealEdEngine
void UCitySampleUnrealEdEngine::StaticRegisterNativesUCitySampleUnrealEdEngine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleUnrealEdEngine);
UClass* Z_Construct_UClass_UCitySampleUnrealEdEngine_NoRegister()
{
	return UCitySampleUnrealEdEngine::StaticClass();
}
struct Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CitySampleUnrealEdEngine.h" },
		{ "ModuleRelativePath", "Public/CitySampleUnrealEdEngine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceControlStatusBranches_MetaData[] = {
		{ "ModuleRelativePath", "Public/CitySampleUnrealEdEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceControlStatusBranches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceControlStatusBranches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleUnrealEdEngine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::NewProp_SourceControlStatusBranches_Inner = { "SourceControlStatusBranches", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::NewProp_SourceControlStatusBranches = { "SourceControlStatusBranches", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUnrealEdEngine, SourceControlStatusBranches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceControlStatusBranches_MetaData), NewProp_SourceControlStatusBranches_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::NewProp_SourceControlStatusBranches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::NewProp_SourceControlStatusBranches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUnrealEdEngine,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::ClassParams = {
	&UCitySampleUnrealEdEngine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::PropPointers),
	0,
	0x008000AEu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleUnrealEdEngine()
{
	if (!Z_Registration_Info_UClass_UCitySampleUnrealEdEngine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleUnrealEdEngine.OuterSingleton, Z_Construct_UClass_UCitySampleUnrealEdEngine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleUnrealEdEngine.OuterSingleton;
}
template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleUnrealEdEngine>()
{
	return UCitySampleUnrealEdEngine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleUnrealEdEngine);
UCitySampleUnrealEdEngine::~UCitySampleUnrealEdEngine() {}
// End Class UCitySampleUnrealEdEngine

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleUnrealEdEngine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleUnrealEdEngine, UCitySampleUnrealEdEngine::StaticClass, TEXT("UCitySampleUnrealEdEngine"), &Z_Registration_Info_UClass_UCitySampleUnrealEdEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleUnrealEdEngine), 486979949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleUnrealEdEngine_h_3713523399(TEXT("/Script/CitySampleEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleUnrealEdEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleUnrealEdEngine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
