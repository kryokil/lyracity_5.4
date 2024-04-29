// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficInitTrailersProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficInitTrailersProcessor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitTrailersProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitTrailersProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleTrailersSpawnData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin ScriptStruct FMassTrafficVehicleTrailersSpawnData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailersSpawnData;
class UScriptStruct* FMassTrafficVehicleTrailersSpawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailersSpawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailersSpawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleTrailersSpawnData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleTrailersSpawnData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailersSpawnData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehicleTrailersSpawnData>()
{
	return FMassTrafficVehicleTrailersSpawnData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehicleTrailersSpawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficInitTrailersProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleTrailersSpawnData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleTrailersSpawnData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficVehicleTrailersSpawnData",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleTrailersSpawnData),
	alignof(FMassTrafficVehicleTrailersSpawnData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleTrailersSpawnData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleTrailersSpawnData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleTrailersSpawnData()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailersSpawnData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailersSpawnData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleTrailersSpawnData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailersSpawnData.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehicleTrailersSpawnData

// Begin Class UMassTrafficInitTrailersProcessor
void UMassTrafficInitTrailersProcessor::StaticRegisterNativesUMassTrafficInitTrailersProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficInitTrailersProcessor);
UClass* Z_Construct_UClass_UMassTrafficInitTrailersProcessor_NoRegister()
{
	return UMassTrafficInitTrailersProcessor::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficInitTrailersProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInitTrailersProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Public/MassTrafficInitTrailersProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInitTrailersProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficInitTrailersProcessor, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::NewProp_RandomStream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::ClassParams = {
	&UMassTrafficInitTrailersProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficInitTrailersProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficInitTrailersProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInitTrailersProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficInitTrailersProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficInitTrailersProcessor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficInitTrailersProcessor>()
{
	return UMassTrafficInitTrailersProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficInitTrailersProcessor);
UMassTrafficInitTrailersProcessor::~UMassTrafficInitTrailersProcessor() {}
// End Class UMassTrafficInitTrailersProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrailersProcessor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficVehicleTrailersSpawnData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleTrailersSpawnData_Statics::NewStructOps, TEXT("MassTrafficVehicleTrailersSpawnData"), &Z_Registration_Info_UScriptStruct_MassTrafficVehicleTrailersSpawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleTrailersSpawnData), 2082271846U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInitTrailersProcessor, UMassTrafficInitTrailersProcessor::StaticClass, TEXT("UMassTrafficInitTrailersProcessor"), &Z_Registration_Info_UClass_UMassTrafficInitTrailersProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInitTrailersProcessor), 1708132848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrailersProcessor_h_2570178452(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrailersProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrailersProcessor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrailersProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrailersProcessor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
