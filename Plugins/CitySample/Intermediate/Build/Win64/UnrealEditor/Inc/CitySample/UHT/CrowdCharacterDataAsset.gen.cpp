// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CrowdCharacterDataAsset.h"
#include "CitySample/Public/Crowd/CrowdCharacterDefinition.h"
#include "Runtime/Engine/Classes/Components/LODSyncComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdCharacterDataAsset() {}

// Begin Cross Module References
ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdCharacterDataAsset();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleCrowdGender();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleComponentSync();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdGenderDefinition();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdHairColorDefinition();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLODMappingData();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Class UCrowdCharacterDataAsset Function FindAccesoryMeshes
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics
{
	struct CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms
	{
		bool bMale;
		bool bFemale;
		TArray<UStaticMesh*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finds All Unique Accessory Meshes used in all Definitions.*/" },
#endif
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds All Unique Accessory Meshes used in all Definitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindAccesoryMeshes", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindAccesoryMeshes)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UStaticMesh*>*)Z_Param__Result=P_THIS->FindAccesoryMeshes(Z_Param_bMale,Z_Param_bFemale);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindAccesoryMeshes

// Begin Class UCrowdCharacterDataAsset Function FindBaseSkeletalMeshes
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics
{
	struct CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms
	{
		bool bMale;
		bool bFemale;
		TArray<USkeletalMesh*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finds All Unique Base SkeletalMeshes used in all BodyDefinitions */" },
#endif
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds All Unique Base SkeletalMeshes used in all BodyDefinitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindBaseSkeletalMeshes", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindBaseSkeletalMeshes)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USkeletalMesh*>*)Z_Param__Result=P_THIS->FindBaseSkeletalMeshes(Z_Param_bMale,Z_Param_bFemale);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindBaseSkeletalMeshes

// Begin Class UCrowdCharacterDataAsset Function FindBodyDataAssets
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics
{
	struct CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms
	{
		bool bMale;
		bool bFemale;
		TArray<UAnimToTextureDataAsset*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finds All Unique Body DataAsset used in all BodyDefinitions */" },
#endif
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds All Unique Body DataAsset used in all BodyDefinitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindBodyDataAssets", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindBodyDataAssets)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UAnimToTextureDataAsset*>*)Z_Param__Result=P_THIS->FindBodyDataAssets(Z_Param_bMale,Z_Param_bFemale);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindBodyDataAssets

// Begin Class UCrowdCharacterDataAsset Function FindBodySkeletalMeshes
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics
{
	struct CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms
	{
		bool bMale;
		bool bFemale;
		TArray<USkeletalMesh*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finds All Unique Body SkeletalMeshes used in all BodyDefinitions */" },
#endif
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds All Unique Body SkeletalMeshes used in all BodyDefinitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindBodySkeletalMeshes", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindBodySkeletalMeshes)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USkeletalMesh*>*)Z_Param__Result=P_THIS->FindBodySkeletalMeshes(Z_Param_bMale,Z_Param_bFemale);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindBodySkeletalMeshes

// Begin Class UCrowdCharacterDataAsset Function FindDataAssets
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics
{
	struct CrowdCharacterDataAsset_eventFindDataAssets_Parms
	{
		bool bMale;
		bool bFemale;
		TArray<UAnimToTextureDataAsset*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finds Unique (Outfit/Body/Head) DataAsset used in all Definitions. */" },
#endif
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds Unique (Outfit/Body/Head) DataAsset used in all Definitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindDataAssets_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindDataAssets_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindDataAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindDataAssets", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::CrowdCharacterDataAsset_eventFindDataAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::CrowdCharacterDataAsset_eventFindDataAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindDataAssets)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UAnimToTextureDataAsset*>*)Z_Param__Result=P_THIS->FindDataAssets(Z_Param_bMale,Z_Param_bFemale);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindDataAssets

// Begin Class UCrowdCharacterDataAsset Function FindGroomMeshes
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics
{
	struct CrowdCharacterDataAsset_eventFindGroomMeshes_Parms
	{
		bool bMale;
		bool bFemale;
		bool bHair;
		bool bEyebrows;
		bool bFuzz;
		bool bEyelashes;
		bool bMustache;
		bool bBeard;
		int32 GroupIndex;
		TArray<UStaticMesh*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*INDEX_NONE*/" },
#endif
		{ "CPP_Default_bBeard", "true" },
		{ "CPP_Default_bEyebrows", "true" },
		{ "CPP_Default_bEyelashes", "true" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bFuzz", "true" },
		{ "CPP_Default_bHair", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "CPP_Default_bMustache", "true" },
		{ "CPP_Default_GroupIndex", "-1" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INDEX_NONE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHair_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEyebrows_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFuzz_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEyelashes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMustache_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBeard_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static void NewProp_bHair_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHair;
	static void NewProp_bEyebrows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEyebrows;
	static void NewProp_bFuzz_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFuzz;
	static void NewProp_bEyelashes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEyelashes;
	static void NewProp_bMustache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustache;
	static void NewProp_bBeard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBeard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bHair_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bHair = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bHair = { "bHair", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bHair_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHair_MetaData), NewProp_bHair_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyebrows_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bEyebrows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyebrows = { "bEyebrows", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyebrows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEyebrows_MetaData), NewProp_bEyebrows_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFuzz_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bFuzz = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFuzz = { "bFuzz", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFuzz_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFuzz_MetaData), NewProp_bFuzz_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyelashes_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bEyelashes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyelashes = { "bEyelashes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyelashes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEyelashes_MetaData), NewProp_bEyelashes_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMustache_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bMustache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMustache = { "bMustache", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMustache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMustache_MetaData), NewProp_bMustache_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bBeard_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bBeard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bBeard = { "bBeard", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bBeard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBeard_MetaData), NewProp_bBeard_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms, GroupIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupIndex_MetaData), NewProp_GroupIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bHair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyebrows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFuzz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyelashes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMustache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bBeard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_GroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindGroomMeshes", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::CrowdCharacterDataAsset_eventFindGroomMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindGroomMeshes)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_GET_UBOOL(Z_Param_bHair);
	P_GET_UBOOL(Z_Param_bEyebrows);
	P_GET_UBOOL(Z_Param_bFuzz);
	P_GET_UBOOL(Z_Param_bEyelashes);
	P_GET_UBOOL(Z_Param_bMustache);
	P_GET_UBOOL(Z_Param_bBeard);
	P_GET_PROPERTY(FIntProperty,Z_Param_GroupIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UStaticMesh*>*)Z_Param__Result=P_THIS->FindGroomMeshes(Z_Param_bMale,Z_Param_bFemale,Z_Param_bHair,Z_Param_bEyebrows,Z_Param_bFuzz,Z_Param_bEyelashes,Z_Param_bMustache,Z_Param_bBeard,Z_Param_GroupIndex);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindGroomMeshes

// Begin Class UCrowdCharacterDataAsset Function FindGrooms
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics
{
	struct CrowdCharacterDataAsset_eventFindGrooms_Parms
	{
		bool bMale;
		bool bFemale;
		bool bHair;
		bool bEyebrows;
		bool bFuzz;
		bool bEyelashes;
		bool bMustache;
		bool bBeard;
		TArray<UGroomAsset*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finds All Unique Grooms used in all Definitions */" },
#endif
		{ "CPP_Default_bBeard", "true" },
		{ "CPP_Default_bEyebrows", "true" },
		{ "CPP_Default_bEyelashes", "true" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bFuzz", "true" },
		{ "CPP_Default_bHair", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "CPP_Default_bMustache", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds All Unique Grooms used in all Definitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHair_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEyebrows_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFuzz_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEyelashes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMustache_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBeard_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static void NewProp_bHair_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHair;
	static void NewProp_bEyebrows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEyebrows;
	static void NewProp_bFuzz_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFuzz;
	static void NewProp_bEyelashes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEyelashes;
	static void NewProp_bMustache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustache;
	static void NewProp_bBeard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBeard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bHair_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bHair = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bHair = { "bHair", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bHair_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHair_MetaData), NewProp_bHair_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyebrows_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bEyebrows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyebrows = { "bEyebrows", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyebrows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEyebrows_MetaData), NewProp_bEyebrows_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFuzz_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bFuzz = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFuzz = { "bFuzz", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFuzz_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFuzz_MetaData), NewProp_bFuzz_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyelashes_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bEyelashes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyelashes = { "bEyelashes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyelashes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEyelashes_MetaData), NewProp_bEyelashes_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMustache_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bMustache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMustache = { "bMustache", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMustache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMustache_MetaData), NewProp_bMustache_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bBeard_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bBeard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bBeard = { "bBeard", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bBeard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBeard_MetaData), NewProp_bBeard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindGrooms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bHair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyebrows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFuzz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyelashes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMustache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bBeard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindGrooms", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::CrowdCharacterDataAsset_eventFindGrooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::CrowdCharacterDataAsset_eventFindGrooms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindGrooms)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_GET_UBOOL(Z_Param_bHair);
	P_GET_UBOOL(Z_Param_bEyebrows);
	P_GET_UBOOL(Z_Param_bFuzz);
	P_GET_UBOOL(Z_Param_bEyelashes);
	P_GET_UBOOL(Z_Param_bMustache);
	P_GET_UBOOL(Z_Param_bBeard);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UGroomAsset*>*)Z_Param__Result=P_THIS->FindGrooms(Z_Param_bMale,Z_Param_bFemale,Z_Param_bHair,Z_Param_bEyebrows,Z_Param_bFuzz,Z_Param_bEyelashes,Z_Param_bMustache,Z_Param_bBeard);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindGrooms

// Begin Class UCrowdCharacterDataAsset Function FindHeadDataAssets
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics
{
	struct CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms
	{
		bool bMale;
		bool bFemale;
		TArray<UAnimToTextureDataAsset*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finds All Unique Head DataAsset used in all Definitions */" },
#endif
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds All Unique Head DataAsset used in all Definitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindHeadDataAssets", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindHeadDataAssets)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UAnimToTextureDataAsset*>*)Z_Param__Result=P_THIS->FindHeadDataAssets(Z_Param_bMale,Z_Param_bFemale);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindHeadDataAssets

// Begin Class UCrowdCharacterDataAsset Function FindHeadSkeletalMeshes
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics
{
	struct CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms
	{
		bool bMale;
		bool bFemale;
		TArray<USkeletalMesh*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finds All Unique Head SkeletalMeshes used in all Definitions */" },
#endif
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds All Unique Head SkeletalMeshes used in all Definitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindHeadSkeletalMeshes", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindHeadSkeletalMeshes)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USkeletalMesh*>*)Z_Param__Result=P_THIS->FindHeadSkeletalMeshes(Z_Param_bMale,Z_Param_bFemale);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindHeadSkeletalMeshes

// Begin Class UCrowdCharacterDataAsset Function FindOutfitDataAssets
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics
{
	struct CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms
	{
		bool bMale;
		bool bFemale;
		TArray<UAnimToTextureDataAsset*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finds All Unique Outfit DataAsset used in all OutfitDefinitions */" },
#endif
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds All Unique Outfit DataAsset used in all OutfitDefinitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindOutfitDataAssets", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindOutfitDataAssets)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UAnimToTextureDataAsset*>*)Z_Param__Result=P_THIS->FindOutfitDataAssets(Z_Param_bMale,Z_Param_bFemale);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindOutfitDataAssets

// Begin Class UCrowdCharacterDataAsset Function FindOutfitSkeletalMeshes
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics
{
	struct CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms
	{
		bool bMale;
		bool bFemale;
		TArray<USkeletalMesh*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finds All Unique Outfit SkeletalMeshes used in all OutfitDefinitions */" },
#endif
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds All Unique Outfit SkeletalMeshes used in all OutfitDefinitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindOutfitSkeletalMeshes", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindOutfitSkeletalMeshes)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USkeletalMesh*>*)Z_Param__Result=P_THIS->FindOutfitSkeletalMeshes(Z_Param_bMale,Z_Param_bFemale);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindOutfitSkeletalMeshes

// Begin Class UCrowdCharacterDataAsset Function FindSkeletalMeshes
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics
{
	struct CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms
	{
		bool bMale;
		bool bFemale;
		TArray<USkeletalMesh*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Finds Unique (Outfit/Body/Head) SkeletalMeshes used in all Definitions. */" },
#endif
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds Unique (Outfit/Body/Head) SkeletalMeshes used in all Definitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bMale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
	static void NewProp_bFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms*)Obj)->bMale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMale_MetaData), NewProp_bMale_MetaData) };
void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
{
	((CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms*)Obj)->bFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFemale_MetaData), NewProp_bFemale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bMale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bFemale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindSkeletalMeshes", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindSkeletalMeshes)
{
	P_GET_UBOOL(Z_Param_bMale);
	P_GET_UBOOL(Z_Param_bFemale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USkeletalMesh*>*)Z_Param__Result=P_THIS->FindSkeletalMeshes(Z_Param_bMale,Z_Param_bFemale);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function FindSkeletalMeshes

// Begin Class UCrowdCharacterDataAsset Function GetCharacterDefinition
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics
{
	struct CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms
	{
		ECitySampleCrowdGender Skeleton;
		ECitySampleCrowdBodyType BodyType;
		int32 HeadIndex;
		int32 OutfitIndex;
		int32 OutfitMaterialIndex;
		int32 HairIndex;
		int32 HairColorIndex;
		int32 AccessoryIndex;
		int32 SkinTextureIndex;
		int32 SkinTextureModifierIndex;
		int32 ScaleFactorIndex;
		FCrowdCharacterDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns Character Definition from given indices */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Character Definition from given indices" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutfitIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutfitMaterialIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairColorIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinTextureIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinTextureModifierIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactorIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Skeleton_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeadIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutfitIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutfitMaterialIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HairIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HairColorIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AccessoryIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkinTextureIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkinTextureModifierIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScaleFactorIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_Skeleton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, Skeleton), Z_Construct_UEnum_CitySample_ECitySampleCrowdGender, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) }; // 2689071917
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, BodyType), Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyType_MetaData), NewProp_BodyType_MetaData) }; // 3557943995
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HeadIndex = { "HeadIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, HeadIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadIndex_MetaData), NewProp_HeadIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitIndex = { "OutfitIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, OutfitIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutfitIndex_MetaData), NewProp_OutfitIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitMaterialIndex = { "OutfitMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, OutfitMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutfitMaterialIndex_MetaData), NewProp_OutfitMaterialIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairIndex = { "HairIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, HairIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairIndex_MetaData), NewProp_HairIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairColorIndex = { "HairColorIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, HairColorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairColorIndex_MetaData), NewProp_HairColorIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_AccessoryIndex = { "AccessoryIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, AccessoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessoryIndex_MetaData), NewProp_AccessoryIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureIndex = { "SkinTextureIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, SkinTextureIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinTextureIndex_MetaData), NewProp_SkinTextureIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureModifierIndex = { "SkinTextureModifierIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, SkinTextureModifierIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinTextureModifierIndex_MetaData), NewProp_SkinTextureModifierIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_ScaleFactorIndex = { "ScaleFactorIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, ScaleFactorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFactorIndex_MetaData), NewProp_ScaleFactorIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, ReturnValue), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(0, nullptr) }; // 1580735983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_Skeleton_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_BodyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_BodyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HeadIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairColorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_AccessoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureModifierIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_ScaleFactorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "GetCharacterDefinition", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execGetCharacterDefinition)
{
	P_GET_ENUM(ECitySampleCrowdGender,Z_Param_Skeleton);
	P_GET_ENUM(ECitySampleCrowdBodyType,Z_Param_BodyType);
	P_GET_PROPERTY(FIntProperty,Z_Param_HeadIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_OutfitIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_OutfitMaterialIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_HairIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_HairColorIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_AccessoryIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_SkinTextureIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_SkinTextureModifierIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ScaleFactorIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCrowdCharacterDefinition*)Z_Param__Result=P_THIS->GetCharacterDefinition(ECitySampleCrowdGender(Z_Param_Skeleton),ECitySampleCrowdBodyType(Z_Param_BodyType),Z_Param_HeadIndex,Z_Param_OutfitIndex,Z_Param_OutfitMaterialIndex,Z_Param_HairIndex,Z_Param_HairColorIndex,Z_Param_AccessoryIndex,Z_Param_SkinTextureIndex,Z_Param_SkinTextureModifierIndex,Z_Param_ScaleFactorIndex);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function GetCharacterDefinition

// Begin Class UCrowdCharacterDataAsset Function GetCharacterDefinitionFromIndex
struct Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics
{
	struct CrowdCharacterDataAsset_eventGetCharacterDefinitionFromIndex_Parms
	{
		int32 GlobalIndex;
		FCrowdCharacterDefinition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns Definition Indices from a Global Index */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Definition Indices from a Global Index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::NewProp_GlobalIndex = { "GlobalIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinitionFromIndex_Parms, GlobalIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalIndex_MetaData), NewProp_GlobalIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinitionFromIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(0, nullptr) }; // 1580735983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::NewProp_GlobalIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "GetCharacterDefinitionFromIndex", nullptr, nullptr, Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::CrowdCharacterDataAsset_eventGetCharacterDefinitionFromIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::CrowdCharacterDataAsset_eventGetCharacterDefinitionFromIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrowdCharacterDataAsset::execGetCharacterDefinitionFromIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GlobalIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCrowdCharacterDefinition*)Z_Param__Result=P_THIS->GetCharacterDefinitionFromIndex(Z_Param_GlobalIndex);
	P_NATIVE_END;
}
// End Class UCrowdCharacterDataAsset Function GetCharacterDefinitionFromIndex

// Begin Class UCrowdCharacterDataAsset
void UCrowdCharacterDataAsset::StaticRegisterNativesUCrowdCharacterDataAsset()
{
	UClass* Class = UCrowdCharacterDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindAccesoryMeshes", &UCrowdCharacterDataAsset::execFindAccesoryMeshes },
		{ "FindBaseSkeletalMeshes", &UCrowdCharacterDataAsset::execFindBaseSkeletalMeshes },
		{ "FindBodyDataAssets", &UCrowdCharacterDataAsset::execFindBodyDataAssets },
		{ "FindBodySkeletalMeshes", &UCrowdCharacterDataAsset::execFindBodySkeletalMeshes },
		{ "FindDataAssets", &UCrowdCharacterDataAsset::execFindDataAssets },
		{ "FindGroomMeshes", &UCrowdCharacterDataAsset::execFindGroomMeshes },
		{ "FindGrooms", &UCrowdCharacterDataAsset::execFindGrooms },
		{ "FindHeadDataAssets", &UCrowdCharacterDataAsset::execFindHeadDataAssets },
		{ "FindHeadSkeletalMeshes", &UCrowdCharacterDataAsset::execFindHeadSkeletalMeshes },
		{ "FindOutfitDataAssets", &UCrowdCharacterDataAsset::execFindOutfitDataAssets },
		{ "FindOutfitSkeletalMeshes", &UCrowdCharacterDataAsset::execFindOutfitSkeletalMeshes },
		{ "FindSkeletalMeshes", &UCrowdCharacterDataAsset::execFindSkeletalMeshes },
		{ "GetCharacterDefinition", &UCrowdCharacterDataAsset::execGetCharacterDefinition },
		{ "GetCharacterDefinitionFromIndex", &UCrowdCharacterDataAsset::execGetCharacterDefinitionFromIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrowdCharacterDataAsset);
UClass* Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister()
{
	return UCrowdCharacterDataAsset::StaticClass();
}
struct Z_Construct_UClass_UCrowdCharacterDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n [Data Structure]\n\n- Male (GenderDefinition)\n\x09- NormalWeight (BodyOutfitDefinition)\n\x09\x09- Body (BodyDefinition)\n\x09\x09\x09- Body (SkeletalMesh*)\n\x09\x09\x09- Base (SkeletalMesh*)\n\x09\x09- Outfits (TArray<OutfitDefinition>)\n\x09\x09\x09- Top (SkeletalMesh*)\n\x09\x09\x09- Bottom (SkeletalMesh*)\n\x09\x09\x09- Shoes (SkeletalMesh*)\n\x09\x09- ScaleFactors (TArray<float>)\n\x09- OverWeight\n\x09- UnderWeight\n\x09- Heads (TArray<SkeletalMesh*>)\n\x09- Hairs (TArray<HairDefinition>)\n\x09- Accessories (TArray<AccessoryDefinition>)\n\x09- Textures (TArray<UTexture2D*>)\n\n- Female (GenderDefinition)\n\x09- \n\n*/" },
#endif
		{ "IncludePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[Data Structure]\n\n- Male (GenderDefinition)\n      - NormalWeight (BodyOutfitDefinition)\n              - Body (BodyDefinition)\n                      - Body (SkeletalMesh*)\n                      - Base (SkeletalMesh*)\n              - Outfits (TArray<OutfitDefinition>)\n                      - Top (SkeletalMesh*)\n                      - Bottom (SkeletalMesh*)\n                      - Shoes (SkeletalMesh*)\n              - ScaleFactors (TArray<float>)\n      - OverWeight\n      - UnderWeight\n      - Heads (TArray<SkeletalMesh*>)\n      - Hairs (TArray<HairDefinition>)\n      - Accessories (TArray<AccessoryDefinition>)\n      - Textures (TArray<UTexture2D*>)\n\n- Female (GenderDefinition)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonA_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdCharacterDataAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Male BodyTypes, Outift & Hair Definition */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Male BodyTypes, Outift & Hair Definition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonB_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdCharacterDataAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Female BodyTypes, Outift & Hair Definition */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Female BodyTypes, Outift & Hair Definition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairColors_MetaData[] = {
		{ "Category", "CrowdCharacterDataAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Array of Hair Color Definitions */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of Hair Color Definitions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLODs_MetaData[] = {
		{ "Category", "LOD Sync" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// if -1, it's default and it will calculate the max number of LODs from all sub components\n// if not, it is a number of LODs (not the max index of LODs)\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if -1, it's default and it will calculate the max number of LODs from all sub components\nif not, it is a number of LODs (not the max index of LODs)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedLOD_MetaData[] = {
		{ "Category", "LOD Sync" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// if -1, it's automatically switching\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if -1, it's automatically switching" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingMinLOD_MetaData[] = {
		{ "Category", "LOD Sync" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optionnally override the min. ray tracing LOD set on the skeleton mesh. Default: -1, use the skeleton mesh value\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optionnally override the min. ray tracing LOD set on the skeleton mesh. Default: -1, use the skeleton mesh value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsToSync_MetaData[] = {
		{ "Category", "LOD Sync" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09*\x09""Array of components whose LOD may drive or be driven by this component.\n\x09*  Components that are flagged as 'Drive' are treated as being in priority order, with the last component having highest priority. The highest priority\n\x09*  visible component will set the LOD for all other components. If no components are visible, then the highest priority non-visible component will set LOD.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of components whose LOD may drive or be driven by this component.\nComponents that are flagged as 'Drive' are treated as being in priority order, with the last component having highest priority. The highest priority\nvisible component will set the LOD for all other components. If no components are visible, then the highest priority non-visible component will set LOD." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomLODMapping_MetaData[] = {
		{ "Category", "LOD Sync" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// by default, the mapping will be one to one\n// but if you want custom, add here. \n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "by default, the mapping will be one to one\nbut if you want custom, add here." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HairColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HairColors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLODs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForcedLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingMinLOD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentsToSync_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsToSync;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLODMapping_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLODMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CustomLODMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes, "FindAccesoryMeshes" }, // 1662629841
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes, "FindBaseSkeletalMeshes" }, // 4052395453
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets, "FindBodyDataAssets" }, // 2552471432
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes, "FindBodySkeletalMeshes" }, // 1677870456
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets, "FindDataAssets" }, // 2509885815
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes, "FindGroomMeshes" }, // 2236060410
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms, "FindGrooms" }, // 2181227503
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets, "FindHeadDataAssets" }, // 4239268756
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes, "FindHeadSkeletalMeshes" }, // 2070537348
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets, "FindOutfitDataAssets" }, // 2577735337
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes, "FindOutfitSkeletalMeshes" }, // 4054756046
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes, "FindSkeletalMeshes" }, // 2569614560
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition, "GetCharacterDefinition" }, // 263698239
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex, "GetCharacterDefinitionFromIndex" }, // 2052530201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdCharacterDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonA = { "SkeletonA", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdCharacterDataAsset, SkeletonA), Z_Construct_UScriptStruct_FCrowdGenderDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonA_MetaData), NewProp_SkeletonA_MetaData) }; // 2262471501
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonB = { "SkeletonB", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdCharacterDataAsset, SkeletonB), Z_Construct_UScriptStruct_FCrowdGenderDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonB_MetaData), NewProp_SkeletonB_MetaData) }; // 2262471501
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_HairColors_Inner = { "HairColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdHairColorDefinition, METADATA_PARAMS(0, nullptr) }; // 1332544300
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_HairColors = { "HairColors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdCharacterDataAsset, HairColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairColors_MetaData), NewProp_HairColors_MetaData) }; // 1332544300
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_NumLODs = { "NumLODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdCharacterDataAsset, NumLODs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLODs_MetaData), NewProp_NumLODs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ForcedLOD = { "ForcedLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdCharacterDataAsset, ForcedLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedLOD_MetaData), NewProp_ForcedLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_RayTracingMinLOD = { "RayTracingMinLOD", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdCharacterDataAsset, RayTracingMinLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingMinLOD_MetaData), NewProp_RayTracingMinLOD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ComponentsToSync_Inner = { "ComponentsToSync", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCitySampleComponentSync, METADATA_PARAMS(0, nullptr) }; // 2653579691
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ComponentsToSync = { "ComponentsToSync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdCharacterDataAsset, ComponentsToSync), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentsToSync_MetaData), NewProp_ComponentsToSync_MetaData) }; // 2653579691
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping_ValueProp = { "CustomLODMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLODMappingData, METADATA_PARAMS(0, nullptr) }; // 2466313553
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping_Key_KeyProp = { "CustomLODMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier, METADATA_PARAMS(0, nullptr) }; // 4089215597
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping = { "CustomLODMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdCharacterDataAsset, CustomLODMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomLODMapping_MetaData), NewProp_CustomLODMapping_MetaData) }; // 4089215597 2466313553
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_HairColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_HairColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_NumLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ForcedLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_RayTracingMinLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ComponentsToSync_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ComponentsToSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::ClassParams = {
	&UCrowdCharacterDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrowdCharacterDataAsset()
{
	if (!Z_Registration_Info_UClass_UCrowdCharacterDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrowdCharacterDataAsset.OuterSingleton, Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrowdCharacterDataAsset.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCrowdCharacterDataAsset>()
{
	return UCrowdCharacterDataAsset::StaticClass();
}
UCrowdCharacterDataAsset::UCrowdCharacterDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdCharacterDataAsset);
UCrowdCharacterDataAsset::~UCrowdCharacterDataAsset() {}
// End Class UCrowdCharacterDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrowdCharacterDataAsset, UCrowdCharacterDataAsset::StaticClass, TEXT("UCrowdCharacterDataAsset"), &Z_Registration_Info_UClass_UCrowdCharacterDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrowdCharacterDataAsset), 3331550438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_2528479076(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
