// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehicleInterface.h"
#include "MassTraffic/Public/MassTrafficDrivers.h"
#include "MassTraffic/Public/MassTrafficInstancePlaybackHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleInterface();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleInterface_NoRegister();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriverTypeData();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Interface UMassTrafficVehicleInterface Function GetDamageState
struct MassTrafficVehicleInterface_eventGetDamageState_Parms
{
	EMassTrafficVehicleDamageState ReturnValue;

	/** Constructor, initializes return property only **/
	MassTrafficVehicleInterface_eventGetDamageState_Parms()
		: ReturnValue((EMassTrafficVehicleDamageState)0)
	{
	}
};
EMassTrafficVehicleDamageState IMassTrafficVehicleInterface::GetDamageState() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDamageState instead.");
	MassTrafficVehicleInterface_eventGetDamageState_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMassTrafficVehicleInterface_GetDamageState = FName(TEXT("GetDamageState"));
EMassTrafficVehicleDamageState IMassTrafficVehicleInterface::Execute_GetDamageState(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMassTrafficVehicleInterface::StaticClass()));
	MassTrafficVehicleInterface_eventGetDamageState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMassTrafficVehicleInterface_GetDamageState);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMassTrafficVehicleInterface*)(O->GetNativeInterfaceAddress(UMassTrafficVehicleInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDamageState_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Traffic Vehicle" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficVehicleInterface_eventGetDamageState_Parms, ReturnValue), Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState, METADATA_PARAMS(0, nullptr) }; // 1159027513
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficVehicleInterface, nullptr, "GetDamageState", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::PropPointers), sizeof(MassTrafficVehicleInterface_eventGetDamageState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::Function_MetaDataParams) };
static_assert(sizeof(MassTrafficVehicleInterface_eventGetDamageState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMassTrafficVehicleInterface::execGetDamageState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMassTrafficVehicleDamageState*)Z_Param__Result=P_THIS->GetDamageState_Implementation();
	P_NATIVE_END;
}
// End Interface UMassTrafficVehicleInterface Function GetDamageState

