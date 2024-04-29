// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Util/CitySampleInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleInterpolators() {}

// Begin Cross Module References
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorParams();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorVector();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorRotator();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorVector();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin ScriptStruct FIIRInterpolatorVector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IIRInterpolatorVector;
class UScriptStruct* FIIRInterpolatorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIIRInterpolatorVector, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("IIRInterpolatorVector"));
	}
	return Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FIIRInterpolatorVector>()
{
	return FIIRInterpolatorVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n * Blueprint-accessible wrappers for the templated interpolators, for use as FProperties\n */" },
#endif
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint-accessible wrappers for the templated interpolators, for use as FProperties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "IIRInterpolatorVector" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIIRInterpolatorVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIIRInterpolatorVector, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"IIRInterpolatorVector",
	Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::PropPointers),
	sizeof(FIIRInterpolatorVector),
	alignof(FIIRInterpolatorVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorVector()
{
	if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.InnerSingleton, Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.InnerSingleton;
}
// End ScriptStruct FIIRInterpolatorVector

// Begin ScriptStruct FDoubleIIRInterpolatorVector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector;
class UScriptStruct* FDoubleIIRInterpolatorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("DoubleIIRInterpolatorVector"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FDoubleIIRInterpolatorVector>()
{
	return FDoubleIIRInterpolatorVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorVector" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorVector" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimaryInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntermediateInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleIIRInterpolatorVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_PrimaryInterpSpeed = { "PrimaryInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleIIRInterpolatorVector, PrimaryInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryInterpSpeed_MetaData), NewProp_PrimaryInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_IntermediateInterpSpeed = { "IntermediateInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleIIRInterpolatorVector, IntermediateInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntermediateInterpSpeed_MetaData), NewProp_IntermediateInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_PrimaryInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_IntermediateInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"DoubleIIRInterpolatorVector",
	Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::PropPointers),
	sizeof(FDoubleIIRInterpolatorVector),
	alignof(FDoubleIIRInterpolatorVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.InnerSingleton, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.InnerSingleton;
}
// End ScriptStruct FDoubleIIRInterpolatorVector

// Begin ScriptStruct FIIRInterpolatorRotator
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator;
class UScriptStruct* FIIRInterpolatorRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIIRInterpolatorRotator, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("IIRInterpolatorRotator"));
	}
	return Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FIIRInterpolatorRotator>()
{
	return FIIRInterpolatorRotator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "IIRInterpolatorRotator" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIIRInterpolatorRotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIIRInterpolatorRotator, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"IIRInterpolatorRotator",
	Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::PropPointers),
	sizeof(FIIRInterpolatorRotator),
	alignof(FIIRInterpolatorRotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorRotator()
{
	if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.InnerSingleton, Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.InnerSingleton;
}
// End ScriptStruct FIIRInterpolatorRotator

// Begin ScriptStruct FDoubleIIRInterpolatorRotator
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator;
class UScriptStruct* FDoubleIIRInterpolatorRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("DoubleIIRInterpolatorRotator"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FDoubleIIRInterpolatorRotator>()
{
	return FDoubleIIRInterpolatorRotator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorRotator" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorRotator" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimaryInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntermediateInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleIIRInterpolatorRotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_PrimaryInterpSpeed = { "PrimaryInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleIIRInterpolatorRotator, PrimaryInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryInterpSpeed_MetaData), NewProp_PrimaryInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_IntermediateInterpSpeed = { "IntermediateInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleIIRInterpolatorRotator, IntermediateInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntermediateInterpSpeed_MetaData), NewProp_IntermediateInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_PrimaryInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_IntermediateInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"DoubleIIRInterpolatorRotator",
	Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::PropPointers),
	sizeof(FDoubleIIRInterpolatorRotator),
	alignof(FDoubleIIRInterpolatorRotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.InnerSingleton, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.InnerSingleton;
}
// End ScriptStruct FDoubleIIRInterpolatorRotator

// Begin ScriptStruct FIIRInterpolatorFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat;
class UScriptStruct* FIIRInterpolatorFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIIRInterpolatorFloat, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("IIRInterpolatorFloat"));
	}
	return Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FIIRInterpolatorFloat>()
{
	return FIIRInterpolatorFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "IIRInterpolatorFloat" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIIRInterpolatorFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIIRInterpolatorFloat, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"IIRInterpolatorFloat",
	Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::PropPointers),
	sizeof(FIIRInterpolatorFloat),
	alignof(FIIRInterpolatorFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat()
{
	if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.InnerSingleton, Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.InnerSingleton;
}
// End ScriptStruct FIIRInterpolatorFloat

// Begin ScriptStruct FDoubleIIRInterpolatorFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat;
class UScriptStruct* FDoubleIIRInterpolatorFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("DoubleIIRInterpolatorFloat"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FDoubleIIRInterpolatorFloat>()
{
	return FDoubleIIRInterpolatorFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorFloat" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorFloat" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimaryInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntermediateInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleIIRInterpolatorFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_PrimaryInterpSpeed = { "PrimaryInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleIIRInterpolatorFloat, PrimaryInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryInterpSpeed_MetaData), NewProp_PrimaryInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_IntermediateInterpSpeed = { "IntermediateInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleIIRInterpolatorFloat, IntermediateInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntermediateInterpSpeed_MetaData), NewProp_IntermediateInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_PrimaryInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_IntermediateInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"DoubleIIRInterpolatorFloat",
	Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::PropPointers),
	sizeof(FDoubleIIRInterpolatorFloat),
	alignof(FDoubleIIRInterpolatorFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.InnerSingleton, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.InnerSingleton;
}
// End ScriptStruct FDoubleIIRInterpolatorFloat

// Begin ScriptStruct FAccelerationInterpolatorParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams;
class UScriptStruct* FAccelerationInterpolatorParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("AccelerationInterpolatorParams"));
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FAccelerationInterpolatorParams>()
{
	return FAccelerationInterpolatorParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "AccelerationInterpolatorParams" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDeceleration_MetaData[] = {
		{ "Category", "AccelerationInterpolatorParams" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "AccelerationInterpolatorParams" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelerationInterpolatorParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelerationInterpolatorParams, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MinDeceleration = { "MinDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelerationInterpolatorParams, MinDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDeceleration_MetaData), NewProp_MinDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelerationInterpolatorParams, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MinDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"AccelerationInterpolatorParams",
	Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::PropPointers),
	sizeof(FAccelerationInterpolatorParams),
	alignof(FAccelerationInterpolatorParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorParams()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.InnerSingleton, Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.InnerSingleton;
}
// End ScriptStruct FAccelerationInterpolatorParams

// Begin ScriptStruct FAccelerationInterpolatorFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat;
class UScriptStruct* FAccelerationInterpolatorFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("AccelerationInterpolatorFloat"));
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FAccelerationInterpolatorFloat>()
{
	return FAccelerationInterpolatorFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationParams_MetaData[] = {
		{ "Category", "AccelerationInterpolator" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelerationInterpolatorFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::NewProp_AccelerationParams = { "AccelerationParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelerationInterpolatorFloat, AccelerationParams), Z_Construct_UScriptStruct_FAccelerationInterpolatorParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationParams_MetaData), NewProp_AccelerationParams_MetaData) }; // 1699027046
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::NewProp_AccelerationParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"AccelerationInterpolatorFloat",
	Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::PropPointers),
	sizeof(FAccelerationInterpolatorFloat),
	alignof(FAccelerationInterpolatorFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.InnerSingleton, Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.InnerSingleton;
}
// End ScriptStruct FAccelerationInterpolatorFloat

// Begin ScriptStruct FAccelerationInterpolatorVector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector;
class UScriptStruct* FAccelerationInterpolatorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelerationInterpolatorVector, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("AccelerationInterpolatorVector"));
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FAccelerationInterpolatorVector>()
{
	return FAccelerationInterpolatorVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationParams_MetaData[] = {
		{ "Category", "AccelerationInterpolator" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelerationInterpolatorVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::NewProp_AccelerationParams = { "AccelerationParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelerationInterpolatorVector, AccelerationParams), Z_Construct_UScriptStruct_FAccelerationInterpolatorParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationParams_MetaData), NewProp_AccelerationParams_MetaData) }; // 1699027046
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::NewProp_AccelerationParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"AccelerationInterpolatorVector",
	Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::PropPointers),
	sizeof(FAccelerationInterpolatorVector),
	alignof(FAccelerationInterpolatorVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorVector()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.InnerSingleton, Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.InnerSingleton;
}
// End ScriptStruct FAccelerationInterpolatorVector

// Begin ScriptStruct FAccelerationInterpolatorRotator
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator;
class UScriptStruct* FAccelerationInterpolatorRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("AccelerationInterpolatorRotator"));
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FAccelerationInterpolatorRotator>()
{
	return FAccelerationInterpolatorRotator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationParams_MetaData[] = {
		{ "Category", "AccelerationInterpolator" },
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelerationInterpolatorRotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::NewProp_AccelerationParams = { "AccelerationParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelerationInterpolatorRotator, AccelerationParams), Z_Construct_UScriptStruct_FAccelerationInterpolatorParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationParams_MetaData), NewProp_AccelerationParams_MetaData) }; // 1699027046
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::NewProp_AccelerationParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"AccelerationInterpolatorRotator",
	Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::PropPointers),
	sizeof(FAccelerationInterpolatorRotator),
	alignof(FAccelerationInterpolatorRotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.InnerSingleton, Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.InnerSingleton;
}
// End ScriptStruct FAccelerationInterpolatorRotator

// Begin ScriptStruct FCritDampSpringInterpolatorVector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector;
class UScriptStruct* FCritDampSpringInterpolatorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CritDampSpringInterpolatorVector"));
	}
	return Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCritDampSpringInterpolatorVector>()
{
	return FCritDampSpringInterpolatorVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UStruct wrapper for critically damped spring vector interpolator */" },
#endif
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UStruct wrapper for critically damped spring vector interpolator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaturalFrequency_MetaData[] = {
		{ "Category", "Spring" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Higher = a stiffer spring */" },
#endif
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher = a stiffer spring" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NaturalFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCritDampSpringInterpolatorVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::NewProp_NaturalFrequency = { "NaturalFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCritDampSpringInterpolatorVector, NaturalFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaturalFrequency_MetaData), NewProp_NaturalFrequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::NewProp_NaturalFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CritDampSpringInterpolatorVector",
	Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::PropPointers),
	sizeof(FCritDampSpringInterpolatorVector),
	alignof(FCritDampSpringInterpolatorVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector()
{
	if (!Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.InnerSingleton, Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.InnerSingleton;
}
// End ScriptStruct FCritDampSpringInterpolatorVector

// Begin ScriptStruct FCritDampSpringInterpolatorRotator
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator;
class UScriptStruct* FCritDampSpringInterpolatorRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CritDampSpringInterpolatorRotator"));
	}
	return Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCritDampSpringInterpolatorRotator>()
{
	return FCritDampSpringInterpolatorRotator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UStruct wrapper for critically damped spring rotator interpolator */" },
#endif
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UStruct wrapper for critically damped spring rotator interpolator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaturalFrequency_MetaData[] = {
		{ "Category", "Spring" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Higher = a stiffer spring */" },
#endif
		{ "ModuleRelativePath", "Public/Util/CitySampleInterpolators.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher = a stiffer spring" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NaturalFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCritDampSpringInterpolatorRotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::NewProp_NaturalFrequency = { "NaturalFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCritDampSpringInterpolatorRotator, NaturalFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaturalFrequency_MetaData), NewProp_NaturalFrequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::NewProp_NaturalFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CritDampSpringInterpolatorRotator",
	Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::PropPointers),
	sizeof(FCritDampSpringInterpolatorRotator),
	alignof(FCritDampSpringInterpolatorRotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator()
{
	if (!Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.InnerSingleton, Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.InnerSingleton;
}
// End ScriptStruct FCritDampSpringInterpolatorRotator

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleInterpolators_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIIRInterpolatorVector::StaticStruct, Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::NewStructOps, TEXT("IIRInterpolatorVector"), &Z_Registration_Info_UScriptStruct_IIRInterpolatorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIIRInterpolatorVector), 218063719U) },
		{ FDoubleIIRInterpolatorVector::StaticStruct, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewStructOps, TEXT("DoubleIIRInterpolatorVector"), &Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleIIRInterpolatorVector), 2373571042U) },
		{ FIIRInterpolatorRotator::StaticStruct, Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::NewStructOps, TEXT("IIRInterpolatorRotator"), &Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIIRInterpolatorRotator), 2890296695U) },
		{ FDoubleIIRInterpolatorRotator::StaticStruct, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewStructOps, TEXT("DoubleIIRInterpolatorRotator"), &Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleIIRInterpolatorRotator), 3405218105U) },
		{ FIIRInterpolatorFloat::StaticStruct, Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::NewStructOps, TEXT("IIRInterpolatorFloat"), &Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIIRInterpolatorFloat), 2470232998U) },
		{ FDoubleIIRInterpolatorFloat::StaticStruct, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewStructOps, TEXT("DoubleIIRInterpolatorFloat"), &Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleIIRInterpolatorFloat), 2830033391U) },
		{ FAccelerationInterpolatorParams::StaticStruct, Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewStructOps, TEXT("AccelerationInterpolatorParams"), &Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelerationInterpolatorParams), 1699027046U) },
		{ FAccelerationInterpolatorFloat::StaticStruct, Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::NewStructOps, TEXT("AccelerationInterpolatorFloat"), &Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelerationInterpolatorFloat), 374821437U) },
		{ FAccelerationInterpolatorVector::StaticStruct, Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::NewStructOps, TEXT("AccelerationInterpolatorVector"), &Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelerationInterpolatorVector), 2891396691U) },
		{ FAccelerationInterpolatorRotator::StaticStruct, Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::NewStructOps, TEXT("AccelerationInterpolatorRotator"), &Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelerationInterpolatorRotator), 65022599U) },
		{ FCritDampSpringInterpolatorVector::StaticStruct, Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::NewStructOps, TEXT("CritDampSpringInterpolatorVector"), &Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCritDampSpringInterpolatorVector), 4080639347U) },
		{ FCritDampSpringInterpolatorRotator::StaticStruct, Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::NewStructOps, TEXT("CritDampSpringInterpolatorRotator"), &Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCritDampSpringInterpolatorRotator), 2910913131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleInterpolators_h_2849484368(TEXT("/Script/CitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleInterpolators_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleInterpolators_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
