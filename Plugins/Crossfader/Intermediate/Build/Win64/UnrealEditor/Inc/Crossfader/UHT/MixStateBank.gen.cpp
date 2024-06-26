// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Crossfader/Public/MixStateBank.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMixStateBank() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
CROSSFADER_API UClass* Z_Construct_UClass_UMixStateBank();
CROSSFADER_API UClass* Z_Construct_UClass_UMixStateBank_NoRegister();
CROSSFADER_API UScriptStruct* Z_Construct_UScriptStruct_FCrossfaderMixPair();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Crossfader();
// End Cross Module References

// Begin ScriptStruct FCrossfaderMixPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrossfaderMixPair;
class UScriptStruct* FCrossfaderMixPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrossfaderMixPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrossfaderMixPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrossfaderMixPair, (UObject*)Z_Construct_UPackage__Script_Crossfader(), TEXT("CrossfaderMixPair"));
	}
	return Z_Registration_Info_UScriptStruct_CrossfaderMixPair.OuterSingleton;
}
template<> CROSSFADER_API UScriptStruct* StaticStruct<FCrossfaderMixPair>()
{
	return FCrossfaderMixPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This Struct allows designers to associate MixStates with SoundControlBusMixes. */" },
#endif
		{ "ModuleRelativePath", "Public/MixStateBank.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Struct allows designers to associate MixStates with SoundControlBusMixes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MixState_MetaData[] = {
		{ "Categories", "Crossfader" },
		{ "Category", "CrossfaderMixPair" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The GameplayTag namespace used as a MixState, when set the Crossfader Subsystem will trigger the associated SoundControlBusMix */" },
#endif
		{ "ModuleRelativePath", "Public/MixStateBank.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The GameplayTag namespace used as a MixState, when set the Crossfader Subsystem will trigger the associated SoundControlBusMix" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "CrossfaderMixPair" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ControlBusMix activated by the associated MixState */" },
#endif
		{ "ModuleRelativePath", "Public/MixStateBank.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ControlBusMix activated by the associated MixState" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MixState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlBusMix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrossfaderMixPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::NewProp_MixState = { "MixState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrossfaderMixPair, MixState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MixState_MetaData), NewProp_MixState_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::NewProp_ControlBusMix = { "ControlBusMix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrossfaderMixPair, ControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlBusMix_MetaData), NewProp_ControlBusMix_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::NewProp_MixState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::NewProp_ControlBusMix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Crossfader,
	nullptr,
	&NewStructOps,
	"CrossfaderMixPair",
	Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::PropPointers),
	sizeof(FCrossfaderMixPair),
	alignof(FCrossfaderMixPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrossfaderMixPair()
{
	if (!Z_Registration_Info_UScriptStruct_CrossfaderMixPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrossfaderMixPair.InnerSingleton, Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrossfaderMixPair.InnerSingleton;
}
// End ScriptStruct FCrossfaderMixPair

// Begin Class UMixStateBank
void UMixStateBank::StaticRegisterNativesUMixStateBank()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMixStateBank);
UClass* Z_Construct_UClass_UMixStateBank_NoRegister()
{
	return UMixStateBank::StaticClass();
}
struct Z_Construct_UClass_UMixStateBank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The MixStateBank allows designers to add or remove MixStates from the Subsystem master bank during runtime. */" },
#endif
		{ "IncludePath", "MixStateBank.h" },
		{ "ModuleRelativePath", "Public/MixStateBank.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The MixStateBank allows designers to add or remove MixStates from the Subsystem master bank during runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MixStates_MetaData[] = {
		{ "Category", "MixStates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The MixState associations stored in this MixStateBank */" },
#endif
		{ "ModuleRelativePath", "Public/MixStateBank.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The MixState associations stored in this MixStateBank" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MixStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MixStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMixStateBank>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMixStateBank_Statics::NewProp_MixStates_Inner = { "MixStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrossfaderMixPair, METADATA_PARAMS(0, nullptr) }; // 361582698
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMixStateBank_Statics::NewProp_MixStates = { "MixStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMixStateBank, MixStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MixStates_MetaData), NewProp_MixStates_MetaData) }; // 361582698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMixStateBank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixStateBank_Statics::NewProp_MixStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixStateBank_Statics::NewProp_MixStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMixStateBank_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMixStateBank_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Crossfader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMixStateBank_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMixStateBank_Statics::ClassParams = {
	&UMixStateBank::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMixStateBank_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMixStateBank_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMixStateBank_Statics::Class_MetaDataParams), Z_Construct_UClass_UMixStateBank_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMixStateBank()
{
	if (!Z_Registration_Info_UClass_UMixStateBank.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMixStateBank.OuterSingleton, Z_Construct_UClass_UMixStateBank_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMixStateBank.OuterSingleton;
}
template<> CROSSFADER_API UClass* StaticClass<UMixStateBank>()
{
	return UMixStateBank::StaticClass();
}
UMixStateBank::UMixStateBank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMixStateBank);
UMixStateBank::~UMixStateBank() {}
// End Class UMixStateBank

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Crossfader_Source_Crossfader_Public_MixStateBank_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCrossfaderMixPair::StaticStruct, Z_Construct_UScriptStruct_FCrossfaderMixPair_Statics::NewStructOps, TEXT("CrossfaderMixPair"), &Z_Registration_Info_UScriptStruct_CrossfaderMixPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrossfaderMixPair), 361582698U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMixStateBank, UMixStateBank::StaticClass, TEXT("UMixStateBank"), &Z_Registration_Info_UClass_UMixStateBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMixStateBank), 3624471547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Crossfader_Source_Crossfader_Public_MixStateBank_h_3655392234(TEXT("/Script/Crossfader"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Crossfader_Source_Crossfader_Public_MixStateBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Crossfader_Source_Crossfader_Public_MixStateBank_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Crossfader_Source_Crossfader_Public_MixStateBank_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Crossfader_Source_Crossfader_Public_MixStateBank_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
