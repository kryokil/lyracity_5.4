// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Game/CitySampleAsyncActorDetectionComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAsyncActorDetectionComponent() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_NoRegister();
CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Delegate FOnDetectActor
struct Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics
{
	struct _Script_CitySample_eventOnDetectActor_Parms
	{
		AActor* DetectedActor;
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::NewProp_DetectedActor = { "DetectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventOnDetectActor_Parms, DetectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventOnDetectActor_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::NewProp_DetectedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnDetectActor__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::_Script_CitySample_eventOnDetectActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::_Script_CitySample_eventOnDetectActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDetectActor_DelegateWrapper(const FMulticastScriptDelegate& OnDetectActor, AActor* DetectedActor, FHitResult const& HitResult)
{
	struct _Script_CitySample_eventOnDetectActor_Parms
	{
		AActor* DetectedActor;
		FHitResult HitResult;
	};
	_Script_CitySample_eventOnDetectActor_Parms Parms;
	Parms.DetectedActor=DetectedActor;
	Parms.HitResult=HitResult;
	OnDetectActor.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDetectActor

// Begin ScriptStruct FCitySampleAsyncTraceDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleAsyncTraceDef;
class UScriptStruct* FCitySampleAsyncTraceDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleAsyncTraceDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleAsyncTraceDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleAsyncTraceDef"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleAsyncTraceDef.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleAsyncTraceDef>()
{
	return FCitySampleAsyncTraceDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "CitySampleAsyncTraceDef" },
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartOffset_MetaData[] = {
		{ "Category", "CitySampleAsyncTraceDef" },
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedRange_MetaData[] = {
		{ "Category", "CitySampleAsyncTraceDef" },
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRange_MetaData[] = {
		{ "Category", "CitySampleAsyncTraceDef" },
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceExtent_MetaData[] = {
		{ "Category", "CitySampleAsyncTraceDef" },
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecentlyDetectedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStartOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceExtent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecentlyDetectedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RecentlyDetectedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleAsyncTraceDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAsyncTraceDef, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_TraceStartOffset = { "TraceStartOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAsyncTraceDef, TraceStartOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceStartOffset_MetaData), NewProp_TraceStartOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_SpeedRange = { "SpeedRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAsyncTraceDef, SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedRange_MetaData), NewProp_SpeedRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_TraceRange = { "TraceRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAsyncTraceDef, TraceRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRange_MetaData), NewProp_TraceRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_TraceExtent = { "TraceExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAsyncTraceDef, TraceExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceExtent_MetaData), NewProp_TraceExtent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_RecentlyDetectedActors_Inner = { "RecentlyDetectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_RecentlyDetectedActors = { "RecentlyDetectedActors", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAsyncTraceDef, RecentlyDetectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecentlyDetectedActors_MetaData), NewProp_RecentlyDetectedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_TraceStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_SpeedRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_TraceRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_TraceExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_RecentlyDetectedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewProp_RecentlyDetectedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CitySampleAsyncTraceDef",
	Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::PropPointers),
	sizeof(FCitySampleAsyncTraceDef),
	alignof(FCitySampleAsyncTraceDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleAsyncTraceDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleAsyncTraceDef.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CitySampleAsyncTraceDef.InnerSingleton;
}
// End ScriptStruct FCitySampleAsyncTraceDef

// Begin Class UCitySampleAsyncActorDetectionComponent
void UCitySampleAsyncActorDetectionComponent::StaticRegisterNativesUCitySampleAsyncActorDetectionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAsyncActorDetectionComponent);
UClass* Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_NoRegister()
{
	return UCitySampleAsyncActorDetectionComponent::StaticClass();
}
struct Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Game/CitySampleAsyncActorDetectionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDetectActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassesToConsider_MetaData[] = {
		{ "Category", "CitySampleAsyncActorDetectionComponent" },
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDefinitions_MetaData[] = {
		{ "Category", "CitySampleAsyncActorDetectionComponent" },
		{ "ModuleRelativePath", "Public/Game/CitySampleAsyncActorDetectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDetectActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassesToConsider_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassesToConsider;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAsyncActorDetectionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::NewProp_OnDetectActor = { "OnDetectActor", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAsyncActorDetectionComponent, OnDetectActor), Z_Construct_UDelegateFunction_CitySample_OnDetectActor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDetectActor_MetaData), NewProp_OnDetectActor_MetaData) }; // 3290677044
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::NewProp_ClassesToConsider_Inner = { "ClassesToConsider", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::NewProp_ClassesToConsider = { "ClassesToConsider", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAsyncActorDetectionComponent, ClassesToConsider), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassesToConsider_MetaData), NewProp_ClassesToConsider_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::NewProp_TraceDefinitions_Inner = { "TraceDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef, METADATA_PARAMS(0, nullptr) }; // 4012155942
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::NewProp_TraceDefinitions = { "TraceDefinitions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAsyncActorDetectionComponent, TraceDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDefinitions_MetaData), NewProp_TraceDefinitions_MetaData) }; // 4012155942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::NewProp_OnDetectActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::NewProp_ClassesToConsider_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::NewProp_ClassesToConsider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::NewProp_TraceDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::NewProp_TraceDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFrameworkComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::ClassParams = {
	&UCitySampleAsyncActorDetectionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent()
{
	if (!Z_Registration_Info_UClass_UCitySampleAsyncActorDetectionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAsyncActorDetectionComponent.OuterSingleton, Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleAsyncActorDetectionComponent.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAsyncActorDetectionComponent>()
{
	return UCitySampleAsyncActorDetectionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAsyncActorDetectionComponent);
UCitySampleAsyncActorDetectionComponent::~UCitySampleAsyncActorDetectionComponent() {}
// End Class UCitySampleAsyncActorDetectionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleAsyncActorDetectionComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCitySampleAsyncTraceDef::StaticStruct, Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics::NewStructOps, TEXT("CitySampleAsyncTraceDef"), &Z_Registration_Info_UScriptStruct_CitySampleAsyncTraceDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleAsyncTraceDef), 4012155942U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent, UCitySampleAsyncActorDetectionComponent::StaticClass, TEXT("UCitySampleAsyncActorDetectionComponent"), &Z_Registration_Info_UClass_UCitySampleAsyncActorDetectionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAsyncActorDetectionComponent), 2126028548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleAsyncActorDetectionComponent_h_3941700386(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleAsyncActorDetectionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleAsyncActorDetectionComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleAsyncActorDetectionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleAsyncActorDetectionComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
