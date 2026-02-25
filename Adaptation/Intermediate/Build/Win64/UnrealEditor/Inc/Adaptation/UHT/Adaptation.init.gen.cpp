// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdaptation_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Adaptation;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Adaptation()
	{
		if (!Z_Registration_Info_UPackage__Script_Adaptation.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Adaptation",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xEA819811,
				0x628A4280,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Adaptation.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Adaptation.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Adaptation(Z_Construct_UPackage__Script_Adaptation, TEXT("/Script/Adaptation"), Z_Registration_Info_UPackage__Script_Adaptation, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEA819811, 0x628A4280));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
