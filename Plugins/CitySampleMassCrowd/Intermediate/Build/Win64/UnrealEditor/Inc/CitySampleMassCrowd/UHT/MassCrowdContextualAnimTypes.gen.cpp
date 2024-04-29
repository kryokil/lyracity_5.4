// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/Animation/MassCrowdContextualAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdContextualAnimTypes() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_NoRegister();
CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdContextualAnimation();
CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription();
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin ScriptStruct FMassCrowdContextualAnimation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimation;
class UScriptStruct* FMassCrowdContextualAnimation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCrowdContextualAnimation, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("MassCrowdContextualAnimation"));
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimation.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FMassCrowdContextualAnimation>()
{
	return FMassCrowdContextualAnimation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/MassCrowdContextualAnimTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextualAnimAsset_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdContextualAnimTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackMontage_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdContextualAnimTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextualAnimAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallbackMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCrowdContextualAnimation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::NewProp_ContextualAnimAsset = { "ContextualAnimAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCrowdContextualAnimation, ContextualAnimAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextualAnimAsset_MetaData), NewProp_ContextualAnimAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::NewProp_FallbackMontage = { "FallbackMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCrowdContextualAnimation, FallbackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackMontage_MetaData), NewProp_FallbackMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::NewProp_ContextualAnimAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::NewProp_FallbackMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	nullptr,
	&NewStructOps,
	"MassCrowdContextualAnimation",
	Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::PropPointers),
	sizeof(FMassCrowdContextualAnimation),
	alignof(FMassCrowdContextualAnimation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdContextualAnimation()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimation.InnerSingleton, Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimation.InnerSingleton;
}
// End ScriptStruct FMassCrowdContextualAnimation

// Begin ScriptStruct FMassCrowdContextualAnimDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimDescription;
class UScriptStruct* FMassCrowdContextualAnimDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("MassCrowdContextualAnimDescription"));
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimDescription.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FMassCrowdContextualAnimDescription>()
{
	return FMassCrowdContextualAnimDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/MassCrowdContextualAnimTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anims_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdContextualAnimTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentTrack_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdContextualAnimTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorRole_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdContextualAnimTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Anims_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Anims;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlignmentTrack;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InteractorRole;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCrowdContextualAnimDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::NewProp_Anims_Inner = { "Anims", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassCrowdContextualAnimation, METADATA_PARAMS(0, nullptr) }; // 358715020
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::NewProp_Anims = { "Anims", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCrowdContextualAnimDescription, Anims), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anims_MetaData), NewProp_Anims_MetaData) }; // 358715020
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::NewProp_AlignmentTrack = { "AlignmentTrack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCrowdContextualAnimDescription, AlignmentTrack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignmentTrack_MetaData), NewProp_AlignmentTrack_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::NewProp_InteractorRole = { "InteractorRole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCrowdContextualAnimDescription, InteractorRole), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorRole_MetaData), NewProp_InteractorRole_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::NewProp_Anims_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::NewProp_Anims,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::NewProp_AlignmentTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::NewProp_InteractorRole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	nullptr,
	&NewStructOps,
	"MassCrowdContextualAnimDescription",
	Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::PropPointers),
	sizeof(FMassCrowdContextualAnimDescription),
	alignof(FMassCrowdContextualAnimDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimDescription.InnerSingleton, Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimDescription.InnerSingleton;
}
// End ScriptStruct FMassCrowdContextualAnimDescription

// Begin Class UMassCrowdContextualAnimationDataAsset
void UMassCrowdContextualAnimationDataAsset::StaticRegisterNativesUMassCrowdContextualAnimationDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdContextualAnimationDataAsset);
UClass* Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_NoRegister()
{
	return UMassCrowdContextualAnimationDataAsset::StaticClass();
}
struct Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/MassCrowdContextualAnimTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdContextualAnimTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimsMap_MetaData[] = {
		{ "Category", "Anim" },
		{ "GetOptions", "CitySampleMassCrowd.MassCrowdAnimationSettings.GetContextualAnimOptions" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdContextualAnimTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimsMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AnimsMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdContextualAnimationDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::NewProp_AnimsMap_ValueProp = { "AnimsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription, METADATA_PARAMS(0, nullptr) }; // 2542036088
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::NewProp_AnimsMap_Key_KeyProp = { "AnimsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::NewProp_AnimsMap = { "AnimsMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassCrowdContextualAnimationDataAsset, AnimsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimsMap_MetaData), NewProp_AnimsMap_MetaData) }; // 2542036088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::NewProp_AnimsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::NewProp_AnimsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::NewProp_AnimsMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::ClassParams = {
	&UMassCrowdContextualAnimationDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset()
{
	if (!Z_Registration_Info_UClass_UMassCrowdContextualAnimationDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdContextualAnimationDataAsset.OuterSingleton, Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassCrowdContextualAnimationDataAsset.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UMassCrowdContextualAnimationDataAsset>()
{
	return UMassCrowdContextualAnimationDataAsset::StaticClass();
}
UMassCrowdContextualAnimationDataAsset::UMassCrowdContextualAnimationDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdContextualAnimationDataAsset);
UMassCrowdContextualAnimationDataAsset::~UMassCrowdContextualAnimationDataAsset() {}
// End Class UMassCrowdContextualAnimationDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdContextualAnimTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassCrowdContextualAnimation::StaticStruct, Z_Construct_UScriptStruct_FMassCrowdContextualAnimation_Statics::NewStructOps, TEXT("MassCrowdContextualAnimation"), &Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCrowdContextualAnimation), 358715020U) },
		{ FMassCrowdContextualAnimDescription::StaticStruct, Z_Construct_UScriptStruct_FMassCrowdContextualAnimDescription_Statics::NewStructOps, TEXT("MassCrowdContextualAnimDescription"), &Z_Registration_Info_UScriptStruct_MassCrowdContextualAnimDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCrowdContextualAnimDescription), 2542036088U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset, UMassCrowdContextualAnimationDataAsset::StaticClass, TEXT("UMassCrowdContextualAnimationDataAsset"), &Z_Registration_Info_UClass_UMassCrowdContextualAnimationDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdContextualAnimationDataAsset), 3864729730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdContextualAnimTypes_h_3268433102(TEXT("/Script/CitySampleMassCrowd"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdContextualAnimTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdContextualAnimTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdContextualAnimTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdContextualAnimTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
