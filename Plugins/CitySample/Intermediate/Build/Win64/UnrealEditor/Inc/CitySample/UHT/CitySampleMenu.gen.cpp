// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySampleMenu.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleMenu() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleMenu();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleMenu_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel_NoRegister();
CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleMenuTabData();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin ScriptStruct FCitySampleMenuTabData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleMenuTabData;
class UScriptStruct* FCitySampleMenuTabData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleMenuTabData, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleMenuTabData"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleMenuTabData>()
{
	return FCitySampleMenuTabData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a menu tab made up of a selector, frame, and content widgets that are relevant when a tab is active.\n */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a menu tab made up of a selector, frame, and content widgets that are relevant when a tab is active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectorName_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// #todo: remove names and name lookup to init the pointers once the references can be set directly\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#todo: remove names and name lookup to init the pointers once the references can be set directly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameName_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentName_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A button widget that represents the tab selection, i.e. an icon in a list that highlights when active. *///UPROPERTY(EditAnywhere, BlueprintReadOnly)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A button widget that represents the tab selection, i.e. an icon in a list that highlights when active. //UPROPERTY(EditAnywhere, BlueprintReadOnly)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A widget that acts as the parent for the content, i.e. an overlay, canvas panel, or border that contains the content. *///UPROPERTY(EditAnywhere, BlueprintReadOnly)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A widget that acts as the parent for the content, i.e. an overlay, canvas panel, or border that contains the content. //UPROPERTY(EditAnywhere, BlueprintReadOnly)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The CitySamplePanel widget representing the tab's content. Can be passed the input from a call to ProcessInput. *///UPROPERTY(EditAnywhere, BlueprintReadOnly)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The CitySamplePanel widget representing the tab's content. Can be passed the input from a call to ProcessInput. //UPROPERTY(EditAnywhere, BlueprintReadOnly)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionDescriptions_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mapping of relevant InputActions to their string description for the controls overlay UI. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of relevant InputActions to their string description for the controls overlay UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyDescriptionOverrides_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mapping of relevant input keys to their string description for the controls overlay UI. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of relevant input keys to their string description for the controls overlay UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectorName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FrameName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ContentName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InputActionDescriptions_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionDescriptions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputActionDescriptions;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InputKeyDescriptionOverrides_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputKeyDescriptionOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputKeyDescriptionOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleMenuTabData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_SelectorName = { "SelectorName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMenuTabData, SelectorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectorName_MetaData), NewProp_SelectorName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_FrameName = { "FrameName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMenuTabData, FrameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameName_MetaData), NewProp_FrameName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_ContentName = { "ContentName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMenuTabData, ContentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentName_MetaData), NewProp_ContentName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x00100000000a201d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMenuTabData, Selector), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x00100000000a201d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMenuTabData, Frame), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x00100000000a201d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMenuTabData, Content), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions_ValueProp = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions_Key_KeyProp = { "InputActionDescriptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMenuTabData, InputActionDescriptions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionDescriptions_MetaData), NewProp_InputActionDescriptions_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp = { "InputKeyDescriptionOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMenuTabData, InputKeyDescriptionOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputKeyDescriptionOverrides_MetaData), NewProp_InputKeyDescriptionOverrides_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_SelectorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_FrameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_ContentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Selector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	nullptr,
	&NewStructOps,
	"CitySampleMenuTabData",
	Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::PropPointers),
	sizeof(FCitySampleMenuTabData),
	alignof(FCitySampleMenuTabData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCitySampleMenuTabData()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.InnerSingleton;
}
// End ScriptStruct FCitySampleMenuTabData

