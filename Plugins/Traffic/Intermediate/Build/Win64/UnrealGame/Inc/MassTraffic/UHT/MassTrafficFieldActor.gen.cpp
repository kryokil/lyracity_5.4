// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficFieldActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficFieldActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficFieldActor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficFieldActor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

// Begin Class AMassTrafficFieldActor
void AMassTrafficFieldActor::StaticRegisterNativesAMassTrafficFieldActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassTrafficFieldActor);
UClass* Z_Construct_UClass_AMassTrafficFieldActor_NoRegister()
{
	return AMassTrafficFieldActor::StaticClass();
}
struct Z_Construct_UClass_AMassTrafficFieldActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldActor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldComponent_MetaData[] = {
		{ "Category", "MassTrafficFieldActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficFieldActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficFieldActor_Statics::NewProp_FieldComponent = { "FieldComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficFieldActor, FieldComponent), Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldComponent_MetaData), NewProp_FieldComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficFieldActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficFieldActor_Statics::NewProp_FieldComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficFieldActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMassTrafficFieldActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficFieldActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficFieldActor_Statics::ClassParams = {
	&AMassTrafficFieldActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMassTrafficFieldActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficFieldActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficFieldActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficFieldActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMassTrafficFieldActor()
{
	if (!Z_Registration_Info_UClass_AMassTrafficFieldActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficFieldActor.OuterSingleton, Z_Construct_UClass_AMassTrafficFieldActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMassTrafficFieldActor.OuterSingleton;
}
template<> MASSTRAFFIC_API UClass* StaticClass<AMassTrafficFieldActor>()
{
	return AMassTrafficFieldActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMassTrafficFieldActor);
AMassTrafficFieldActor::~AMassTrafficFieldActor() {}
// End Class AMassTrafficFieldActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficFieldActor, AMassTrafficFieldActor::StaticClass, TEXT("AMassTrafficFieldActor"), &Z_Registration_Info_UClass_AMassTrafficFieldActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficFieldActor), 2594088774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldActor_h_1875727915(TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
