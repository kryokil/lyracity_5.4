// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Util/ICitySampleInputInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICitySampleInputInterface() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInputInterface();
CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInputInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Interface UCitySampleInputInterface Function AddInputContext
struct CitySampleInputInterface_eventAddInputContext_Parms
{
	TScriptInterface<IEnhancedInputSubsystemInterface> SubsystemInterface;
};
void ICitySampleInputInterface::AddInputContext(TScriptInterface<IEnhancedInputSubsystemInterface> const& SubsystemInterface)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddInputContext instead.");
}
static FName NAME_UCitySampleInputInterface_AddInputContext = FName(TEXT("AddInputContext"));
void ICitySampleInputInterface::Execute_AddInputContext(UObject* O, TScriptInterface<IEnhancedInputSubsystemInterface> const& SubsystemInterface)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCitySampleInputInterface::StaticClass()));
	CitySampleInputInterface_eventAddInputContext_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCitySampleInputInterface_AddInputContext);
	if (Func)
	{
		Parms.SubsystemInterface=SubsystemInterface;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICitySampleInputInterface*)(O->GetNativeInterfaceAddress(UCitySampleInputInterface::StaticClass())))
	{
		I->AddInputContext_Implementation(SubsystemInterface);
	}
}
struct Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called to add any necessary inputs. */" },
#endif
		{ "ModuleRelativePath", "Public/Util/ICitySampleInputInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to add any necessary inputs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubsystemInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_SubsystemInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext_Statics::NewProp_SubsystemInterface = { "SubsystemInterface", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInputInterface_eventAddInputContext_Parms, SubsystemInterface), Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubsystemInterface_MetaData), NewProp_SubsystemInterface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext_Statics::NewProp_SubsystemInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInputInterface, nullptr, "AddInputContext", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext_Statics::PropPointers), sizeof(CitySampleInputInterface_eventAddInputContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleInputInterface_eventAddInputContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICitySampleInputInterface::execAddInputContext)
{
	P_GET_TINTERFACE_REF(IEnhancedInputSubsystemInterface,Z_Param_Out_SubsystemInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInputContext_Implementation(Z_Param_Out_SubsystemInterface);
	P_NATIVE_END;
}
// End Interface UCitySampleInputInterface Function AddInputContext

// Begin Interface UCitySampleInputInterface Function RemoveInputContext
struct CitySampleInputInterface_eventRemoveInputContext_Parms
{
	TScriptInterface<IEnhancedInputSubsystemInterface> SubsystemInterface;
};
void ICitySampleInputInterface::RemoveInputContext(TScriptInterface<IEnhancedInputSubsystemInterface> const& SubsystemInterface)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveInputContext instead.");
}
static FName NAME_UCitySampleInputInterface_RemoveInputContext = FName(TEXT("RemoveInputContext"));
void ICitySampleInputInterface::Execute_RemoveInputContext(UObject* O, TScriptInterface<IEnhancedInputSubsystemInterface> const& SubsystemInterface)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCitySampleInputInterface::StaticClass()));
	CitySampleInputInterface_eventRemoveInputContext_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCitySampleInputInterface_RemoveInputContext);
	if (Func)
	{
		Parms.SubsystemInterface=SubsystemInterface;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICitySampleInputInterface*)(O->GetNativeInterfaceAddress(UCitySampleInputInterface::StaticClass())))
	{
		I->RemoveInputContext_Implementation(SubsystemInterface);
	}
}
struct Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called to remove any necessary inputs. */" },
#endif
		{ "ModuleRelativePath", "Public/Util/ICitySampleInputInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to remove any necessary inputs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubsystemInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_SubsystemInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext_Statics::NewProp_SubsystemInterface = { "SubsystemInterface", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleInputInterface_eventRemoveInputContext_Parms, SubsystemInterface), Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubsystemInterface_MetaData), NewProp_SubsystemInterface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext_Statics::NewProp_SubsystemInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleInputInterface, nullptr, "RemoveInputContext", nullptr, nullptr, Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext_Statics::PropPointers), sizeof(CitySampleInputInterface_eventRemoveInputContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(CitySampleInputInterface_eventRemoveInputContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICitySampleInputInterface::execRemoveInputContext)
{
	P_GET_TINTERFACE_REF(IEnhancedInputSubsystemInterface,Z_Param_Out_SubsystemInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveInputContext_Implementation(Z_Param_Out_SubsystemInterface);
	P_NATIVE_END;
}
// End Interface UCitySampleInputInterface Function RemoveInputContext

// Begin Interface UCitySampleInputInterface
void UCitySampleInputInterface::StaticRegisterNativesUCitySampleInputInterface()
{
	UClass* Class = UCitySampleInputInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddInputContext", &ICitySampleInputInterface::execAddInputContext },
		{ "RemoveInputContext", &ICitySampleInputInterface::execRemoveInputContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleInputInterface);
UClass* Z_Construct_UClass_UCitySampleInputInterface_NoRegister()
{
	return UCitySampleInputInterface::StaticClass();
}
struct Z_Construct_UClass_UCitySampleInputInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Util/ICitySampleInputInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleInputInterface_AddInputContext, "AddInputContext" }, // 3923471659
		{ &Z_Construct_UFunction_UCitySampleInputInterface_RemoveInputContext, "RemoveInputContext" }, // 3857738280
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICitySampleInputInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCitySampleInputInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInputInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleInputInterface_Statics::ClassParams = {
	&UCitySampleInputInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleInputInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleInputInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCitySampleInputInterface()
{
	if (!Z_Registration_Info_UClass_UCitySampleInputInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleInputInterface.OuterSingleton, Z_Construct_UClass_UCitySampleInputInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCitySampleInputInterface.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleInputInterface>()
{
	return UCitySampleInputInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleInputInterface);
UCitySampleInputInterface::~UCitySampleInputInterface() {}
// End Interface UCitySampleInputInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleInputInterface, UCitySampleInputInterface::StaticClass, TEXT("UCitySampleInputInterface"), &Z_Registration_Info_UClass_UCitySampleInputInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleInputInterface), 914811201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_1626711561(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
