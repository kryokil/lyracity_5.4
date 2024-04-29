// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystem/Public/WorldAudioDataVehAudioPreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldAudioDataVehAudioPreset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystem();
WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWADVehAudioPreset();
WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWADVehAudioPreset_NoRegister();
// End Cross Module References

// Begin Class UWADVehAudioPreset
void UWADVehAudioPreset::StaticRegisterNativesUWADVehAudioPreset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWADVehAudioPreset);
UClass* Z_Construct_UClass_UWADVehAudioPreset_NoRegister()
{
	return UWADVehAudioPreset::StaticClass();
}
struct Z_Construct_UClass_UWADVehAudioPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WorldAudioDataVehAudioPreset.h" },
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineMetaSound_MetaData[] = {
		{ "Category", "EngineSimulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MetaSound for Engine Simulation\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MetaSound for Engine Simulation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityInputName_MetaData[] = {
		{ "Category", "EngineSimulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MetaSound Float Input Name for passing Velocity to the MetaSound\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MetaSound Float Input Name for passing Velocity to the MetaSound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeedInputName_MetaData[] = {
		{ "Category", "EngineSimulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MetaSound Integer Input Name for passing Velocity to the MetaSound\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MetaSound Integer Input Name for passing Velocity to the MetaSound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinEnginePitchOffsetName_MetaData[] = {
		{ "Category", "EngineSimulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MetaSound Integer Input Name for passing Velocity to the MetaSound\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MetaSound Integer Input Name for passing Velocity to the MetaSound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinEnginePitchOffset_MetaData[] = {
		{ "Category", "EngineSimulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MetaSound Integer Input Name for passing Velocity to the MetaSound\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MetaSound Integer Input Name for passing Velocity to the MetaSound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnginePitchOffsetName_MetaData[] = {
		{ "Category", "EngineSimulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MetaSound Integer Input Name for passing Velocity to the MetaSound\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MetaSound Integer Input Name for passing Velocity to the MetaSound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnginePitchOffset_MetaData[] = {
		{ "Category", "EngineSimulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MetaSound Integer Input Name for passing Velocity to the MetaSound\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MetaSound Integer Input Name for passing Velocity to the MetaSound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingSound_MetaData[] = {
		{ "Category", "CarSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound for braking\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound for braking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HonkingSound_MetaData[] = {
		{ "Category", "CarSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound for honking horn\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound for honking horn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HornHonkDistance_MetaData[] = {
		{ "Category", "CarSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Horn Honk Distance\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horn Honk Distance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSoundMPS_MetaData[] = {
		{ "Category", "InterpretiveData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed of sound in Meters Per Second\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataVehAudioPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed of sound in Meters Per Second" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineMetaSound;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VelocityInputName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RandomSeedInputName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MinEnginePitchOffsetName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinEnginePitchOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaxEnginePitchOffsetName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEnginePitchOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakingSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HonkingSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HornHonkDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedOfSoundMPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWADVehAudioPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_EngineMetaSound = { "EngineMetaSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWADVehAudioPreset, EngineMetaSound), Z_Construct_UClass_UMetaSoundSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineMetaSound_MetaData), NewProp_EngineMetaSound_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_VelocityInputName = { "VelocityInputName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWADVehAudioPreset, VelocityInputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityInputName_MetaData), NewProp_VelocityInputName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_RandomSeedInputName = { "RandomSeedInputName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWADVehAudioPreset, RandomSeedInputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeedInputName_MetaData), NewProp_RandomSeedInputName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_MinEnginePitchOffsetName = { "MinEnginePitchOffsetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWADVehAudioPreset, MinEnginePitchOffsetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinEnginePitchOffsetName_MetaData), NewProp_MinEnginePitchOffsetName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_MinEnginePitchOffset = { "MinEnginePitchOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWADVehAudioPreset, MinEnginePitchOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinEnginePitchOffset_MetaData), NewProp_MinEnginePitchOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_MaxEnginePitchOffsetName = { "MaxEnginePitchOffsetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWADVehAudioPreset, MaxEnginePitchOffsetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEnginePitchOffsetName_MetaData), NewProp_MaxEnginePitchOffsetName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_MaxEnginePitchOffset = { "MaxEnginePitchOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWADVehAudioPreset, MaxEnginePitchOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEnginePitchOffset_MetaData), NewProp_MaxEnginePitchOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_BrakingSound = { "BrakingSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWADVehAudioPreset, BrakingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingSound_MetaData), NewProp_BrakingSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_HonkingSound = { "HonkingSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWADVehAudioPreset, HonkingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HonkingSound_MetaData), NewProp_HonkingSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_HornHonkDistance = { "HornHonkDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWADVehAudioPreset, HornHonkDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HornHonkDistance_MetaData), NewProp_HornHonkDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_SpeedOfSoundMPS = { "SpeedOfSoundMPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWADVehAudioPreset, SpeedOfSoundMPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedOfSoundMPS_MetaData), NewProp_SpeedOfSoundMPS_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWADVehAudioPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_EngineMetaSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_VelocityInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_RandomSeedInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_MinEnginePitchOffsetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_MinEnginePitchOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_MaxEnginePitchOffsetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_MaxEnginePitchOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_BrakingSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_HonkingSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_HornHonkDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWADVehAudioPreset_Statics::NewProp_SpeedOfSoundMPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWADVehAudioPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWADVehAudioPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWADVehAudioPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWADVehAudioPreset_Statics::ClassParams = {
	&UWADVehAudioPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWADVehAudioPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWADVehAudioPreset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWADVehAudioPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_UWADVehAudioPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWADVehAudioPreset()
{
	if (!Z_Registration_Info_UClass_UWADVehAudioPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWADVehAudioPreset.OuterSingleton, Z_Construct_UClass_UWADVehAudioPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWADVehAudioPreset.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<UWADVehAudioPreset>()
{
	return UWADVehAudioPreset::StaticClass();
}
UWADVehAudioPreset::UWADVehAudioPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWADVehAudioPreset);
UWADVehAudioPreset::~UWADVehAudioPreset() {}
// End Class UWADVehAudioPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataVehAudioPreset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWADVehAudioPreset, UWADVehAudioPreset::StaticClass, TEXT("UWADVehAudioPreset"), &Z_Registration_Info_UClass_UWADVehAudioPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWADVehAudioPreset), 2734587129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataVehAudioPreset_h_222740271(TEXT("/Script/WorldAudioDataSystem"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataVehAudioPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataVehAudioPreset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
