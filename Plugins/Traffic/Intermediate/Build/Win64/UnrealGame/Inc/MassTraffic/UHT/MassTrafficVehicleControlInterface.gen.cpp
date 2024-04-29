// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehicleControlInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleControlInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleControlInterface();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleControlInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Interface UMassTrafficVehicleControlInterface Function OnParkedVehicleSpawned
void IMassTrafficVehicleControlInterface::OnParkedVehicleSpawned()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnParkedVehicleSpawned instead.");
}
static FName NAME_UMassTrafficVehicleControlInterface_OnParkedVehicleSpawned = FName(TEXT("OnParkedVehicleSpawned"));
void IMassTrafficVehicleControlInterface::Execute_OnParkedVehicleSpawned(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMassTrafficVehicleControlInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMassTrafficVehicleControlInterface_OnParkedVehicleSpawned);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMassTrafficVehicleControlInterface*)(O->GetNativeInterfaceAddress(UMassTrafficVehicleControlInterface::StaticClass())))
	{
		I->OnParkedVehicleSpawned_Implementation();
	}
}
struct Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnParkedVehicleSpawned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Traffic Vehicle" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleControlInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnParkedVehicleSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficVehicleControlInterface, nullptr, "OnParkedVehicleSpawned", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnParkedVehicleSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnParkedVehicleSpawned_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnParkedVehicleSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnParkedVehicleSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMassTrafficVehicleControlInterface::execOnParkedVehicleSpawned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnParkedVehicleSpawned_Implementation();
	P_NATIVE_END;
}
// End Interface UMassTrafficVehicleControlInterface Function OnParkedVehicleSpawned

// Begin Interface UMassTrafficVehicleControlInterface Function OnTrafficVehicleSpawned
void IMassTrafficVehicleControlInterface::OnTrafficVehicleSpawned()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTrafficVehicleSpawned instead.");
}
static FName NAME_UMassTrafficVehicleControlInterface_OnTrafficVehicleSpawned = FName(TEXT("OnTrafficVehicleSpawned"));
void IMassTrafficVehicleControlInterface::Execute_OnTrafficVehicleSpawned(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMassTrafficVehicleControlInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMassTrafficVehicleControlInterface_OnTrafficVehicleSpawned);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMassTrafficVehicleControlInterface*)(O->GetNativeInterfaceAddress(UMassTrafficVehicleControlInterface::StaticClass())))
	{
		I->OnTrafficVehicleSpawned_Implementation();
	}
}
struct Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnTrafficVehicleSpawned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Traffic Vehicle" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleControlInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnTrafficVehicleSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficVehicleControlInterface, nullptr, "OnTrafficVehicleSpawned", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnTrafficVehicleSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnTrafficVehicleSpawned_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnTrafficVehicleSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnTrafficVehicleSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMassTrafficVehicleControlInterface::execOnTrafficVehicleSpawned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTrafficVehicleSpawned_Implementation();
	P_NATIVE_END;
}
// End Interface UMassTrafficVehicleControlInterface Function OnTrafficVehicleSpawned

