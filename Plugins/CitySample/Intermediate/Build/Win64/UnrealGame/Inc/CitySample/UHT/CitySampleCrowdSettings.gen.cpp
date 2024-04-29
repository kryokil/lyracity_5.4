// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CitySampleCrowdSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCrowdSettings() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCrowdSettings();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCrowdSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCitySampleCrowdSettings Function Get
struct Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics
{
	struct CitySampleCrowdSettings_eventGet_Parms
	{
		const UCitySampleCrowdSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdSettings_eventGet_Parms, ReturnValue), Z_Construct_UClass_UCitySampleCrowdSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdSettings, nullptr, "Get", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::CitySampleCrowdSettings_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::CitySampleCrowdSettings_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleCrowdSettings_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdSettings_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleCrowdSettings::execGet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UCitySampleCrowdSettings**)Z_Param__Result=UCitySampleCrowdSettings::Get();
	P_NATIVE_END;
}
// End Class UCitySampleCrowdSettings Function Get

// Begin Class UCitySampleCrowdSettings Function GetMutable
struct Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics
{
	struct CitySampleCrowdSettings_eventGetMutable_Parms
	{
		UCitySampleCrowdSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdSettings_eventGetMutable_Parms, ReturnValue), Z_Construct_UClass_UCitySampleCrowdSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdSettings, nullptr, "GetMutable", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::CitySampleCrowdSettings_eventGetMutable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::CitySampleCrowdSettings_eventGetMutable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleCrowdSettings::execGetMutable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCitySampleCrowdSettings**)Z_Param__Result=UCitySampleCrowdSettings::GetMutable();
	P_NATIVE_END;
}
// End Class UCitySampleCrowdSettings Function GetMutable

// Begin Class UCitySampleCrowdSettings
void UCitySampleCrowdSettings::StaticRegisterNativesUCitySampleCrowdSettings()
{
	UClass* Class = UCitySampleCrowdSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Get", &UCitySampleCrowdSettings::execGet },
		{ "GetMutable", &UCitySampleCrowdSettings::execGetMutable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCrowdSettings);
UClass* Z_Construct_UClass_UCitySampleCrowdSettings_NoRegister()
{
	return UCitySampleCrowdSettings::StaticClass();
}
struct Z_Construct_UClass_UCitySampleCrowdSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Crowd" },
		{ "IncludePath", "Crowd/CitySampleCrowdSettings.h" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMFarLodSignificanceThreshold_MetaData[] = {
		{ "Category", "LOD" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0001" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Mass LOD significance at which to use a single ISM */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mass LOD significance at which to use a single ISM" },
#endif
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceMassCrowdToAverage_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideAccessoriesForMassCrowd_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMassCrowdShouldUseActorDefaultOptions_MetaData[] = {
		{ "Category", "Crowd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instead of randomizing the crowd characters, mass agents will attempt to use the default set of options from the template actor.\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instead of randomizing the crowd characters, mass agents will attempt to use the default set of options from the template actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentConfigAsset_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMFarLodMeshOverride_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleCrowdSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ISMFarLodSignificanceThreshold;
	static void NewProp_bForceMassCrowdToAverage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMassCrowdToAverage;
	static void NewProp_bHideAccessoriesForMassCrowd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideAccessoriesForMassCrowd;
	static void NewProp_bMassCrowdShouldUseActorDefaultOptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMassCrowdShouldUseActorDefaultOptions;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AgentConfigAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AgentConfig;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ISMFarLodMeshOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleCrowdSettings_Get, "Get" }, // 652634126
		{ &Z_Construct_UFunction_UCitySampleCrowdSettings_GetMutable, "GetMutable" }, // 780053666
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCrowdSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodSignificanceThreshold = { "ISMFarLodSignificanceThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCrowdSettings, ISMFarLodSignificanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMFarLodSignificanceThreshold_MetaData), NewProp_ISMFarLodSignificanceThreshold_MetaData) };
void Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bForceMassCrowdToAverage_SetBit(void* Obj)
{
	((UCitySampleCrowdSettings*)Obj)->bForceMassCrowdToAverage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bForceMassCrowdToAverage = { "bForceMassCrowdToAverage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCrowdSettings), &Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bForceMassCrowdToAverage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceMassCrowdToAverage_MetaData), NewProp_bForceMassCrowdToAverage_MetaData) };
void Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bHideAccessoriesForMassCrowd_SetBit(void* Obj)
{
	((UCitySampleCrowdSettings*)Obj)->bHideAccessoriesForMassCrowd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bHideAccessoriesForMassCrowd = { "bHideAccessoriesForMassCrowd", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCrowdSettings), &Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bHideAccessoriesForMassCrowd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideAccessoriesForMassCrowd_MetaData), NewProp_bHideAccessoriesForMassCrowd_MetaData) };
void Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bMassCrowdShouldUseActorDefaultOptions_SetBit(void* Obj)
{
	((UCitySampleCrowdSettings*)Obj)->bMassCrowdShouldUseActorDefaultOptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bMassCrowdShouldUseActorDefaultOptions = { "bMassCrowdShouldUseActorDefaultOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleCrowdSettings), &Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bMassCrowdShouldUseActorDefaultOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMassCrowdShouldUseActorDefaultOptions_MetaData), NewProp_bMassCrowdShouldUseActorDefaultOptions_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfigAsset = { "AgentConfigAsset", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCrowdSettings, AgentConfigAsset), Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentConfigAsset_MetaData), NewProp_AgentConfigAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfig = { "AgentConfig", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCrowdSettings, AgentConfig), Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentConfig_MetaData), NewProp_AgentConfig_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodMeshOverride = { "ISMFarLodMeshOverride", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleCrowdSettings, ISMFarLodMeshOverride), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMFarLodMeshOverride_MetaData), NewProp_ISMFarLodMeshOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCrowdSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodSignificanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bForceMassCrowdToAverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bHideAccessoriesForMassCrowd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_bMassCrowdShouldUseActorDefaultOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfigAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_AgentConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCrowdSettings_Statics::NewProp_ISMFarLodMeshOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleCrowdSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCrowdSettings_Statics::ClassParams = {
	&UCitySampleCrowdSettings::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCitySampleCrowdSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleCrowdSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleCrowdSettings()
{
	if (!Z_Registration_Info_UClass_UCitySampleCrowdSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCrowdSettings.OuterSingleton, Z_Construct_UClass_UCitySampleCrowdSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleCrowdSettings.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCrowdSettings>()
{
	return UCitySampleCrowdSettings::StaticClass();
}
UCitySampleCrowdSettings::UCitySampleCrowdSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCrowdSettings);
UCitySampleCrowdSettings::~UCitySampleCrowdSettings() {}
// End Class UCitySampleCrowdSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleCrowdSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCrowdSettings, UCitySampleCrowdSettings::StaticClass, TEXT("UCitySampleCrowdSettings"), &Z_Registration_Info_UClass_UCitySampleCrowdSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCrowdSettings), 84191641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleCrowdSettings_h_1098387290(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleCrowdSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleCrowdSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
