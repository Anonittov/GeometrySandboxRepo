// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox2/BaseGeometryActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGeometryActor() {}
// Cross Module References
	GEOMETRYSANDBOX2_API UEnum* Z_Construct_UEnum_GeometrySandbox2_EMovementType();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox2();
	GEOMETRYSANDBOX2_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	GEOMETRYSANDBOX2_API UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister();
	GEOMETRYSANDBOX2_API UClass* Z_Construct_UClass_ABaseGeometryActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementType;
	static UEnum* EMovementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometrySandbox2_EMovementType, Z_Construct_UPackage__Script_GeometrySandbox2(), TEXT("EMovementType"));
		}
		return Z_Registration_Info_UEnum_EMovementType.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX2_API UEnum* StaticEnum<EMovementType>()
	{
		return EMovementType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometrySandbox2_EMovementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometrySandbox2_EMovementType_Statics::Enumerators[] = {
		{ "EMovementType::Sin", (int64)EMovementType::Sin },
		{ "EMovementType::Static", (int64)EMovementType::Static },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometrySandbox2_EMovementType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
		{ "Sin.Name", "EMovementType::Sin" },
		{ "Static.Name", "EMovementType::Static" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometrySandbox2_EMovementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometrySandbox2,
		nullptr,
		"EMovementType",
		"EMovementType",
		Z_Construct_UEnum_GeometrySandbox2_EMovementType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometrySandbox2_EMovementType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometrySandbox2_EMovementType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometrySandbox2_EMovementType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometrySandbox2_EMovementType()
	{
		if (!Z_Registration_Info_UEnum_EMovementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementType.InnerSingleton, Z_Construct_UEnum_GeometrySandbox2_EMovementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovementType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryData;
class UScriptStruct* FGeometryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryData, Z_Construct_UPackage__Script_GeometrySandbox2(), TEXT("GeometryData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryData.OuterSingleton;
}
template<> GEOMETRYSANDBOX2_API UScriptStruct* StaticStruct<FGeometryData>()
{
	return FGeometryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryData, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryData, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Frequency_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryData, MoveType), Z_Construct_UEnum_GeometrySandbox2_EMovementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType_MetaData)) }; // 2932288477
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryData, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_TimerRate_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_TimerRate = { "TimerRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryData, TimerRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_TimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_TimerRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_MoveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryData_Statics::NewProp_TimerRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox2,
		nullptr,
		&NewStructOps,
		"GeometryData",
		sizeof(FGeometryData),
		alignof(FGeometryData),
		Z_Construct_UScriptStruct_FGeometryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryData()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryData.InnerSingleton;
	}
	void ABaseGeometryActor::StaticRegisterNativesABaseGeometryActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGeometryActor);
	UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister()
	{
		return ABaseGeometryActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGeometryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponsNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KillsNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KillsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasWeapon_MetaData[];
#endif
		static void NewProp_HasWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGeometryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGeometryActor.h" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "BaseGeometryActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_GeometryData_MetaData[] = {
		{ "Category", "Geometry Data" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_GeometryData = { "GeometryData", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, GeometryData), Z_Construct_UScriptStruct_FGeometryData, METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_GeometryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_GeometryData_MetaData)) }; // 1618592931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_WeaponsNum_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_WeaponsNum = { "WeaponsNum", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, WeaponsNum), METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_WeaponsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_WeaponsNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_KillsNum_MetaData[] = {
		{ "Category", "Kills" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_KillsNum = { "KillsNum", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, KillsNum), METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_KillsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_KillsNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, Health), METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_IsDead_MetaData[] = {
		{ "Category", "Dead" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	void Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((ABaseGeometryActor*)Obj)->IsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseGeometryActor), &Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon_MetaData[] = {
		{ "Category", "BaseGeometryActor" },
		{ "ModuleRelativePath", "BaseGeometryActor.h" },
	};
#endif
	void Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon_SetBit(void* Obj)
	{
		((ABaseGeometryActor*)Obj)->HasWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon = { "HasWeapon", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseGeometryActor), &Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_GeometryData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_WeaponsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_KillsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_IsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGeometryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGeometryActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGeometryActor_Statics::ClassParams = {
		&ABaseGeometryActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGeometryActor()
	{
		if (!Z_Registration_Info_UClass_ABaseGeometryActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGeometryActor.OuterSingleton, Z_Construct_UClass_ABaseGeometryActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseGeometryActor.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX2_API UClass* StaticClass<ABaseGeometryActor>()
	{
		return ABaseGeometryActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGeometryActor);
	struct Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_BaseGeometryActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_BaseGeometryActor_h_Statics::EnumInfo[] = {
		{ EMovementType_StaticEnum, TEXT("EMovementType"), &Z_Registration_Info_UEnum_EMovementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2932288477U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_BaseGeometryActor_h_Statics::ScriptStructInfo[] = {
		{ FGeometryData::StaticStruct, Z_Construct_UScriptStruct_FGeometryData_Statics::NewStructOps, TEXT("GeometryData"), &Z_Registration_Info_UScriptStruct_GeometryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryData), 1618592931U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_BaseGeometryActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGeometryActor, ABaseGeometryActor::StaticClass, TEXT("ABaseGeometryActor"), &Z_Registration_Info_UClass_ABaseGeometryActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGeometryActor), 1559624519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_BaseGeometryActor_h_4271527042(TEXT("/Script/GeometrySandbox2"),
		Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_BaseGeometryActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_BaseGeometryActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_BaseGeometryActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_BaseGeometryActor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_BaseGeometryActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandbox2_Source_GeometrySandbox2_BaseGeometryActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
