// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultCharacter.h"

#ifdef ADAPTATION_DefaultCharacter_generated_h
#error "DefaultCharacter.generated.h already included, missing '#pragma once' in DefaultCharacter.h"
#endif
#define ADAPTATION_DefaultCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADefaultCharacter ********************************************************
ADAPTATION_API UClass* Z_Construct_UClass_ADefaultCharacter_NoRegister();

#define FID_Users_qudtn_UnrealEngine_Adaptation_Source_Adaptation_DefaultCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultCharacter(); \
	friend struct Z_Construct_UClass_ADefaultCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADAPTATION_API UClass* Z_Construct_UClass_ADefaultCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ADefaultCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Adaptation"), Z_Construct_UClass_ADefaultCharacter_NoRegister) \
	DECLARE_SERIALIZER(ADefaultCharacter)


#define FID_Users_qudtn_UnrealEngine_Adaptation_Source_Adaptation_DefaultCharacter_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADefaultCharacter(ADefaultCharacter&&) = delete; \
	ADefaultCharacter(const ADefaultCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultCharacter) \
	NO_API virtual ~ADefaultCharacter();


#define FID_Users_qudtn_UnrealEngine_Adaptation_Source_Adaptation_DefaultCharacter_h_13_PROLOG
#define FID_Users_qudtn_UnrealEngine_Adaptation_Source_Adaptation_DefaultCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_qudtn_UnrealEngine_Adaptation_Source_Adaptation_DefaultCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_qudtn_UnrealEngine_Adaptation_Source_Adaptation_DefaultCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADefaultCharacter;

// ********** End Class ADefaultCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_qudtn_UnrealEngine_Adaptation_Source_Adaptation_DefaultCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
