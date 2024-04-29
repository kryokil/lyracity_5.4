// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleSensorGrid/Private/NiagaraDataInterfaceCitySampleSensorGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceCitySampleSensorGrid() {}

// Begin Cross Module References
CITYSAMPLESENSORGRID_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid();
CITYSAMPLESENSORGRID_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
UPackage* Z_Construct_UPackage__Script_CitySampleSensorGrid();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceCitySampleSensorGrid
void UNiagaraDataInterfaceCitySampleSensorGrid::StaticRegisterNativesUNiagaraDataInterfaceCitySampleSensorGrid()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceCitySampleSensorGrid);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_NoRegister()
{
	return UNiagaraDataInterfaceCitySampleSensorGrid::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data Interface allowing spatial queries on 3d particles uniquely projected onto a 2d grid */" },
#endif
		{ "DisplayName", "CitySample Sensor Grid" },
		{ "IncludePath", "NiagaraDataInterfaceCitySampleSensorGrid.h" },
		{ "ModuleRelativePath", "Private/NiagaraDataInterfaceCitySampleSensorGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data Interface allowing spatial queries on 3d particles uniquely projected onto a 2d grid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorCountPerSide_MetaData[] = {
		{ "Category", "Sensors" },
		{ "ModuleRelativePath", "Private/NiagaraDataInterfaceCitySampleSensorGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSensorAccuracy_MetaData[] = {
		{ "Category", "Sensors" },
		{ "ModuleRelativePath", "Private/NiagaraDataInterfaceCitySampleSensorGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSensorRange_MetaData[] = {
		{ "Category", "Sensors" },
		{ "ModuleRelativePath", "Private/NiagaraDataInterfaceCitySampleSensorGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserChannelCount_MetaData[] = {
		{ "Category", "User Data" },
		{ "ModuleRelativePath", "Private/NiagaraDataInterfaceCitySampleSensorGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SensorCountPerSide;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalSensorAccuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalSensorRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserChannelCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceCitySampleSensorGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_SensorCountPerSide = { "SensorCountPerSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCitySampleSensorGrid, SensorCountPerSide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorCountPerSide_MetaData), NewProp_SensorCountPerSide_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorAccuracy = { "GlobalSensorAccuracy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCitySampleSensorGrid, GlobalSensorAccuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalSensorAccuracy_MetaData), NewProp_GlobalSensorAccuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorRange = { "GlobalSensorRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCitySampleSensorGrid, GlobalSensorRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalSensorRange_MetaData), NewProp_GlobalSensorRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_UserChannelCount = { "UserChannelCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCitySampleSensorGrid, UserChannelCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserChannelCount_MetaData), NewProp_UserChannelCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_SensorCountPerSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorAccuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_UserChannelCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleSensorGrid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::ClassParams = {
	&UNiagaraDataInterfaceCitySampleSensorGrid::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceCitySampleSensorGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceCitySampleSensorGrid.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceCitySampleSensorGrid.OuterSingleton;
}
template<> CITYSAMPLESENSORGRID_API UClass* StaticClass<UNiagaraDataInterfaceCitySampleSensorGrid>()
{
	return UNiagaraDataInterfaceCitySampleSensorGrid::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceCitySampleSensorGrid);
UNiagaraDataInterfaceCitySampleSensorGrid::~UNiagaraDataInterfaceCitySampleSensorGrid() {}
// End Class UNiagaraDataInterfaceCitySampleSensorGrid

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleSensorGrid_Source_CitySampleSensorGrid_Private_NiagaraDataInterfaceCitySampleSensorGrid_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid, UNiagaraDataInterfaceCitySampleSensorGrid::StaticClass, TEXT("UNiagaraDataInterfaceCitySampleSensorGrid"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceCitySampleSensorGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceCitySampleSensorGrid), 3614959044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleSensorGrid_Source_CitySampleSensorGrid_Private_NiagaraDataInterfaceCitySampleSensorGrid_h_3023790187(TEXT("/Script/CitySampleSensorGrid"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleSensorGrid_Source_CitySampleSensorGrid_Private_NiagaraDataInterfaceCitySampleSensorGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleSensorGrid_Source_CitySampleSensorGrid_Private_NiagaraDataInterfaceCitySampleSensorGrid_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
