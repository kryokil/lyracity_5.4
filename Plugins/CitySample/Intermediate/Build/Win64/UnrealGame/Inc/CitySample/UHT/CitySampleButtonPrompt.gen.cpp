// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySampleButtonPrompt.h"
#include "CitySample/Public/UI/CitySampleTypesUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleButtonPrompt() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleButtonPrompt();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySamplePromptTextType();
CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature();
CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature();
CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature();
CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleImageConfig();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleTextConfig();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Delegate FCitySampleButtonPromptOnPressed
struct Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics
{
	struct _Script_CitySample_eventCitySampleButtonPromptOnPressed_Parms
	{
		const UCitySampleButtonPrompt* ButtonPrompt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPrompt_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonPrompt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::NewProp_ButtonPrompt = { "ButtonPrompt", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleButtonPromptOnPressed_Parms, ButtonPrompt), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonPrompt_MetaData), NewProp_ButtonPrompt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::NewProp_ButtonPrompt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleButtonPromptOnPressed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::_Script_CitySample_eventCitySampleButtonPromptOnPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::_Script_CitySample_eventCitySampleButtonPromptOnPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCitySampleButtonPromptOnPressed_DelegateWrapper(const FMulticastScriptDelegate& CitySampleButtonPromptOnPressed, const UCitySampleButtonPrompt* ButtonPrompt)
{
	struct _Script_CitySample_eventCitySampleButtonPromptOnPressed_Parms
	{
		const UCitySampleButtonPrompt* ButtonPrompt;
	};
	_Script_CitySample_eventCitySampleButtonPromptOnPressed_Parms Parms;
	Parms.ButtonPrompt=ButtonPrompt;
	CitySampleButtonPromptOnPressed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCitySampleButtonPromptOnPressed

// Begin Delegate FCitySampleButtonPromptOnReleased
struct Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics
{
	struct _Script_CitySample_eventCitySampleButtonPromptOnReleased_Parms
	{
		const UCitySampleButtonPrompt* ButtonPrompt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPrompt_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonPrompt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::NewProp_ButtonPrompt = { "ButtonPrompt", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleButtonPromptOnReleased_Parms, ButtonPrompt), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonPrompt_MetaData), NewProp_ButtonPrompt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::NewProp_ButtonPrompt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleButtonPromptOnReleased__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::_Script_CitySample_eventCitySampleButtonPromptOnReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::_Script_CitySample_eventCitySampleButtonPromptOnReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCitySampleButtonPromptOnReleased_DelegateWrapper(const FMulticastScriptDelegate& CitySampleButtonPromptOnReleased, const UCitySampleButtonPrompt* ButtonPrompt)
{
	struct _Script_CitySample_eventCitySampleButtonPromptOnReleased_Parms
	{
		const UCitySampleButtonPrompt* ButtonPrompt;
	};
	_Script_CitySample_eventCitySampleButtonPromptOnReleased_Parms Parms;
	Parms.ButtonPrompt=ButtonPrompt;
	CitySampleButtonPromptOnReleased.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCitySampleButtonPromptOnReleased

// Begin Delegate FCitySampleButtonPromptOnHighlightedEvent
struct Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics
{
	struct _Script_CitySample_eventCitySampleButtonPromptOnHighlightedEvent_Parms
	{
		const UCitySampleButtonPrompt* ButtonPrompt;
		bool bHighlighted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPrompt_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighlighted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonPrompt;
	static void NewProp_bHighlighted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlighted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::NewProp_ButtonPrompt = { "ButtonPrompt", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleButtonPromptOnHighlightedEvent_Parms, ButtonPrompt), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonPrompt_MetaData), NewProp_ButtonPrompt_MetaData) };
void Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::NewProp_bHighlighted_SetBit(void* Obj)
{
	((_Script_CitySample_eventCitySampleButtonPromptOnHighlightedEvent_Parms*)Obj)->bHighlighted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::NewProp_bHighlighted = { "bHighlighted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CitySample_eventCitySampleButtonPromptOnHighlightedEvent_Parms), &Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::NewProp_bHighlighted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighlighted_MetaData), NewProp_bHighlighted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::NewProp_ButtonPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::NewProp_bHighlighted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleButtonPromptOnHighlightedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::_Script_CitySample_eventCitySampleButtonPromptOnHighlightedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::_Script_CitySample_eventCitySampleButtonPromptOnHighlightedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCitySampleButtonPromptOnHighlightedEvent_DelegateWrapper(const FMulticastScriptDelegate& CitySampleButtonPromptOnHighlightedEvent, const UCitySampleButtonPrompt* ButtonPrompt, bool bHighlighted)
{
	struct _Script_CitySample_eventCitySampleButtonPromptOnHighlightedEvent_Parms
	{
		const UCitySampleButtonPrompt* ButtonPrompt;
		bool bHighlighted;
	};
	_Script_CitySample_eventCitySampleButtonPromptOnHighlightedEvent_Parms Parms;
	Parms.ButtonPrompt=ButtonPrompt;
	Parms.bHighlighted=bHighlighted ? true : false;
	CitySampleButtonPromptOnHighlightedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCitySampleButtonPromptOnHighlightedEvent

// Begin Delegate FCitySampleButtonPromptOnDisabledEvent
struct Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics
{
	struct _Script_CitySample_eventCitySampleButtonPromptOnDisabledEvent_Parms
	{
		const UCitySampleButtonPrompt* ButtonPrompt;
		bool bDisabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPrompt_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonPrompt;
	static void NewProp_bDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::NewProp_ButtonPrompt = { "ButtonPrompt", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleButtonPromptOnDisabledEvent_Parms, ButtonPrompt), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonPrompt_MetaData), NewProp_ButtonPrompt_MetaData) };
void Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::NewProp_bDisabled_SetBit(void* Obj)
{
	((_Script_CitySample_eventCitySampleButtonPromptOnDisabledEvent_Parms*)Obj)->bDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CitySample_eventCitySampleButtonPromptOnDisabledEvent_Parms), &Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisabled_MetaData), NewProp_bDisabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::NewProp_ButtonPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::NewProp_bDisabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleButtonPromptOnDisabledEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::_Script_CitySample_eventCitySampleButtonPromptOnDisabledEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::_Script_CitySample_eventCitySampleButtonPromptOnDisabledEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCitySampleButtonPromptOnDisabledEvent_DelegateWrapper(const FMulticastScriptDelegate& CitySampleButtonPromptOnDisabledEvent, const UCitySampleButtonPrompt* ButtonPrompt, bool bDisabled)
{
	struct _Script_CitySample_eventCitySampleButtonPromptOnDisabledEvent_Parms
	{
		const UCitySampleButtonPrompt* ButtonPrompt;
		bool bDisabled;
	};
	_Script_CitySample_eventCitySampleButtonPromptOnDisabledEvent_Parms Parms;
	Parms.ButtonPrompt=ButtonPrompt;
	Parms.bDisabled=bDisabled ? true : false;
	CitySampleButtonPromptOnDisabledEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCitySampleButtonPromptOnDisabledEvent

// Begin Class UCitySampleButtonPrompt Function ConfigureControlsFlavorImages
struct Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics
{
	struct CitySampleButtonPrompt_eventConfigureControlsFlavorImages_Parms
	{
		TMap<ECitySampleControlsFlavor,FCitySampleImageConfig> NewConfigs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the button controls flavor image config map and reconfigures the image to match, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the button controls flavor image config map and reconfigures the image to match, if applicable." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewConfigs_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewConfigs_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewConfigs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewConfigs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::NewProp_NewConfigs_ValueProp = { "NewConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCitySampleImageConfig, METADATA_PARAMS(0, nullptr) }; // 844302661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::NewProp_NewConfigs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::NewProp_NewConfigs_Key_KeyProp = { "NewConfigs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(0, nullptr) }; // 2168222017
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::NewProp_NewConfigs = { "NewConfigs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleButtonPrompt_eventConfigureControlsFlavorImages_Parms, NewConfigs), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2168222017 844302661
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::NewProp_NewConfigs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::NewProp_NewConfigs_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::NewProp_NewConfigs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::NewProp_NewConfigs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "ConfigureControlsFlavorImages", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::CitySampleButtonPrompt_eventConfigureControlsFlavorImages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::CitySampleButtonPrompt_eventConfigureControlsFlavorImages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execConfigureControlsFlavorImages)
{
	P_GET_TMAP(ECitySampleControlsFlavor,FCitySampleImageConfig,Z_Param_NewConfigs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureControlsFlavorImages(Z_Param_NewConfigs);
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function ConfigureControlsFlavorImages

// Begin Class UCitySampleButtonPrompt Function ConfigureImage
struct Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics
{
	struct CitySampleButtonPrompt_eventConfigureImage_Parms
	{
		FCitySampleImageConfig NewConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the button image config and reconfigures the image to match. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the button image config and reconfigures the image to match." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::NewProp_NewConfig = { "NewConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleButtonPrompt_eventConfigureImage_Parms, NewConfig), Z_Construct_UScriptStruct_FCitySampleImageConfig, METADATA_PARAMS(0, nullptr) }; // 844302661
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::NewProp_NewConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "ConfigureImage", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::CitySampleButtonPrompt_eventConfigureImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::CitySampleButtonPrompt_eventConfigureImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execConfigureImage)
{
	P_GET_STRUCT(FCitySampleImageConfig,Z_Param_NewConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureImage(Z_Param_NewConfig);
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function ConfigureImage

// Begin Class UCitySampleButtonPrompt Function ConfigurePromptText
struct Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics
{
	struct CitySampleButtonPrompt_eventConfigurePromptText_Parms
	{
		ECitySamplePromptTextType Type;
		FCitySampleTextConfig NewConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the specified button prompt text config and reconfigures the prompt to match. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the specified button prompt text config and reconfigures the prompt to match." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleButtonPrompt_eventConfigurePromptText_Parms, Type), Z_Construct_UEnum_CitySample_ECitySamplePromptTextType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2560268445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::NewProp_NewConfig = { "NewConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleButtonPrompt_eventConfigurePromptText_Parms, NewConfig), Z_Construct_UScriptStruct_FCitySampleTextConfig, METADATA_PARAMS(0, nullptr) }; // 1923608434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::NewProp_NewConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "ConfigurePromptText", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::CitySampleButtonPrompt_eventConfigurePromptText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::CitySampleButtonPrompt_eventConfigurePromptText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execConfigurePromptText)
{
	P_GET_ENUM(ECitySamplePromptTextType,Z_Param_Type);
	P_GET_STRUCT(FCitySampleTextConfig,Z_Param_NewConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigurePromptText(ECitySamplePromptTextType(Z_Param_Type),Z_Param_NewConfig);
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function ConfigurePromptText

// Begin Class UCitySampleButtonPrompt Function GetImageConfig
struct Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics
{
	struct CitySampleButtonPrompt_eventGetImageConfig_Parms
	{
		FCitySampleImageConfig ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current button image config struct. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current button image config struct." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleButtonPrompt_eventGetImageConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleImageConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 844302661
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "GetImageConfig", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::CitySampleButtonPrompt_eventGetImageConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::CitySampleButtonPrompt_eventGetImageConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execGetImageConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCitySampleImageConfig*)Z_Param__Result=P_THIS->GetImageConfig();
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function GetImageConfig

// Begin Class UCitySampleButtonPrompt Function GetPromptConfig
struct Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics
{
	struct CitySampleButtonPrompt_eventGetPromptConfig_Parms
	{
		ECitySamplePromptTextType Type;
		FCitySampleTextConfig ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the specified prompt text config struct. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the specified prompt text config struct." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleButtonPrompt_eventGetPromptConfig_Parms, Type), Z_Construct_UEnum_CitySample_ECitySamplePromptTextType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2560268445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleButtonPrompt_eventGetPromptConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleTextConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1923608434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "GetPromptConfig", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::CitySampleButtonPrompt_eventGetPromptConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::CitySampleButtonPrompt_eventGetPromptConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execGetPromptConfig)
{
	P_GET_ENUM(ECitySamplePromptTextType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCitySampleTextConfig*)Z_Param__Result=P_THIS->GetPromptConfig(ECitySamplePromptTextType(Z_Param_Type));
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function GetPromptConfig

// Begin Class UCitySampleButtonPrompt Function IsDisabled
struct Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics
{
	struct CitySampleButtonPrompt_eventIsDisabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the button is disabled. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the button is disabled." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleButtonPrompt_eventIsDisabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleButtonPrompt_eventIsDisabled_Parms), &Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "IsDisabled", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::CitySampleButtonPrompt_eventIsDisabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::CitySampleButtonPrompt_eventIsDisabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execIsDisabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDisabled();
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function IsDisabled

// Begin Class UCitySampleButtonPrompt Function IsHighlighted
struct Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics
{
	struct CitySampleButtonPrompt_eventIsHighlighted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the button is highlighted. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the button is highlighted." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleButtonPrompt_eventIsHighlighted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleButtonPrompt_eventIsHighlighted_Parms), &Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "IsHighlighted", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::CitySampleButtonPrompt_eventIsHighlighted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::CitySampleButtonPrompt_eventIsHighlighted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execIsHighlighted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHighlighted();
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function IsHighlighted

// Begin Class UCitySampleButtonPrompt Function IsPressed
struct Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics
{
	struct CitySampleButtonPrompt_eventIsPressed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the button is currently pressed. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the button is currently pressed." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleButtonPrompt_eventIsPressed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleButtonPrompt_eventIsPressed_Parms), &Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "IsPressed", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::CitySampleButtonPrompt_eventIsPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::CitySampleButtonPrompt_eventIsPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execIsPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPressed();
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function IsPressed

// Begin Class UCitySampleButtonPrompt Function PlayPressAnimation
static FName NAME_UCitySampleButtonPrompt_PlayPressAnimation = FName(TEXT("PlayPressAnimation"));
void UCitySampleButtonPrompt::PlayPressAnimation()
{
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleButtonPrompt_PlayPressAnimation),NULL);
}
struct Z_Construct_UFunction_UCitySampleButtonPrompt_PlayPressAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook to play an animation when a button is pressed. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to play an animation when a button is pressed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_PlayPressAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "PlayPressAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_PlayPressAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_PlayPressAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_PlayPressAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_PlayPressAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleButtonPrompt Function PlayPressAnimation

// Begin Class UCitySampleButtonPrompt Function PlayReleaseAnimation
static FName NAME_UCitySampleButtonPrompt_PlayReleaseAnimation = FName(TEXT("PlayReleaseAnimation"));
void UCitySampleButtonPrompt::PlayReleaseAnimation()
{
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleButtonPrompt_PlayReleaseAnimation),NULL);
}
struct Z_Construct_UFunction_UCitySampleButtonPrompt_PlayReleaseAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook to play an animation when a button is released. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to play an animation when a button is released." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_PlayReleaseAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "PlayReleaseAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_PlayReleaseAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_PlayReleaseAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_PlayReleaseAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_PlayReleaseAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleButtonPrompt Function PlayReleaseAnimation

// Begin Class UCitySampleButtonPrompt Function PressButton
struct Z_Construct_UFunction_UCitySampleButtonPrompt_PressButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Performs the press event and fires BP events and delegates and calls PlayPressAnimation. \n\x09 * \n\x09 * @note\x09Sets pressed state to true. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performs the press event and fires BP events and delegates and calls PlayPressAnimation.\n\n@note        Sets pressed state to true." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_PressButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "PressButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_PressButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_PressButton_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_PressButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_PressButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execPressButton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PressButton();
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function PressButton

// Begin Class UCitySampleButtonPrompt Function ReceiveButtonDisabledEvent
struct CitySampleButtonPrompt_eventReceiveButtonDisabledEvent_Parms
{
	bool bDisabled;
};
static FName NAME_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent = FName(TEXT("ReceiveButtonDisabledEvent"));
void UCitySampleButtonPrompt::ReceiveButtonDisabledEvent(bool bDisabled)
{
	CitySampleButtonPrompt_eventReceiveButtonDisabledEvent_Parms Parms;
	Parms.bDisabled=bDisabled ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent),&Parms);
}
struct Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook to respond to a button disabled event. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to respond to a button disabled event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::NewProp_bDisabled_SetBit(void* Obj)
{
	((CitySampleButtonPrompt_eventReceiveButtonDisabledEvent_Parms*)Obj)->bDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleButtonPrompt_eventReceiveButtonDisabledEvent_Parms), &Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisabled_MetaData), NewProp_bDisabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::NewProp_bDisabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "ReceiveButtonDisabledEvent", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::PropPointers), sizeof(CitySampleButtonPrompt_eventReceiveButtonDisabledEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleButtonPrompt_eventReceiveButtonDisabledEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleButtonPrompt Function ReceiveButtonDisabledEvent

// Begin Class UCitySampleButtonPrompt Function ReceiveButtonHighlightedEvent
struct CitySampleButtonPrompt_eventReceiveButtonHighlightedEvent_Parms
{
	bool bHighlighted;
};
static FName NAME_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent = FName(TEXT("ReceiveButtonHighlightedEvent"));
void UCitySampleButtonPrompt::ReceiveButtonHighlightedEvent(bool bHighlighted)
{
	CitySampleButtonPrompt_eventReceiveButtonHighlightedEvent_Parms Parms;
	Parms.bHighlighted=bHighlighted ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent),&Parms);
}
struct Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook to respond to a button highlight event. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to respond to a button highlight event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighlighted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bHighlighted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlighted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::NewProp_bHighlighted_SetBit(void* Obj)
{
	((CitySampleButtonPrompt_eventReceiveButtonHighlightedEvent_Parms*)Obj)->bHighlighted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::NewProp_bHighlighted = { "bHighlighted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleButtonPrompt_eventReceiveButtonHighlightedEvent_Parms), &Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::NewProp_bHighlighted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighlighted_MetaData), NewProp_bHighlighted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::NewProp_bHighlighted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "ReceiveButtonHighlightedEvent", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::PropPointers), sizeof(CitySampleButtonPrompt_eventReceiveButtonHighlightedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleButtonPrompt_eventReceiveButtonHighlightedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleButtonPrompt Function ReceiveButtonHighlightedEvent

// Begin Class UCitySampleButtonPrompt Function ReceiveButtonPressEvent
static FName NAME_UCitySampleButtonPrompt_ReceiveButtonPressEvent = FName(TEXT("ReceiveButtonPressEvent"));
void UCitySampleButtonPrompt::ReceiveButtonPressEvent()
{
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleButtonPrompt_ReceiveButtonPressEvent),NULL);
}
struct Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonPressEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook to respond to a button press event. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to respond to a button press event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonPressEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "ReceiveButtonPressEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonPressEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonPressEvent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonPressEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonPressEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleButtonPrompt Function ReceiveButtonPressEvent

// Begin Class UCitySampleButtonPrompt Function ReceiveButtonReleaseEvent
static FName NAME_UCitySampleButtonPrompt_ReceiveButtonReleaseEvent = FName(TEXT("ReceiveButtonReleaseEvent"));
void UCitySampleButtonPrompt::ReceiveButtonReleaseEvent()
{
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleButtonPrompt_ReceiveButtonReleaseEvent),NULL);
}
struct Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonReleaseEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook to respond to a button release event. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to respond to a button release event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonReleaseEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "ReceiveButtonReleaseEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonReleaseEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonReleaseEvent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonReleaseEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonReleaseEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleButtonPrompt Function ReceiveButtonReleaseEvent

// Begin Class UCitySampleButtonPrompt Function ReleaseButton
struct Z_Construct_UFunction_UCitySampleButtonPrompt_ReleaseButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Performs the release event and fires BP events and delegates and calls PlayReleaseAnimation.\n\x09 *\n\x09 * @note\x09Sets pressed state to false.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performs the release event and fires BP events and delegates and calls PlayReleaseAnimation.\n\n@note        Sets pressed state to false." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_ReleaseButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "ReleaseButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_ReleaseButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_ReleaseButton_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_ReleaseButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_ReleaseButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execReleaseButton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseButton();
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function ReleaseButton

// Begin Class UCitySampleButtonPrompt Function SetDisabled
struct Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics
{
	struct CitySampleButtonPrompt_eventSetDisabled_Parms
	{
		bool bShouldBeDisabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets whether the button is disabled. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether the button is disabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeDisabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldBeDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeDisabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::NewProp_bShouldBeDisabled_SetBit(void* Obj)
{
	((CitySampleButtonPrompt_eventSetDisabled_Parms*)Obj)->bShouldBeDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::NewProp_bShouldBeDisabled = { "bShouldBeDisabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleButtonPrompt_eventSetDisabled_Parms), &Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::NewProp_bShouldBeDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBeDisabled_MetaData), NewProp_bShouldBeDisabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::NewProp_bShouldBeDisabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "SetDisabled", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::CitySampleButtonPrompt_eventSetDisabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::CitySampleButtonPrompt_eventSetDisabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execSetDisabled)
{
	P_GET_UBOOL(Z_Param_bShouldBeDisabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisabled(Z_Param_bShouldBeDisabled);
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function SetDisabled

// Begin Class UCitySampleButtonPrompt Function SetHighlighted
struct Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics
{
	struct CitySampleButtonPrompt_eventSetHighlighted_Parms
	{
		bool bShouldBeHighlighted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets whether the button is highlighted. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether the button is highlighted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeHighlighted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldBeHighlighted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeHighlighted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::NewProp_bShouldBeHighlighted_SetBit(void* Obj)
{
	((CitySampleButtonPrompt_eventSetHighlighted_Parms*)Obj)->bShouldBeHighlighted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::NewProp_bShouldBeHighlighted = { "bShouldBeHighlighted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleButtonPrompt_eventSetHighlighted_Parms), &Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::NewProp_bShouldBeHighlighted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBeHighlighted_MetaData), NewProp_bShouldBeHighlighted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::NewProp_bShouldBeHighlighted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "SetHighlighted", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::CitySampleButtonPrompt_eventSetHighlighted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::CitySampleButtonPrompt_eventSetHighlighted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execSetHighlighted)
{
	P_GET_UBOOL(Z_Param_bShouldBeHighlighted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighlighted(Z_Param_bShouldBeHighlighted);
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function SetHighlighted

// Begin Class UCitySampleButtonPrompt Function SetIsPressed
struct Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics
{
	struct CitySampleButtonPrompt_eventSetIsPressed_Parms
	{
		bool bShouldBePressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets button press state. @note Does not fire Press/Release events or delegates. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets button press state. @note Does not fire Press/Release events or delegates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBePressed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldBePressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBePressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::NewProp_bShouldBePressed_SetBit(void* Obj)
{
	((CitySampleButtonPrompt_eventSetIsPressed_Parms*)Obj)->bShouldBePressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::NewProp_bShouldBePressed = { "bShouldBePressed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleButtonPrompt_eventSetIsPressed_Parms), &Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::NewProp_bShouldBePressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBePressed_MetaData), NewProp_bShouldBePressed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::NewProp_bShouldBePressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleButtonPrompt, nullptr, "SetIsPressed", nullptr, nullptr, Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::CitySampleButtonPrompt_eventSetIsPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::CitySampleButtonPrompt_eventSetIsPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleButtonPrompt::execSetIsPressed)
{
	P_GET_UBOOL(Z_Param_bShouldBePressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsPressed(Z_Param_bShouldBePressed);
	P_NATIVE_END;
}
// End Class UCitySampleButtonPrompt Function SetIsPressed

// Begin Class UCitySampleButtonPrompt
void UCitySampleButtonPrompt::StaticRegisterNativesUCitySampleButtonPrompt()
{
	UClass* Class = UCitySampleButtonPrompt::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConfigureControlsFlavorImages", &UCitySampleButtonPrompt::execConfigureControlsFlavorImages },
		{ "ConfigureImage", &UCitySampleButtonPrompt::execConfigureImage },
		{ "ConfigurePromptText", &UCitySampleButtonPrompt::execConfigurePromptText },
		{ "GetImageConfig", &UCitySampleButtonPrompt::execGetImageConfig },
		{ "GetPromptConfig", &UCitySampleButtonPrompt::execGetPromptConfig },
		{ "IsDisabled", &UCitySampleButtonPrompt::execIsDisabled },
		{ "IsHighlighted", &UCitySampleButtonPrompt::execIsHighlighted },
		{ "IsPressed", &UCitySampleButtonPrompt::execIsPressed },
		{ "PressButton", &UCitySampleButtonPrompt::execPressButton },
		{ "ReleaseButton", &UCitySampleButtonPrompt::execReleaseButton },
		{ "SetDisabled", &UCitySampleButtonPrompt::execSetDisabled },
		{ "SetHighlighted", &UCitySampleButtonPrompt::execSetHighlighted },
		{ "SetIsPressed", &UCitySampleButtonPrompt::execSetIsPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleButtonPrompt);
UClass* Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister()
{
	return UCitySampleButtonPrompt::StaticClass();
}
struct Z_Construct_UClass_UCitySampleButtonPrompt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for a button with descriptive prompt text that can be pressed and/or highlighted.\n */" },
#endif
		{ "IncludePath", "UI/CitySampleButtonPrompt.h" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for a button with descriptive prompt text that can be pressed and/or highlighted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonPressedEvent_MetaData[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate fired when the button is pressed. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the button is pressed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonReleasedEvent_MetaData[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate fired when the button is released. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the button is released." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonHighlightedEvent_MetaData[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate fired when the button highlight state changes. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the button highlight state changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonDisabledEvent_MetaData[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate fired when the button disable state changes. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when the button disable state changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonImageConfig_MetaData[] = {
		{ "Category", "CitySample Button|Image" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Config properties applied to the bound \"ButtonImage\" widget, if applicable. */" },
#endif
		{ "EditCondition", "ButtonImage != nullptr" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config properties applied to the bound \"ButtonImage\" widget, if applicable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlsFlavorImageConfigMap_MetaData[] = {
		{ "Category", "CitySample Button|Image" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls flavor specific config properties applied to the bound \"ButtonImage\" widget, if applicable. */" },
#endif
		{ "EditCondition", "ButtonImage != nullptr" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls flavor specific config properties applied to the bound \"ButtonImage\" widget, if applicable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonImage_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CitySample Button|Image" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional widget binding for an image that represents the button. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional widget binding for an image that represents the button." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextConfigCenter_MetaData[] = {
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Config properties applied to the bound \"PromptTextCenter\" widget, if applicable. */" },
#endif
		{ "EditCondition", "PromptTextCenter != nullptr" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config properties applied to the bound \"PromptTextCenter\" widget, if applicable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextConfigTop_MetaData[] = {
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Config properties applied to the bound \"PromptTextTop\" widget, if applicable. */" },
#endif
		{ "EditCondition", "PromptTextTop != nullptr" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config properties applied to the bound \"PromptTextTop\" widget, if applicable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextConfigLeft_MetaData[] = {
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Config properties applied to the bound \"PromptTextLeft\" widget, if applicable. */" },
#endif
		{ "EditCondition", "PromptTextLeft != nullptr" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config properties applied to the bound \"PromptTextLeft\" widget, if applicable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextConfigRight_MetaData[] = {
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Config properties applied to the bound \"PromptTextRight\" widget, if applicable. */" },
#endif
		{ "EditCondition", "PromptTextRight != nullptr" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config properties applied to the bound \"PromptTextRight\" widget, if applicable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextConfigBottom_MetaData[] = {
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Config properties applied to the bound \"PromptTextBottom\" widget, if applicable. */" },
#endif
		{ "EditCondition", "PromptTextBottom != nullptr" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config properties applied to the bound \"PromptTextBottom\" widget, if applicable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextCenter_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional widget binding for a text block that can be configured. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional widget binding for a text block that can be configured." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextTop_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional widget binding for a text block that can be configured. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional widget binding for a text block that can be configured." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextLeft_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional widget binding for a text block that can be configured. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional widget binding for a text block that can be configured." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextRight_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional widget binding for a text block that can be configured. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional widget binding for a text block that can be configured." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextBottom_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional widget binding for a text block that can be configured. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional widget binding for a text block that can be configured." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHighlighted_MetaData[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the button is currently in a highlighted state. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the button is currently in a highlighted state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDisabled_MetaData[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the button is currently disabled. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the button is currently disabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPressed_MetaData[] = {
		{ "Category", "CitySample Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the button is currently in a pressed state. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the button is currently in a pressed state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePromptAsImageLabel_MetaData[] = {
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Whether to use a specified prompt as a label for the image.\n\x09 * @note\x09This ensures the specified button prompt is configured using the image label text config.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use a specified prompt as a label for the image.\n@note        This ensures the specified button prompt is configured using the image label text config." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageLabelPrompt_MetaData[] = {
		{ "Category", "CitySample Button|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the prompt that will be used as the image label. */" },
#endif
		{ "EditCondition", "bUsePromptAsImageLabel" },
		{ "ModuleRelativePath", "Public/UI/CitySampleButtonPrompt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the prompt that will be used as the image label." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonPressedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonReleasedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonHighlightedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonDisabledEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonImageConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlsFlavorImageConfigMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControlsFlavorImageConfigMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlsFlavorImageConfigMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ControlsFlavorImageConfigMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PromptTextConfigCenter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PromptTextConfigTop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PromptTextConfigLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PromptTextConfigRight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PromptTextConfigBottom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptTextCenter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptTextTop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptTextLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptTextRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptTextBottom;
	static void NewProp_bIsHighlighted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHighlighted;
	static void NewProp_bIsDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDisabled;
	static void NewProp_bIsPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPressed;
	static void NewProp_bUsePromptAsImageLabel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePromptAsImageLabel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImageLabelPrompt_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageLabelPrompt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureControlsFlavorImages, "ConfigureControlsFlavorImages" }, // 3767470176
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigureImage, "ConfigureImage" }, // 585125575
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_ConfigurePromptText, "ConfigurePromptText" }, // 1731796505
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_GetImageConfig, "GetImageConfig" }, // 2916803807
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_GetPromptConfig, "GetPromptConfig" }, // 2135990924
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_IsDisabled, "IsDisabled" }, // 1159390555
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_IsHighlighted, "IsHighlighted" }, // 1805476844
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_IsPressed, "IsPressed" }, // 3133694949
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_PlayPressAnimation, "PlayPressAnimation" }, // 808394214
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_PlayReleaseAnimation, "PlayReleaseAnimation" }, // 773215584
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_PressButton, "PressButton" }, // 3230370597
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonDisabledEvent, "ReceiveButtonDisabledEvent" }, // 924089443
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonHighlightedEvent, "ReceiveButtonHighlightedEvent" }, // 3182633890
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonPressEvent, "ReceiveButtonPressEvent" }, // 1370025111
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_ReceiveButtonReleaseEvent, "ReceiveButtonReleaseEvent" }, // 1327622639
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_ReleaseButton, "ReleaseButton" }, // 1615778323
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_SetDisabled, "SetDisabled" }, // 3983946780
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_SetHighlighted, "SetHighlighted" }, // 1312557976
		{ &Z_Construct_UFunction_UCitySampleButtonPrompt_SetIsPressed, "SetIsPressed" }, // 3096044028
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleButtonPrompt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_OnButtonPressedEvent = { "OnButtonPressedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, OnButtonPressedEvent), Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnPressed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonPressedEvent_MetaData), NewProp_OnButtonPressedEvent_MetaData) }; // 1225253636
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_OnButtonReleasedEvent = { "OnButtonReleasedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, OnButtonReleasedEvent), Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnReleased__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonReleasedEvent_MetaData), NewProp_OnButtonReleasedEvent_MetaData) }; // 2743093819
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_OnButtonHighlightedEvent = { "OnButtonHighlightedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, OnButtonHighlightedEvent), Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnHighlightedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonHighlightedEvent_MetaData), NewProp_OnButtonHighlightedEvent_MetaData) }; // 827029303
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_OnButtonDisabledEvent = { "OnButtonDisabledEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, OnButtonDisabledEvent), Z_Construct_UDelegateFunction_CitySample_CitySampleButtonPromptOnDisabledEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonDisabledEvent_MetaData), NewProp_OnButtonDisabledEvent_MetaData) }; // 421704340
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ButtonImageConfig = { "ButtonImageConfig", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, ButtonImageConfig), Z_Construct_UScriptStruct_FCitySampleImageConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonImageConfig_MetaData), NewProp_ButtonImageConfig_MetaData) }; // 844302661
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ControlsFlavorImageConfigMap_ValueProp = { "ControlsFlavorImageConfigMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCitySampleImageConfig, METADATA_PARAMS(0, nullptr) }; // 844302661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ControlsFlavorImageConfigMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ControlsFlavorImageConfigMap_Key_KeyProp = { "ControlsFlavorImageConfigMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(0, nullptr) }; // 2168222017
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ControlsFlavorImageConfigMap = { "ControlsFlavorImageConfigMap", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, ControlsFlavorImageConfigMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlsFlavorImageConfigMap_MetaData), NewProp_ControlsFlavorImageConfigMap_MetaData) }; // 2168222017 844302661
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ButtonImage = { "ButtonImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, ButtonImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonImage_MetaData), NewProp_ButtonImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextConfigCenter = { "PromptTextConfigCenter", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, PromptTextConfigCenter), Z_Construct_UScriptStruct_FCitySampleTextConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextConfigCenter_MetaData), NewProp_PromptTextConfigCenter_MetaData) }; // 1923608434
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextConfigTop = { "PromptTextConfigTop", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, PromptTextConfigTop), Z_Construct_UScriptStruct_FCitySampleTextConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextConfigTop_MetaData), NewProp_PromptTextConfigTop_MetaData) }; // 1923608434
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextConfigLeft = { "PromptTextConfigLeft", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, PromptTextConfigLeft), Z_Construct_UScriptStruct_FCitySampleTextConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextConfigLeft_MetaData), NewProp_PromptTextConfigLeft_MetaData) }; // 1923608434
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextConfigRight = { "PromptTextConfigRight", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, PromptTextConfigRight), Z_Construct_UScriptStruct_FCitySampleTextConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextConfigRight_MetaData), NewProp_PromptTextConfigRight_MetaData) }; // 1923608434
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextConfigBottom = { "PromptTextConfigBottom", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, PromptTextConfigBottom), Z_Construct_UScriptStruct_FCitySampleTextConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextConfigBottom_MetaData), NewProp_PromptTextConfigBottom_MetaData) }; // 1923608434
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextCenter = { "PromptTextCenter", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, PromptTextCenter), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextCenter_MetaData), NewProp_PromptTextCenter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextTop = { "PromptTextTop", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, PromptTextTop), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextTop_MetaData), NewProp_PromptTextTop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextLeft = { "PromptTextLeft", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, PromptTextLeft), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextLeft_MetaData), NewProp_PromptTextLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextRight = { "PromptTextRight", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, PromptTextRight), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextRight_MetaData), NewProp_PromptTextRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextBottom = { "PromptTextBottom", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, PromptTextBottom), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextBottom_MetaData), NewProp_PromptTextBottom_MetaData) };
void Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsHighlighted_SetBit(void* Obj)
{
	((UCitySampleButtonPrompt*)Obj)->bIsHighlighted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsHighlighted = { "bIsHighlighted", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleButtonPrompt), &Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsHighlighted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHighlighted_MetaData), NewProp_bIsHighlighted_MetaData) };
void Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsDisabled_SetBit(void* Obj)
{
	((UCitySampleButtonPrompt*)Obj)->bIsDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsDisabled = { "bIsDisabled", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleButtonPrompt), &Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDisabled_MetaData), NewProp_bIsDisabled_MetaData) };
void Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsPressed_SetBit(void* Obj)
{
	((UCitySampleButtonPrompt*)Obj)->bIsPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsPressed = { "bIsPressed", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleButtonPrompt), &Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPressed_MetaData), NewProp_bIsPressed_MetaData) };
void Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bUsePromptAsImageLabel_SetBit(void* Obj)
{
	((UCitySampleButtonPrompt*)Obj)->bUsePromptAsImageLabel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bUsePromptAsImageLabel = { "bUsePromptAsImageLabel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleButtonPrompt), &Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bUsePromptAsImageLabel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePromptAsImageLabel_MetaData), NewProp_bUsePromptAsImageLabel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ImageLabelPrompt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ImageLabelPrompt = { "ImageLabelPrompt", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleButtonPrompt, ImageLabelPrompt), Z_Construct_UEnum_CitySample_ECitySamplePromptTextType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageLabelPrompt_MetaData), NewProp_ImageLabelPrompt_MetaData) }; // 2560268445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleButtonPrompt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_OnButtonPressedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_OnButtonReleasedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_OnButtonHighlightedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_OnButtonDisabledEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ButtonImageConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ControlsFlavorImageConfigMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ControlsFlavorImageConfigMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ControlsFlavorImageConfigMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ControlsFlavorImageConfigMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ButtonImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextConfigCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextConfigTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextConfigLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextConfigRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextConfigBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_PromptTextBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsHighlighted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bIsPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_bUsePromptAsImageLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ImageLabelPrompt_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleButtonPrompt_Statics::NewProp_ImageLabelPrompt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleButtonPrompt_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleButtonPrompt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCitySamplePanel,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleButtonPrompt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleButtonPrompt_Statics::ClassParams = {
	&UCitySampleButtonPrompt::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCitySampleButtonPrompt_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleButtonPrompt_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleButtonPrompt_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleButtonPrompt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleButtonPrompt()
{
	if (!Z_Registration_Info_UClass_UCitySampleButtonPrompt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleButtonPrompt.OuterSingleton, Z_Construct_UClass_UCitySampleButtonPrompt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleButtonPrompt.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleButtonPrompt>()
{
	return UCitySampleButtonPrompt::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleButtonPrompt);
UCitySampleButtonPrompt::~UCitySampleButtonPrompt() {}
// End Class UCitySampleButtonPrompt

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleButtonPrompt, UCitySampleButtonPrompt::StaticClass, TEXT("UCitySampleButtonPrompt"), &Z_Registration_Info_UClass_UCitySampleButtonPrompt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleButtonPrompt), 351887433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_1349876331(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
