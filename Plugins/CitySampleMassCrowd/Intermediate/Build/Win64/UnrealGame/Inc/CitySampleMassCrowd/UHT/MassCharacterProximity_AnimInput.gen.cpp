// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/Animation/MassCharacterProximity_AnimInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCharacterProximity_AnimInput() {}

// Begin Cross Module References
CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References

// Begin ScriptStruct FMassCharacterProximity_AnimInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCharacterProximity_AnimInput;
class UScriptStruct* FMassCharacterProximity_AnimInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCharacterProximity_AnimInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCharacterProximity_AnimInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("MassCharacterProximity_AnimInput"));
	}
	return Z_Registration_Info_UScriptStruct_MassCharacterProximity_AnimInput.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FMassCharacterProximity_AnimInput>()
{
	return FMassCharacterProximity_AnimInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/MassCharacterProximity_AnimInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherMeshLocation_MetaData[] = {
		{ "Category", "CharacterProximity" },
		{ "ModuleRelativePath", "Public/Animation/MassCharacterProximity_AnimInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherMeshRotation_MetaData[] = {
		{ "Category", "CharacterProximity" },
		{ "ModuleRelativePath", "Public/Animation/MassCharacterProximity_AnimInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherVelocity2D_MetaData[] = {
		{ "Category", "CharacterProximity" },
		{ "ModuleRelativePath", "Public/Animation/MassCharacterProximity_AnimInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeDirectionToOther2D_MetaData[] = {
		{ "Category", "CharacterProximity" },
		{ "ModuleRelativePath", "Public/Animation/MassCharacterProximity_AnimInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOtherVelocity2D_MetaData[] = {
		{ "Category", "CharacterProximity" },
		{ "ModuleRelativePath", "Public/Animation/MassCharacterProximity_AnimInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "CharacterProximity" },
		{ "ModuleRelativePath", "Public/Animation/MassCharacterProximity_AnimInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherMeshLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherMeshRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherVelocity2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeDirectionToOther2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOtherVelocity2D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCharacterProximity_AnimInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_OtherMeshLocation = { "OtherMeshLocation", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterProximity_AnimInput, OtherMeshLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherMeshLocation_MetaData), NewProp_OtherMeshLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_OtherMeshRotation = { "OtherMeshRotation", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterProximity_AnimInput, OtherMeshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherMeshRotation_MetaData), NewProp_OtherMeshRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_OtherVelocity2D = { "OtherVelocity2D", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterProximity_AnimInput, OtherVelocity2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherVelocity2D_MetaData), NewProp_OtherVelocity2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_RelativeDirectionToOther2D = { "RelativeDirectionToOther2D", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterProximity_AnimInput, RelativeDirectionToOther2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeDirectionToOther2D_MetaData), NewProp_RelativeDirectionToOther2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_RelativeOtherVelocity2D = { "RelativeOtherVelocity2D", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterProximity_AnimInput, RelativeOtherVelocity2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeOtherVelocity2D_MetaData), NewProp_RelativeOtherVelocity2D_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000012015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterProximity_AnimInput, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_OtherMeshLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_OtherMeshRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_OtherVelocity2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_RelativeDirectionToOther2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_RelativeOtherVelocity2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	nullptr,
	&NewStructOps,
	"MassCharacterProximity_AnimInput",
	Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::PropPointers),
	sizeof(FMassCharacterProximity_AnimInput),
	alignof(FMassCharacterProximity_AnimInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput()
{
	if (!Z_Registration_Info_UScriptStruct_MassCharacterProximity_AnimInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCharacterProximity_AnimInput.InnerSingleton, Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassCharacterProximity_AnimInput.InnerSingleton;
}
// End ScriptStruct FMassCharacterProximity_AnimInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterProximity_AnimInput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassCharacterProximity_AnimInput::StaticStruct, Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput_Statics::NewStructOps, TEXT("MassCharacterProximity_AnimInput"), &Z_Registration_Info_UScriptStruct_MassCharacterProximity_AnimInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCharacterProximity_AnimInput), 1816505738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterProximity_AnimInput_h_3478844839(TEXT("/Script/CitySampleMassCrowd"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterProximity_AnimInput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterProximity_AnimInput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
