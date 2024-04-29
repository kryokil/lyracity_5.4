// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Vehicles/DrivableVehicleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrivableVehicleComponent() {}

// Begin Cross Module References
CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCharacter_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleVehicleBase_NoRegister();
CITYSAMPLE_API UClass* Z_Construct_UClass_UDrivableVehicleComponent();
CITYSAMPLE_API UClass* Z_Construct_UClass_UDrivableVehicleComponent_NoRegister();
CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature();
CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References

// Begin Delegate FCitySampleVehicleOnDriverEnter
struct Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics
{
	struct _Script_CitySample_eventCitySampleVehicleOnDriverEnter_Parms
	{
		const UDrivableVehicleComponent* DrivableComponent;
		const ACitySampleVehicleBase* Vehicle;
		const APawn* Driver;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/DrivableVehicleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vehicle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Driver_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrivableComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::NewProp_DrivableComponent = { "DrivableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleVehicleOnDriverEnter_Parms, DrivableComponent), Z_Construct_UClass_UDrivableVehicleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivableComponent_MetaData), NewProp_DrivableComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleVehicleOnDriverEnter_Parms, Vehicle), Z_Construct_UClass_ACitySampleVehicleBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vehicle_MetaData), NewProp_Vehicle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleVehicleOnDriverEnter_Parms, Driver), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Driver_MetaData), NewProp_Driver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::NewProp_DrivableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::NewProp_Vehicle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::NewProp_Driver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleVehicleOnDriverEnter__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::_Script_CitySample_eventCitySampleVehicleOnDriverEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::_Script_CitySample_eventCitySampleVehicleOnDriverEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCitySampleVehicleOnDriverEnter_DelegateWrapper(const FMulticastScriptDelegate& CitySampleVehicleOnDriverEnter, const UDrivableVehicleComponent* DrivableComponent, const ACitySampleVehicleBase* Vehicle, const APawn* Driver)
{
	struct _Script_CitySample_eventCitySampleVehicleOnDriverEnter_Parms
	{
		const UDrivableVehicleComponent* DrivableComponent;
		const ACitySampleVehicleBase* Vehicle;
		const APawn* Driver;
	};
	_Script_CitySample_eventCitySampleVehicleOnDriverEnter_Parms Parms;
	Parms.DrivableComponent=DrivableComponent;
	Parms.Vehicle=Vehicle;
	Parms.Driver=Driver;
	CitySampleVehicleOnDriverEnter.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCitySampleVehicleOnDriverEnter

// Begin Delegate FCitySampleVehicleOnDriverExit
struct Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics
{
	struct _Script_CitySample_eventCitySampleVehicleOnDriverExit_Parms
	{
		const UDrivableVehicleComponent* DrivableComponent;
		const ACitySampleVehicleBase* Vehicle;
		const APawn* Driver;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/DrivableVehicleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vehicle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Driver_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrivableComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::NewProp_DrivableComponent = { "DrivableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleVehicleOnDriverExit_Parms, DrivableComponent), Z_Construct_UClass_UDrivableVehicleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivableComponent_MetaData), NewProp_DrivableComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleVehicleOnDriverExit_Parms, Vehicle), Z_Construct_UClass_ACitySampleVehicleBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vehicle_MetaData), NewProp_Vehicle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCitySampleVehicleOnDriverExit_Parms, Driver), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Driver_MetaData), NewProp_Driver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::NewProp_DrivableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::NewProp_Vehicle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::NewProp_Driver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleVehicleOnDriverExit__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::_Script_CitySample_eventCitySampleVehicleOnDriverExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::_Script_CitySample_eventCitySampleVehicleOnDriverExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCitySampleVehicleOnDriverExit_DelegateWrapper(const FMulticastScriptDelegate& CitySampleVehicleOnDriverExit, const UDrivableVehicleComponent* DrivableComponent, const ACitySampleVehicleBase* Vehicle, const APawn* Driver)
{
	struct _Script_CitySample_eventCitySampleVehicleOnDriverExit_Parms
	{
		const UDrivableVehicleComponent* DrivableComponent;
		const ACitySampleVehicleBase* Vehicle;
		const APawn* Driver;
	};
	_Script_CitySample_eventCitySampleVehicleOnDriverExit_Parms Parms;
	Parms.DrivableComponent=DrivableComponent;
	Parms.Vehicle=Vehicle;
	Parms.Driver=Driver;
	CitySampleVehicleOnDriverExit.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCitySampleVehicleOnDriverExit

// Begin Class UDrivableVehicleComponent Function DriverGetIn
struct Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics
{
	struct DrivableVehicleComponent_eventDriverGetIn_Parms
	{
		ACitySampleCharacter* NewDriver;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/DrivableVehicleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDriver;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::NewProp_NewDriver = { "NewDriver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DrivableVehicleComponent_eventDriverGetIn_Parms, NewDriver), Z_Construct_UClass_ACitySampleCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DrivableVehicleComponent_eventDriverGetIn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DrivableVehicleComponent_eventDriverGetIn_Parms), &Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::NewProp_NewDriver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDrivableVehicleComponent, nullptr, "DriverGetIn", nullptr, nullptr, Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::DrivableVehicleComponent_eventDriverGetIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::DrivableVehicleComponent_eventDriverGetIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDrivableVehicleComponent::execDriverGetIn)
{
	P_GET_OBJECT(ACitySampleCharacter,Z_Param_NewDriver);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DriverGetIn(Z_Param_NewDriver);
	P_NATIVE_END;
}
// End Class UDrivableVehicleComponent Function DriverGetIn

// Begin Class UDrivableVehicleComponent Function DriverGetOut
struct Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetOut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/DrivableVehicleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDrivableVehicleComponent, nullptr, "DriverGetOut", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetOut_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDrivableVehicleComponent::execDriverGetOut)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DriverGetOut();
	P_NATIVE_END;
}
// End Class UDrivableVehicleComponent Function DriverGetOut

// Begin Class UDrivableVehicleComponent
void UDrivableVehicleComponent::StaticRegisterNativesUDrivableVehicleComponent()
{
	UClass* Class = UDrivableVehicleComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DriverGetIn", &UDrivableVehicleComponent::execDriverGetIn },
		{ "DriverGetOut", &UDrivableVehicleComponent::execDriverGetOut },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrivableVehicleComponent);
UClass* Z_Construct_UClass_UDrivableVehicleComponent_NoRegister()
{
	return UDrivableVehicleComponent::StaticClass();
}
struct Z_Construct_UClass_UDrivableVehicleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Vehicles/DrivableVehicleComponent.h" },
		{ "ModuleRelativePath", "Public/Vehicles/DrivableVehicleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDriverEnter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/DrivableVehicleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDriverExit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/DrivableVehicleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Driver_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DrivableVehicleComponent" },
		{ "ModuleRelativePath", "Public/Vehicles/DrivableVehicleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDriverEnter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDriverExit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetIn, "DriverGetIn" }, // 2393293439
		{ &Z_Construct_UFunction_UDrivableVehicleComponent_DriverGetOut, "DriverGetOut" }, // 4077930997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrivableVehicleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDrivableVehicleComponent_Statics::NewProp_OnDriverEnter = { "OnDriverEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivableVehicleComponent, OnDriverEnter), Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverEnter__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDriverEnter_MetaData), NewProp_OnDriverEnter_MetaData) }; // 1154696185
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDrivableVehicleComponent_Statics::NewProp_OnDriverExit = { "OnDriverExit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivableVehicleComponent, OnDriverExit), Z_Construct_UDelegateFunction_CitySample_CitySampleVehicleOnDriverExit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDriverExit_MetaData), NewProp_OnDriverExit_MetaData) }; // 3728935196
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrivableVehicleComponent_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0040000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivableVehicleComponent, Driver), Z_Construct_UClass_ACitySampleCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Driver_MetaData), NewProp_Driver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrivableVehicleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrivableVehicleComponent_Statics::NewProp_OnDriverEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrivableVehicleComponent_Statics::NewProp_OnDriverExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrivableVehicleComponent_Statics::NewProp_Driver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrivableVehicleComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDrivableVehicleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrivableVehicleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrivableVehicleComponent_Statics::ClassParams = {
	&UDrivableVehicleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDrivableVehicleComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDrivableVehicleComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrivableVehicleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrivableVehicleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrivableVehicleComponent()
{
	if (!Z_Registration_Info_UClass_UDrivableVehicleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrivableVehicleComponent.OuterSingleton, Z_Construct_UClass_UDrivableVehicleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrivableVehicleComponent.OuterSingleton;
}
template<> CITYSAMPLE_API UClass* StaticClass<UDrivableVehicleComponent>()
{
	return UDrivableVehicleComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrivableVehicleComponent);
UDrivableVehicleComponent::~UDrivableVehicleComponent() {}
// End Class UDrivableVehicleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDrivableVehicleComponent, UDrivableVehicleComponent::StaticClass, TEXT("UDrivableVehicleComponent"), &Z_Registration_Info_UClass_UDrivableVehicleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrivableVehicleComponent), 3210531335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_153979750(TEXT("/Script/CitySample"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
