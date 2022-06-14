// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox2/GeometrySandbox2GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometrySandbox2GameModeBase() {}
// Cross Module References
	GEOMETRYSANDBOX2_API UClass* Z_Construct_UClass_AGeometrySandbox2GameModeBase_NoRegister();
	GEOMETRYSANDBOX2_API UClass* Z_Construct_UClass_AGeometrySandbox2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox2();
// End Cross Module References
	void AGeometrySandbox2GameModeBase::StaticRegisterNativesAGeometrySandbox2GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometrySandbox2GameModeBase);
	UClass* Z_Construct_UClass_AGeometrySandbox2GameModeBase_NoRegister()
	{
		return AGeometrySandbox2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGeometrySandbox2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometrySandbox2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometrySandbox2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GeometrySandbox2GameModeBase.h" },
		{ "ModuleRelativePath", "GeometrySandbox2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometrySandbox2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometrySandbox2GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometrySandbox2GameModeBase_Statics::ClassParams = {
		&AGeometrySandbox2GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeometrySandbox2GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometrySandbox2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometrySandbox2GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGeometrySandbox2GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometrySandbox2GameModeBase.OuterSingleton, Z_Construct_UClass_AGeometrySandbox2GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometrySandbox2GameModeBase.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX2_API UClass* StaticClass<AGeometrySandbox2GameModeBase>()
	{
		return AGeometrySandbox2GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometrySandbox2GameModeBase);
	struct Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_GeometrySandbox2GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_GeometrySandbox2GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometrySandbox2GameModeBase, AGeometrySandbox2GameModeBase::StaticClass, TEXT("AGeometrySandbox2GameModeBase"), &Z_Registration_Info_UClass_AGeometrySandbox2GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometrySandbox2GameModeBase), 3713891082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_GeometrySandbox2GameModeBase_h_934953830(TEXT("/Script/GeometrySandbox2"),
		Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_GeometrySandbox2GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_GeometrySandbox2GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
