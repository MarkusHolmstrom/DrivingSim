// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrivingSim/DrivingSimGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrivingSimGameModeBase() {}
// Cross Module References
	DRIVINGSIM_API UClass* Z_Construct_UClass_ADrivingSimGameModeBase_NoRegister();
	DRIVINGSIM_API UClass* Z_Construct_UClass_ADrivingSimGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DrivingSim();
// End Cross Module References
	void ADrivingSimGameModeBase::StaticRegisterNativesADrivingSimGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADrivingSimGameModeBase_NoRegister()
	{
		return ADrivingSimGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADrivingSimGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrivingSimGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DrivingSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrivingSimGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DrivingSimGameModeBase.h" },
		{ "ModuleRelativePath", "DrivingSimGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrivingSimGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrivingSimGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADrivingSimGameModeBase_Statics::ClassParams = {
		&ADrivingSimGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADrivingSimGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADrivingSimGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADrivingSimGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADrivingSimGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADrivingSimGameModeBase, 3529163260);
	template<> DRIVINGSIM_API UClass* StaticClass<ADrivingSimGameModeBase>()
	{
		return ADrivingSimGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADrivingSimGameModeBase(Z_Construct_UClass_ADrivingSimGameModeBase, &ADrivingSimGameModeBase::StaticClass, TEXT("/Script/DrivingSim"), TEXT("ADrivingSimGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrivingSimGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
