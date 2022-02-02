// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaEngineering/Public/Status.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatus() {}
// Cross Module References
	MEDIAENGINEERING_API UClass* Z_Construct_UClass_AStatus_NoRegister();
	MEDIAENGINEERING_API UClass* Z_Construct_UClass_AStatus();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MediaEngineering();
// End Cross Module References
	void AStatus::StaticRegisterNativesAStatus()
	{
	}
	UClass* Z_Construct_UClass_AStatus_NoRegister()
	{
		return AStatus::StaticClass();
	}
	struct Z_Construct_UClass_AStatus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStatus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaEngineering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Status.h" },
		{ "ModuleRelativePath", "Public/Status.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStatus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStatus_Statics::ClassParams = {
		&AStatus::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStatus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStatus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStatus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStatus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStatus, 2075039226);
	template<> MEDIAENGINEERING_API UClass* StaticClass<AStatus>()
	{
		return AStatus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStatus(Z_Construct_UClass_AStatus, &AStatus::StaticClass, TEXT("/Script/MediaEngineering"), TEXT("AStatus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStatus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
