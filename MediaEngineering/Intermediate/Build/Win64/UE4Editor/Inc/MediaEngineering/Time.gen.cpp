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
	DEFINE_FUNCTION(ATime::execsetLevelTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_levelTimeSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setLevelTime(Z_Param_levelTimeSet);
		P_NATIVE_END;
	}
	void ATime::StaticRegisterNativesATime()
	{
		UClass* Class = ATime::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "setLevelTime", &ATime::execsetLevelTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATime_setLevelTime_Statics
	{
		struct Time_eventsetLevelTime_Parms
		{
			int32 levelTimeSet;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_levelTimeSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATime_setLevelTime_Statics::NewProp_levelTimeSet = { "levelTimeSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Time_eventsetLevelTime_Parms, levelTimeSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATime_setLevelTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATime_setLevelTime_Statics::NewProp_levelTimeSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATime_setLevelTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Time.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATime_setLevelTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATime, nullptr, "setLevelTime", nullptr, nullptr, sizeof(Time_eventsetLevelTime_Parms), Z_Construct_UFunction_ATime_setLevelTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATime_setLevelTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATime_setLevelTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATime_setLevelTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATime_setLevelTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATime_setLevelTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATime_NoRegister()
	{
		return ATime::StaticClass();
	}
	struct Z_Construct_UClass_ATime_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_levelTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaEngineering,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATime_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATime_setLevelTime, "setLevelTime" }, // 3139971023
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATime_Statics::NewProp_levelTime_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/Time.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATime_Statics::NewProp_levelTime = { "levelTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATime, levelTime), METADATA_PARAMS(Z_Construct_UClass_ATime_Statics::NewProp_levelTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATime_Statics::NewProp_levelTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATime_Statics::NewProp_levelTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATime_Statics::ClassParams = {
		&ATime::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATime_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ATime, 208752905);
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
