// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySampleUIComponentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleUIComponentInterface() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleUIComponent_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleUIComponentInterface();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleUIComponentInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Interface UCitySampleUIComponentInterface Function AddOverlay
struct CitySampleUIComponentInterface_eventAddOverlay_Parms
{
	UCitySampleUIComponent* CitySampleUI;
	bool bSkipAnimation;
	UCitySamplePanel* ReturnValue;

	/** Constructor, initializes return property only **/
	CitySampleUIComponentInterface_eventAddOverlay_Parms()
		: ReturnValue(NULL)
	{
	}
};
UCitySamplePanel* ICitySampleUIComponentInterface::AddOverlay(UCitySampleUIComponent* CitySampleUI, bool bSkipAnimation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddOverlay instead.");
	CitySampleUIComponentInterface_eventAddOverlay_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCitySampleUIComponentInterface_AddOverlay = FName(TEXT("AddOverlay"));
UCitySamplePanel* ICitySampleUIComponentInterface::Execute_AddOverlay(UObject* O, UCitySampleUIComponent* CitySampleUI, bool bSkipAnimation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCitySampleUIComponentInterface::StaticClass()));
	CitySampleUIComponentInterface_eventAddOverlay_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCitySampleUIComponentInterface_AddOverlay);
	if (Func)
	{
		Parms.CitySampleUI=CitySampleUI;
		Parms.bSkipAnimation=bSkipAnimation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICitySampleUIComponentInterface*)(O->GetNativeInterfaceAddress(UCitySampleUIComponentInterface::StaticClass())))
	{
		Parms.ReturnValue = I->AddOverlay_Implementation(CitySampleUI,bSkipAnimation);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook for adding an overlay to the CitySampleUI component when a pawn is set. */" },
#endif
		{ "CPP_Default_bSkipAnimation", "false" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponentInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for adding an overlay to the CitySampleUI component when a pawn is set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CitySampleUI_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CitySampleUI;
	static void NewProp_bSkipAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::NewProp_CitySampleUI = { "CitySampleUI", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponentInterface_eventAddOverlay_Parms, CitySampleUI), Z_Construct_UClass_UCitySampleUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CitySampleUI_MetaData), NewProp_CitySampleUI_MetaData) };
void Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
{
	((CitySampleUIComponentInterface_eventAddOverlay_Parms*)Obj)->bSkipAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponentInterface_eventAddOverlay_Parms), &Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipAnimation_MetaData), NewProp_bSkipAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponentInterface_eventAddOverlay_Parms, ReturnValue), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::NewProp_CitySampleUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::NewProp_bSkipAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponentInterface, nullptr, "AddOverlay", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::PropPointers), sizeof(CitySampleUIComponentInterface_eventAddOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleUIComponentInterface_eventAddOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICitySampleUIComponentInterface::execAddOverlay)
{
	P_GET_OBJECT(UCitySampleUIComponent,Z_Param_CitySampleUI);
	P_GET_UBOOL(Z_Param_bSkipAnimation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCitySamplePanel**)Z_Param__Result=P_THIS->AddOverlay_Implementation(Z_Param_CitySampleUI,Z_Param_bSkipAnimation);
	P_NATIVE_END;
}
// End Interface UCitySampleUIComponentInterface Function AddOverlay

