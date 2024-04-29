// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoverDrone/Public/HoverDroneVolumeManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDroneVolumeManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ABlockingVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDroneSpeedLimitBox_NoRegister();
HOVERDRONE_API UClass* Z_Construct_UClass_UHoverDroneVolumeManager();
HOVERDRONE_API UClass* Z_Construct_UClass_UHoverDroneVolumeManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoverDrone();
// End Cross Module References

// Begin Class UHoverDroneVolumeManager
void UHoverDroneVolumeManager::StaticRegisterNativesUHoverDroneVolumeManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoverDroneVolumeManager);
UClass* Z_Construct_UClass_UHoverDroneVolumeManager_NoRegister()
{
	return UHoverDroneVolumeManager::StaticClass();
}
struct Z_Construct_UClass_UHoverDroneVolumeManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoverDroneVolumeManager.h" },
		{ "ModuleRelativePath", "Public/HoverDroneVolumeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedLimitBoxes_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoverDroneVolumeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingVolumes_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoverDroneVolumeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedLimitBoxes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SpeedLimitBoxes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockingVolumes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_BlockingVolumes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoverDroneVolumeManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoverDroneVolumeManager_Statics::NewProp_SpeedLimitBoxes_ElementProp = { "SpeedLimitBoxes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AHoverDroneSpeedLimitBox_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoverDroneVolumeManager_Statics::NewProp_SpeedLimitBoxes = { "SpeedLimitBoxes", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneVolumeManager, SpeedLimitBoxes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedLimitBoxes_MetaData), NewProp_SpeedLimitBoxes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoverDroneVolumeManager_Statics::NewProp_BlockingVolumes_ElementProp = { "BlockingVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABlockingVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHoverDroneVolumeManager_Statics::NewProp_BlockingVolumes = { "BlockingVolumes", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneVolumeManager, BlockingVolumes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingVolumes_MetaData), NewProp_BlockingVolumes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoverDroneVolumeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneVolumeManager_Statics::NewProp_SpeedLimitBoxes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneVolumeManager_Statics::NewProp_SpeedLimitBoxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneVolumeManager_Statics::NewProp_BlockingVolumes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneVolumeManager_Statics::NewProp_BlockingVolumes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneVolumeManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoverDroneVolumeManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_HoverDrone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneVolumeManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoverDroneVolumeManager_Statics::ClassParams = {
	&UHoverDroneVolumeManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoverDroneVolumeManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneVolumeManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneVolumeManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoverDroneVolumeManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoverDroneVolumeManager()
{
	if (!Z_Registration_Info_UClass_UHoverDroneVolumeManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoverDroneVolumeManager.OuterSingleton, Z_Construct_UClass_UHoverDroneVolumeManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoverDroneVolumeManager.OuterSingleton;
}
template<> HOVERDRONE_API UClass* StaticClass<UHoverDroneVolumeManager>()
{
	return UHoverDroneVolumeManager::StaticClass();
}
UHoverDroneVolumeManager::UHoverDroneVolumeManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoverDroneVolumeManager);
UHoverDroneVolumeManager::~UHoverDroneVolumeManager() {}
// End Class UHoverDroneVolumeManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneVolumeManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoverDroneVolumeManager, UHoverDroneVolumeManager::StaticClass, TEXT("UHoverDroneVolumeManager"), &Z_Registration_Info_UClass_UHoverDroneVolumeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoverDroneVolumeManager), 256260178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneVolumeManager_h_1883424263(TEXT("/Script/HoverDrone"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneVolumeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneVolumeManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