// Begin Interface UMassTrafficVehicleInterface Function OnDriverRemoved
struct MassTrafficVehicleInterface_eventOnDriverRemoved_Parms
{
	FMassTrafficDriverTypeData DriverTypeData;
	FMassTrafficInstancePlaybackData DriverInstanceData;
	FTransform DriverTransformWorldSpace;
};
void IMassTrafficVehicleInterface::OnDriverRemoved(FMassTrafficDriverTypeData const& DriverTypeData, FMassTrafficInstancePlaybackData const& DriverInstanceData, FTransform const& DriverTransformWorldSpace)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDriverRemoved instead.");
}
static FName NAME_UMassTrafficVehicleInterface_OnDriverRemoved = FName(TEXT("OnDriverRemoved"));
void IMassTrafficVehicleInterface::Execute_OnDriverRemoved(UObject* O, FMassTrafficDriverTypeData const& DriverTypeData, FMassTrafficInstancePlaybackData const& DriverInstanceData, FTransform const& DriverTransformWorldSpace)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMassTrafficVehicleInterface::StaticClass()));
	MassTrafficVehicleInterface_eventOnDriverRemoved_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMassTrafficVehicleInterface_OnDriverRemoved);
	if (Func)
	{
		Parms.DriverTypeData=DriverTypeData;
		Parms.DriverInstanceData=DriverInstanceData;
		Parms.DriverTransformWorldSpace=DriverTransformWorldSpace;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMassTrafficVehicleInterface*)(O->GetNativeInterfaceAddress(UMassTrafficVehicleInterface::StaticClass())))
	{
		I->OnDriverRemoved_Implementation(DriverTypeData,DriverInstanceData,DriverTransformWorldSpace);
	}
}
struct Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Traffic Vehicle" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverTypeData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverInstanceData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverTransformWorldSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverTypeData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverInstanceData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverTransformWorldSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::NewProp_DriverTypeData = { "DriverTypeData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficVehicleInterface_eventOnDriverRemoved_Parms, DriverTypeData), Z_Construct_UScriptStruct_FMassTrafficDriverTypeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverTypeData_MetaData), NewProp_DriverTypeData_MetaData) }; // 1995980152
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::NewProp_DriverInstanceData = { "DriverInstanceData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficVehicleInterface_eventOnDriverRemoved_Parms, DriverInstanceData), Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverInstanceData_MetaData), NewProp_DriverInstanceData_MetaData) }; // 2005656539
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::NewProp_DriverTransformWorldSpace = { "DriverTransformWorldSpace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficVehicleInterface_eventOnDriverRemoved_Parms, DriverTransformWorldSpace), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverTransformWorldSpace_MetaData), NewProp_DriverTransformWorldSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::NewProp_DriverTypeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::NewProp_DriverInstanceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::NewProp_DriverTransformWorldSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficVehicleInterface, nullptr, "OnDriverRemoved", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::PropPointers), sizeof(MassTrafficVehicleInterface_eventOnDriverRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(MassTrafficVehicleInterface_eventOnDriverRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMassTrafficVehicleInterface::execOnDriverRemoved)
{
	P_GET_STRUCT_REF(FMassTrafficDriverTypeData,Z_Param_Out_DriverTypeData);
	P_GET_STRUCT_REF(FMassTrafficInstancePlaybackData,Z_Param_Out_DriverInstanceData);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_DriverTransformWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDriverRemoved_Implementation(Z_Param_Out_DriverTypeData,Z_Param_Out_DriverInstanceData,Z_Param_Out_DriverTransformWorldSpace);
	P_NATIVE_END;
}
// End Interface UMassTrafficVehicleInterface Function OnDriverRemoved

// Begin Interface UMassTrafficVehicleInterface Function RepairDamage
void IMassTrafficVehicleInterface::RepairDamage()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RepairDamage instead.");
}
static FName NAME_UMassTrafficVehicleInterface_RepairDamage = FName(TEXT("RepairDamage"));
void IMassTrafficVehicleInterface::Execute_RepairDamage(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMassTrafficVehicleInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMassTrafficVehicleInterface_RepairDamage);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMassTrafficVehicleInterface*)(O->GetNativeInterfaceAddress(UMassTrafficVehicleInterface::StaticClass())))
	{
		I->RepairDamage_Implementation();
	}
}
struct Z_Construct_UFunction_UMassTrafficVehicleInterface_RepairDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Traffic Vehicle" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficVehicleInterface_RepairDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficVehicleInterface, nullptr, "RepairDamage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficVehicleInterface_RepairDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficVehicleInterface_RepairDamage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMassTrafficVehicleInterface_RepairDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficVehicleInterface_RepairDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMassTrafficVehicleInterface::execRepairDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RepairDamage_Implementation();
	P_NATIVE_END;
}
// End Interface UMassTrafficVehicleInterface Function RepairDamage

// Begin Interface UMassTrafficVehicleInterface
void UMassTrafficVehicleInterface::StaticRegisterNativesUMassTrafficVehicleInterface()
{
	UClass* Class = UMassTrafficVehicleInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDamageState", &IMassTrafficVehicleInterface::execGetDamageState },
		{ "OnDriverRemoved", &IMassTrafficVehicleInterface::execOnDriverRemoved },
		{ "RepairDamage", &IMassTrafficVehicleInterface::execRepairDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleInterface);
UClass* Z_Construct_UClass_UMassTrafficVehicleInterface_NoRegister()
{
	return UMassTrafficVehicleInterface::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficVehicleInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassTrafficVehicleInterface_GetDamageState, "GetDamageState" }, // 2611151912
		{ &Z_Construct_UFunction_UMassTrafficVehicleInterface_OnDriverRemoved, "OnDriverRemoved" }, // 4155910225
		{ &Z_Construct_UFunction_UMassTrafficVehicleInterface_RepairDamage, "RepairDamage" }, // 1865506933
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMassTrafficVehicleInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleInterface_Statics::ClassParams = {
	&UMassTrafficVehicleInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficVehicleInterface()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleInterface.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleInterface.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleInterface>()
{
	return UMassTrafficVehicleInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleInterface);
UMassTrafficVehicleInterface::~UMassTrafficVehicleInterface() {}
// End Interface UMassTrafficVehicleInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleInterface, UMassTrafficVehicleInterface::StaticClass, TEXT("UMassTrafficVehicleInterface"), &Z_Registration_Info_UClass_UMassTrafficVehicleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleInterface), 985009824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_4288872875(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
