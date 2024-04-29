// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficEditor/Public/MassTrafficBuilderMarkerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficBuilderMarkerActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficBuilderMarkerActor();
MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficBuilderMarkerActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTrafficEditor();
// End Cross Module References

// Begin Class AMassTrafficBuilderMarkerActor
void AMassTrafficBuilderMarkerActor::StaticRegisterNativesAMassTrafficBuilderMarkerActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassTrafficBuilderMarkerActor);
UClass* Z_Construct_UClass_AMassTrafficBuilderMarkerActor_NoRegister()
{
	return AMassTrafficBuilderMarkerActor::StaticClass();
}
struct Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficBuilderMarkerActor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderMarkerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderMarkerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGroundRotation_MetaData[] = {
		{ "Category", "MassTrafficBuilderMarkerActor" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderMarkerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorDescription_MetaData[] = {
		{ "Category", "MassTrafficBuilderMarkerActor" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderMarkerActor.h" },
		{ "MultiLine", "TRUE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
	static void NewProp_bUseGroundRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGroundRotation;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficBuilderMarkerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderMarkerActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
void Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_bUseGroundRotation_SetBit(void* Obj)
{
	((AMassTrafficBuilderMarkerActor*)Obj)->bUseGroundRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_bUseGroundRotation = { "bUseGroundRotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMassTrafficBuilderMarkerActor), &Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_bUseGroundRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGroundRotation_MetaData), NewProp_bUseGroundRotation_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ErrorDescription = { "ErrorDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderMarkerActor, ErrorDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorDescription_MetaData), NewProp_ErrorDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ArrowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_bUseGroundRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ErrorDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::ClassParams = {
	&AMassTrafficBuilderMarkerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMassTrafficBuilderMarkerActor()
{
	if (!Z_Registration_Info_UClass_AMassTrafficBuilderMarkerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficBuilderMarkerActor.OuterSingleton, Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMassTrafficBuilderMarkerActor.OuterSingleton;
}
template<> MASSTRAFFICEDITOR_API UClass* StaticClass<AMassTrafficBuilderMarkerActor>()
{
	return AMassTrafficBuilderMarkerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMassTrafficBuilderMarkerActor);
AMassTrafficBuilderMarkerActor::~AMassTrafficBuilderMarkerActor() {}
// End Class AMassTrafficBuilderMarkerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderMarkerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficBuilderMarkerActor, AMassTrafficBuilderMarkerActor::StaticClass, TEXT("AMassTrafficBuilderMarkerActor"), &Z_Registration_Info_UClass_AMassTrafficBuilderMarkerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficBuilderMarkerActor), 3416673296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderMarkerActor_h_646825451(TEXT("/Script/MassTrafficEditor"),
	Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderMarkerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_5_4_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderMarkerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
