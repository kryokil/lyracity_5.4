// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Game/CitySamplePlayFromHere.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySamplePlayFromHere() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayFromHere();
CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayFromHere_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class ACitySamplePlayFromHere Function PlayFromHereEvent
static FName NAME_ACitySamplePlayFromHere_PlayFromHereEvent = FName(TEXT("PlayFromHereEvent"));
void ACitySamplePlayFromHere::PlayFromHereEvent()
{
	ProcessEvent(FindFunctionChecked(NAME_ACitySamplePlayFromHere_PlayFromHereEvent),NULL);
}
struct Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFromHere" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** blueprint event: this will get called before BeginPlay if this actor was choosen to play from here. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayFromHere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "blueprint event: this will get called before BeginPlay if this actor was choosen to play from here." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayFromHere, nullptr, "PlayFromHereEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ACitySamplePlayFromHere Function PlayFromHereEvent

// Begin Class ACitySamplePlayFromHere
void ACitySamplePlayFromHere::StaticRegisterNativesACitySamplePlayFromHere()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySamplePlayFromHere);
UClass* Z_Construct_UClass_ACitySamplePlayFromHere_NoRegister()
{
	return ACitySamplePlayFromHere::StaticClass();
}
struct Z_Construct_UClass_ACitySamplePlayFromHere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "DataLayers Cooking HLOD Input WorldPartition Collision Replication Rendering" },
		{ "IncludePath", "Game/CitySamplePlayFromHere.h" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayFromHere.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideActiveDataLayers_MetaData[] = {
		{ "Category", "PlayFromHere" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayFromHere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDataLayers_MetaData[] = {
		{ "Category", "PlayFromHere" },
		{ "EditCondition", "bOverrideActiveDataLayers" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayFromHere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLoadedDataLayers_MetaData[] = {
		{ "Category", "PlayFromHere" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayFromHere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedDataLayers_MetaData[] = {
		{ "Category", "PlayFromHere" },
		{ "EditCondition", "bOverrideLoadedDataLayers" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayFromHere.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bOverrideActiveDataLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideActiveDataLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveDataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveDataLayers;
	static void NewProp_bOverrideLoadedDataLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLoadedDataLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedDataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedDataLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent, "PlayFromHereEvent" }, // 739895517
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySamplePlayFromHere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideActiveDataLayers_SetBit(void* Obj)
{
	((ACitySamplePlayFromHere*)Obj)->bOverrideActiveDataLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideActiveDataLayers = { "bOverrideActiveDataLayers", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySamplePlayFromHere), &Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideActiveDataLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideActiveDataLayers_MetaData), NewProp_bOverrideActiveDataLayers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_ActiveDataLayers_Inner = { "ActiveDataLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 1894108120
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_ActiveDataLayers = { "ActiveDataLayers", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayFromHere, ActiveDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDataLayers_MetaData), NewProp_ActiveDataLayers_MetaData) }; // 1894108120
void Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideLoadedDataLayers_SetBit(void* Obj)
{
	((ACitySamplePlayFromHere*)Obj)->bOverrideLoadedDataLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideLoadedDataLayers = { "bOverrideLoadedDataLayers", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySamplePlayFromHere), &Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideLoadedDataLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLoadedDataLayers_MetaData), NewProp_bOverrideLoadedDataLayers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_LoadedDataLayers_Inner = { "LoadedDataLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 1894108120
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_LoadedDataLayers = { "LoadedDataLayers", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayFromHere, LoadedDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedDataLayers_MetaData), NewProp_LoadedDataLayers_MetaData) }; // 1894108120
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACitySamplePlayFromHere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideActiveDataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_ActiveDataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_ActiveDataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideLoadedDataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_LoadedDataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_LoadedDataLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_ACitySamplePlayFromHere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::ClassParams = {
	&ACitySamplePlayFromHere::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::PropPointers), 0),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::Class_MetaDataParams), Z_Construct_UClass_ACitySamplePlayFromHere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACitySamplePlayFromHere()
{
	if (!Z_Registration_Info_UClass_ACitySamplePlayFromHere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySamplePlayFromHere.OuterSingleton, Z_Construct_UClass_ACitySamplePlayFromHere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACitySamplePlayFromHere.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<ACitySamplePlayFromHere>()
{
	return ACitySamplePlayFromHere::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySamplePlayFromHere);
ACitySamplePlayFromHere::~ACitySamplePlayFromHere() {}
// End Class ACitySamplePlayFromHere

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayFromHere_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACitySamplePlayFromHere, ACitySamplePlayFromHere::StaticClass, TEXT("ACitySamplePlayFromHere"), &Z_Registration_Info_UClass_ACitySamplePlayFromHere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySamplePlayFromHere), 3686443492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayFromHere_h_2357997742(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayFromHere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayFromHere_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
