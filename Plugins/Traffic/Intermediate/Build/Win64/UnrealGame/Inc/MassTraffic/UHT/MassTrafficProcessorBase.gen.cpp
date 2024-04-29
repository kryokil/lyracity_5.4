// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficProcessorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficProcessorBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class UMassTrafficProcessorBase
void UMassTrafficProcessorBase::StaticRegisterNativesUMassTrafficProcessorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficProcessorBase);
UClass* Z_Construct_UClass_UMassTrafficProcessorBase_NoRegister()
{
	return UMassTrafficProcessorBase::StaticClass();
}
struct Z_Construct_UClass_UMassTrafficProcessorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for traffic processors that caches a pointer to the traffic subsytem\n */" },
#endif
		{ "IncludePath", "MassTrafficProcessorBase.h" },
		{ "ModuleRelativePath", "Public/MassTrafficProcessorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for traffic processors that caches a pointer to the traffic subsytem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficProcessorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LogOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficProcessorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficProcessorBase_Statics::NewProp_LogOwner = { "LogOwner", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficProcessorBase, LogOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogOwner_MetaData), NewProp_LogOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficProcessorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficProcessorBase_Statics::NewProp_LogOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficProcessorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassTrafficProcessorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficProcessorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficProcessorBase_Statics::ClassParams = {
	&UMassTrafficProcessorBase::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficProcessorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficProcessorBase_Statics::PropPointers),
	0,
	0x401030A7u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficProcessorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficProcessorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTrafficProcessorBase()
{
	if (!Z_Registration_Info_UClass_UMassTrafficProcessorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficProcessorBase.OuterSingleton, Z_Construct_UClass_UMassTrafficProcessorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficProcessorBase.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficProcessorBase>()
{
	return UMassTrafficProcessorBase::StaticClass();
}
UMassTrafficProcessorBase::UMassTrafficProcessorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficProcessorBase);
UMassTrafficProcessorBase::~UMassTrafficProcessorBase() {}
// End Class UMassTrafficProcessorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficProcessorBase, UMassTrafficProcessorBase::StaticClass, TEXT("UMassTrafficProcessorBase"), &Z_Registration_Info_UClass_UMassTrafficProcessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficProcessorBase), 2347048351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h_27229043(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS