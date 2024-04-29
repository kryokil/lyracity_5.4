// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/SmartObjectMassInteractionDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectMassInteractionDefinition() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_USmartObjectMassInteractionDefinition();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_USmartObjectMassInteractionDefinition_NoRegister();
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_USmartObjectMassBehaviorDefinition();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin Class USmartObjectMassInteractionDefinition
void USmartObjectMassInteractionDefinition::StaticRegisterNativesUSmartObjectMassInteractionDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectMassInteractionDefinition);
UClass* Z_Construct_UClass_USmartObjectMassInteractionDefinition_NoRegister()
{
	return USmartObjectMassInteractionDefinition::StaticClass();
}
struct Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SmartObjectMassInteractionDefinition.h" },
		{ "ModuleRelativePath", "Public/SmartObjectMassInteractionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextualAnimAsset_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/SmartObjectMassInteractionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentTrack_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/SmartObjectMassInteractionDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorRole_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/SmartObjectMassInteractionDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextualAnimAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlignmentTrack;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InteractorRole;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectMassInteractionDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_ContextualAnimAsset = { "ContextualAnimAsset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectMassInteractionDefinition, ContextualAnimAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextualAnimAsset_MetaData), NewProp_ContextualAnimAsset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_AlignmentTrack = { "AlignmentTrack", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectMassInteractionDefinition, AlignmentTrack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignmentTrack_MetaData), NewProp_AlignmentTrack_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_InteractorRole = { "InteractorRole", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectMassInteractionDefinition, InteractorRole), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorRole_MetaData), NewProp_InteractorRole_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_ContextualAnimAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_AlignmentTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::NewProp_InteractorRole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USmartObjectMassBehaviorDefinition,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::ClassParams = {
	&USmartObjectMassInteractionDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::PropPointers),
	0,
	0x000030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmartObjectMassInteractionDefinition()
{
	if (!Z_Registration_Info_UClass_USmartObjectMassInteractionDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectMassInteractionDefinition.OuterSingleton, Z_Construct_UClass_USmartObjectMassInteractionDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmartObjectMassInteractionDefinition.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<USmartObjectMassInteractionDefinition>()
{
	return USmartObjectMassInteractionDefinition::StaticClass();
}
USmartObjectMassInteractionDefinition::USmartObjectMassInteractionDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectMassInteractionDefinition);
USmartObjectMassInteractionDefinition::~USmartObjectMassInteractionDefinition() {}
// End Class USmartObjectMassInteractionDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_SmartObjectMassInteractionDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectMassInteractionDefinition, USmartObjectMassInteractionDefinition::StaticClass, TEXT("USmartObjectMassInteractionDefinition"), &Z_Registration_Info_UClass_USmartObjectMassInteractionDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectMassInteractionDefinition), 1377166339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_SmartObjectMassInteractionDefinition_h_459257505(TEXT("/Script/CitySampleMassCrowd"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_SmartObjectMassInteractionDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_SmartObjectMassInteractionDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
