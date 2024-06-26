// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficPhysics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficPhysics() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimpleTrailerConstraintSolver();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsSim();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsFragment();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin ScriptStruct FMassTrafficSimpleVehiclePhysicsConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsConfig;
class UScriptStruct* FMassTrafficSimpleVehiclePhysicsConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficSimpleVehiclePhysicsConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsConfig.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficSimpleVehiclePhysicsConfig>()
{
	return FMassTrafficSimpleVehiclePhysicsConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "MassTrafficSimpleVehiclePhysicsConfig" },
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralMass_MetaData[] = {
		{ "Category", "MassTrafficSimpleVehiclePhysicsConfig" },
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearEtherDrag_MetaData[] = {
		{ "Category", "MassTrafficSimpleVehiclePhysicsConfig" },
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSteeringAngle_MetaData[] = {
		{ "Category", "MassTrafficSimpleVehiclePhysicsConfig" },
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumDrivenWheels_MetaData[] = {
		{ "Category", "MassTrafficSimpleVehiclePhysicsConfig" },
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InverseMomentOfInertia_MetaData[] = {
		{ "Category", "MassTrafficSimpleVehiclePhysicsConfig" },
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterOfMass_MetaData[] = {
		{ "Category", "MassTrafficSimpleVehiclePhysicsConfig" },
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralCenterOfMass_MetaData[] = {
		{ "Category", "MassTrafficSimpleVehiclePhysicsConfig" },
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOfMass_MetaData[] = {
		{ "Category", "MassTrafficSimpleVehiclePhysicsConfig" },
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyToActor_MetaData[] = {
		{ "Category", "MassTrafficSimpleVehiclePhysicsConfig" },
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearEtherDrag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSteeringAngle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumDrivenWheels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InverseMomentOfInertia;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterOfMass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PeripheralCenterOfMass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOfMass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyToActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficSimpleVehiclePhysicsConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsConfig, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_PeripheralMass = { "PeripheralMass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsConfig, PeripheralMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeripheralMass_MetaData), NewProp_PeripheralMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_LinearEtherDrag = { "LinearEtherDrag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsConfig, LinearEtherDrag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearEtherDrag_MetaData), NewProp_LinearEtherDrag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_MaxSteeringAngle = { "MaxSteeringAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsConfig, MaxSteeringAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSteeringAngle_MetaData), NewProp_MaxSteeringAngle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_NumDrivenWheels = { "NumDrivenWheels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsConfig, NumDrivenWheels), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumDrivenWheels_MetaData), NewProp_NumDrivenWheels_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_InverseMomentOfInertia = { "InverseMomentOfInertia", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsConfig, InverseMomentOfInertia), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InverseMomentOfInertia_MetaData), NewProp_InverseMomentOfInertia_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_CenterOfMass = { "CenterOfMass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsConfig, CenterOfMass), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterOfMass_MetaData), NewProp_CenterOfMass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_PeripheralCenterOfMass = { "PeripheralCenterOfMass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsConfig, PeripheralCenterOfMass), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeripheralCenterOfMass_MetaData), NewProp_PeripheralCenterOfMass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_RotationOfMass = { "RotationOfMass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsConfig, RotationOfMass), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOfMass_MetaData), NewProp_RotationOfMass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_BodyToActor = { "BodyToActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsConfig, BodyToActor), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyToActor_MetaData), NewProp_BodyToActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_PeripheralMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_LinearEtherDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_MaxSteeringAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_NumDrivenWheels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_InverseMomentOfInertia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_CenterOfMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_PeripheralCenterOfMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_RotationOfMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewProp_BodyToActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficSimpleVehiclePhysicsConfig",
	Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::PropPointers),
	sizeof(FMassTrafficSimpleVehiclePhysicsConfig),
	alignof(FMassTrafficSimpleVehiclePhysicsConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsConfig.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsConfig.InnerSingleton;
}
// End ScriptStruct FMassTrafficSimpleVehiclePhysicsConfig

// Begin ScriptStruct FMassTrafficSimpleVehiclePhysicsSim
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsSim;
class UScriptStruct* FMassTrafficSimpleVehiclePhysicsSim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsSim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsSim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsSim, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficSimpleVehiclePhysicsSim"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsSim.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficSimpleVehiclePhysicsSim>()
{
	return FMassTrafficSimpleVehiclePhysicsSim::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsSim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficSimpleVehiclePhysicsSim>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsSim_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficSimpleVehiclePhysicsSim",
	nullptr,
	0,
	sizeof(FMassTrafficSimpleVehiclePhysicsSim),
	alignof(FMassTrafficSimpleVehiclePhysicsSim),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsSim_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsSim_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsSim()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsSim.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsSim.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsSim_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsSim.InnerSingleton;
}
// End ScriptStruct FMassTrafficSimpleVehiclePhysicsSim

// Begin ScriptStruct FMassTrafficVehiclePhysicsFragment
static_assert(std::is_polymorphic<FMassTrafficVehiclePhysicsFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficVehiclePhysicsFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsFragment;
class UScriptStruct* FMassTrafficVehiclePhysicsFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehiclePhysicsFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsFragment.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehiclePhysicsFragment>()
{
	return FMassTrafficVehiclePhysicsFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simple Physics Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Physics Fragment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehiclePhysicsFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficVehiclePhysicsFragment",
	nullptr,
	0,
	sizeof(FMassTrafficVehiclePhysicsFragment),
	alignof(FMassTrafficVehiclePhysicsFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsFragment.InnerSingleton;
}
// End ScriptStruct FMassTrafficVehiclePhysicsFragment

// Begin ScriptStruct FMassTrafficSimpleVehiclePhysicsTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsTemplate;
class UScriptStruct* FMassTrafficSimpleVehiclePhysicsTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficSimpleVehiclePhysicsTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsTemplate.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficSimpleVehiclePhysicsTemplate>()
{
	return FMassTrafficSimpleVehiclePhysicsTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Physics config & pre-configured sim extracted from a AWheeledVehiclePawn\n * @see UMassTrafficSubsystem::GetOrExtractVehiclePhysicsTemplate\n */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physics config & pre-configured sim extracted from a AWheeledVehiclePawn\n@see UMassTrafficSubsystem::GetOrExtractVehiclePhysicsTemplate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVehicleTemplateActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The AWheeledVehiclePawn this was extracted from */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The AWheeledVehiclePawn this was extracted from" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleVehiclePhysicsConfig_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * FMassTrafficSimpleVehiclePhysicsConfig referred to by SimpleVehiclePhysicsFragmentTemplate's\n\x09 * FMassTrafficSimpleVehiclePhysicsSim\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMassTrafficSimpleVehiclePhysicsConfig referred to by SimpleVehiclePhysicsFragmentTemplate's\nFMassTrafficSimpleVehiclePhysicsSim" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleVehiclePhysicsFragmentTemplate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * FMassTrafficVehiclePhysicsFragment template fragment containing a pre-configured\n\x09 * FMassTrafficSimpleVehiclePhysicsSim using SimpleVehiclePhysicsConfig's extracted config\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMassTrafficVehiclePhysicsFragment template fragment containing a pre-configured\nFMassTrafficSimpleVehiclePhysicsSim using SimpleVehiclePhysicsConfig's extracted config" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PhysicsVehicleTemplateActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleVehiclePhysicsConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleVehiclePhysicsFragmentTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficSimpleVehiclePhysicsTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::NewProp_PhysicsVehicleTemplateActor = { "PhysicsVehicleTemplateActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsTemplate, PhysicsVehicleTemplateActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AWheeledVehiclePawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsVehicleTemplateActor_MetaData), NewProp_PhysicsVehicleTemplateActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::NewProp_SimpleVehiclePhysicsConfig = { "SimpleVehiclePhysicsConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsTemplate, SimpleVehiclePhysicsConfig), Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleVehiclePhysicsConfig_MetaData), NewProp_SimpleVehiclePhysicsConfig_MetaData) }; // 2672482200
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::NewProp_SimpleVehiclePhysicsFragmentTemplate = { "SimpleVehiclePhysicsFragmentTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficSimpleVehiclePhysicsTemplate, SimpleVehiclePhysicsFragmentTemplate), Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsFragment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleVehiclePhysicsFragmentTemplate_MetaData), NewProp_SimpleVehiclePhysicsFragmentTemplate_MetaData) }; // 2473291729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::NewProp_PhysicsVehicleTemplateActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::NewProp_SimpleVehiclePhysicsConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::NewProp_SimpleVehiclePhysicsFragmentTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficSimpleVehiclePhysicsTemplate",
	Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::PropPointers),
	sizeof(FMassTrafficSimpleVehiclePhysicsTemplate),
	alignof(FMassTrafficSimpleVehiclePhysicsTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsTemplate.InnerSingleton;
}
// End ScriptStruct FMassTrafficSimpleVehiclePhysicsTemplate

// Begin ScriptStruct FMassTrafficSimpleTrailerConstraintSolver
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficSimpleTrailerConstraintSolver;
class UScriptStruct* FMassTrafficSimpleTrailerConstraintSolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficSimpleTrailerConstraintSolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficSimpleTrailerConstraintSolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficSimpleTrailerConstraintSolver, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficSimpleTrailerConstraintSolver"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficSimpleTrailerConstraintSolver.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficSimpleTrailerConstraintSolver>()
{
	return FMassTrafficSimpleTrailerConstraintSolver::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTrafficSimpleTrailerConstraintSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simplified version of FJointSolverGaussSeidel */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simplified version of FJointSolverGaussSeidel" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficSimpleTrailerConstraintSolver>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficSimpleTrailerConstraintSolver_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficSimpleTrailerConstraintSolver",
	nullptr,
	0,
	sizeof(FMassTrafficSimpleTrailerConstraintSolver),
	alignof(FMassTrafficSimpleTrailerConstraintSolver),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficSimpleTrailerConstraintSolver_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficSimpleTrailerConstraintSolver_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimpleTrailerConstraintSolver()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficSimpleTrailerConstraintSolver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficSimpleTrailerConstraintSolver.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficSimpleTrailerConstraintSolver_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficSimpleTrailerConstraintSolver.InnerSingleton;
}
// End ScriptStruct FMassTrafficSimpleTrailerConstraintSolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPhysics_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficSimpleVehiclePhysicsConfig::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsConfig_Statics::NewStructOps, TEXT("MassTrafficSimpleVehiclePhysicsConfig"), &Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficSimpleVehiclePhysicsConfig), 2672482200U) },
		{ FMassTrafficSimpleVehiclePhysicsSim::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsSim_Statics::NewStructOps, TEXT("MassTrafficSimpleVehiclePhysicsSim"), &Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsSim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficSimpleVehiclePhysicsSim), 3232362678U) },
		{ FMassTrafficVehiclePhysicsFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsFragment_Statics::NewStructOps, TEXT("MassTrafficVehiclePhysicsFragment"), &Z_Registration_Info_UScriptStruct_MassTrafficVehiclePhysicsFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehiclePhysicsFragment), 2473291729U) },
		{ FMassTrafficSimpleVehiclePhysicsTemplate::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficSimpleVehiclePhysicsTemplate_Statics::NewStructOps, TEXT("MassTrafficSimpleVehiclePhysicsTemplate"), &Z_Registration_Info_UScriptStruct_MassTrafficSimpleVehiclePhysicsTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficSimpleVehiclePhysicsTemplate), 3186162796U) },
		{ FMassTrafficSimpleTrailerConstraintSolver::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficSimpleTrailerConstraintSolver_Statics::NewStructOps, TEXT("MassTrafficSimpleTrailerConstraintSolver"), &Z_Registration_Info_UScriptStruct_MassTrafficSimpleTrailerConstraintSolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficSimpleTrailerConstraintSolver), 2111606429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPhysics_h_2012355410(TEXT("/Script/MassTraffic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPhysics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPhysics_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
