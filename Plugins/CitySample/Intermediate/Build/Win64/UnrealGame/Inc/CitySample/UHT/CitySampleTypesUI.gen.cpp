// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySampleTypesUI.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleTypesUI() {}

// Begin Cross Module References
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySamplePromptTextType();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleImageConfig();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleTextConfig();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Enum ECitySampleControlsFlavor
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleControlsFlavor;
static UEnum* ECitySampleControlsFlavor_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECitySampleControlsFlavor.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECitySampleControlsFlavor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleControlsFlavor"));
	}
	return Z_Registration_Info_UEnum_ECitySampleControlsFlavor.OuterSingleton;
}
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleControlsFlavor>()
{
	return ECitySampleControlsFlavor_StaticEnum();
}
struct Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gamepad.Name", "ECitySampleControlsFlavor::Gamepad" },
		{ "Keyboard.Name", "ECitySampleControlsFlavor::Keyboard" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECitySampleControlsFlavor::Keyboard", (int64)ECitySampleControlsFlavor::Keyboard },
		{ "ECitySampleControlsFlavor::Gamepad", (int64)ECitySampleControlsFlavor::Gamepad },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	"ECitySampleControlsFlavor",
	"ECitySampleControlsFlavor",
	Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor()
{
	if (!Z_Registration_Info_UEnum_ECitySampleControlsFlavor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleControlsFlavor.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECitySampleControlsFlavor.InnerSingleton;
}
// End Enum ECitySampleControlsFlavor

// Begin Enum ECitySamplePromptTextType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySamplePromptTextType;
static UEnum* ECitySamplePromptTextType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECitySamplePromptTextType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECitySamplePromptTextType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySamplePromptTextType, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySamplePromptTextType"));
	}
	return Z_Registration_Info_UEnum_ECitySamplePromptTextType.OuterSingleton;
}
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySamplePromptTextType>()
{
	return ECitySamplePromptTextType_StaticEnum();
}
struct Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bottom.Name", "ECitySamplePromptTextType::Bottom" },
		{ "Center.Name", "ECitySamplePromptTextType::Center" },
		{ "Left.Name", "ECitySamplePromptTextType::Left" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
		{ "Right.Name", "ECitySamplePromptTextType::Right" },
		{ "Top.Name", "ECitySamplePromptTextType::Top" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECitySamplePromptTextType::Center", (int64)ECitySamplePromptTextType::Center },
		{ "ECitySamplePromptTextType::Top", (int64)ECitySamplePromptTextType::Top },
		{ "ECitySamplePromptTextType::Left", (int64)ECitySamplePromptTextType::Left },
		{ "ECitySamplePromptTextType::Right", (int64)ECitySamplePromptTextType::Right },
		{ "ECitySamplePromptTextType::Bottom", (int64)ECitySamplePromptTextType::Bottom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	"ECitySamplePromptTextType",
	"ECitySamplePromptTextType",
	Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CitySample_ECitySamplePromptTextType()
{
	if (!Z_Registration_Info_UEnum_ECitySamplePromptTextType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySamplePromptTextType.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySamplePromptTextType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECitySamplePromptTextType.InnerSingleton;
}
// End Enum ECitySamplePromptTextType

// Begin ScriptStruct FCitySampleTextConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleTextConfig;
class UScriptStruct* FCitySampleTextConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleTextConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleTextConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleTextConfig, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleTextConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleTextConfig.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleTextConfig>()
{
	return FCitySampleTextConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "CitySampleTextConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "Category", "CitySampleTextConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "CitySampleTextConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollapseWhenEmpty_MetaData[] = {
		{ "Category", "CitySampleTextConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_bCollapseWhenEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapseWhenEmpty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleTextConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleTextConfig, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleTextConfig, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) }; // 2419385967
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleTextConfig, Color), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 2024315916
void Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_bCollapseWhenEmpty_SetBit(void* Obj)
{
	((FCitySampleTextConfig*)Obj)->bCollapseWhenEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_bCollapseWhenEmpty = { "bCollapseWhenEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleTextConfig), &Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_bCollapseWhenEmpty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollapseWhenEmpty_MetaData), NewProp_bCollapseWhenEmpty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewProp_bCollapseWhenEmpty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CitySampleTextConfig",
	Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::PropPointers),
	sizeof(FCitySampleTextConfig),
	alignof(FCitySampleTextConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCitySampleTextConfig()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleTextConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleTextConfig.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CitySampleTextConfig.InnerSingleton;
}
// End ScriptStruct FCitySampleTextConfig

// Begin ScriptStruct FCitySampleImageConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleImageConfig;
class UScriptStruct* FCitySampleImageConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleImageConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleImageConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleImageConfig, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleImageConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleImageConfig.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleImageConfig>()
{
	return FCitySampleImageConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "Category", "CitySampleImageConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "CitySampleImageConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightColor_MetaData[] = {
		{ "Category", "CitySampleImageConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelTextConfig_MetaData[] = {
		{ "Category", "CitySampleImageConfig" },
		{ "ModuleRelativePath", "Public/UI/CitySampleTypesUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HighlightColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelTextConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleImageConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleImageConfig, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleImageConfig, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_HighlightColor = { "HighlightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleImageConfig, HighlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightColor_MetaData), NewProp_HighlightColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_LabelTextConfig = { "LabelTextConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleImageConfig, LabelTextConfig), Z_Construct_UScriptStruct_FCitySampleTextConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelTextConfig_MetaData), NewProp_LabelTextConfig_MetaData) }; // 1923608434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_HighlightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewProp_LabelTextConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CitySampleImageConfig",
	Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::PropPointers),
	sizeof(FCitySampleImageConfig),
	alignof(FCitySampleImageConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCitySampleImageConfig()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleImageConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleImageConfig.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CitySampleImageConfig.InnerSingleton;
}
// End ScriptStruct FCitySampleImageConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECitySampleControlsFlavor_StaticEnum, TEXT("ECitySampleControlsFlavor"), &Z_Registration_Info_UEnum_ECitySampleControlsFlavor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2168222017U) },
		{ ECitySamplePromptTextType_StaticEnum, TEXT("ECitySamplePromptTextType"), &Z_Registration_Info_UEnum_ECitySamplePromptTextType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2560268445U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCitySampleTextConfig::StaticStruct, Z_Construct_UScriptStruct_FCitySampleTextConfig_Statics::NewStructOps, TEXT("CitySampleTextConfig"), &Z_Registration_Info_UScriptStruct_CitySampleTextConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleTextConfig), 1923608434U) },
		{ FCitySampleImageConfig::StaticStruct, Z_Construct_UScriptStruct_FCitySampleImageConfig_Statics::NewStructOps, TEXT("CitySampleImageConfig"), &Z_Registration_Info_UScriptStruct_CitySampleImageConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleImageConfig), 844302661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_1720682598(TEXT("/Script/CitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleTypesUI_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
