// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficEvaluateSequenceAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficEvaluateSequenceAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UEvaluateSequenceAnimInstance
void UEvaluateSequenceAnimInstance::StaticRegisterNativesUEvaluateSequenceAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEvaluateSequenceAnimInstance);
UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance_NoRegister()
{
	return UEvaluateSequenceAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Simple anim instance with a few parameters to be used as inputs when driving it\n * from UAnimToTextureBPLibrary::AnimationToTexture()\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MassTrafficEvaluateSequenceAnimInstance.h" },
		{ "ModuleRelativePath", "Public/MassTrafficEvaluateSequenceAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple anim instance with a few parameters to be used as inputs when driving it\nfrom UAnimToTextureBPLibrary::AnimationToTexture()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceToEvaluate_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/MassTrafficEvaluateSequenceAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToEvaluate_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/MassTrafficEvaluateSequenceAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceToEvaluate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToEvaluate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEvaluateSequenceAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_SequenceToEvaluate = { "SequenceToEvaluate", nullptr, (EPropertyFlags)0x0114000000002015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEvaluateSequenceAnimInstance, SequenceToEvaluate), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceToEvaluate_MetaData), NewProp_SequenceToEvaluate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_TimeToEvaluate = { "TimeToEvaluate", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEvaluateSequenceAnimInstance, TimeToEvaluate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToEvaluate_MetaData), NewProp_TimeToEvaluate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_SequenceToEvaluate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_TimeToEvaluate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::ClassParams = {
	&UEvaluateSequenceAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance()
{
	if (!Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.OuterSingleton, Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UEvaluateSequenceAnimInstance>()
{
	return UEvaluateSequenceAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEvaluateSequenceAnimInstance);
UEvaluateSequenceAnimInstance::~UEvaluateSequenceAnimInstance() {}
// End Class UEvaluateSequenceAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficEvaluateSequenceAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEvaluateSequenceAnimInstance, UEvaluateSequenceAnimInstance::StaticClass, TEXT("UEvaluateSequenceAnimInstance"), &Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEvaluateSequenceAnimInstance), 1666467694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficEvaluateSequenceAnimInstance_h_156671175(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficEvaluateSequenceAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficEvaluateSequenceAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
