// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystem/Public/WorldAudioMassEntityTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldAudioMassEntityTrait() {}

// Begin Cross Module References
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystem();
WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioDataMassEntityTrait();
WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioDataMassEntityTrait_NoRegister();
WORLDAUDIODATASYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWorldAudioDataAudioControllerParameters();
// End Cross Module References

// Begin ScriptStruct FWorldAudioDataAudioControllerParameters
static_assert(std::is_polymorphic<FWorldAudioDataAudioControllerParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FWorldAudioDataAudioControllerParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldAudioDataAudioControllerParameters;
class UScriptStruct* FWorldAudioDataAudioControllerParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldAudioDataAudioControllerParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldAudioDataAudioControllerParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldAudioDataAudioControllerParameters, (UObject*)Z_Construct_UPackage__Script_WorldAudioDataSystem(), TEXT("WorldAudioDataAudioControllerParameters"));
	}
	return Z_Registration_Info_UScriptStruct_WorldAudioDataAudioControllerParameters.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UScriptStruct* StaticStruct<FWorldAudioDataAudioControllerParameters>()
{
	return FWorldAudioDataAudioControllerParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldAudioDataAudioControllerParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldAudioMassEntityTrait.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldAudioDataAudioControllerParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldAudioDataAudioControllerParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	Z_Construct_UScriptStruct_FMassSharedFragment,
	&NewStructOps,
	"WorldAudioDataAudioControllerParameters",
	nullptr,
	0,
	sizeof(FWorldAudioDataAudioControllerParameters),
	alignof(FWorldAudioDataAudioControllerParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataAudioControllerParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldAudioDataAudioControllerParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldAudioDataAudioControllerParameters()
{
	if (!Z_Registration_Info_UScriptStruct_WorldAudioDataAudioControllerParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldAudioDataAudioControllerParameters.InnerSingleton, Z_Construct_UScriptStruct_FWorldAudioDataAudioControllerParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldAudioDataAudioControllerParameters.InnerSingleton;
}
// End ScriptStruct FWorldAudioDataAudioControllerParameters

// Begin Class UWorldAudioDataMassEntityTrait
void UWorldAudioDataMassEntityTrait::StaticRegisterNativesUWorldAudioDataMassEntityTrait()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldAudioDataMassEntityTrait);
UClass* Z_Construct_UClass_UWorldAudioDataMassEntityTrait_NoRegister()
{
	return UWorldAudioDataMassEntityTrait::StaticClass();
}
struct Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "World Audio Data" },
		{ "IncludePath", "WorldAudioMassEntityTrait.h" },
		{ "ModuleRelativePath", "Public/WorldAudioMassEntityTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioController_MetaData[] = {
		{ "Category", "World Audio Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The audio controller to use for individualised audio */" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioMassEntityTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The audio controller to use for individualised audio" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AudioController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldAudioDataMassEntityTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::NewProp_AudioController = { "AudioController", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataMassEntityTrait, AudioController), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioController_MetaData), NewProp_AudioController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::NewProp_AudioController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::ClassParams = {
	&UWorldAudioDataMassEntityTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldAudioDataMassEntityTrait()
{
	if (!Z_Registration_Info_UClass_UWorldAudioDataMassEntityTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldAudioDataMassEntityTrait.OuterSingleton, Z_Construct_UClass_UWorldAudioDataMassEntityTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldAudioDataMassEntityTrait.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<UWorldAudioDataMassEntityTrait>()
{
	return UWorldAudioDataMassEntityTrait::StaticClass();
}
UWorldAudioDataMassEntityTrait::UWorldAudioDataMassEntityTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldAudioDataMassEntityTrait);
UWorldAudioDataMassEntityTrait::~UWorldAudioDataMassEntityTrait() {}
// End Class UWorldAudioDataMassEntityTrait

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioMassEntityTrait_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorldAudioDataAudioControllerParameters::StaticStruct, Z_Construct_UScriptStruct_FWorldAudioDataAudioControllerParameters_Statics::NewStructOps, TEXT("WorldAudioDataAudioControllerParameters"), &Z_Registration_Info_UScriptStruct_WorldAudioDataAudioControllerParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldAudioDataAudioControllerParameters), 2267249032U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldAudioDataMassEntityTrait, UWorldAudioDataMassEntityTrait::StaticClass, TEXT("UWorldAudioDataMassEntityTrait"), &Z_Registration_Info_UClass_UWorldAudioDataMassEntityTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldAudioDataMassEntityTrait), 1277312523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioMassEntityTrait_h_2704872115(TEXT("/Script/WorldAudioDataSystem"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioMassEntityTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioMassEntityTrait_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioMassEntityTrait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioMassEntityTrait_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
