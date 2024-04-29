// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CrowdCharacterDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdCharacterDefinition() {}

// Begin Cross Module References
ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleCharacterComponentType();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleCrowdGender();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdHairSlots();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdMeshSlots();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdPatternUsage();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleComponentSync();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdAccessoryDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdBodyDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterOptions();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdGenderDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdHairColorDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdHairDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdHairSlot();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdMaterialColorOverride();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdMaterialOverride();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdOutfitDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdPatternInfo();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdVisualizationID();
CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESyncOption();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin ScriptStruct FCrowdHairColorDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdHairColorDefinition;
class UScriptStruct* FCrowdHairColorDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdHairColorDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdHairColorDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdHairColorDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdHairColorDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdHairColorDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdHairColorDefinition>()
{
	return FCrowdHairColorDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Hair Color Definition\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hair Color Definition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairMelanin_MetaData[] = {
		{ "Category", "CrowdHairColorDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairRedness_MetaData[] = {
		{ "Category", "CrowdHairColorDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairRoughness_MetaData[] = {
		{ "Category", "CrowdHairColorDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairMelanin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairRedness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairRoughness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdHairColorDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::NewProp_HairMelanin = { "HairMelanin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairColorDefinition, HairMelanin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairMelanin_MetaData), NewProp_HairMelanin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::NewProp_HairRedness = { "HairRedness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairColorDefinition, HairRedness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairRedness_MetaData), NewProp_HairRedness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::NewProp_HairRoughness = { "HairRoughness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairColorDefinition, HairRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairRoughness_MetaData), NewProp_HairRoughness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::NewProp_HairMelanin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::NewProp_HairRedness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::NewProp_HairRoughness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdHairColorDefinition",
	Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::PropPointers),
	sizeof(FCrowdHairColorDefinition),
	alignof(FCrowdHairColorDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdHairColorDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdHairColorDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdHairColorDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdHairColorDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdHairColorDefinition

// Begin ScriptStruct FCrowdMaterialColorOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdMaterialColorOverride;
class UScriptStruct* FCrowdMaterialColorOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdMaterialColorOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdMaterialColorOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdMaterialColorOverride, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdMaterialColorOverride"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdMaterialColorOverride.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdMaterialColorOverride>()
{
	return FCrowdMaterialColorOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ----------------------------------------------------------------------------\n//\x09\x09\x09\x09\x09\x09OUTFIT MATERIAL DEFINITION\n// ----------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OUTFIT MATERIAL DEFINITION" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "CrowdMaterialColorOverride" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterType_MetaData[] = {
		{ "Category", "CrowdMaterialColorOverride" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "CrowdMaterialColorOverride" },
		{ "EditCondition", "ParameterType==ECrowdMaterialParameterType::Color" },
		{ "EditConditionHides", "" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "CrowdMaterialColorOverride" },
		{ "EditCondition", "ParameterType==ECrowdMaterialParameterType::Vector" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "Category", "CrowdMaterialColorOverride" },
		{ "EditCondition", "ParameterType==ECrowdMaterialParameterType::Float" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParameterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ParameterType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdMaterialColorOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdMaterialColorOverride, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_ParameterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_ParameterType = { "ParameterType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdMaterialColorOverride, ParameterType), Z_Construct_UEnum_CitySample_ECrowdMaterialParameterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterType_MetaData), NewProp_ParameterType_MetaData) }; // 1606560451
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdMaterialColorOverride, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdMaterialColorOverride, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdMaterialColorOverride, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_ParameterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_ParameterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewProp_Float,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdMaterialColorOverride",
	Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::PropPointers),
	sizeof(FCrowdMaterialColorOverride),
	alignof(FCrowdMaterialColorOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdMaterialColorOverride()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdMaterialColorOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdMaterialColorOverride.InnerSingleton, Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdMaterialColorOverride.InnerSingleton;
}
// End ScriptStruct FCrowdMaterialColorOverride

// Begin ScriptStruct FCrowdPatternInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdPatternInfo;
class UScriptStruct* FCrowdPatternInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdPatternInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdPatternInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdPatternInfo, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdPatternInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdPatternInfo.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdPatternInfo>()
{
	return FCrowdPatternInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "CrowdPatternInfo" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[] = {
		{ "Category", "CrowdPatternInfo" },
		{ "ClampMax", "31" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessMultiplier_MetaData[] = {
		{ "Category", "CrowdPatternInfo" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMBlendAmount_MetaData[] = {
		{ "Category", "CrowdPatternInfo" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Selection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoughnessMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ISMBlendAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdPatternInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdPatternInfo, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdPatternInfo, Selection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selection_MetaData), NewProp_Selection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::NewProp_RoughnessMultiplier = { "RoughnessMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdPatternInfo, RoughnessMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoughnessMultiplier_MetaData), NewProp_RoughnessMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::NewProp_ISMBlendAmount = { "ISMBlendAmount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdPatternInfo, ISMBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMBlendAmount_MetaData), NewProp_ISMBlendAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::NewProp_Selection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::NewProp_RoughnessMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::NewProp_ISMBlendAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdPatternInfo",
	Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::PropPointers),
	sizeof(FCrowdPatternInfo),
	alignof(FCrowdPatternInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdPatternInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdPatternInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdPatternInfo.InnerSingleton, Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdPatternInfo.InnerSingleton;
}
// End ScriptStruct FCrowdPatternInfo

// Begin ScriptStruct FCrowdMaterialOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdMaterialOverride;
class UScriptStruct* FCrowdMaterialOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdMaterialOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdMaterialOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdMaterialOverride, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdMaterialOverride"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdMaterialOverride.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdMaterialOverride>()
{
	return FCrowdMaterialOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOverrides_MetaData[] = {
		{ "Category", "CrowdMaterialOverride" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternUsage_MetaData[] = {
		{ "Category", "CrowdMaterialOverride" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComplimentaryColors_MetaData[] = {
		{ "Category", "CrowdMaterialOverride" },
		{ "EditCondition", "PatternUsage==ECrowdPatternUsage::PatternList" },
		{ "EditConditionHides", "" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Patterns_MetaData[] = {
		{ "Category", "CrowdMaterialOverride" },
		{ "EditCondition", "PatternUsage==ECrowdPatternUsage::PatternList" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSlot_MetaData[] = {
		{ "Category", "CrowdMaterialOverride" },
		{ "EditCondition", "PatternUsage==ECrowdPatternUsage::Driven" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[] = {
		{ "Category", "CrowdMaterialOverride" },
		{ "EditCondition", "PatternUsage==ECrowdPatternUsage::Driven" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterOverrides;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PatternUsage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PatternUsage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComplimentaryColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComplimentaryColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Patterns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Patterns;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceSlot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdMaterialOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_ParameterOverrides_Inner = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdMaterialColorOverride, METADATA_PARAMS(0, nullptr) }; // 539197115
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_ParameterOverrides = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdMaterialOverride, ParameterOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterOverrides_MetaData), NewProp_ParameterOverrides_MetaData) }; // 539197115
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_PatternUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_PatternUsage = { "PatternUsage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdMaterialOverride, PatternUsage), Z_Construct_UEnum_CitySample_ECrowdPatternUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternUsage_MetaData), NewProp_PatternUsage_MetaData) }; // 485231681
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_ComplimentaryColors_Inner = { "ComplimentaryColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_ComplimentaryColors = { "ComplimentaryColors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdMaterialOverride, ComplimentaryColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComplimentaryColors_MetaData), NewProp_ComplimentaryColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_Patterns_Inner = { "Patterns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdPatternInfo, METADATA_PARAMS(0, nullptr) }; // 2289838374
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_Patterns = { "Patterns", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdMaterialOverride, Patterns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Patterns_MetaData), NewProp_Patterns_MetaData) }; // 2289838374
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_SourceSlot = { "SourceSlot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdMaterialOverride, SourceSlot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSlot_MetaData), NewProp_SourceSlot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdMaterialOverride, ScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMultiplier_MetaData), NewProp_ScaleMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_ParameterOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_ParameterOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_PatternUsage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_PatternUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_ComplimentaryColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_ComplimentaryColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_Patterns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_Patterns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_SourceSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewProp_ScaleMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdMaterialOverride",
	Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::PropPointers),
	sizeof(FCrowdMaterialOverride),
	alignof(FCrowdMaterialOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdMaterialOverride()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdMaterialOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdMaterialOverride.InnerSingleton, Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdMaterialOverride.InnerSingleton;
}
// End ScriptStruct FCrowdMaterialOverride

// Begin ScriptStruct FCrowdOutfitMaterialDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdOutfitMaterialDefinition;
class UScriptStruct* FCrowdOutfitMaterialDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdOutfitMaterialDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdOutfitMaterialDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdOutfitMaterialDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdOutfitMaterialDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdOutfitMaterialDefinition>()
{
	return FCrowdOutfitMaterialDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Character Part OutfitColors\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Part OutfitColors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[] = {
		{ "Category", "CrowdOutfitMaterialDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialOverrides_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdOutfitMaterialDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::NewProp_MaterialOverrides_ValueProp = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCrowdMaterialOverride, METADATA_PARAMS(0, nullptr) }; // 3716008281
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::NewProp_MaterialOverrides_Key_KeyProp = { "MaterialOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdOutfitMaterialDefinition, MaterialOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverrides_MetaData), NewProp_MaterialOverrides_MetaData) }; // 3716008281
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::NewProp_MaterialOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::NewProp_MaterialOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::NewProp_MaterialOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdOutfitMaterialDefinition",
	Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::PropPointers),
	sizeof(FCrowdOutfitMaterialDefinition),
	alignof(FCrowdOutfitMaterialDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdOutfitMaterialDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdOutfitMaterialDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdOutfitMaterialDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdOutfitMaterialDefinition

// Begin ScriptStruct FCrowdAccessoryDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdAccessoryDefinition;
class UScriptStruct* FCrowdAccessoryDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdAccessoryDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdAccessoryDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdAccessoryDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdAccessoryDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdAccessoryDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdAccessoryDefinition>()
{
	return FCrowdAccessoryDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Accessory Definition\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accessory Definition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdAccessoryDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "CrowdAccessoryDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[] = {
		{ "Category", "CrowdAccessoryDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalRotation_MetaData[] = {
		{ "Category", "CrowdAccessoryDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** #fixme jf: I assume this should be an FRotator and other code fixed up to deal? Current usage of this treats it like a forward vector instead of a rotation, which is maybe ok? */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#fixme jf: I assume this should be an FRotator and other code fixed up to deal? Current usage of this treats it like a forward vector instead of a rotation, which is maybe ok?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryAnimSet_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdAccessoryDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomWeight_MetaData[] = {
		{ "Category", "CrowdAccessoryDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Assigns a weight to the accessory for use in randomization\n// Weights less than 0 will be treated as if they were 0.\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assigns a weight to the accessory for use in randomization\nWeights less than 0 will be treated as if they were 0." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalRotation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AccessoryAnimSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdAccessoryDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAccessoryDefinition, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAccessoryDefinition, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_LocalPosition = { "LocalPosition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAccessoryDefinition, LocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPosition_MetaData), NewProp_LocalPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_LocalRotation = { "LocalRotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAccessoryDefinition, LocalRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalRotation_MetaData), NewProp_LocalRotation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_AccessoryAnimSet = { "AccessoryAnimSet", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAccessoryDefinition, AccessoryAnimSet), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessoryAnimSet_MetaData), NewProp_AccessoryAnimSet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_RandomWeight = { "RandomWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdAccessoryDefinition, RandomWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomWeight_MetaData), NewProp_RandomWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_LocalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_LocalRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_AccessoryAnimSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewProp_RandomWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdAccessoryDefinition",
	Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::PropPointers),
	sizeof(FCrowdAccessoryDefinition),
	alignof(FCrowdAccessoryDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdAccessoryDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdAccessoryDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdAccessoryDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdAccessoryDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdAccessoryDefinition

// Begin ScriptStruct FCrowdHairDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdHairDefinition;
class UScriptStruct* FCrowdHairDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdHairDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdHairDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdHairDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdHairDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdHairDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdHairDefinition>()
{
	return FCrowdHairDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Hair Definition\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hair Definition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Groom_MetaData[] = {
		{ "Category", "CrowdHairDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomBinding_MetaData[] = {
		{ "Category", "CrowdHairDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "CrowdHairDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedGroomMap_MetaData[] = {
		{ "Category", "CrowdHairDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedGroomMinimumLOD_MetaData[] = {
		{ "Category", "CrowdHairDefinition" },
		{ "ClampMax", "7" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomStaticMesh_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdHairDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollicleMask_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdHairDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocalSimulation_MetaData[] = {
		{ "Category", "CrowdHairDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalBone_MetaData[] = {
		{ "Category", "CrowdHairDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Groom;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GroomBinding;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PhysicsAsset;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BakedGroomMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BakedGroomMinimumLOD;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GroomStaticMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FollicleMask;
	static void NewProp_bLocalSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSimulation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdHairDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairDefinition, Groom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Groom_MetaData), NewProp_Groom_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_GroomBinding = { "GroomBinding", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairDefinition, GroomBinding), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomBinding_MetaData), NewProp_GroomBinding_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairDefinition, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsAsset_MetaData), NewProp_PhysicsAsset_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_BakedGroomMap = { "BakedGroomMap", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairDefinition, BakedGroomMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedGroomMap_MetaData), NewProp_BakedGroomMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_BakedGroomMinimumLOD = { "BakedGroomMinimumLOD", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairDefinition, BakedGroomMinimumLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedGroomMinimumLOD_MetaData), NewProp_BakedGroomMinimumLOD_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_GroomStaticMesh = { "GroomStaticMesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairDefinition, GroomStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomStaticMesh_MetaData), NewProp_GroomStaticMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_FollicleMask = { "FollicleMask", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairDefinition, FollicleMask), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollicleMask_MetaData), NewProp_FollicleMask_MetaData) };
void Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_bLocalSimulation_SetBit(void* Obj)
{
	((FCrowdHairDefinition*)Obj)->bLocalSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_bLocalSimulation = { "bLocalSimulation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCrowdHairDefinition), &Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_bLocalSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocalSimulation_MetaData), NewProp_bLocalSimulation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_LocalBone = { "LocalBone", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairDefinition, LocalBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalBone_MetaData), NewProp_LocalBone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_Groom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_GroomBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_PhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_BakedGroomMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_BakedGroomMinimumLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_GroomStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_FollicleMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_bLocalSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewProp_LocalBone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdHairDefinition",
	Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::PropPointers),
	sizeof(FCrowdHairDefinition),
	alignof(FCrowdHairDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdHairDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdHairDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdHairDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdHairDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdHairDefinition

// Begin ScriptStruct FCrowdHairSlot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdHairSlot;
class UScriptStruct* FCrowdHairSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdHairSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdHairSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdHairSlot, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdHairSlot"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdHairSlot.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdHairSlot>()
{
	return FCrowdHairSlot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdHairSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Hair Slot Definition\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hair Slot Definition" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "CrowdHairSlot" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairDefinitions_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdHairSlot" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HairDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HairDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdHairSlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairSlot, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::NewProp_HairDefinitions_Inner = { "HairDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdHairDefinition, METADATA_PARAMS(0, nullptr) }; // 3099502500
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::NewProp_HairDefinitions = { "HairDefinitions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdHairSlot, HairDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairDefinitions_MetaData), NewProp_HairDefinitions_MetaData) }; // 3099502500
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::NewProp_SlotName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::NewProp_HairDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::NewProp_HairDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdHairSlot",
	Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::PropPointers),
	sizeof(FCrowdHairSlot),
	alignof(FCrowdHairSlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdHairSlot()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdHairSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdHairSlot.InnerSingleton, Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdHairSlot.InnerSingleton;
}
// End ScriptStruct FCrowdHairSlot

// Begin ScriptStruct FCrowdBodyDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdBodyDefinition;
class UScriptStruct* FCrowdBodyDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdBodyDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdBodyDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdBodyDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdBodyDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdBodyDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdBodyDefinition>()
{
	return FCrowdBodyDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Body Definition\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Body Definition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Category", "CrowdBodyDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyData_MetaData[] = {
		{ "Category", "CrowdBodyDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Base;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BodyData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdBodyDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdBodyDefinition, Base), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::NewProp_BodyData = { "BodyData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdBodyDefinition, BodyData), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyData_MetaData), NewProp_BodyData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::NewProp_BodyData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdBodyDefinition",
	Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::PropPointers),
	sizeof(FCrowdBodyDefinition),
	alignof(FCrowdBodyDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdBodyDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdBodyDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdBodyDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdBodyDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdBodyDefinition

// Begin ScriptStruct FCrowdOutfitDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdOutfitDefinition;
class UScriptStruct* FCrowdOutfitDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdOutfitDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdOutfitDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdOutfitDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdOutfitDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdOutfitDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdOutfitDefinition>()
{
	return FCrowdOutfitDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Outfit Color Definition\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outfit Color Definition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopData_MetaData[] = {
		{ "Category", "CrowdOutfitDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomData_MetaData[] = {
		{ "Category", "CrowdOutfitDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShoesData_MetaData[] = {
		{ "Category", "CrowdOutfitDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TopData;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BottomData;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ShoesData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdOutfitDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::NewProp_TopData = { "TopData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdOutfitDefinition, TopData), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopData_MetaData), NewProp_TopData_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::NewProp_BottomData = { "BottomData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdOutfitDefinition, BottomData), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomData_MetaData), NewProp_BottomData_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::NewProp_ShoesData = { "ShoesData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdOutfitDefinition, ShoesData), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShoesData_MetaData), NewProp_ShoesData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::NewProp_TopData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::NewProp_BottomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::NewProp_ShoesData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdOutfitDefinition",
	Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::PropPointers),
	sizeof(FCrowdOutfitDefinition),
	alignof(FCrowdOutfitDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdOutfitDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdOutfitDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdOutfitDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdOutfitDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdOutfitDefinition

// Begin ScriptStruct FCrowdBodyOutfitDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdBodyOutfitDefinition;
class UScriptStruct* FCrowdBodyOutfitDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdBodyOutfitDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdBodyOutfitDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdBodyOutfitDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdBodyOutfitDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdBodyOutfitDefinition>()
{
	return FCrowdBodyOutfitDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Body / Outfit Definition\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Body / Outfit Definition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "Category", "CrowdBodyOutfitDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadsData_MetaData[] = {
		{ "Category", "CrowdBodyOutfitDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outfits_MetaData[] = {
		{ "Category", "CrowdBodyOutfitDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactors_MetaData[] = {
		{ "Category", "CrowdBodyOutfitDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAnimSets_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdBodyOutfitDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextualAnimData_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdBodyOutfitDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accessories_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdBodyOutfitDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Body;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HeadsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeadsData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outfits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outfits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScaleFactors;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LocomotionAnimSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocomotionAnimSets;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ContextualAnimData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Accessories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Accessories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdBodyOutfitDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdBodyOutfitDefinition, Body), Z_Construct_UScriptStruct_FCrowdBodyDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) }; // 4178240223
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_HeadsData_Inner = { "HeadsData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_HeadsData = { "HeadsData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdBodyOutfitDefinition, HeadsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadsData_MetaData), NewProp_HeadsData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_Outfits_Inner = { "Outfits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdOutfitDefinition, METADATA_PARAMS(0, nullptr) }; // 3187540488
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_Outfits = { "Outfits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdBodyOutfitDefinition, Outfits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outfits_MetaData), NewProp_Outfits_MetaData) }; // 3187540488
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_ScaleFactors_Inner = { "ScaleFactors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_ScaleFactors = { "ScaleFactors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdBodyOutfitDefinition, ScaleFactors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFactors_MetaData), NewProp_ScaleFactors_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_LocomotionAnimSets_Inner = { "LocomotionAnimSets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_LocomotionAnimSets = { "LocomotionAnimSets", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdBodyOutfitDefinition, LocomotionAnimSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionAnimSets_MetaData), NewProp_LocomotionAnimSets_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_ContextualAnimData = { "ContextualAnimData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdBodyOutfitDefinition, ContextualAnimData), Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextualAnimData_MetaData), NewProp_ContextualAnimData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_Accessories_Inner = { "Accessories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdAccessoryDefinition, METADATA_PARAMS(0, nullptr) }; // 3816584268
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_Accessories = { "Accessories", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdBodyOutfitDefinition, Accessories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accessories_MetaData), NewProp_Accessories_MetaData) }; // 3816584268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_HeadsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_HeadsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_Outfits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_Outfits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_ScaleFactors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_ScaleFactors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_LocomotionAnimSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_LocomotionAnimSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_ContextualAnimData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_Accessories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewProp_Accessories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdBodyOutfitDefinition",
	Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::PropPointers),
	sizeof(FCrowdBodyOutfitDefinition),
	alignof(FCrowdBodyOutfitDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdBodyOutfitDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdBodyOutfitDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdBodyOutfitDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdBodyOutfitDefinition

// Begin ScriptStruct FCrowdSkinTextureModifierDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdSkinTextureModifierDefinition;
class UScriptStruct* FCrowdSkinTextureModifierDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdSkinTextureModifierDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdSkinTextureModifierDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdSkinTextureModifierDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdSkinTextureModifierDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdSkinTextureModifierDefinition>()
{
	return FCrowdSkinTextureModifierDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ----------------------------------------------------------------------------\n//\x09\x09\x09\x09\x09\x09\x09\x09SKIN TEXTURE MODIFIER\n// ----------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SKIN TEXTURE MODIFIER" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetU_MetaData[] = {
		{ "Category", "CrowdSkinTextureModifierDefinition" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetV_MetaData[] = {
		{ "Category", "CrowdSkinTextureModifierDefinition" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MelaninRandomSeed\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MelaninRandomSeed" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdSkinTextureModifierDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::NewProp_OffsetU = { "OffsetU", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureModifierDefinition, OffsetU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetU_MetaData), NewProp_OffsetU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::NewProp_OffsetV = { "OffsetV", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureModifierDefinition, OffsetV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetV_MetaData), NewProp_OffsetV_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::NewProp_OffsetU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::NewProp_OffsetV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdSkinTextureModifierDefinition",
	Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::PropPointers),
	sizeof(FCrowdSkinTextureModifierDefinition),
	alignof(FCrowdSkinTextureModifierDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdSkinTextureModifierDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdSkinTextureModifierDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdSkinTextureModifierDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdSkinTextureModifierDefinition

// Begin ScriptStruct FCrowdSkinTextureDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdSkinTextureDefinition;
class UScriptStruct* FCrowdSkinTextureDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdSkinTextureDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdSkinTextureDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdSkinTextureDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdSkinTextureDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdSkinTextureDefinition>()
{
	return FCrowdSkinTextureDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureAtlasIndex_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ClampMax", "15" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
		{ "UIMax", "15" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyColor_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChestColor_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceCavity_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceColor_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceColorCM1_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceColorCM2_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceColorCM3_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceNormal_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceNormalWM1_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceNormalWM2_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceNormalWM3_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceRoughness_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChestRoughness_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceU_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceV_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlbedoMultiplier_MetaData[] = {
		{ "Category", "CrowdSkinTextureDefinition" },
		{ "ClampMax", "1.1" },
		{ "ClampMin", "0.9" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
		{ "UIMax", "1.1" },
		{ "UIMin", "0.9" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureAtlasIndex;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BodyColor;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ChestColor;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FaceCavity;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FaceColor;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FaceColorCM1;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FaceColorCM2;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FaceColorCM3;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FaceNormal;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FaceNormalWM1;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FaceNormalWM2;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FaceNormalWM3;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FaceRoughness;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ChestRoughness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlbedoMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdSkinTextureDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_TextureAtlasIndex = { "TextureAtlasIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, TextureAtlasIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureAtlasIndex_MetaData), NewProp_TextureAtlasIndex_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_BodyColor = { "BodyColor", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, BodyColor), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyColor_MetaData), NewProp_BodyColor_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_ChestColor = { "ChestColor", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, ChestColor), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChestColor_MetaData), NewProp_ChestColor_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceCavity = { "FaceCavity", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, FaceCavity), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceCavity_MetaData), NewProp_FaceCavity_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceColor = { "FaceColor", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, FaceColor), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceColor_MetaData), NewProp_FaceColor_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceColorCM1 = { "FaceColorCM1", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, FaceColorCM1), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceColorCM1_MetaData), NewProp_FaceColorCM1_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceColorCM2 = { "FaceColorCM2", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, FaceColorCM2), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceColorCM2_MetaData), NewProp_FaceColorCM2_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceColorCM3 = { "FaceColorCM3", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, FaceColorCM3), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceColorCM3_MetaData), NewProp_FaceColorCM3_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceNormal = { "FaceNormal", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, FaceNormal), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceNormal_MetaData), NewProp_FaceNormal_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceNormalWM1 = { "FaceNormalWM1", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, FaceNormalWM1), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceNormalWM1_MetaData), NewProp_FaceNormalWM1_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceNormalWM2 = { "FaceNormalWM2", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, FaceNormalWM2), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceNormalWM2_MetaData), NewProp_FaceNormalWM2_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceNormalWM3 = { "FaceNormalWM3", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, FaceNormalWM3), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceNormalWM3_MetaData), NewProp_FaceNormalWM3_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceRoughness = { "FaceRoughness", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, FaceRoughness), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceRoughness_MetaData), NewProp_FaceRoughness_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_ChestRoughness = { "ChestRoughness", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, ChestRoughness), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChestRoughness_MetaData), NewProp_ChestRoughness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_SourceU = { "SourceU", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, SourceU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceU_MetaData), NewProp_SourceU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_SourceV = { "SourceV", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, SourceV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceV_MetaData), NewProp_SourceV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_AlbedoMultiplier = { "AlbedoMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinTextureDefinition, AlbedoMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlbedoMultiplier_MetaData), NewProp_AlbedoMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_TextureAtlasIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_BodyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_ChestColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceCavity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceColorCM1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceColorCM2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceColorCM3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceNormalWM1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceNormalWM2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceNormalWM3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_FaceRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_ChestRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_SourceU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_SourceV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewProp_AlbedoMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdSkinTextureDefinition",
	Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::PropPointers),
	sizeof(FCrowdSkinTextureDefinition),
	alignof(FCrowdSkinTextureDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdSkinTextureDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdSkinTextureDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdSkinTextureDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdSkinTextureDefinition

// Begin ScriptStruct FCrowdSkinMaterialDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdSkinMaterialDefinition;
class UScriptStruct* FCrowdSkinMaterialDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdSkinMaterialDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdSkinMaterialDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdSkinMaterialDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdSkinMaterialDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdSkinMaterialDefinition>()
{
	return FCrowdSkinMaterialDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "CrowdSkinMaterialDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureModifiers_MetaData[] = {
		{ "Category", "CrowdSkinMaterialDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureModifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdSkinMaterialDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinMaterialDefinition, Texture), Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) }; // 2937937426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::NewProp_TextureModifiers_Inner = { "TextureModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition, METADATA_PARAMS(0, nullptr) }; // 3518994858
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::NewProp_TextureModifiers = { "TextureModifiers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdSkinMaterialDefinition, TextureModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureModifiers_MetaData), NewProp_TextureModifiers_MetaData) }; // 3518994858
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::NewProp_TextureModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::NewProp_TextureModifiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdSkinMaterialDefinition",
	Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::PropPointers),
	sizeof(FCrowdSkinMaterialDefinition),
	alignof(FCrowdSkinMaterialDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdSkinMaterialDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdSkinMaterialDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdSkinMaterialDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdSkinMaterialDefinition

// Begin ScriptStruct FCrowdGenderDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdGenderDefinition;
class UScriptStruct* FCrowdGenderDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdGenderDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdGenderDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdGenderDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdGenderDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdGenderDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdGenderDefinition>()
{
	return FCrowdGenderDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Gender Definition\n\x09Struct for Masculine or Feminine\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gender Definition\nStruct for Masculine or Feminine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalWeight_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdGenderDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverWeight_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdGenderDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderWeight_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdGenderDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairSlots_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdGenderDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
		{ "TitleProperty", "SlotName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinMaterials_MetaData[] = {
		{ "Category", "CrowdGenderDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutfitMaterials_MetaData[] = {
		{ "Category", "CrowdGenderDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarLodMeshData_MetaData[] = {
		{ "Category", "CrowdGenderDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomBindings_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdGenderDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnderWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HairSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HairSlots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkinMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkinMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutfitMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutfitMaterials;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FarLodMeshData;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GroomBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroomBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdGenderDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_NormalWeight = { "NormalWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdGenderDefinition, NormalWeight), Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalWeight_MetaData), NewProp_NormalWeight_MetaData) }; // 1919839106
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_OverWeight = { "OverWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdGenderDefinition, OverWeight), Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverWeight_MetaData), NewProp_OverWeight_MetaData) }; // 1919839106
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_UnderWeight = { "UnderWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdGenderDefinition, UnderWeight), Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderWeight_MetaData), NewProp_UnderWeight_MetaData) }; // 1919839106
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_HairSlots_Inner = { "HairSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdHairSlot, METADATA_PARAMS(0, nullptr) }; // 173558140
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_HairSlots = { "HairSlots", nullptr, (EPropertyFlags)0x0010000000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdGenderDefinition, HairSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairSlots_MetaData), NewProp_HairSlots_MetaData) }; // 173558140
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_SkinMaterials_Inner = { "SkinMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition, METADATA_PARAMS(0, nullptr) }; // 986049374
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_SkinMaterials = { "SkinMaterials", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdGenderDefinition, SkinMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinMaterials_MetaData), NewProp_SkinMaterials_MetaData) }; // 986049374
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_OutfitMaterials_Inner = { "OutfitMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition, METADATA_PARAMS(0, nullptr) }; // 2504310407
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_OutfitMaterials = { "OutfitMaterials", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdGenderDefinition, OutfitMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutfitMaterials_MetaData), NewProp_OutfitMaterials_MetaData) }; // 2504310407
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_FarLodMeshData = { "FarLodMeshData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdGenderDefinition, FarLodMeshData), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarLodMeshData_MetaData), NewProp_FarLodMeshData_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_GroomBindings_Inner = { "GroomBindings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_GroomBindings = { "GroomBindings", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdGenderDefinition, GroomBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomBindings_MetaData), NewProp_GroomBindings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_NormalWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_OverWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_UnderWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_HairSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_HairSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_SkinMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_SkinMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_OutfitMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_OutfitMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_FarLodMeshData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_GroomBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewProp_GroomBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdGenderDefinition",
	Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::PropPointers),
	sizeof(FCrowdGenderDefinition),
	alignof(FCrowdGenderDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdGenderDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdGenderDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdGenderDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdGenderDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdGenderDefinition

// Begin ScriptStruct FCrowdCharacterDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdCharacterDefinition;
class UScriptStruct* FCrowdCharacterDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdCharacterDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdCharacterDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdCharacterDefinition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdCharacterDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdCharacterDefinition.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdCharacterDefinition>()
{
	return FCrowdCharacterDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ----------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyDefinition_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Meshes\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Meshes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadData_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutfitDefinition_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairDefinitions_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fixed size array where the index in the array corresponds to a value in ECrowdHairSlots\n// i.e. HairDefinitions[0] is the hair definition for ECrowdHairSlots::Hair and so on\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fixed size array where the index in the array corresponds to a value in ECrowdHairSlots\ni.e. HairDefinitions[0] is the hair definition for ECrowdHairSlots::Hair and so on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryDefinition_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairColorDefinition_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material & Textures\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material & Textures" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutfitMaterialDefinition_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinTextureDefinition_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinTextureModifierDefinition_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternColorIndex_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternOptionIndex_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingMinLOD_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optionnally override the min. ray tracing LOD set on the skeleton mesh. Default: -1, use the skeleton mesh value\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optionnally override the min. ray tracing LOD set on the skeleton mesh. Default: -1, use the skeleton mesh value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAnimSet_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextualAnimDataAsset_MetaData[] = {
		{ "Category", "CrowdCharacterDefinition" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyDefinition;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Head;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HeadData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutfitDefinition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HairDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HairDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccessoryDefinition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HairColorDefinition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutfitMaterialDefinition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkinTextureDefinition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkinTextureModifierDefinition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PatternColorIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PatternOptionIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingMinLOD;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LocomotionAnimSet;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ContextualAnimDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdCharacterDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_BodyDefinition = { "BodyDefinition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, BodyDefinition), Z_Construct_UScriptStruct_FCrowdBodyDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyDefinition_MetaData), NewProp_BodyDefinition_MetaData) }; // 4178240223
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, Head), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Head_MetaData), NewProp_Head_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_HeadData = { "HeadData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, HeadData), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadData_MetaData), NewProp_HeadData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_OutfitDefinition = { "OutfitDefinition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, OutfitDefinition), Z_Construct_UScriptStruct_FCrowdOutfitDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutfitDefinition_MetaData), NewProp_OutfitDefinition_MetaData) }; // 3187540488
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_HairDefinitions_Inner = { "HairDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdHairDefinition, METADATA_PARAMS(0, nullptr) }; // 3099502500
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_HairDefinitions = { "HairDefinitions", nullptr, (EPropertyFlags)0x0010000000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, HairDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairDefinitions_MetaData), NewProp_HairDefinitions_MetaData) }; // 3099502500
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_AccessoryDefinition = { "AccessoryDefinition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, AccessoryDefinition), Z_Construct_UScriptStruct_FCrowdAccessoryDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessoryDefinition_MetaData), NewProp_AccessoryDefinition_MetaData) }; // 3816584268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_HairColorDefinition = { "HairColorDefinition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, HairColorDefinition), Z_Construct_UScriptStruct_FCrowdHairColorDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairColorDefinition_MetaData), NewProp_HairColorDefinition_MetaData) }; // 1332544300
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_OutfitMaterialDefinition = { "OutfitMaterialDefinition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, OutfitMaterialDefinition), Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutfitMaterialDefinition_MetaData), NewProp_OutfitMaterialDefinition_MetaData) }; // 2504310407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_SkinTextureDefinition = { "SkinTextureDefinition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, SkinTextureDefinition), Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinTextureDefinition_MetaData), NewProp_SkinTextureDefinition_MetaData) }; // 2937937426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_SkinTextureModifierDefinition = { "SkinTextureModifierDefinition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, SkinTextureModifierDefinition), Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinTextureModifierDefinition_MetaData), NewProp_SkinTextureModifierDefinition_MetaData) }; // 3518994858
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, ScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFactor_MetaData), NewProp_ScaleFactor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_PatternColorIndex = { "PatternColorIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, PatternColorIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternColorIndex_MetaData), NewProp_PatternColorIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_PatternOptionIndex = { "PatternOptionIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, PatternOptionIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternOptionIndex_MetaData), NewProp_PatternOptionIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_RayTracingMinLOD = { "RayTracingMinLOD", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, RayTracingMinLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingMinLOD_MetaData), NewProp_RayTracingMinLOD_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_LocomotionAnimSet = { "LocomotionAnimSet", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, LocomotionAnimSet), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionAnimSet_MetaData), NewProp_LocomotionAnimSet_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_ContextualAnimDataAsset = { "ContextualAnimDataAsset", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterDefinition, ContextualAnimDataAsset), Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextualAnimDataAsset_MetaData), NewProp_ContextualAnimDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_BodyDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_Head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_HeadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_OutfitDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_HairDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_HairDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_AccessoryDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_HairColorDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_OutfitMaterialDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_SkinTextureDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_SkinTextureModifierDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_ScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_PatternColorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_PatternOptionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_RayTracingMinLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_LocomotionAnimSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewProp_ContextualAnimDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdCharacterDefinition",
	Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::PropPointers),
	sizeof(FCrowdCharacterDefinition),
	alignof(FCrowdCharacterDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdCharacterDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdCharacterDefinition.InnerSingleton, Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdCharacterDefinition.InnerSingleton;
}
// End ScriptStruct FCrowdCharacterDefinition

// Begin ScriptStruct FCrowdCharacterOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdCharacterOptions;
class UScriptStruct* FCrowdCharacterOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdCharacterOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdCharacterOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdCharacterOptions, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdCharacterOptions"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdCharacterOptions.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdCharacterOptions>()
{
	return FCrowdCharacterOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "Category", "Lineup|Base" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyType_MetaData[] = {
		{ "Category", "Lineup|Base" },
		{ "DisplayName", "Body Shape" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadIndex_MetaData[] = {
		{ "Category", "Lineup|Base" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutfitIndex_MetaData[] = {
		{ "Category", "Lineup|Base|Outfit" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutfitMaterialIndex_MetaData[] = {
		{ "Category", "Lineup|Base|Outfit" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairIndex_MetaData[] = {
		{ "Category", "Lineup|Base|Hair" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyebrowsIndex_MetaData[] = {
		{ "Category", "Lineup|Base|Hair" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuzzIndex_MetaData[] = {
		{ "Category", "Lineup|Base|Hair" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyelashesIndex_MetaData[] = {
		{ "Category", "Lineup|Base|Hair" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MustacheIndex_MetaData[] = {
		{ "Category", "Lineup|Base|Hair" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeardIndex_MetaData[] = {
		{ "Category", "Lineup|Base|Hair" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairColorIndex_MetaData[] = {
		{ "Category", "Lineup|Base|Hair" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinTextureIndex_MetaData[] = {
		{ "Category", "Lineup|Base|Skin" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinTextureModifierIndex_MetaData[] = {
		{ "Category", "Lineup|Base|Skin" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryIndex_MetaData[] = {
		{ "Category", "Lineup|Base" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactorIndex_MetaData[] = {
		{ "Category", "Lineup|Base" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetIndex_MetaData[] = {
		{ "Category", "Lineup|Base" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternColorIndex_MetaData[] = {
		{ "Category", "Lineup|Base" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternOptionIndex_MetaData[] = {
		{ "Category", "Lineup|Base" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Skeleton_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HeadIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutfitIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutfitMaterialIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HairIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EyebrowsIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FuzzIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EyelashesIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MustacheIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BeardIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HairColorIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkinTextureIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkinTextureModifierIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccessoryIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleFactorIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimSetIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PatternColorIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PatternOptionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdCharacterOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_Skeleton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, Skeleton), Z_Construct_UEnum_CitySample_ECitySampleCrowdGender, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) }; // 2689071917
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, BodyType), Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyType_MetaData), NewProp_BodyType_MetaData) }; // 3557943995
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_HeadIndex = { "HeadIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, HeadIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadIndex_MetaData), NewProp_HeadIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_OutfitIndex = { "OutfitIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, OutfitIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutfitIndex_MetaData), NewProp_OutfitIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_OutfitMaterialIndex = { "OutfitMaterialIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, OutfitMaterialIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutfitMaterialIndex_MetaData), NewProp_OutfitMaterialIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_HairIndex = { "HairIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, HairIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairIndex_MetaData), NewProp_HairIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_EyebrowsIndex = { "EyebrowsIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, EyebrowsIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyebrowsIndex_MetaData), NewProp_EyebrowsIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_FuzzIndex = { "FuzzIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, FuzzIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuzzIndex_MetaData), NewProp_FuzzIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_EyelashesIndex = { "EyelashesIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, EyelashesIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyelashesIndex_MetaData), NewProp_EyelashesIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_MustacheIndex = { "MustacheIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, MustacheIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MustacheIndex_MetaData), NewProp_MustacheIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_BeardIndex = { "BeardIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, BeardIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeardIndex_MetaData), NewProp_BeardIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_HairColorIndex = { "HairColorIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, HairColorIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairColorIndex_MetaData), NewProp_HairColorIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_SkinTextureIndex = { "SkinTextureIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, SkinTextureIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinTextureIndex_MetaData), NewProp_SkinTextureIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_SkinTextureModifierIndex = { "SkinTextureModifierIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, SkinTextureModifierIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinTextureModifierIndex_MetaData), NewProp_SkinTextureModifierIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_AccessoryIndex = { "AccessoryIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, AccessoryIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessoryIndex_MetaData), NewProp_AccessoryIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_ScaleFactorIndex = { "ScaleFactorIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, ScaleFactorIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFactorIndex_MetaData), NewProp_ScaleFactorIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_AnimSetIndex = { "AnimSetIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, AnimSetIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSetIndex_MetaData), NewProp_AnimSetIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_PatternColorIndex = { "PatternColorIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, PatternColorIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternColorIndex_MetaData), NewProp_PatternColorIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_PatternOptionIndex = { "PatternOptionIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdCharacterOptions, PatternOptionIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternOptionIndex_MetaData), NewProp_PatternOptionIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_Skeleton_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_BodyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_BodyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_HeadIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_OutfitIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_OutfitMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_HairIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_EyebrowsIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_FuzzIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_EyelashesIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_MustacheIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_BeardIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_HairColorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_SkinTextureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_SkinTextureModifierIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_AccessoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_ScaleFactorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_AnimSetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_PatternColorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewProp_PatternOptionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdCharacterOptions",
	Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::PropPointers),
	sizeof(FCrowdCharacterOptions),
	alignof(FCrowdCharacterOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterOptions()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdCharacterOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdCharacterOptions.InnerSingleton, Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdCharacterOptions.InnerSingleton;
}
// End ScriptStruct FCrowdCharacterOptions

// Begin ScriptStruct FCrowdVisualizationID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdVisualizationID;
class UScriptStruct* FCrowdVisualizationID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdVisualizationID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdVisualizationID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdVisualizationID, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdVisualizationID"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdVisualizationID.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdVisualizationID>()
{
	return FCrowdVisualizationID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackedData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All the data is packed inside of an int64 and can be accessed by reinterpreting as\n// a FCrowdVisualizationBitfield. See FCrowdVisualizationID::AsMutableBitfield.\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All the data is packed inside of an int64 and can be accessed by reinterpreting as\na FCrowdVisualizationBitfield. See FCrowdVisualizationID::AsMutableBitfield." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PackedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdVisualizationID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics::NewProp_PackedData = { "PackedData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdVisualizationID, PackedData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackedData_MetaData), NewProp_PackedData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics::NewProp_PackedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CrowdVisualizationID",
	Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics::PropPointers),
	sizeof(FCrowdVisualizationID),
	alignof(FCrowdVisualizationID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrowdVisualizationID()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdVisualizationID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdVisualizationID.InnerSingleton, Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrowdVisualizationID.InnerSingleton;
}
// End ScriptStruct FCrowdVisualizationID

// Begin Enum ECitySampleCharacterComponentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleCharacterComponentType;
static UEnum* ECitySampleCharacterComponentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECitySampleCharacterComponentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECitySampleCharacterComponentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleCharacterComponentType, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleCharacterComponentType"));
	}
	return Z_Registration_Info_UEnum_ECitySampleCharacterComponentType.OuterSingleton;
}
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleCharacterComponentType>()
{
	return ECitySampleCharacterComponentType_StaticEnum();
}
struct Z_Construct_UEnum_CitySample_ECitySampleCharacterComponentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Groom.Name", "ECitySampleCharacterComponentType::Groom" },
		{ "Mesh.Name", "ECitySampleCharacterComponentType::Mesh" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECitySampleCharacterComponentType::Mesh", (int64)ECitySampleCharacterComponentType::Mesh },
		{ "ECitySampleCharacterComponentType::Groom", (int64)ECitySampleCharacterComponentType::Groom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleCharacterComponentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	"ECitySampleCharacterComponentType",
	"ECitySampleCharacterComponentType",
	Z_Construct_UEnum_CitySample_ECitySampleCharacterComponentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleCharacterComponentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleCharacterComponentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySampleCharacterComponentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CitySample_ECitySampleCharacterComponentType()
{
	if (!Z_Registration_Info_UEnum_ECitySampleCharacterComponentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleCharacterComponentType.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleCharacterComponentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECitySampleCharacterComponentType.InnerSingleton;
}
// End Enum ECitySampleCharacterComponentType

// Begin ScriptStruct FCitySampleCharacterComponentIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleCharacterComponentIdentifier;
class UScriptStruct* FCitySampleCharacterComponentIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleCharacterComponentIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleCharacterComponentIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleCharacterComponentIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleCharacterComponentIdentifier.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleCharacterComponentIdentifier>()
{
	return FCitySampleCharacterComponentIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[] = {
		{ "Category", "FCitySampleCharacterComponentIdentifier" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshSlot_MetaData[] = {
		{ "Category", "FCitySampleCharacterComponentIdentifier" },
		{ "EditCondition", "ComponentType==ECitySampleCharacterComponentType::Mesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomSlot_MetaData[] = {
		{ "Category", "FCitySampleCharacterComponentIdentifier" },
		{ "EditCondition", "ComponentType==ECitySampleCharacterComponentType::Groom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshSlot;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroomSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroomSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleCharacterComponentIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_ComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCharacterComponentIdentifier, ComponentType), Z_Construct_UEnum_CitySample_ECitySampleCharacterComponentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentType_MetaData), NewProp_ComponentType_MetaData) }; // 861011199
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_MeshSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_MeshSlot = { "MeshSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCharacterComponentIdentifier, MeshSlot), Z_Construct_UEnum_CitySample_ECrowdMeshSlots, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshSlot_MetaData), NewProp_MeshSlot_MetaData) }; // 937421709
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_GroomSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_GroomSlot = { "GroomSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleCharacterComponentIdentifier, GroomSlot), Z_Construct_UEnum_CitySample_ECrowdHairSlots, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomSlot_MetaData), NewProp_GroomSlot_MetaData) }; // 984727171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_ComponentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_ComponentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_MeshSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_MeshSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_GroomSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewProp_GroomSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CitySampleCharacterComponentIdentifier",
	Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::PropPointers),
	sizeof(FCitySampleCharacterComponentIdentifier),
	alignof(FCitySampleCharacterComponentIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleCharacterComponentIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleCharacterComponentIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CitySampleCharacterComponentIdentifier.InnerSingleton;
}
// End ScriptStruct FCitySampleCharacterComponentIdentifier

// Begin ScriptStruct FCitySampleComponentSync
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleComponentSync;
class UScriptStruct* FCitySampleComponentSync::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleComponentSync.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleComponentSync.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleComponentSync, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleComponentSync"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleComponentSync.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleComponentSync>()
{
	return FCitySampleComponentSync::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentIdentifier_MetaData[] = {
		{ "Category", "FCitySampleComponentSync" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncOption_MetaData[] = {
		{ "Category", "FCitySampleComponentSync" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentIdentifier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SyncOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SyncOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleComponentSync>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::NewProp_ComponentIdentifier = { "ComponentIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleComponentSync, ComponentIdentifier), Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentIdentifier_MetaData), NewProp_ComponentIdentifier_MetaData) }; // 4089215597
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::NewProp_SyncOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::NewProp_SyncOption = { "SyncOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleComponentSync, SyncOption), Z_Construct_UEnum_Engine_ESyncOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncOption_MetaData), NewProp_SyncOption_MetaData) }; // 3410064885
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::NewProp_ComponentIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::NewProp_SyncOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::NewProp_SyncOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CitySampleComponentSync",
	Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::PropPointers),
	sizeof(FCitySampleComponentSync),
	alignof(FCitySampleComponentSync),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCitySampleComponentSync()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleComponentSync.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleComponentSync.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CitySampleComponentSync.InnerSingleton;
}
// End ScriptStruct FCitySampleComponentSync

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDefinition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECitySampleCharacterComponentType_StaticEnum, TEXT("ECitySampleCharacterComponentType"), &Z_Registration_Info_UEnum_ECitySampleCharacterComponentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 861011199U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCrowdHairColorDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdHairColorDefinition_Statics::NewStructOps, TEXT("CrowdHairColorDefinition"), &Z_Registration_Info_UScriptStruct_CrowdHairColorDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdHairColorDefinition), 1332544300U) },
		{ FCrowdMaterialColorOverride::StaticStruct, Z_Construct_UScriptStruct_FCrowdMaterialColorOverride_Statics::NewStructOps, TEXT("CrowdMaterialColorOverride"), &Z_Registration_Info_UScriptStruct_CrowdMaterialColorOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdMaterialColorOverride), 539197115U) },
		{ FCrowdPatternInfo::StaticStruct, Z_Construct_UScriptStruct_FCrowdPatternInfo_Statics::NewStructOps, TEXT("CrowdPatternInfo"), &Z_Registration_Info_UScriptStruct_CrowdPatternInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdPatternInfo), 2289838374U) },
		{ FCrowdMaterialOverride::StaticStruct, Z_Construct_UScriptStruct_FCrowdMaterialOverride_Statics::NewStructOps, TEXT("CrowdMaterialOverride"), &Z_Registration_Info_UScriptStruct_CrowdMaterialOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdMaterialOverride), 3716008281U) },
		{ FCrowdOutfitMaterialDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdOutfitMaterialDefinition_Statics::NewStructOps, TEXT("CrowdOutfitMaterialDefinition"), &Z_Registration_Info_UScriptStruct_CrowdOutfitMaterialDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdOutfitMaterialDefinition), 2504310407U) },
		{ FCrowdAccessoryDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdAccessoryDefinition_Statics::NewStructOps, TEXT("CrowdAccessoryDefinition"), &Z_Registration_Info_UScriptStruct_CrowdAccessoryDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdAccessoryDefinition), 3816584268U) },
		{ FCrowdHairDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdHairDefinition_Statics::NewStructOps, TEXT("CrowdHairDefinition"), &Z_Registration_Info_UScriptStruct_CrowdHairDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdHairDefinition), 3099502500U) },
		{ FCrowdHairSlot::StaticStruct, Z_Construct_UScriptStruct_FCrowdHairSlot_Statics::NewStructOps, TEXT("CrowdHairSlot"), &Z_Registration_Info_UScriptStruct_CrowdHairSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdHairSlot), 173558140U) },
		{ FCrowdBodyDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdBodyDefinition_Statics::NewStructOps, TEXT("CrowdBodyDefinition"), &Z_Registration_Info_UScriptStruct_CrowdBodyDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdBodyDefinition), 4178240223U) },
		{ FCrowdOutfitDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdOutfitDefinition_Statics::NewStructOps, TEXT("CrowdOutfitDefinition"), &Z_Registration_Info_UScriptStruct_CrowdOutfitDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdOutfitDefinition), 3187540488U) },
		{ FCrowdBodyOutfitDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdBodyOutfitDefinition_Statics::NewStructOps, TEXT("CrowdBodyOutfitDefinition"), &Z_Registration_Info_UScriptStruct_CrowdBodyOutfitDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdBodyOutfitDefinition), 1919839106U) },
		{ FCrowdSkinTextureModifierDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdSkinTextureModifierDefinition_Statics::NewStructOps, TEXT("CrowdSkinTextureModifierDefinition"), &Z_Registration_Info_UScriptStruct_CrowdSkinTextureModifierDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdSkinTextureModifierDefinition), 3518994858U) },
		{ FCrowdSkinTextureDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdSkinTextureDefinition_Statics::NewStructOps, TEXT("CrowdSkinTextureDefinition"), &Z_Registration_Info_UScriptStruct_CrowdSkinTextureDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdSkinTextureDefinition), 2937937426U) },
		{ FCrowdSkinMaterialDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdSkinMaterialDefinition_Statics::NewStructOps, TEXT("CrowdSkinMaterialDefinition"), &Z_Registration_Info_UScriptStruct_CrowdSkinMaterialDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdSkinMaterialDefinition), 986049374U) },
		{ FCrowdGenderDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdGenderDefinition_Statics::NewStructOps, TEXT("CrowdGenderDefinition"), &Z_Registration_Info_UScriptStruct_CrowdGenderDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdGenderDefinition), 2262471501U) },
		{ FCrowdCharacterDefinition::StaticStruct, Z_Construct_UScriptStruct_FCrowdCharacterDefinition_Statics::NewStructOps, TEXT("CrowdCharacterDefinition"), &Z_Registration_Info_UScriptStruct_CrowdCharacterDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdCharacterDefinition), 1580735983U) },
		{ FCrowdCharacterOptions::StaticStruct, Z_Construct_UScriptStruct_FCrowdCharacterOptions_Statics::NewStructOps, TEXT("CrowdCharacterOptions"), &Z_Registration_Info_UScriptStruct_CrowdCharacterOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdCharacterOptions), 580004803U) },
		{ FCrowdVisualizationID::StaticStruct, Z_Construct_UScriptStruct_FCrowdVisualizationID_Statics::NewStructOps, TEXT("CrowdVisualizationID"), &Z_Registration_Info_UScriptStruct_CrowdVisualizationID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdVisualizationID), 1179926536U) },
		{ FCitySampleCharacterComponentIdentifier::StaticStruct, Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier_Statics::NewStructOps, TEXT("CitySampleCharacterComponentIdentifier"), &Z_Registration_Info_UScriptStruct_CitySampleCharacterComponentIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleCharacterComponentIdentifier), 4089215597U) },
		{ FCitySampleComponentSync::StaticStruct, Z_Construct_UScriptStruct_FCitySampleComponentSync_Statics::NewStructOps, TEXT("CitySampleComponentSync"), &Z_Registration_Info_UScriptStruct_CitySampleComponentSync, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleComponentSync), 2653579691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDefinition_h_2656254496(TEXT("/Script/CitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDefinition_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDefinition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDefinition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
