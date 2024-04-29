// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/UtilityWidgets/TextureDeDupeWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureDeDupeWidget() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UTextureDeDupeWidget();
CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UTextureDeDupeWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References

// Begin Class UTextureDeDupeWidget Function FindDuplicateCRCTextures
struct Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics
{
	struct TextureDeDupeWidget_eventFindDuplicateCRCTextures_Parms
	{
		bool bMustBeInCook;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bMustBeInCook", "true" },
		{ "ModuleRelativePath", "Public/UtilityWidgets/TextureDeDupeWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMustBeInCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustBeInCook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::NewProp_bMustBeInCook_SetBit(void* Obj)
{
	((TextureDeDupeWidget_eventFindDuplicateCRCTextures_Parms*)Obj)->bMustBeInCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::NewProp_bMustBeInCook = { "bMustBeInCook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TextureDeDupeWidget_eventFindDuplicateCRCTextures_Parms), &Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::NewProp_bMustBeInCook_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::NewProp_bMustBeInCook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureDeDupeWidget, nullptr, "FindDuplicateCRCTextures", nullptr, nullptr, Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::TextureDeDupeWidget_eventFindDuplicateCRCTextures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::TextureDeDupeWidget_eventFindDuplicateCRCTextures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextureDeDupeWidget::execFindDuplicateCRCTextures)
{
	P_GET_UBOOL(Z_Param_bMustBeInCook);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindDuplicateCRCTextures(Z_Param_bMustBeInCook);
	P_NATIVE_END;
}
// End Class UTextureDeDupeWidget Function FindDuplicateCRCTextures

// Begin Class UTextureDeDupeWidget Function FindDuplicateNamedTextures
struct Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics
{
	struct TextureDeDupeWidget_eventFindDuplicateNamedTextures_Parms
	{
		bool bMustBeInCook;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bMustBeInCook", "true" },
		{ "ModuleRelativePath", "Public/UtilityWidgets/TextureDeDupeWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMustBeInCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustBeInCook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::NewProp_bMustBeInCook_SetBit(void* Obj)
{
	((TextureDeDupeWidget_eventFindDuplicateNamedTextures_Parms*)Obj)->bMustBeInCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::NewProp_bMustBeInCook = { "bMustBeInCook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TextureDeDupeWidget_eventFindDuplicateNamedTextures_Parms), &Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::NewProp_bMustBeInCook_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::NewProp_bMustBeInCook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureDeDupeWidget, nullptr, "FindDuplicateNamedTextures", nullptr, nullptr, Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::TextureDeDupeWidget_eventFindDuplicateNamedTextures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::TextureDeDupeWidget_eventFindDuplicateNamedTextures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextureDeDupeWidget::execFindDuplicateNamedTextures)
{
	P_GET_UBOOL(Z_Param_bMustBeInCook);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindDuplicateNamedTextures(Z_Param_bMustBeInCook);
	P_NATIVE_END;
}
// End Class UTextureDeDupeWidget Function FindDuplicateNamedTextures

// Begin Class UTextureDeDupeWidget
void UTextureDeDupeWidget::StaticRegisterNativesUTextureDeDupeWidget()
{
	UClass* Class = UTextureDeDupeWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindDuplicateCRCTextures", &UTextureDeDupeWidget::execFindDuplicateCRCTextures },
		{ "FindDuplicateNamedTextures", &UTextureDeDupeWidget::execFindDuplicateNamedTextures },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureDeDupeWidget);
UClass* Z_Construct_UClass_UTextureDeDupeWidget_NoRegister()
{
	return UTextureDeDupeWidget::StaticClass();
}
struct Z_Construct_UClass_UTextureDeDupeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UtilityWidgets/TextureDeDupeWidget.h" },
		{ "ModuleRelativePath", "Public/UtilityWidgets/TextureDeDupeWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateCRCTextures, "FindDuplicateCRCTextures" }, // 657340901
		{ &Z_Construct_UFunction_UTextureDeDupeWidget_FindDuplicateNamedTextures, "FindDuplicateNamedTextures" }, // 3500338158
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureDeDupeWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTextureDeDupeWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureDeDupeWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureDeDupeWidget_Statics::ClassParams = {
	&UTextureDeDupeWidget::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureDeDupeWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureDeDupeWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureDeDupeWidget()
{
	if (!Z_Registration_Info_UClass_UTextureDeDupeWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureDeDupeWidget.OuterSingleton, Z_Construct_UClass_UTextureDeDupeWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureDeDupeWidget.OuterSingleton;
}
template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UTextureDeDupeWidget>()
{
	return UTextureDeDupeWidget::StaticClass();
}
UTextureDeDupeWidget::UTextureDeDupeWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureDeDupeWidget);
UTextureDeDupeWidget::~UTextureDeDupeWidget() {}
// End Class UTextureDeDupeWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_UtilityWidgets_TextureDeDupeWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureDeDupeWidget, UTextureDeDupeWidget::StaticClass, TEXT("UTextureDeDupeWidget"), &Z_Registration_Info_UClass_UTextureDeDupeWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureDeDupeWidget), 3100205245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_UtilityWidgets_TextureDeDupeWidget_h_3681176527(TEXT("/Script/CitySampleEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_UtilityWidgets_TextureDeDupeWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_UtilityWidgets_TextureDeDupeWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