// Begin Interface UMassTrafficVehicleControlInterface Function SetVehicleInputs
struct MassTrafficVehicleControlInterface_eventSetVehicleInputs_Parms
{
	float Throttle;
	float Brake;
	bool bHandBrake;
	float Steering;
	bool bSetSteering;
};
void IMassTrafficVehicleControlInterface::SetVehicleInputs(const float Throttle, const float Brake, bool bHandBrake, const float Steering, bool bSetSteering)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetVehicleInputs instead.");
}
static FName NAME_UMassTrafficVehicleControlInterface_SetVehicleInputs = FName(TEXT("SetVehicleInputs"));
void IMassTrafficVehicleControlInterface::Execute_SetVehicleInputs(UObject* O, const float Throttle, const float Brake, bool bHandBrake, const float Steering, bool bSetSteering)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMassTrafficVehicleControlInterface::StaticClass()));
	MassTrafficVehicleControlInterface_eventSetVehicleInputs_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMassTrafficVehicleControlInterface_SetVehicleInputs);
	if (Func)
	{
		Parms.Throttle=Throttle;
		Parms.Brake=Brake;
		Parms.bHandBrake=bHandBrake;
		Parms.Steering=Steering;
		Parms.bSetSteering=bSetSteering;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMassTrafficVehicleControlInterface*)(O->GetNativeInterfaceAddress(UMassTrafficVehicleControlInterface::StaticClass())))
	{
		I->SetVehicleInputs_Implementation(Throttle,Brake,bHandBrake,Steering,bSetSteering);
	}
}
struct Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Traffic Vehicle" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleControlInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brake_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandBrake_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steering_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetSteering_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Throttle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brake;
	static void NewProp_bHandBrake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandBrake;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Steering;
	static void NewProp_bSetSteering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetSteering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficVehicleControlInterface_eventSetVehicleInputs_Parms, Throttle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Throttle_MetaData), NewProp_Throttle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_Brake = { "Brake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficVehicleControlInterface_eventSetVehicleInputs_Parms, Brake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brake_MetaData), NewProp_Brake_MetaData) };
void Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_bHandBrake_SetBit(void* Obj)
{
	((MassTrafficVehicleControlInterface_eventSetVehicleInputs_Parms*)Obj)->bHandBrake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_bHandBrake = { "bHandBrake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficVehicleControlInterface_eventSetVehicleInputs_Parms), &Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_bHandBrake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandBrake_MetaData), NewProp_bHandBrake_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficVehicleControlInterface_eventSetVehicleInputs_Parms, Steering), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steering_MetaData), NewProp_Steering_MetaData) };
void Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_bSetSteering_SetBit(void* Obj)
{
	((MassTrafficVehicleControlInterface_eventSetVehicleInputs_Parms*)Obj)->bSetSteering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_bSetSteering = { "bSetSteering", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficVehicleControlInterface_eventSetVehicleInputs_Parms), &Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_bSetSteering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetSteering_MetaData), NewProp_bSetSteering_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_Throttle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_Brake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_bHandBrake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_Steering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::NewProp_bSetSteering,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficVehicleControlInterface, nullptr, "SetVehicleInputs", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::PropPointers), sizeof(MassTrafficVehicleControlInterface_eventSetVehicleInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(MassTrafficVehicleControlInterface_eventSetVehicleInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMassTrafficVehicleControlInterface::execSetVehicleInputs)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Throttle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Brake);
	P_GET_UBOOL(Z_Param_bHandBrake);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Steering);
	P_GET_UBOOL(Z_Param_bSetSteering);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVehicleInputs_Implementation(Z_Param_Throttle,Z_Param_Brake,Z_Param_bHandBrake,Z_Param_Steering,Z_Param_bSetSteering);
	P_NATIVE_END;
}
// End Interface UMassTrafficVehicleControlInterface Function SetVehicleInputs

// Begin Interface UMassTrafficVehicleControlInterface
void UMassTrafficVehicleControlInterface::StaticRegisterNativesUMassTrafficVehicleControlInterface()
{
	UClass* Class = UMassTrafficVehicleControlInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnParkedVehicleSpawned", &IMassTrafficVehicleControlInterface::execOnParkedVehicleSpawned },
		{ "OnTrafficVehicleSpawned", &IMassTrafficVehicleControlInterface::execOnTrafficVehicleSpawned },
		{ "SetVehicleInputs", &IMassTrafficVehicleControlInterface::execSetVehicleInputs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleControlInterface);
UClass* Z_Construct_UClass_UMassTrafficVehicleControlInterface_NoRegister()
{
	return UMassTrafficVehicleControlInterface::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleControlInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficVehicleControlInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnParkedVehicleSpawned, "OnParkedVehicleSpawned" }, // 2025311809
		{ &Z_Construct_UFunction_UMassTrafficVehicleControlInterface_OnTrafficVehicleSpawned, "OnTrafficVehicleSpawned" }, // 3638810233
		{ &Z_Construct_UFunction_UMassTrafficVehicleControlInterface_SetVehicleInputs, "SetVehicleInputs" }, // 1853139773
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMassTrafficVehicleControlInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleControlInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleControlInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleControlInterface_Statics::ClassParams = {
	&UMassTrafficVehicleControlInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleControlInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleControlInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficVehicleControlInterface()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleControlInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleControlInterface.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleControlInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleControlInterface.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleControlInterface>()
{
	return UMassTrafficVehicleControlInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleControlInterface);
UMassTrafficVehicleControlInterface::~UMassTrafficVehicleControlInterface() {}
// End Interface UMassTrafficVehicleControlInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleControlInterface, UMassTrafficVehicleControlInterface::StaticClass, TEXT("UMassTrafficVehicleControlInterface"), &Z_Registration_Info_UClass_UMassTrafficVehicleControlInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleControlInterface), 3851298004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_3957899533(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
