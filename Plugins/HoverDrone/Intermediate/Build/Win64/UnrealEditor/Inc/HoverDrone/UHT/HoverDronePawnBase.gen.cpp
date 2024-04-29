// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoverDrone/Public/HoverDronePawnBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDronePawnBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDronePawnBase();
HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDronePawnBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoverDrone();
// End Cross Module References

// Begin Class AHoverDronePawnBase
void AHoverDronePawnBase::StaticRegisterNativesAHoverDronePawnBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoverDronePawnBase);
UClass* Z_Construct_UClass_AHoverDronePawnBase_NoRegister()
{
	return AHoverDronePawnBase::StaticClass();
}
struct Z_Construct_UClass_AHoverDronePawnBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HoverDronePawnBase.h" },
		{ "ModuleRelativePath", "Public/HoverDronePawnBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoverDronePawnBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoverDronePawnBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverDronePawnBase_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawnBase, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoverDronePawnBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawnBase_Statics::NewProp_CameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawnBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHoverDronePawnBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_HoverDrone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawnBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoverDronePawnBase_Statics::ClassParams = {
	&AHoverDronePawnBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHoverDronePawnBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawnBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawnBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoverDronePawnBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHoverDronePawnBase()
{
	if (!Z_Registration_Info_UClass_AHoverDronePawnBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoverDronePawnBase.OuterSingleton, Z_Construct_UClass_AHoverDronePawnBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHoverDronePawnBase.OuterSingleton;
}
template<> HOVERDRONE_API UClass* StaticClass<AHoverDronePawnBase>()
{
	return AHoverDronePawnBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHoverDronePawnBase);
AHoverDronePawnBase::~AHoverDronePawnBase() {}
// End Class AHoverDronePawnBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDronePawnBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHoverDronePawnBase, AHoverDronePawnBase::StaticClass, TEXT("AHoverDronePawnBase"), &Z_Registration_Info_UClass_AHoverDronePawnBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoverDronePawnBase), 2218786132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDronePawnBase_h_487406334(TEXT("/Script/HoverDrone"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDronePawnBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDronePawnBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
