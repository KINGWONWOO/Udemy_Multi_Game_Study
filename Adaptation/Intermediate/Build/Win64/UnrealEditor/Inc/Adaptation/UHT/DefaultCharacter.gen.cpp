// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Adaptation/DefaultCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDefaultCharacter() {}

// ********** Begin Cross Module References ********************************************************
ADAPTATION_API UClass* Z_Construct_UClass_ADefaultCharacter();
ADAPTATION_API UClass* Z_Construct_UClass_ADefaultCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Adaptation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADefaultCharacter ********************************************************
void ADefaultCharacter::StaticRegisterNativesADefaultCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADefaultCharacter;
UClass* ADefaultCharacter::GetPrivateStaticClass()
{
	using TClass = ADefaultCharacter;
	if (!Z_Registration_Info_UClass_ADefaultCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DefaultCharacter"),
			Z_Registration_Info_UClass_ADefaultCharacter.InnerSingleton,
			StaticRegisterNativesADefaultCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ADefaultCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ADefaultCharacter_NoRegister()
{
	return ADefaultCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADefaultCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DefaultCharacter.h" },
		{ "ModuleRelativePath", "DefaultCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "DefaultCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jumping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "DefaultCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Looking_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "DefaultCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Moving_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "DefaultCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookSensitivity_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "DefaultCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jumping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Looking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Moving;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookSensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultCharacter_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultCharacter, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultCharacter_Statics::NewProp_Jumping = { "Jumping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultCharacter, Jumping), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jumping_MetaData), NewProp_Jumping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultCharacter_Statics::NewProp_Looking = { "Looking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultCharacter, Looking), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Looking_MetaData), NewProp_Looking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultCharacter_Statics::NewProp_Moving = { "Moving", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultCharacter, Moving), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Moving_MetaData), NewProp_Moving_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultCharacter_Statics::NewProp_LookSensitivity = { "LookSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultCharacter, LookSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookSensitivity_MetaData), NewProp_LookSensitivity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCharacter_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCharacter_Statics::NewProp_Jumping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCharacter_Statics::NewProp_Looking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCharacter_Statics::NewProp_Moving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCharacter_Statics::NewProp_LookSensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADefaultCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Adaptation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultCharacter_Statics::ClassParams = {
	&ADefaultCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADefaultCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefaultCharacter()
{
	if (!Z_Registration_Info_UClass_ADefaultCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultCharacter.OuterSingleton, Z_Construct_UClass_ADefaultCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefaultCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultCharacter);
ADefaultCharacter::~ADefaultCharacter() {}
// ********** End Class ADefaultCharacter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_qudtn_UnrealEngine_Adaptation_Source_Adaptation_DefaultCharacter_h__Script_Adaptation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultCharacter, ADefaultCharacter::StaticClass, TEXT("ADefaultCharacter"), &Z_Registration_Info_UClass_ADefaultCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultCharacter), 3241014663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qudtn_UnrealEngine_Adaptation_Source_Adaptation_DefaultCharacter_h__Script_Adaptation_771129207(TEXT("/Script/Adaptation"),
	Z_CompiledInDeferFile_FID_Users_qudtn_UnrealEngine_Adaptation_Source_Adaptation_DefaultCharacter_h__Script_Adaptation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qudtn_UnrealEngine_Adaptation_Source_Adaptation_DefaultCharacter_h__Script_Adaptation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
