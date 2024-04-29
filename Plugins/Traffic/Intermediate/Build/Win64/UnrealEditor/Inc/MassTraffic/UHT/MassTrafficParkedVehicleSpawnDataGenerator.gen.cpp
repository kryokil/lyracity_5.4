// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficParkedVehicleSpawnDataGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficParkedVehicleSpawnDataGenerator() {}

// Begin Cross Module References
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficParkedVehicleSpawnDataGenerator
void UMassTrafficParkedVehicleSpawnDataGenerator::StaticRegisterNativesUMassTrafficParkedVehicleSpawnDataGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficParkedVehicleSpawnDataGenerator);
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_NoRegister()
{
	return UMassTrafficParkedVehicleSpawnDataGenerator::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficParkedVehicleSpawnDataGenerator.h" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityTypeToParkingSpaceType_MetaData[] = {
		{ "Category", "MassTrafficParkedVehicleSpawnDataGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The parking space type each entity can spawn in */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The parking space type each entity can spawn in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParkingSpaces_MetaData[] = {
		{ "Category", "MassTrafficParkedVehicleSpawnDataGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data Asset storing parking space transforms that parked vehicles can spawn in */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data Asset storing parking space transforms that parked vehicles can spawn in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAllParkingSpaces_MetaData[] = {
		{ "Category", "MassTrafficParkedVehicleSpawnDataGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, the input Count is ignored and vehicles will be spawned in every parking space in ParkingSpaces.\n\x09 * \n\x09 * Note: MassTraffic.NumParkedVehiclesScale is still applied. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the input Count is ignored and vehicles will be spawned in every parking space in ParkingSpaces.\n\nNote: MassTraffic.NumParkedVehiclesScale is still applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleExclusionRadius_MetaData[] = {
		{ "Category", "MassTrafficParkedVehicleSpawnDataGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * All parking spaces within this distance to an 'obstacle' e.g the player or deviated vehicles, will be skipped.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All parking spaces within this distance to an 'obstacle' e.g the player or deviated vehicles, will be skipped." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EntityTypeToParkingSpaceType_ValueProp;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EntityTypeToParkingSpaceType_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EntityTypeToParkingSpaceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParkingSpaces;
	static void NewProp_bUseAllParkingSpaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAllParkingSpaces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleExclusionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficParkedVehicleSpawnDataGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType_ValueProp = { "EntityTypeToParkingSpaceType", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType_Key_KeyProp = { "EntityTypeToParkingSpaceType_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType = { "EntityTypeToParkingSpaceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkedVehicleSpawnDataGenerator, EntityTypeToParkingSpaceType), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityTypeToParkingSpaceType_MetaData), NewProp_EntityTypeToParkingSpaceType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_ParkingSpaces = { "ParkingSpaces", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkedVehicleSpawnDataGenerator, ParkingSpaces), Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParkingSpaces_MetaData), NewProp_ParkingSpaces_MetaData) };
void Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_bUseAllParkingSpaces_SetBit(void* Obj)
{
	((UMassTrafficParkedVehicleSpawnDataGenerator*)Obj)->bUseAllParkingSpaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_bUseAllParkingSpaces = { "bUseAllParkingSpaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassTrafficParkedVehicleSpawnDataGenerator), &Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_bUseAllParkingSpaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAllParkingSpaces_MetaData), NewProp_bUseAllParkingSpaces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_ObstacleExclusionRadius = { "ObstacleExclusionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkedVehicleSpawnDataGenerator, ObstacleExclusionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleExclusionRadius_MetaData), NewProp_ObstacleExclusionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_ParkingSpaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_bUseAllParkingSpaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_ObstacleExclusionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::ClassParams = {
	&UMassTrafficParkedVehicleSpawnDataGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator()
{
	if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator.OuterSingleton, Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficParkedVehicleSpawnDataGenerator>()
{
	return UMassTrafficParkedVehicleSpawnDataGenerator::StaticClass();
}
UMassTrafficParkedVehicleSpawnDataGenerator::UMassTrafficParkedVehicleSpawnDataGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficParkedVehicleSpawnDataGenerator);
UMassTrafficParkedVehicleSpawnDataGenerator::~UMassTrafficParkedVehicleSpawnDataGenerator() {}
// End Class UMassTrafficParkedVehicleSpawnDataGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleSpawnDataGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator, UMassTrafficParkedVehicleSpawnDataGenerator::StaticClass, TEXT("UMassTrafficParkedVehicleSpawnDataGenerator"), &Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficParkedVehicleSpawnDataGenerator), 4210386393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleSpawnDataGenerator_h_4234563679(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleSpawnDataGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleSpawnDataGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS