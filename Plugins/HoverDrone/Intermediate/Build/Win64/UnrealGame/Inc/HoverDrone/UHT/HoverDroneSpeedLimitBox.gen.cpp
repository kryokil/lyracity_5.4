// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoverDrone/Public/HoverDroneSpeedLimitBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDroneSpeedLimitBox() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AVolume();
HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDroneSpeedLimitBox();
HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDroneSpeedLimitBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoverDrone();
// End Cross Module References

// Begin Class AHoverDroneSpeedLimitBox
void AHoverDroneSpeedLimitBox::StaticRegisterNativesAHoverDroneSpeedLimitBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoverDroneSpeedLimitBox);
UClass* Z_Construct_UClass_AHoverDroneSpeedLimitBox_NoRegister()
{
	return AHoverDroneSpeedLimitBox::StaticClass();
}
struct Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "HoverDroneSpeedLimitBox.h" },
		{ "ModuleRelativePath", "Public/HoverDroneSpeedLimitBox.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedSpeedIndex_MetaData[] = {
		{ "Category", "HoverDroneSpeedLimitBox" },
		{ "ModuleRelativePath", "Public/HoverDroneSpeedLimitBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAllowedSpeedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoverDroneSpeedLimitBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::NewProp_MaxAllowedSpeedIndex = { "MaxAllowedSpeedIndex", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDroneSpeedLimitBox, MaxAllowedSpeedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedSpeedIndex_MetaData), NewProp_MaxAllowedSpeedIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::NewProp_MaxAllowedSpeedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_HoverDrone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::ClassParams = {
	&AHoverDroneSpeedLimitBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHoverDroneSpeedLimitBox()
{
	if (!Z_Registration_Info_UClass_AHoverDroneSpeedLimitBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoverDroneSpeedLimitBox.OuterSingleton, Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHoverDroneSpeedLimitBox.OuterSingleton;
}
template<> HOVERDRONE_API UClass* StaticClass<AHoverDroneSpeedLimitBox>()
{
	return AHoverDroneSpeedLimitBox::StaticClass();
}
AHoverDroneSpeedLimitBox::AHoverDroneSpeedLimitBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHoverDroneSpeedLimitBox);
AHoverDroneSpeedLimitBox::~AHoverDroneSpeedLimitBox() {}
// End Class AHoverDroneSpeedLimitBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneSpeedLimitBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHoverDroneSpeedLimitBox, AHoverDroneSpeedLimitBox::StaticClass, TEXT("AHoverDroneSpeedLimitBox"), &Z_Registration_Info_UClass_AHoverDroneSpeedLimitBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoverDroneSpeedLimitBox), 3991397749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneSpeedLimitBox_h_3462148384(TEXT("/Script/HoverDrone"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneSpeedLimitBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneSpeedLimitBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
