// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodenewGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_newGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_newGame()
	{
		if (!Z_Registration_Info_UPackage__Script_newGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/newGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x274B1E3F,
				0x100CAF5C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_newGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_newGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_newGame(Z_Construct_UPackage__Script_newGame, TEXT("/Script/newGame"), Z_Registration_Info_UPackage__Script_newGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x274B1E3F, 0x100CAF5C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