// Begin Interface UCitySampleUIComponentInterface Function RemoveOverlay
struct CitySampleUIComponentInterface_eventRemoveOverlay_Parms
{
	UCitySampleUIComponent* CitySampleUI;
	bool bSkipAnimation;
};
void ICitySampleUIComponentInterface::RemoveOverlay(UCitySampleUIComponent* CitySampleUI, bool bSkipAnimation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveOverlay instead.");
}
static FName NAME_UCitySampleUIComponentInterface_RemoveOverlay = FName(TEXT("RemoveOverlay"));
void ICitySampleUIComponentInterface::Execute_RemoveOverlay(UObject* O, UCitySampleUIComponent* CitySampleUI, bool bSkipAnimation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCitySampleUIComponentInterface::StaticClass()));
	CitySampleUIComponentInterface_eventRemoveOverlay_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCitySampleUIComponentInterface_RemoveOverlay);
	if (Func)
	{
		Parms.CitySampleUI=CitySampleUI;
		Parms.bSkipAnimation=bSkipAnimation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICitySampleUIComponentInterface*)(O->GetNativeInterfaceAddress(UCitySampleUIComponentInterface::StaticClass())))
	{
		I->RemoveOverlay_Implementation(CitySampleUI,bSkipAnimation);
	}
}
struct Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook for removing an overlay from the CitySampleUI component when a pawn is set. */" },
#endif
		{ "CPP_Default_bSkipAnimation", "false" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponentInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for removing an overlay from the CitySampleUI component when a pawn is set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CitySampleUI_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CitySampleUI;
	static void NewProp_bSkipAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::NewProp_CitySampleUI = { "CitySampleUI", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleUIComponentInterface_eventRemoveOverlay_Parms, CitySampleUI), Z_Construct_UClass_UCitySampleUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CitySampleUI_MetaData), NewProp_CitySampleUI_MetaData) };
void Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
{
	((CitySampleUIComponentInterface_eventRemoveOverlay_Parms*)Obj)->bSkipAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleUIComponentInterface_eventRemoveOverlay_Parms), &Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipAnimation_MetaData), NewProp_bSkipAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::NewProp_CitySampleUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::NewProp_bSkipAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleUIComponentInterface, nullptr, "RemoveOverlay", nullptr, nullptr, Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::PropPointers), sizeof(CitySampleUIComponentInterface_eventRemoveOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleUIComponentInterface_eventRemoveOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICitySampleUIComponentInterface::execRemoveOverlay)
{
	P_GET_OBJECT(UCitySampleUIComponent,Z_Param_CitySampleUI);
	P_GET_UBOOL(Z_Param_bSkipAnimation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveOverlay_Implementation(Z_Param_CitySampleUI,Z_Param_bSkipAnimation);
	P_NATIVE_END;
}
// End Interface UCitySampleUIComponentInterface Function RemoveOverlay

// Begin Interface UCitySampleUIComponentInterface
void UCitySampleUIComponentInterface::StaticRegisterNativesUCitySampleUIComponentInterface()
{
	UClass* Class = UCitySampleUIComponentInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOverlay", &ICitySampleUIComponentInterface::execAddOverlay },
		{ "RemoveOverlay", &ICitySampleUIComponentInterface::execRemoveOverlay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleUIComponentInterface);
UClass* Z_Construct_UClass_UCitySampleUIComponentInterface_NoRegister()
{
	return UCitySampleUIComponentInterface::StaticClass();
}
struct Z_Construct_UClass_UCitySampleUIComponentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleUIComponentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleUIComponentInterface_AddOverlay, "AddOverlay" }, // 4203751199
		{ &Z_Construct_UFunction_UCitySampleUIComponentInterface_RemoveOverlay, "RemoveOverlay" }, // 2885154850
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICitySampleUIComponentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCitySampleUIComponentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUIComponentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleUIComponentInterface_Statics::ClassParams = {
	&UCitySampleUIComponentInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleUIComponentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleUIComponentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleUIComponentInterface()
{
	if (!Z_Registration_Info_UClass_UCitySampleUIComponentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleUIComponentInterface.OuterSingleton, Z_Construct_UClass_UCitySampleUIComponentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleUIComponentInterface.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleUIComponentInterface>()
{
	return UCitySampleUIComponentInterface::StaticClass();
}
UCitySampleUIComponentInterface::UCitySampleUIComponentInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleUIComponentInterface);
UCitySampleUIComponentInterface::~UCitySampleUIComponentInterface() {}
// End Interface UCitySampleUIComponentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleUIComponentInterface, UCitySampleUIComponentInterface::StaticClass, TEXT("UCitySampleUIComponentInterface"), &Z_Registration_Info_UClass_UCitySampleUIComponentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleUIComponentInterface), 2375346945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_436300107(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
