// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimNotifyState_PlayMontageOnFace() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCitySampleAnimNotifyState_PlayMontageOnFace
void UCitySampleAnimNotifyState_PlayMontageOnFace::StaticRegisterNativesUCitySampleAnimNotifyState_PlayMontageOnFace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimNotifyState_PlayMontageOnFace);
UClass* Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_NoRegister()
{
	return UCitySampleAnimNotifyState_PlayMontageOnFace::StaticClass();
}
struct Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimToPlay_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The animation to play. If not using montage, it will create a dynamic one\n" },
#endif
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The animation to play. If not using montage, it will create a dynamic one" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTryToSync_MetaData[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopOnNotifyEnd_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If false, the anim will keep until its duration is up, and potentially past the main montage. This won't work if the anim is played as a dynamic montage.\n" },
#endif
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false, the anim will keep until its duration is up, and potentially past the main montage. This won't work if the anim is played as a dynamic montage." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimToPlay;
	static void NewProp_bTryToSync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryToSync;
	static void NewProp_bStopOnNotifyEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnNotifyEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimNotifyState_PlayMontageOnFace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_AnimToPlay = { "AnimToPlay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimNotifyState_PlayMontageOnFace, AnimToPlay), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimToPlay_MetaData), NewProp_AnimToPlay_MetaData) };
void Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bTryToSync_SetBit(void* Obj)
{
	((UCitySampleAnimNotifyState_PlayMontageOnFace*)Obj)->bTryToSync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bTryToSync = { "bTryToSync", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleAnimNotifyState_PlayMontageOnFace), &Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bTryToSync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTryToSync_MetaData), NewProp_bTryToSync_MetaData) };
void Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bStopOnNotifyEnd_SetBit(void* Obj)
{
	((UCitySampleAnimNotifyState_PlayMontageOnFace*)Obj)->bStopOnNotifyEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bStopOnNotifyEnd = { "bStopOnNotifyEnd", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleAnimNotifyState_PlayMontageOnFace), &Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bStopOnNotifyEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopOnNotifyEnd_MetaData), NewProp_bStopOnNotifyEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_AnimToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bTryToSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bStopOnNotifyEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::ClassParams = {
	&UCitySampleAnimNotifyState_PlayMontageOnFace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace()
{
	if (!Z_Registration_Info_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace.OuterSingleton, Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAnimNotifyState_PlayMontageOnFace>()
{
	return UCitySampleAnimNotifyState_PlayMontageOnFace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimNotifyState_PlayMontageOnFace);
UCitySampleAnimNotifyState_PlayMontageOnFace::~UCitySampleAnimNotifyState_PlayMontageOnFace() {}
// End Class UCitySampleAnimNotifyState_PlayMontageOnFace

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNotifyState_PlayMontageOnFace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace, UCitySampleAnimNotifyState_PlayMontageOnFace::StaticClass, TEXT("UCitySampleAnimNotifyState_PlayMontageOnFace"), &Z_Registration_Info_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimNotifyState_PlayMontageOnFace), 4062408464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNotifyState_PlayMontageOnFace_h_911639364(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNotifyState_PlayMontageOnFace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNotifyState_PlayMontageOnFace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
