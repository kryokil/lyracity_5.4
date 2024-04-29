// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySampleUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleUIComponent() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayerController_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleControlsOverlay_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInteractionComponent_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleMenu_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleUIComponent();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleUIComponent_NoRegister();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor();
CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySamplePanelInput();
CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature();
CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature();
CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Delegate FCitySampleOnOptionsMenuOpen
struct Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics
{
	struct _Script_CitySample_eventCitySampleOnOptionsMenuOpen_Parms
	{
		const UCitySampleUIComponent* CitySampleUI;
		const UCitySampleMenu* OptionsMenu;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CitySampleUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CitySampleUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsMenu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::NewProp_CitySampleUI = { "CitySampleUI", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOnOptionsMenuOpen_Parms, CitySampleUI), Z_Construct_UClass_UCitySampleUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CitySampleUI_MetaData), NewProp_CitySampleUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::NewProp_OptionsMenu = { "OptionsMenu", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOnOptionsMenuOpen_Parms, OptionsMenu), Z_Construct_UClass_UCitySampleMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsMenu_MetaData), NewProp_OptionsMenu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::NewProp_CitySampleUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::NewProp_OptionsMenu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleOnOptionsMenuOpen__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::_Script_CitySample_eventCitySampleOnOptionsMenuOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::_Script_CitySample_eventCitySampleOnOptionsMenuOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCitySampleOnOptionsMenuOpen_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnOptionsMenuOpen, const UCitySampleUIComponent* CitySampleUI, const UCitySampleMenu* OptionsMenu)
{
	struct _Script_CitySample_eventCitySampleOnOptionsMenuOpen_Parms
	{
		const UCitySampleUIComponent* CitySampleUI;
		const UCitySampleMenu* OptionsMenu;
	};
	_Script_CitySample_eventCitySampleOnOptionsMenuOpen_Parms Parms;
	Parms.CitySampleUI=CitySampleUI;
	Parms.OptionsMenu=OptionsMenu;
	CitySampleOnOptionsMenuOpen.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCitySampleOnOptionsMenuOpen

// Begin Delegate FCitySampleOnOptionsMenuClose
struct Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics
{
	struct _Script_CitySample_eventCitySampleOnOptionsMenuClose_Parms
	{
		const UCitySampleUIComponent* CitySampleUI;
		const UCitySampleMenu* OptionsMenu;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CitySampleUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CitySampleUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsMenu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::NewProp_CitySampleUI = { "CitySampleUI", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOnOptionsMenuClose_Parms, CitySampleUI), Z_Construct_UClass_UCitySampleUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CitySampleUI_MetaData), NewProp_CitySampleUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::NewProp_OptionsMenu = { "OptionsMenu", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOnOptionsMenuClose_Parms, OptionsMenu), Z_Construct_UClass_UCitySampleMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsMenu_MetaData), NewProp_OptionsMenu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::NewProp_CitySampleUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::NewProp_OptionsMenu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleOnOptionsMenuClose__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::_Script_CitySample_eventCitySampleOnOptionsMenuClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::_Script_CitySample_eventCitySampleOnOptionsMenuClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCitySampleOnOptionsMenuClose_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnOptionsMenuClose, const UCitySampleUIComponent* CitySampleUI, const UCitySampleMenu* OptionsMenu)
{
	struct _Script_CitySample_eventCitySampleOnOptionsMenuClose_Parms
	{
		const UCitySampleUIComponent* CitySampleUI;
		const UCitySampleMenu* OptionsMenu;
	};
	_Script_CitySample_eventCitySampleOnOptionsMenuClose_Parms Parms;
	Parms.CitySampleUI=CitySampleUI;
	Parms.OptionsMenu=OptionsMenu;
	CitySampleOnOptionsMenuClose.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCitySampleOnOptionsMenuClose

// Begin Delegate FCitySampleOnHideUI
struct Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics
{
	struct _Script_CitySample_eventCitySampleOnHideUI_Parms
	{
		bool IsHiding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsHiding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHiding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::NewProp_IsHiding_SetBit(void* Obj)
{
	((_Script_CitySample_eventCitySampleOnHideUI_Parms*)Obj)->IsHiding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::NewProp_IsHiding = { "IsHiding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CitySample_eventCitySampleOnHideUI_Parms), &Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::NewProp_IsHiding_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::NewProp_IsHiding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleOnHideUI__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::_Script_CitySample_eventCitySampleOnHideUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::_Script_CitySample_eventCitySampleOnHideUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCitySampleOnHideUI_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnHideUI, bool IsHiding)
{
	struct _Script_CitySample_eventCitySampleOnHideUI_Parms
	{
		bool IsHiding;
	};
	_Script_CitySample_eventCitySampleOnHideUI_Parms Parms;
	Parms.IsHiding=IsHiding ? true : false;
	CitySampleOnHideUI.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCitySampleOnHideUI

// Begin Class UCitySampleUIComponent Function AddControlsOverlay
struct Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics
{
	struct CitySampleUIComponent_eventAddControlsOverlay_Parms
	{
		UCitySampleControlsOverlay* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Displays the controls overlay, if possible. @note It may be hidden separately. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Displays the controls overlay, if possible. @note It may be hidden separately." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventAddControlsOverlay_Parms, ReturnValue), Z_Construct_UClass_UCitySampleControlsOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "AddControlsOverlay", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::CitySampleUIComponent_eventAddControlsOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::CitySampleUIComponent_eventAddControlsOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execAddControlsOverlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCitySampleControlsOverlay**)Z_Param__Result=P_THIS->AddControlsOverlay();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function AddControlsOverlay

// Begin Class UCitySampleUIComponent Function AddInteractionPrompt
struct Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics
{
	struct CitySampleUIComponent_eventAddInteractionPrompt_Parms
	{
		const UCitySampleInteractionComponent* InteractionComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Displays the interaction prompt, if possible. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Displays the interaction prompt, if possible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventAddInteractionPrompt_Parms, InteractionComp), Z_Construct_UClass_UCitySampleInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "AddInteractionPrompt", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::CitySampleUIComponent_eventAddInteractionPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::CitySampleUIComponent_eventAddInteractionPrompt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execAddInteractionPrompt)
{
	P_GET_OBJECT(UCitySampleInteractionComponent,Z_Param_InteractionComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInteractionPrompt(Z_Param_InteractionComp);
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function AddInteractionPrompt

// Begin Class UCitySampleUIComponent Function GetBasePanel
struct Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics
{
	struct CitySampleUIComponent_eventGetBasePanel_Parms
	{
		UCitySamplePanel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the root CitySamplePanel instance. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the root CitySamplePanel instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventGetBasePanel_Parms, ReturnValue), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "GetBasePanel", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::CitySampleUIComponent_eventGetBasePanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::CitySampleUIComponent_eventGetBasePanel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execGetBasePanel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCitySamplePanel**)Z_Param__Result=P_THIS->GetBasePanel();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function GetBasePanel

// Begin Class UCitySampleUIComponent Function GetControlsFlavor
struct Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics
{
	struct CitySampleUIComponent_eventGetControlsFlavor_Parms
	{
		ECitySampleControlsFlavor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current controls flavor of the UI, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current controls flavor of the UI, if applicable." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventGetControlsFlavor_Parms, ReturnValue), Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(0, nullptr) }; // 2168222017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "GetControlsFlavor", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::CitySampleUIComponent_eventGetControlsFlavor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::CitySampleUIComponent_eventGetControlsFlavor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execGetControlsFlavor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECitySampleControlsFlavor*)Z_Param__Result=P_THIS->GetControlsFlavor();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function GetControlsFlavor

// Begin Class UCitySampleUIComponent Function GetControlsOverlay
struct Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics
{
	struct CitySampleUIComponent_eventGetControlsOverlay_Parms
	{
		UCitySampleControlsOverlay* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the controls overlay CitySamplePanel instance used to display context relevant input options. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the controls overlay CitySamplePanel instance used to display context relevant input options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventGetControlsOverlay_Parms, ReturnValue), Z_Construct_UClass_UCitySampleControlsOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "GetControlsOverlay", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::CitySampleUIComponent_eventGetControlsOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::CitySampleUIComponent_eventGetControlsOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execGetControlsOverlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCitySampleControlsOverlay**)Z_Param__Result=P_THIS->GetControlsOverlay();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function GetControlsOverlay

// Begin Class UCitySampleUIComponent Function GetInteractionPrompt
struct Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics
{
	struct CitySampleUIComponent_eventGetInteractionPrompt_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the interaction prompt widget. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the interaction prompt widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventGetInteractionPrompt_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "GetInteractionPrompt", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::CitySampleUIComponent_eventGetInteractionPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::CitySampleUIComponent_eventGetInteractionPrompt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execGetInteractionPrompt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetInteractionPrompt();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function GetInteractionPrompt

// Begin Class UCitySampleUIComponent Function GetOptionsMenu
struct Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics
{
	struct CitySampleUIComponent_eventGetOptionsMenu_Parms
	{
		UCitySampleMenu* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the options menu CitySamplePanel instance. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the options menu CitySamplePanel instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventGetOptionsMenu_Parms, ReturnValue), Z_Construct_UClass_UCitySampleMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "GetOptionsMenu", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::CitySampleUIComponent_eventGetOptionsMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::CitySampleUIComponent_eventGetOptionsMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execGetOptionsMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCitySampleMenu**)Z_Param__Result=P_THIS->GetOptionsMenu();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function GetOptionsMenu

// Begin Class UCitySampleUIComponent Function HideUI
struct Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics
{
	struct CitySampleUIComponent_eventHideUI_Parms
	{
		bool bShouldBeHidden;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Toggles whether the UI base panel and all its child panels are hidden, effectively hiding the entire UI hierarchy.\n\x09 *\n\x09 * @note\x09""Calling SetVisibility of this and any child panels after being hidden will not be tracked.\n\x09 *\x09\x09\x09When going from hidden to not hidden, this will revert the visibility of the UI to the state it was in before hiding.\n\n\x09 * @see\x09\x09UCitySamplePanel::SetAllPanelsHidden\n\x09 */" },
#endif
		{ "CPP_Default_bShouldBeHidden", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles whether the UI base panel and all its child panels are hidden, effectively hiding the entire UI hierarchy.\n\n@note        Calling SetVisibility of this and any child panels after being hidden will not be tracked.\n                     When going from hidden to not hidden, this will revert the visibility of the UI to the state it was in before hiding.\n\n@see         UCitySamplePanel::SetAllPanelsHidden" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeHidden_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldBeHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeHidden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::NewProp_bShouldBeHidden_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventHideUI_Parms*)Obj)->bShouldBeHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::NewProp_bShouldBeHidden = { "bShouldBeHidden", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventHideUI_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::NewProp_bShouldBeHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBeHidden_MetaData), NewProp_bShouldBeHidden_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::NewProp_bShouldBeHidden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "HideUI", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::CitySampleUIComponent_eventHideUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::CitySampleUIComponent_eventHideUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_HideUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_HideUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execHideUI)
{
	P_GET_UBOOL(Z_Param_bShouldBeHidden);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideUI(Z_Param_bShouldBeHidden);
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function HideUI

// Begin Class UCitySampleUIComponent Function IsControlsOverlayActive
struct Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics
{
	struct CitySampleUIComponent_eventIsControlsOverlayActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether the controls overlay is displayed. @note It may be hidden separately. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the controls overlay is displayed. @note It may be hidden separately." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventIsControlsOverlayActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventIsControlsOverlayActive_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "IsControlsOverlayActive", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::CitySampleUIComponent_eventIsControlsOverlayActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::CitySampleUIComponent_eventIsControlsOverlayActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execIsControlsOverlayActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsControlsOverlayActive();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function IsControlsOverlayActive

// Begin Class UCitySampleUIComponent Function IsHidingUI
struct Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics
{
	struct CitySampleUIComponent_eventIsHidingUI_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether the base panel and all child panels should be hidden after a call to UCitySamplePanel::SetAllPanelsHidden.\n\x09 * @note\x09This does not reflect visibility of any panels handled through means other than UCitySamplePanel::SetAllPanelsHidden.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the base panel and all child panels should be hidden after a call to UCitySamplePanel::SetAllPanelsHidden.\n@note        This does not reflect visibility of any panels handled through means other than UCitySamplePanel::SetAllPanelsHidden." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventIsHidingUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventIsHidingUI_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "IsHidingUI", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::CitySampleUIComponent_eventIsHidingUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::CitySampleUIComponent_eventIsHidingUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execIsHidingUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHidingUI();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function IsHidingUI

// Begin Class UCitySampleUIComponent Function IsInteractPromptActive
struct Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics
{
	struct CitySampleUIComponent_eventIsInteractPromptActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether the interaction prompt is being displayed. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the interaction prompt is being displayed." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventIsInteractPromptActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventIsInteractPromptActive_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "IsInteractPromptActive", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::CitySampleUIComponent_eventIsInteractPromptActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::CitySampleUIComponent_eventIsInteractPromptActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execIsInteractPromptActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInteractPromptActive();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function IsInteractPromptActive

// Begin Class UCitySampleUIComponent Function IsOptionsMenuActive
struct Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics
{
	struct CitySampleUIComponent_eventIsOptionsMenuActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether the options menu is displayed. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the options menu is displayed." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventIsOptionsMenuActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventIsOptionsMenuActive_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "IsOptionsMenuActive", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::CitySampleUIComponent_eventIsOptionsMenuActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::CitySampleUIComponent_eventIsOptionsMenuActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execIsOptionsMenuActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOptionsMenuActive();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function IsOptionsMenuActive

// Begin Class UCitySampleUIComponent Function OnAddControlsOverlay
struct CitySampleUIComponent_eventOnAddControlsOverlay_Parms
{
	UCitySampleControlsOverlay* InControlsOverlay;
};
static FName NAME_UCitySampleUIComponent_OnAddControlsOverlay = FName(TEXT("OnAddControlsOverlay"));
void UCitySampleUIComponent::OnAddControlsOverlay(UCitySampleControlsOverlay* InControlsOverlay)
{
	CitySampleUIComponent_eventOnAddControlsOverlay_Parms Parms;
	Parms.InControlsOverlay=InControlsOverlay;
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleUIComponent_OnAddControlsOverlay),&Parms);
}
struct Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP event/function hook for UI changes when the controls overlay is displayed. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP event/function hook for UI changes when the controls overlay is displayed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InControlsOverlay_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlsOverlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay_Statics::NewProp_InControlsOverlay = { "InControlsOverlay", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventOnAddControlsOverlay_Parms, InControlsOverlay), Z_Construct_UClass_UCitySampleControlsOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InControlsOverlay_MetaData), NewProp_InControlsOverlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay_Statics::NewProp_InControlsOverlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "OnAddControlsOverlay", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay_Statics::PropPointers), sizeof(CitySampleUIComponent_eventOnAddControlsOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleUIComponent_eventOnAddControlsOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleUIComponent Function OnAddControlsOverlay

// Begin Class UCitySampleUIComponent Function OnAddInteractionPrompt
struct CitySampleUIComponent_eventOnAddInteractionPrompt_Parms
{
	UUserWidget* Prompt;
	const UCitySampleInteractionComponent* InteractionComp;
};
static FName NAME_UCitySampleUIComponent_OnAddInteractionPrompt = FName(TEXT("OnAddInteractionPrompt"));
void UCitySampleUIComponent::OnAddInteractionPrompt(UUserWidget* Prompt, const UCitySampleInteractionComponent* InteractionComp)
{
	CitySampleUIComponent_eventOnAddInteractionPrompt_Parms Parms;
	Parms.Prompt=Prompt;
	Parms.InteractionComp=InteractionComp;
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleUIComponent_OnAddInteractionPrompt),&Parms);
}
struct Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP event/function hook for UI changes when the interaction prompt is displayed. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP event/function hook for UI changes when the interaction prompt is displayed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Prompt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventOnAddInteractionPrompt_Parms, Prompt), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prompt_MetaData), NewProp_Prompt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventOnAddInteractionPrompt_Parms, InteractionComp), Z_Construct_UClass_UCitySampleInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::NewProp_Prompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::NewProp_InteractionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "OnAddInteractionPrompt", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::PropPointers), sizeof(CitySampleUIComponent_eventOnAddInteractionPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleUIComponent_eventOnAddInteractionPrompt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleUIComponent Function OnAddInteractionPrompt

// Begin Class UCitySampleUIComponent Function OnBasePanelAdded
static FName NAME_UCitySampleUIComponent_OnBasePanelAdded = FName(TEXT("OnBasePanelAdded"));
void UCitySampleUIComponent::OnBasePanelAdded()
{
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleUIComponent_OnBasePanelAdded),NULL);
}
struct Z_Construct_UFunction_UCitySampleUIComponent_OnBasePanelAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP event/function hook for UI changes when the base panel is displayed. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP event/function hook for UI changes when the base panel is displayed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_OnBasePanelAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "OnBasePanelAdded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_OnBasePanelAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_OnBasePanelAdded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_OnBasePanelAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_OnBasePanelAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleUIComponent Function OnBasePanelAdded

// Begin Class UCitySampleUIComponent Function OnCitySamplePanelsCreated
static FName NAME_UCitySampleUIComponent_OnCitySamplePanelsCreated = FName(TEXT("OnCitySamplePanelsCreated"));
void UCitySampleUIComponent::OnCitySamplePanelsCreated()
{
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleUIComponent_OnCitySamplePanelsCreated),NULL);
}
struct Z_Construct_UFunction_UCitySampleUIComponent_OnCitySamplePanelsCreated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP event/function hook for UI changes when the default CitySample panels have been created. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP event/function hook for UI changes when the default CitySample panels have been created." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_OnCitySamplePanelsCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "OnCitySamplePanelsCreated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_OnCitySamplePanelsCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_OnCitySamplePanelsCreated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_OnCitySamplePanelsCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_OnCitySamplePanelsCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleUIComponent Function OnCitySamplePanelsCreated

// Begin Class UCitySampleUIComponent Function OnInitialize
static FName NAME_UCitySampleUIComponent_OnInitialize = FName(TEXT("OnInitialize"));
void UCitySampleUIComponent::OnInitialize()
{
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleUIComponent_OnInitialize),NULL);
}
struct Z_Construct_UFunction_UCitySampleUIComponent_OnInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UActorComponent Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "OnInitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_OnInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_OnInitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_OnInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_OnInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleUIComponent Function OnInitialize

// Begin Class UCitySampleUIComponent Function ProcessInputAxis1D
struct Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics
{
	struct CitySampleUIComponent_eventProcessInputAxis1D_Parms
	{
		ECitySamplePanelInput Input;
		float ActionValue;
		float ElapsedTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CitySample UI|Input, ActionValue" },
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convenience method to pass input to the BasePanel, if it exists. */" },
#endif
		{ "CPP_Default_ElapsedTime", "0.000000" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience method to pass input to the BasePanel, if it exists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Input_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Input;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_Input_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventProcessInputAxis1D_Parms, Input), Z_Construct_UEnum_CitySample_ECitySamplePanelInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 113257980
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventProcessInputAxis1D_Parms, ActionValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionValue_MetaData), NewProp_ActionValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventProcessInputAxis1D_Parms, ElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTime_MetaData), NewProp_ElapsedTime_MetaData) };
void Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventProcessInputAxis1D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventProcessInputAxis1D_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_Input_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_ActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_ElapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "ProcessInputAxis1D", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::CitySampleUIComponent_eventProcessInputAxis1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::CitySampleUIComponent_eventProcessInputAxis1D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execProcessInputAxis1D)
{
	P_GET_ENUM_REF(ECitySamplePanelInput,Z_Param_Out_Input);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActionValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ElapsedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ProcessInputAxis1D((ECitySamplePanelInput&)(Z_Param_Out_Input),Z_Param_ActionValue,Z_Param_ElapsedTime);
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function ProcessInputAxis1D

// Begin Class UCitySampleUIComponent Function ProcessInputAxis2D
struct Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics
{
	struct CitySampleUIComponent_eventProcessInputAxis2D_Parms
	{
		ECitySamplePanelInput Input;
		FVector2D ActionValue;
		float ElapsedTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CitySample UI|Input, ActionValue" },
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convenience method to pass input to the BasePanel, if it exists. */" },
#endif
		{ "CPP_Default_ElapsedTime", "0.000000" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience method to pass input to the BasePanel, if it exists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Input_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_Input_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventProcessInputAxis2D_Parms, Input), Z_Construct_UEnum_CitySample_ECitySamplePanelInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 113257980
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventProcessInputAxis2D_Parms, ActionValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionValue_MetaData), NewProp_ActionValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventProcessInputAxis2D_Parms, ElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTime_MetaData), NewProp_ElapsedTime_MetaData) };
void Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventProcessInputAxis2D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventProcessInputAxis2D_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_Input_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_ActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_ElapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "ProcessInputAxis2D", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::CitySampleUIComponent_eventProcessInputAxis2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::CitySampleUIComponent_eventProcessInputAxis2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execProcessInputAxis2D)
{
	P_GET_ENUM_REF(ECitySamplePanelInput,Z_Param_Out_Input);
	P_GET_STRUCT(FVector2D,Z_Param_ActionValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ElapsedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ProcessInputAxis2D((ECitySamplePanelInput&)(Z_Param_Out_Input),Z_Param_ActionValue,Z_Param_ElapsedTime);
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function ProcessInputAxis2D

// Begin Class UCitySampleUIComponent Function ProcessInputBool
struct Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics
{
	struct CitySampleUIComponent_eventProcessInputBool_Parms
	{
		ECitySamplePanelInput Input;
		bool ActionValue;
		float ElapsedTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CitySample UI|Input, ActionValue" },
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convenience method to pass input to the BasePanel, if it exists. */" },
#endif
		{ "CPP_Default_ElapsedTime", "0.000000" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience method to pass input to the BasePanel, if it exists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Input_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Input;
	static void NewProp_ActionValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_Input_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventProcessInputBool_Parms, Input), Z_Construct_UEnum_CitySample_ECitySamplePanelInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 113257980
void Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_ActionValue_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventProcessInputBool_Parms*)Obj)->ActionValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventProcessInputBool_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_ActionValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionValue_MetaData), NewProp_ActionValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventProcessInputBool_Parms, ElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTime_MetaData), NewProp_ElapsedTime_MetaData) };
void Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventProcessInputBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventProcessInputBool_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_Input_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_ActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_ElapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "ProcessInputBool", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::CitySampleUIComponent_eventProcessInputBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::CitySampleUIComponent_eventProcessInputBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execProcessInputBool)
{
	P_GET_ENUM_REF(ECitySamplePanelInput,Z_Param_Out_Input);
	P_GET_UBOOL(Z_Param_ActionValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ElapsedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ProcessInputBool((ECitySamplePanelInput&)(Z_Param_Out_Input),Z_Param_ActionValue,Z_Param_ElapsedTime);
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function ProcessInputBool

// Begin Class UCitySampleUIComponent Function ReceiveOptionsMenuClose
struct CitySampleUIComponent_eventReceiveOptionsMenuClose_Parms
{
	UCitySampleMenu* InOptionsMenu;
};
static FName NAME_UCitySampleUIComponent_ReceiveOptionsMenuClose = FName(TEXT("ReceiveOptionsMenuClose"));
void UCitySampleUIComponent::ReceiveOptionsMenuClose(UCitySampleMenu* InOptionsMenu)
{
	CitySampleUIComponent_eventReceiveOptionsMenuClose_Parms Parms;
	Parms.InOptionsMenu=InOptionsMenu;
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleUIComponent_ReceiveOptionsMenuClose),&Parms);
}
struct Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP event/function hook for UI changes when the options menu is removed from display. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP event/function hook for UI changes when the options menu is removed from display." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOptionsMenu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOptionsMenu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose_Statics::NewProp_InOptionsMenu = { "InOptionsMenu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventReceiveOptionsMenuClose_Parms, InOptionsMenu), Z_Construct_UClass_UCitySampleMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOptionsMenu_MetaData), NewProp_InOptionsMenu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose_Statics::NewProp_InOptionsMenu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "ReceiveOptionsMenuClose", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose_Statics::PropPointers), sizeof(CitySampleUIComponent_eventReceiveOptionsMenuClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleUIComponent_eventReceiveOptionsMenuClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleUIComponent Function ReceiveOptionsMenuClose

// Begin Class UCitySampleUIComponent Function ReceiveOptionsMenuOpen
struct CitySampleUIComponent_eventReceiveOptionsMenuOpen_Parms
{
	UCitySampleMenu* InOptionsMenu;
};
static FName NAME_UCitySampleUIComponent_ReceiveOptionsMenuOpen = FName(TEXT("ReceiveOptionsMenuOpen"));
void UCitySampleUIComponent::ReceiveOptionsMenuOpen(UCitySampleMenu* InOptionsMenu)
{
	CitySampleUIComponent_eventReceiveOptionsMenuOpen_Parms Parms;
	Parms.InOptionsMenu=InOptionsMenu;
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleUIComponent_ReceiveOptionsMenuOpen),&Parms);
}
struct Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP event/function hook for UI changes when the options menu is displayed. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP event/function hook for UI changes when the options menu is displayed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOptionsMenu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOptionsMenu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen_Statics::NewProp_InOptionsMenu = { "InOptionsMenu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventReceiveOptionsMenuOpen_Parms, InOptionsMenu), Z_Construct_UClass_UCitySampleMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOptionsMenu_MetaData), NewProp_InOptionsMenu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen_Statics::NewProp_InOptionsMenu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "ReceiveOptionsMenuOpen", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen_Statics::PropPointers), sizeof(CitySampleUIComponent_eventReceiveOptionsMenuOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleUIComponent_eventReceiveOptionsMenuOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleUIComponent Function ReceiveOptionsMenuOpen

// Begin Class UCitySampleUIComponent Function ReceivePawnChanged
struct CitySampleUIComponent_eventReceivePawnChanged_Parms
{
	ACitySamplePlayerController* CitySamplePC;
	APawn* OldPawn;
	APawn* InPawn;
};
static FName NAME_UCitySampleUIComponent_ReceivePawnChanged = FName(TEXT("ReceivePawnChanged"));
void UCitySampleUIComponent::ReceivePawnChanged(ACitySamplePlayerController* CitySamplePC, APawn* OldPawn, APawn* InPawn)
{
	CitySampleUIComponent_eventReceivePawnChanged_Parms Parms;
	Parms.CitySamplePC=CitySamplePC;
	Parms.OldPawn=OldPawn;
	Parms.InPawn=InPawn;
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleUIComponent_ReceivePawnChanged),&Parms);
}
struct Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP event/function hook for UI changes when a new pawn is set. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP event/function hook for UI changes when a new pawn is set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CitySamplePC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::NewProp_CitySamplePC = { "CitySamplePC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventReceivePawnChanged_Parms, CitySamplePC), Z_Construct_UClass_ACitySamplePlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventReceivePawnChanged_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventReceivePawnChanged_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::NewProp_CitySamplePC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::NewProp_OldPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::NewProp_InPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "ReceivePawnChanged", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::PropPointers), sizeof(CitySampleUIComponent_eventReceivePawnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleUIComponent_eventReceivePawnChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleUIComponent Function ReceivePawnChanged

// Begin Class UCitySampleUIComponent Function ReceiveUpdateUI
struct CitySampleUIComponent_eventReceiveUpdateUI_Parms
{
	float DeltaTime;
};
static FName NAME_UCitySampleUIComponent_ReceiveUpdateUI = FName(TEXT("ReceiveUpdateUI"));
void UCitySampleUIComponent::ReceiveUpdateUI(const float DeltaTime)
{
	CitySampleUIComponent_eventReceiveUpdateUI_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	ProcessEvent(FindFunctionChecked(NAME_UCitySampleUIComponent_ReceiveUpdateUI),&Parms);
}
struct Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates the active UI hierarchy. Calls UpdatePanel on all child CitySample panels added to the base panel. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the active UI hierarchy. Calls UpdatePanel on all child CitySample panels added to the base panel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventReceiveUpdateUI_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "ReceiveUpdateUI", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI_Statics::PropPointers), sizeof(CitySampleUIComponent_eventReceiveUpdateUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleUIComponent_eventReceiveUpdateUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCitySampleUIComponent Function ReceiveUpdateUI

// Begin Class UCitySampleUIComponent Function RemoveControlsOverlay
struct Z_Construct_UFunction_UCitySampleUIComponent_RemoveControlsOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove the controls overlay from display. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove the controls overlay from display." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_RemoveControlsOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "RemoveControlsOverlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_RemoveControlsOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_RemoveControlsOverlay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_RemoveControlsOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_RemoveControlsOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execRemoveControlsOverlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveControlsOverlay();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function RemoveControlsOverlay

// Begin Class UCitySampleUIComponent Function RemoveInteractionPrompt
struct Z_Construct_UFunction_UCitySampleUIComponent_RemoveInteractionPrompt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes the interaction prompt from display. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the interaction prompt from display." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_RemoveInteractionPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "RemoveInteractionPrompt", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_RemoveInteractionPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_RemoveInteractionPrompt_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_RemoveInteractionPrompt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_RemoveInteractionPrompt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execRemoveInteractionPrompt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveInteractionPrompt();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function RemoveInteractionPrompt

// Begin Class UCitySampleUIComponent Function RequestControlsOverlayUpdate
struct Z_Construct_UFunction_UCitySampleUIComponent_RequestControlsOverlayUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_RequestControlsOverlayUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "RequestControlsOverlayUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_RequestControlsOverlayUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_RequestControlsOverlayUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_RequestControlsOverlayUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_RequestControlsOverlayUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execRequestControlsOverlayUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestControlsOverlayUpdate();
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function RequestControlsOverlayUpdate

// Begin Class UCitySampleUIComponent Function SetControlsFlavor
struct Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics
{
	struct CitySampleUIComponent_eventSetControlsFlavor_Parms
	{
		ECitySampleControlsFlavor NewControlsFlavor;
		ECitySampleControlsFlavor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the current controls flavor of the UI, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the current controls flavor of the UI, if applicable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewControlsFlavor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewControlsFlavor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewControlsFlavor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::NewProp_NewControlsFlavor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::NewProp_NewControlsFlavor = { "NewControlsFlavor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventSetControlsFlavor_Parms, NewControlsFlavor), Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewControlsFlavor_MetaData), NewProp_NewControlsFlavor_MetaData) }; // 2168222017
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventSetControlsFlavor_Parms, ReturnValue), Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(0, nullptr) }; // 2168222017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::NewProp_NewControlsFlavor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::NewProp_NewControlsFlavor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "SetControlsFlavor", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::CitySampleUIComponent_eventSetControlsFlavor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::CitySampleUIComponent_eventSetControlsFlavor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execSetControlsFlavor)
{
	P_GET_ENUM(ECitySampleControlsFlavor,Z_Param_NewControlsFlavor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECitySampleControlsFlavor*)Z_Param__Result=P_THIS->SetControlsFlavor(ECitySampleControlsFlavor(Z_Param_NewControlsFlavor));
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function SetControlsFlavor

// Begin Class UCitySampleUIComponent Function SetOptionsMenuActive
struct Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics
{
	struct CitySampleUIComponent_eventSetOptionsMenuActive_Parms
	{
		bool bSetActive;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Displays the options menu, if possible. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Displays the options menu, if possible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSetActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetActive;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::NewProp_bSetActive_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventSetOptionsMenuActive_Parms*)Obj)->bSetActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::NewProp_bSetActive = { "bSetActive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventSetOptionsMenuActive_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::NewProp_bSetActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetActive_MetaData), NewProp_bSetActive_MetaData) };
void Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventSetOptionsMenuActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventSetOptionsMenuActive_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::NewProp_bSetActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "SetOptionsMenuActive", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::CitySampleUIComponent_eventSetOptionsMenuActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::CitySampleUIComponent_eventSetOptionsMenuActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execSetOptionsMenuActive)
{
	P_GET_UBOOL(Z_Param_bSetActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetOptionsMenuActive(Z_Param_bSetActive);
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function SetOptionsMenuActive

// Begin Class UCitySampleUIComponent Function SetOptionsMenuEnabled
struct Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics
{
	struct CitySampleUIComponent_eventSetOptionsMenuEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Displays the options menu, if possible. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Displays the options menu, if possible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((CitySampleUIComponent_eventSetOptionsMenuEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponent_eventSetOptionsMenuEnabled_Parms), &Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "SetOptionsMenuEnabled", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::CitySampleUIComponent_eventSetOptionsMenuEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::CitySampleUIComponent_eventSetOptionsMenuEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execSetOptionsMenuEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOptionsMenuEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function SetOptionsMenuEnabled

// Begin Class UCitySampleUIComponent Function UpdateUI
struct Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics
{
	struct CitySampleUIComponent_eventUpdateUI_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CitySample UI" },
		{ "CPP_Default_DeltaTime", "0.000000" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponent_eventUpdateUI_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponent, nullptr, "UpdateUI", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::CitySampleUIComponent_eventUpdateUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::CitySampleUIComponent_eventUpdateUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCitySampleUIComponent::execUpdateUI)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateUI(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UCitySampleUIComponent Function UpdateUI

// Begin Class UCitySampleUIComponent
void UCitySampleUIComponent::StaticRegisterNativesUCitySampleUIComponent()
{
	UClass* Class = UCitySampleUIComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddControlsOverlay", &UCitySampleUIComponent::execAddControlsOverlay },
		{ "AddInteractionPrompt", &UCitySampleUIComponent::execAddInteractionPrompt },
		{ "GetBasePanel", &UCitySampleUIComponent::execGetBasePanel },
		{ "GetControlsFlavor", &UCitySampleUIComponent::execGetControlsFlavor },
		{ "GetControlsOverlay", &UCitySampleUIComponent::execGetControlsOverlay },
		{ "GetInteractionPrompt", &UCitySampleUIComponent::execGetInteractionPrompt },
		{ "GetOptionsMenu", &UCitySampleUIComponent::execGetOptionsMenu },
		{ "HideUI", &UCitySampleUIComponent::execHideUI },
		{ "IsControlsOverlayActive", &UCitySampleUIComponent::execIsControlsOverlayActive },
		{ "IsHidingUI", &UCitySampleUIComponent::execIsHidingUI },
		{ "IsInteractPromptActive", &UCitySampleUIComponent::execIsInteractPromptActive },
		{ "IsOptionsMenuActive", &UCitySampleUIComponent::execIsOptionsMenuActive },
		{ "ProcessInputAxis1D", &UCitySampleUIComponent::execProcessInputAxis1D },
		{ "ProcessInputAxis2D", &UCitySampleUIComponent::execProcessInputAxis2D },
		{ "ProcessInputBool", &UCitySampleUIComponent::execProcessInputBool },
		{ "RemoveControlsOverlay", &UCitySampleUIComponent::execRemoveControlsOverlay },
		{ "RemoveInteractionPrompt", &UCitySampleUIComponent::execRemoveInteractionPrompt },
		{ "RequestControlsOverlayUpdate", &UCitySampleUIComponent::execRequestControlsOverlayUpdate },
		{ "SetControlsFlavor", &UCitySampleUIComponent::execSetControlsFlavor },
		{ "SetOptionsMenuActive", &UCitySampleUIComponent::execSetOptionsMenuActive },
		{ "SetOptionsMenuEnabled", &UCitySampleUIComponent::execSetOptionsMenuEnabled },
		{ "UpdateUI", &UCitySampleUIComponent::execUpdateUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleUIComponent);
UClass* Z_Construct_UClass_UCitySampleUIComponent_NoRegister()
{
	return UCitySampleUIComponent::StaticClass();
}
struct Z_Construct_UClass_UCitySampleUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component for managing the UI associated with a CitySamplePlayerController.\n */" },
#endif
		{ "IncludePath", "UI/CitySampleUIComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component for managing the UI associated with a CitySamplePlayerController." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOptionsMenuOpen_MetaData[] = {
		{ "Category", "CitySample UI|Options Menu" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOptionsMenuClose_MetaData[] = {
		{ "Category", "CitySample UI|Options Menu" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHideUI_MetaData[] = {
		{ "Category", "CitySample UI|Hide UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePanelClass_MetaData[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default class used to create the base panel on BeginPlay. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default class used to create the base panel on BeginPlay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsMenuClass_MetaData[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default class used to create the options menu on BeginPlay. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default class used to create the options menu on BeginPlay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlsOverlayClass_MetaData[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default class used to create the controls overlay on BeginPlay. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default class used to create the controls overlay on BeginPlay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptWidgetClass_MetaData[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default class used to create the interaction prompt on BeginPlay. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default class used to create the interaction prompt on BeginPlay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlsFlavor_MetaData[] = {
		{ "Category", "CitySample UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePanel_MetaData[] = {
		{ "Category", "CitySample UI|Panels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Root CitySamplePanel instance. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root CitySamplePanel instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsMenu_MetaData[] = {
		{ "Category", "CitySample UI|Panels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Options menu CitySamplePanel instance. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Options menu CitySamplePanel instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlsOverlay_MetaData[] = {
		{ "Category", "CitySample UI|Panels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls overlay CitySamplePanel instance used to display context relevant input options. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls overlay CitySamplePanel instance used to display context relevant input options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptWidget_MetaData[] = {
		{ "Category", "CitySample UI|Panels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interaction prompt widget. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction prompt widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptionsMenuEnabled_MetaData[] = {
		{ "Category", "CitySample UI|Options Menu" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGameInputMappingContext_MetaData[] = {
		{ "Category", "CitySample UI|Input" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingPriority_MetaData[] = {
		{ "Category", "CitySample UI|Input" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpAction_MetaData[] = {
		{ "Category", "CitySample UI|Input|Actions" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownAction_MetaData[] = {
		{ "Category", "CitySample UI|Input|Actions" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftAction_MetaData[] = {
		{ "Category", "CitySample UI|Input|Actions" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightAction_MetaData[] = {
		{ "Category", "CitySample UI|Input|Actions" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TogglePrevAction_MetaData[] = {
		{ "Category", "CitySample UI|Input|Actions" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleNextAction_MetaData[] = {
		{ "Category", "CitySample UI|Input|Actions" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmAction_MetaData[] = {
		{ "Category", "CitySample UI|Input|Actions" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelAction_MetaData[] = {
		{ "Category", "CitySample UI|Input|Actions" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideUIAction_MetaData[] = {
		{ "Category", "CitySample UI|Input|Actions" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOptionsMenuOpen;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOptionsMenuClose;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHideUI;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BasePanelClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OptionsMenuClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControlsOverlayClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PromptWidgetClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControlsFlavor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlsFlavor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasePanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsMenu;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlsOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptWidget;
	static void NewProp_bOptionsMenuEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptionsMenuEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameInputMappingContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputMappingPriority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TogglePrevAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleNextAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfirmAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CancelAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HideUIAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleUIComponent_AddControlsOverlay, "AddControlsOverlay" }, // 4026478537
		{ &Z_Construct_UFunction_UCitySampleUIComponent_AddInteractionPrompt, "AddInteractionPrompt" }, // 3484216757
		{ &Z_Construct_UFunction_UCitySampleUIComponent_GetBasePanel, "GetBasePanel" }, // 2765931686
		{ &Z_Construct_UFunction_UCitySampleUIComponent_GetControlsFlavor, "GetControlsFlavor" }, // 1672108034
		{ &Z_Construct_UFunction_UCitySampleUIComponent_GetControlsOverlay, "GetControlsOverlay" }, // 2066244095
		{ &Z_Construct_UFunction_UCitySampleUIComponent_GetInteractionPrompt, "GetInteractionPrompt" }, // 4292501834
		{ &Z_Construct_UFunction_UCitySampleUIComponent_GetOptionsMenu, "GetOptionsMenu" }, // 3209577537
		{ &Z_Construct_UFunction_UCitySampleUIComponent_HideUI, "HideUI" }, // 3135487981
		{ &Z_Construct_UFunction_UCitySampleUIComponent_IsControlsOverlayActive, "IsControlsOverlayActive" }, // 4171837233
		{ &Z_Construct_UFunction_UCitySampleUIComponent_IsHidingUI, "IsHidingUI" }, // 2499960596
		{ &Z_Construct_UFunction_UCitySampleUIComponent_IsInteractPromptActive, "IsInteractPromptActive" }, // 42184348
		{ &Z_Construct_UFunction_UCitySampleUIComponent_IsOptionsMenuActive, "IsOptionsMenuActive" }, // 644878101
		{ &Z_Construct_UFunction_UCitySampleUIComponent_OnAddControlsOverlay, "OnAddControlsOverlay" }, // 3513496534
		{ &Z_Construct_UFunction_UCitySampleUIComponent_OnAddInteractionPrompt, "OnAddInteractionPrompt" }, // 1046141634
		{ &Z_Construct_UFunction_UCitySampleUIComponent_OnBasePanelAdded, "OnBasePanelAdded" }, // 3345574518
		{ &Z_Construct_UFunction_UCitySampleUIComponent_OnCitySamplePanelsCreated, "OnCitySamplePanelsCreated" }, // 2962035032
		{ &Z_Construct_UFunction_UCitySampleUIComponent_OnInitialize, "OnInitialize" }, // 2950380427
		{ &Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis1D, "ProcessInputAxis1D" }, // 3622167147
		{ &Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputAxis2D, "ProcessInputAxis2D" }, // 77632831
		{ &Z_Construct_UFunction_UCitySampleUIComponent_ProcessInputBool, "ProcessInputBool" }, // 2827636952
		{ &Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuClose, "ReceiveOptionsMenuClose" }, // 1331858055
		{ &Z_Construct_UFunction_UCitySampleUIComponent_ReceiveOptionsMenuOpen, "ReceiveOptionsMenuOpen" }, // 1587941422
		{ &Z_Construct_UFunction_UCitySampleUIComponent_ReceivePawnChanged, "ReceivePawnChanged" }, // 1613214015
		{ &Z_Construct_UFunction_UCitySampleUIComponent_ReceiveUpdateUI, "ReceiveUpdateUI" }, // 2978805762
		{ &Z_Construct_UFunction_UCitySampleUIComponent_RemoveControlsOverlay, "RemoveControlsOverlay" }, // 660407760
		{ &Z_Construct_UFunction_UCitySampleUIComponent_RemoveInteractionPrompt, "RemoveInteractionPrompt" }, // 3683232077
		{ &Z_Construct_UFunction_UCitySampleUIComponent_RequestControlsOverlayUpdate, "RequestControlsOverlayUpdate" }, // 3460933514
		{ &Z_Construct_UFunction_UCitySampleUIComponent_SetControlsFlavor, "SetControlsFlavor" }, // 4081180892
		{ &Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuActive, "SetOptionsMenuActive" }, // 4256843716
		{ &Z_Construct_UFunction_UCitySampleUIComponent_SetOptionsMenuEnabled, "SetOptionsMenuEnabled" }, // 689154437
		{ &Z_Construct_UFunction_UCitySampleUIComponent_UpdateUI, "UpdateUI" }, // 2619896525
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_OnOptionsMenuOpen = { "OnOptionsMenuOpen", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, OnOptionsMenuOpen), Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuOpen__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOptionsMenuOpen_MetaData), NewProp_OnOptionsMenuOpen_MetaData) }; // 1248720618
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_OnOptionsMenuClose = { "OnOptionsMenuClose", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, OnOptionsMenuClose), Z_Construct_UDelegateFunction_CitySample_CitySampleOnOptionsMenuClose__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOptionsMenuClose_MetaData), NewProp_OnOptionsMenuClose_MetaData) }; // 3379432026
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_OnHideUI = { "OnHideUI", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, OnHideUI), Z_Construct_UDelegateFunction_CitySample_CitySampleOnHideUI__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHideUI_MetaData), NewProp_OnHideUI_MetaData) }; // 2595384592
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_BasePanelClass = { "BasePanelClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, BasePanelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePanelClass_MetaData), NewProp_BasePanelClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_OptionsMenuClass = { "OptionsMenuClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, OptionsMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCitySampleMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsMenuClass_MetaData), NewProp_OptionsMenuClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ControlsOverlayClass = { "ControlsOverlayClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, ControlsOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCitySampleControlsOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlsOverlayClass_MetaData), NewProp_ControlsOverlayClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_PromptWidgetClass = { "PromptWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, PromptWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptWidgetClass_MetaData), NewProp_PromptWidgetClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ControlsFlavor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ControlsFlavor = { "ControlsFlavor", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, ControlsFlavor), Z_Construct_UEnum_CitySample_ECitySampleControlsFlavor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlsFlavor_MetaData), NewProp_ControlsFlavor_MetaData) }; // 2168222017
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_BasePanel = { "BasePanel", nullptr, (EPropertyFlags)0x00400000000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, BasePanel), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePanel_MetaData), NewProp_BasePanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_OptionsMenu = { "OptionsMenu", nullptr, (EPropertyFlags)0x00400000000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, OptionsMenu), Z_Construct_UClass_UCitySampleMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsMenu_MetaData), NewProp_OptionsMenu_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ControlsOverlay = { "ControlsOverlay", nullptr, (EPropertyFlags)0x00400000000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, ControlsOverlay), Z_Construct_UClass_UCitySampleControlsOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlsOverlay_MetaData), NewProp_ControlsOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_PromptWidget = { "PromptWidget", nullptr, (EPropertyFlags)0x00400000000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, PromptWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptWidget_MetaData), NewProp_PromptWidget_MetaData) };
void Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_bOptionsMenuEnabled_SetBit(void* Obj)
{
	((UCitySampleUIComponent*)Obj)->bOptionsMenuEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_bOptionsMenuEnabled = { "bOptionsMenuEnabled", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleUIComponent), &Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_bOptionsMenuEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptionsMenuEnabled_MetaData), NewProp_bOptionsMenuEnabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_InGameInputMappingContext = { "InGameInputMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, InGameInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGameInputMappingContext_MetaData), NewProp_InGameInputMappingContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_InputMappingPriority = { "InputMappingPriority", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, InputMappingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingPriority_MetaData), NewProp_InputMappingPriority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_UpAction = { "UpAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, UpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpAction_MetaData), NewProp_UpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_DownAction = { "DownAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, DownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownAction_MetaData), NewProp_DownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_LeftAction = { "LeftAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, LeftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftAction_MetaData), NewProp_LeftAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_RightAction = { "RightAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, RightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightAction_MetaData), NewProp_RightAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_TogglePrevAction = { "TogglePrevAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, TogglePrevAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TogglePrevAction_MetaData), NewProp_TogglePrevAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ToggleNextAction = { "ToggleNextAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, ToggleNextAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleNextAction_MetaData), NewProp_ToggleNextAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ConfirmAction = { "ConfirmAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, ConfirmAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmAction_MetaData), NewProp_ConfirmAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_CancelAction = { "CancelAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, CancelAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelAction_MetaData), NewProp_CancelAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_HideUIAction = { "HideUIAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleUIComponent, HideUIAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideUIAction_MetaData), NewProp_HideUIAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleUIComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_OnOptionsMenuOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_OnOptionsMenuClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_OnHideUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_BasePanelClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_OptionsMenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ControlsOverlayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_PromptWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ControlsFlavor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ControlsFlavor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_BasePanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_OptionsMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ControlsOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_PromptWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_bOptionsMenuEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_InGameInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_InputMappingPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_UpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_DownAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_LeftAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_RightAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_TogglePrevAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ToggleNextAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_ConfirmAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_CancelAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleUIComponent_Statics::NewProp_HideUIAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUIComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCitySampleUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleUIComponent_Statics::ClassParams = {
	&UCitySampleUIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCitySampleUIComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUIComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleUIComponent()
{
	if (!Z_Registration_Info_UClass_UCitySampleUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleUIComponent.OuterSingleton, Z_Construct_UClass_UCitySampleUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleUIComponent.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleUIComponent>()
{
	return UCitySampleUIComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleUIComponent);
UCitySampleUIComponent::~UCitySampleUIComponent() {}
// End Class UCitySampleUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleUIComponent, UCitySampleUIComponent::StaticClass, TEXT("UCitySampleUIComponent"), &Z_Registration_Info_UClass_UCitySampleUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleUIComponent), 3748444299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_1739248142(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