// Begin Class UCitySampleMenu Function DecrementTab
struct Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics
{
	struct CitySampleMenu_eventDecrementTab_Parms
	{
		FCitySampleMenuTabData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Decrements the current tab index and sets the tab to match.\n\x09 * \n\x09 * @note\x09If bWrapAroundTabs is set, this wraps around to the last tab when decrementing from the first tab.\n\x09 *\x09\x09\x09Otherwise clamps to index 0 and sets the current tab to match, if it exists.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decrements the current tab index and sets the tab to match.\n\n@note        If bWrapAroundTabs is set, this wraps around to the last tab when decrementing from the first tab.\n                     Otherwise clamps to index 0 and sets the current tab to match, if it exists." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMenu_eventDecrementTab_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2598983963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "DecrementTab", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::CitySampleMenu_eventDecrementTab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::CitySampleMenu_eventDecrementTab_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleMenu_DecrementTab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleMenu::execDecrementTab)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCitySampleMenuTabData*)Z_Param__Result=P_THIS->DecrementTab();
	P_NATIVE_END;
}
// End Class UCitySampleMenu Function DecrementTab

// Begin Class UCitySampleMenu Function GetCurrentTab
struct Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics
{
	struct CitySampleMenu_eventGetCurrentTab_Parms
	{
		FCitySampleMenuTabData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Returns the widgets that make up the current tab, some or all widget refs may be null.\n\x09 * \n\x09 * @note\x09""All widget references are guaranteed to be null if the index is invalid, i.e. when there are no tabs. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the widgets that make up the current tab, some or all widget refs may be null.\n\n@note        All widget references are guaranteed to be null if the index is invalid, i.e. when there are no tabs." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMenu_eventGetCurrentTab_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2598983963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "GetCurrentTab", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::CitySampleMenu_eventGetCurrentTab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::CitySampleMenu_eventGetCurrentTab_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleMenu::execGetCurrentTab)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCitySampleMenuTabData*)Z_Param__Result=P_THIS->GetCurrentTab();
	P_NATIVE_END;
}
// End Class UCitySampleMenu Function GetCurrentTab

// Begin Class UCitySampleMenu Function GetCurrentTabIndex
struct Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics
{
	struct CitySampleMenu_eventGetCurrentTabIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current tab index. Defaults to 0, even when there are no tabs. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current tab index. Defaults to 0, even when there are no tabs." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMenu_eventGetCurrentTabIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "GetCurrentTabIndex", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::CitySampleMenu_eventGetCurrentTabIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::CitySampleMenu_eventGetCurrentTabIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleMenu::execGetCurrentTabIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentTabIndex();
	P_NATIVE_END;
}
// End Class UCitySampleMenu Function GetCurrentTabIndex

// Begin Class UCitySampleMenu Function IncrementTab
struct Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics
{
	struct CitySampleMenu_eventIncrementTab_Parms
	{
		FCitySampleMenuTabData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Increments the current tab index and sets the tab to match.\n\x09 * \n\x09 * @note\x09If bWrapAroundTabs is set, this wraps around to the first tab when incrementing from the final tab.\n\x09 *\x09\x09\x09Otherwise clamps to the last tab index, or 0 if there are none, and sets the tab to match, if it exists. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increments the current tab index and sets the tab to match.\n\n@note        If bWrapAroundTabs is set, this wraps around to the first tab when incrementing from the final tab.\n                     Otherwise clamps to the last tab index, or 0 if there are none, and sets the tab to match, if it exists." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMenu_eventIncrementTab_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2598983963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "IncrementTab", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::CitySampleMenu_eventIncrementTab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::CitySampleMenu_eventIncrementTab_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleMenu_IncrementTab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleMenu::execIncrementTab)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCitySampleMenuTabData*)Z_Param__Result=P_THIS->IncrementTab();
	P_NATIVE_END;
}
// End Class UCitySampleMenu Function IncrementTab

// Begin Class UCitySampleMenu Function OnSetTab
struct CitySampleMenu_eventOnSetTab_Parms
{
	FCitySampleMenuTabData PreviousTabData;
	FCitySampleMenuTabData NewTabData;
};
static FName NAME_UCitySampleMenu_OnSetTab = FName(TEXT("OnSetTab"));
void UCitySampleMenu::OnSetTab(FCitySampleMenuTabData const& PreviousTabData, FCitySampleMenuTabData const& NewTabData)
{
	CitySampleMenu_eventOnSetTab_Parms Parms;
	Parms.PreviousTabData=PreviousTabData;
	Parms.NewTabData=NewTabData;
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleMenu_OnSetTab),&Parms);
}
struct Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook to handle UI updates when switching between tabs. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook to handle UI updates when switching between tabs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTabData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousTabData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTabData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_PreviousTabData = { "PreviousTabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMenu_eventOnSetTab_Parms, PreviousTabData), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousTabData_MetaData), NewProp_PreviousTabData_MetaData) }; // 2598983963
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_NewTabData = { "NewTabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMenu_eventOnSetTab_Parms, NewTabData), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTabData_MetaData), NewProp_NewTabData_MetaData) }; // 2598983963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_PreviousTabData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_NewTabData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "OnSetTab", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::PropPointers), sizeof(CitySampleMenu_eventOnSetTab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleMenu_eventOnSetTab_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleMenu_OnSetTab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleMenu Function OnSetTab

// Begin Class UCitySampleMenu Function SetTab
struct Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics
{
	struct CitySampleMenu_eventSetTab_Parms
	{
		int32 Index;
		FCitySampleMenuTabData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the current tab based on the given index, clamped to a valid index in the tabs array, or 0 if there are none. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the current tab based on the given index, clamped to a valid index in the tabs array, or 0 if there are none." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMenu_eventSetTab_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMenu_eventSetTab_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2598983963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "SetTab", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::CitySampleMenu_eventSetTab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::CitySampleMenu_eventSetTab_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleMenu_SetTab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleMenu::execSetTab)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCitySampleMenuTabData*)Z_Param__Result=P_THIS->SetTab(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UCitySampleMenu Function SetTab

// Begin Class UCitySampleMenu
void UCitySampleMenu::StaticRegisterNativesUCitySampleMenu()
{
	UClass* Class = UCitySampleMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecrementTab", &UCitySampleMenu::execDecrementTab },
		{ "GetCurrentTab", &UCitySampleMenu::execGetCurrentTab },
		{ "GetCurrentTabIndex", &UCitySampleMenu::execGetCurrentTabIndex },
		{ "IncrementTab", &UCitySampleMenu::execIncrementTab },
		{ "SetTab", &UCitySampleMenu::execSetTab },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleMenu);
UClass* Z_Construct_UClass_UCitySampleMenu_NoRegister()
{
	return UCitySampleMenu::StaticClass();
}
struct Z_Construct_UClass_UCitySampleMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * CitySample Panel base for a tabbed menu, enabling navigating between tabs that optionally contain CitySamplePanel content.\n */" },
#endif
		{ "IncludePath", "UI/CitySampleMenu.h" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CitySample Panel base for a tabbed menu, enabling navigating between tabs that optionally contain CitySamplePanel content." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWrapAroundTabs_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether IncrementTab/DecrementTab should wrap around to the tab at the first/last valid index, if possible. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether IncrementTab/DecrementTab should wrap around to the tab at the first/last valid index, if possible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tabs_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An array of tab data, specifically an array of widget references that make up a tab (selector, frame, and content). */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of tab data, specifically an array of widget references that make up a tab (selector, frame, and content)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingTabIndex_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustZOrderOfTabs_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the current tab will have ZOrder=0, the previous tab will have ZOrder=1 and so on. Currently requires tabs to be wrapped with a Canvas Panel. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the current tab will have ZOrder=0, the previous tab will have ZOrder=1 and so on. Currently requires tabs to be wrapped with a Canvas Panel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTabIndex_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The index of the current tab in the tabs array. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The index of the current tab in the tabs array." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bWrapAroundTabs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapAroundTabs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tabs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tabs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingTabIndex;
	static void NewProp_bAdjustZOrderOfTabs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustZOrderOfTabs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTabIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleMenu_DecrementTab, "DecrementTab" }, // 2027957839
		{ &Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab, "GetCurrentTab" }, // 349240285
		{ &Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex, "GetCurrentTabIndex" }, // 2966626043
		{ &Z_Construct_UFunction_UCitySampleMenu_IncrementTab, "IncrementTab" }, // 2335598038
		{ &Z_Construct_UFunction_UCitySampleMenu_OnSetTab, "OnSetTab" }, // 1244047523
		{ &Z_Construct_UFunction_UCitySampleMenu_SetTab, "SetTab" }, // 294738906
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bWrapAroundTabs_SetBit(void* Obj)
{
	((UCitySampleMenu*)Obj)->bWrapAroundTabs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bWrapAroundTabs = { "bWrapAroundTabs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleMenu), &Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bWrapAroundTabs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWrapAroundTabs_MetaData), NewProp_bWrapAroundTabs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_Tabs_Inner = { "Tabs", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(0, nullptr) }; // 2598983963
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_Tabs = { "Tabs", nullptr, (EPropertyFlags)0x0020088000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleMenu, Tabs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tabs_MetaData), NewProp_Tabs_MetaData) }; // 2598983963
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_StartingTabIndex = { "StartingTabIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleMenu, StartingTabIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingTabIndex_MetaData), NewProp_StartingTabIndex_MetaData) };
void Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bAdjustZOrderOfTabs_SetBit(void* Obj)
{
	((UCitySampleMenu*)Obj)->bAdjustZOrderOfTabs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bAdjustZOrderOfTabs = { "bAdjustZOrderOfTabs", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleMenu), &Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bAdjustZOrderOfTabs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdjustZOrderOfTabs_MetaData), NewProp_bAdjustZOrderOfTabs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_CurrentTabIndex = { "CurrentTabIndex", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleMenu, CurrentTabIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTabIndex_MetaData), NewProp_CurrentTabIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bWrapAroundTabs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_Tabs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_Tabs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_StartingTabIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bAdjustZOrderOfTabs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_CurrentTabIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCitySamplePanel,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCitySampleMenu_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister, (int32)VTABLE_OFFSET(UCitySampleMenu, ICitySampleControlsOverlayInterface), false },  // 2984645284
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleMenu_Statics::ClassParams = {
	&UCitySampleMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCitySampleMenu_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMenu_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleMenu()
{
	if (!Z_Registration_Info_UClass_UCitySampleMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleMenu.OuterSingleton, Z_Construct_UClass_UCitySampleMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleMenu.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleMenu>()
{
	return UCitySampleMenu::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleMenu);
UCitySampleMenu::~UCitySampleMenu() {}
// End Class UCitySampleMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCitySampleMenuTabData::StaticStruct, Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewStructOps, TEXT("CitySampleMenuTabData"), &Z_Registration_Info_UScriptStruct_CitySampleMenuTabData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleMenuTabData), 2598983963U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleMenu, UCitySampleMenu::StaticClass, TEXT("UCitySampleMenu"), &Z_Registration_Info_UClass_UCitySampleMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleMenu), 3541486415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_161176333(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
