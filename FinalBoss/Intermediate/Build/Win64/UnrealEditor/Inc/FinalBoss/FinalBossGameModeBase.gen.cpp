// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBoss/FinalBossGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalBossGameModeBase() {}
// Cross Module References
	FINALBOSS_API UClass* Z_Construct_UClass_AFinalBossGameModeBase_NoRegister();
	FINALBOSS_API UClass* Z_Construct_UClass_AFinalBossGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FinalBoss();
// End Cross Module References
	void AFinalBossGameModeBase::StaticRegisterNativesAFinalBossGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFinalBossGameModeBase);
	UClass* Z_Construct_UClass_AFinalBossGameModeBase_NoRegister()
	{
		return AFinalBossGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFinalBossGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFinalBossGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FinalBoss,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFinalBossGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FinalBossGameModeBase.h" },
		{ "ModuleRelativePath", "FinalBossGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFinalBossGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalBossGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFinalBossGameModeBase_Statics::ClassParams = {
		&AFinalBossGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFinalBossGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFinalBossGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFinalBossGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFinalBossGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFinalBossGameModeBase.OuterSingleton, Z_Construct_UClass_AFinalBossGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFinalBossGameModeBase.OuterSingleton;
	}
	template<> FINALBOSS_API UClass* StaticClass<AFinalBossGameModeBase>()
	{
		return AFinalBossGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalBossGameModeBase);
	struct Z_CompiledInDeferFile_FID_FinalBoss_Source_FinalBoss_FinalBossGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FinalBoss_Source_FinalBoss_FinalBossGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFinalBossGameModeBase, AFinalBossGameModeBase::StaticClass, TEXT("AFinalBossGameModeBase"), &Z_Registration_Info_UClass_AFinalBossGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFinalBossGameModeBase), 3068258847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FinalBoss_Source_FinalBoss_FinalBossGameModeBase_h_1256061876(TEXT("/Script/FinalBoss"),
		Z_CompiledInDeferFile_FID_FinalBoss_Source_FinalBoss_FinalBossGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FinalBoss_Source_FinalBoss_FinalBossGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
