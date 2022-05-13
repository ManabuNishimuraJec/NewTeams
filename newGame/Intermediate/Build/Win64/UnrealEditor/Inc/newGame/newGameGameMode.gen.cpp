// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "newGame/newGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodenewGameGameMode() {}
// Cross Module References
	NEWGAME_API UClass* Z_Construct_UClass_AnewGameGameMode_NoRegister();
	NEWGAME_API UClass* Z_Construct_UClass_AnewGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_newGame();
// End Cross Module References
	void AnewGameGameMode::StaticRegisterNativesAnewGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AnewGameGameMode);
	UClass* Z_Construct_UClass_AnewGameGameMode_NoRegister()
	{
		return AnewGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AnewGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AnewGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_newGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AnewGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "newGameGameMode.h" },
		{ "ModuleRelativePath", "newGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AnewGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AnewGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AnewGameGameMode_Statics::ClassParams = {
		&AnewGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AnewGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AnewGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AnewGameGameMode()
	{
		if (!Z_Registration_Info_UClass_AnewGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AnewGameGameMode.OuterSingleton, Z_Construct_UClass_AnewGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AnewGameGameMode.OuterSingleton;
	}
	template<> NEWGAME_API UClass* StaticClass<AnewGameGameMode>()
	{
		return AnewGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AnewGameGameMode);
	struct Z_CompiledInDeferFile_FID_newGame_Source_newGame_newGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_newGame_Source_newGame_newGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AnewGameGameMode, AnewGameGameMode::StaticClass, TEXT("AnewGameGameMode"), &Z_Registration_Info_UClass_AnewGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AnewGameGameMode), 2038630586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_newGame_Source_newGame_newGameGameMode_h_4092189762(TEXT("/Script/newGame"),
		Z_CompiledInDeferFile_FID_newGame_Source_newGame_newGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_newGame_Source_newGame_newGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
