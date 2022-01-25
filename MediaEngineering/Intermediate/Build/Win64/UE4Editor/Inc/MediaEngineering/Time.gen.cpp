// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaEngineering/Public/Time.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTime() {}
// Cross Module References
	MEDIAENGINEERING_API UClass* Z_Construct_UClass_ATime_NoRegister();
	MEDIAENGINEERING_API UClass* Z_Construct_UClass_ATime();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_MediaEngineering();
// End Cross Module References
	void ATime::StaticRegisterNativesATime()
	{
	}
	UClass* Z_Construct_UClass_ATime_NoRegister()
	{
		return ATime::StaticClass();
	}
	struct Z_Construct_UClass_ATime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaEngineering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATime_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Time.h" },
		{ "ModuleRelativePath", "Public/Time.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATime_Statics::ClassParams = {
		&ATime::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATime, 2106280394);
	template<> MEDIAENGINEERING_API UClass* StaticClass<ATime>()
	{
		return ATime::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATime(Z_Construct_UClass_ATime, &ATime::StaticClass, TEXT("/Script/MediaEngineering"), TEXT("ATime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
