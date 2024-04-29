// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficFieldComponent.h"
#include "ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficFieldComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldComponent();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldOperationBase_NoRegister();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
// End Cross Module References

// Begin Enum EMassTrafficFieldInclusionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode;
static UEnum* EMassTrafficFieldInclusionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("EMassTrafficFieldInclusionMode"));
	}
	return Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.OuterSingleton;
}
template<> MASSTRAFFIC_API UEnum* StaticEnum<EMassTrafficFieldInclusionMode>()
{
	return EMassTrafficFieldInclusionMode_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Lanes.Comment", "// The cheapest / simplest inclusion method which includes all vehicles on lanes whose zone is overlapped by the field \n" },
		{ "Lanes.Name", "EMassTrafficFieldInclusionMode::Lanes" },
		{ "Lanes.ToolTip", "The cheapest / simplest inclusion method which includes all vehicles on lanes whose zone is overlapped by the field" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
		{ "VehiclesOnLanes.Comment", "// Starts with Lanes inclusion and further pre-filters the vehicles on each lane by testing the transform location\n" },
		{ "VehiclesOnLanes.Name", "EMassTrafficFieldInclusionMode::VehiclesOnLanes" },
		{ "VehiclesOnLanes.ToolTip", "Starts with Lanes inclusion and further pre-filters the vehicles on each lane by testing the transform location" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassTrafficFieldInclusionMode::Lanes", (int64)EMassTrafficFieldInclusionMode::Lanes },
		{ "EMassTrafficFieldInclusionMode::VehiclesOnLanes", (int64)EMassTrafficFieldInclusionMode::VehiclesOnLanes },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"EMassTrafficFieldInclusionMode",
	"EMassTrafficFieldInclusionMode",
	Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.InnerSingleton, Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.InnerSingleton;
}
// End Enum EMassTrafficFieldInclusionMode

// Begin Class UMassTrafficFieldComponent
void UMassTrafficFieldComponent::StaticRegisterNativesUMassTrafficFieldComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficFieldComponent);
UClass* Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister()
{
	return UMassTrafficFieldComponent::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficFieldComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object HLOD Lighting VirtualTexture Collision TextureStreaming Mobile Physics Tags AssetUserData Activation Cooking Navigation Input Trigger VirtualTexture" },
		{ "IncludePath", "MassTrafficFieldComponent.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InclusionMode_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneTagFilter_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operations_Inner_MetaData[] = {
		{ "BaseStruct", "/Script/MassTraffic.MassTrafficFieldOperationBase" },
		{ "Category", "Field" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operations_MetaData[] = {
		{ "BaseStruct", "/Script/MassTraffic.MassTrafficFieldOperationBase" },
		{ "Category", "Field" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InclusionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InclusionMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaneTagFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Operations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Operations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFieldComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UMassTrafficFieldComponent*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassTrafficFieldComponent), &Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_InclusionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_InclusionMode = { "InclusionMode", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, InclusionMode), Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InclusionMode_MetaData), NewProp_InclusionMode_MetaData) }; // 2325694574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_LaneTagFilter = { "LaneTagFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, LaneTagFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneTagFilter_MetaData), NewProp_LaneTagFilter_MetaData) }; // 3369167444
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations_Inner = { "Operations", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMassTrafficFieldOperationBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operations_Inner_MetaData), NewProp_Operations_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations = { "Operations", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, Operations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operations_MetaData), NewProp_Operations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, Alpha), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficFieldComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_InclusionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_InclusionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_LaneTagFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficFieldComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::ClassParams = {
	&UMassTrafficFieldComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficFieldComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFieldComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficFieldComponent()
{
	if (!Z_Registration_Info_UClass_UMassTrafficFieldComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFieldComponent.OuterSingleton, Z_Construct_UClass_UMassTrafficFieldComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficFieldComponent.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficFieldComponent>()
{
	return UMassTrafficFieldComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficFieldComponent);
UMassTrafficFieldComponent::~UMassTrafficFieldComponent() {}
// End Class UMassTrafficFieldComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMassTrafficFieldInclusionMode_StaticEnum, TEXT("EMassTrafficFieldInclusionMode"), &Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2325694574U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFieldComponent, UMassTrafficFieldComponent::StaticClass, TEXT("UMassTrafficFieldComponent"), &Z_Registration_Info_UClass_UMassTrafficFieldComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFieldComponent), 1271440125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_3658034867(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
