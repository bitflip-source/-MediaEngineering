// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaEngineering/Public/States.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStates() {}
// Cross Module References
	MEDIAENGINEERING_API UClass* Z_Construct_UClass_AStates_NoRegister();
	MEDIAENGINEERING_API UClass* Z_Construct_UClass_AStates();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MediaEngineering();
// End Cross Module References
	DEFINE_FUNCTION(AStates::execgetcurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getcurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStates::execsetNextState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setNextState();
		P_NATIVE_END;
	}
	void AStates::StaticRegisterNativesAStates()
	{
		UClass* Class = AStates::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getcurrentState", &AStates::execgetcurrentState },
			{ "setNextState", &AStates::execsetNextState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStates_getcurrentState_Statics
	{
		struct States_eventgetcurrentState_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AStates_getcurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(States_eventgetcurrentState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStates_getcurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStates_getcurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStates_getcurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/States.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStates_getcurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStates, nullptr, "getcurrentState", nullptr, nullptr, sizeof(States_eventgetcurrentState_Parms), Z_Construct_UFunction_AStates_getcurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStates_getcurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStates_getcurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStates_getcurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStates_getcurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStates_getcurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStates_setNextState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStates_setNextState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Functions\n" },
		{ "ModuleRelativePath", "Public/States.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStates_setNextState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStates, nullptr, "setNextState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStates_setNextState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStates_setNextState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStates_setNextState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStates_setNextState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStates_NoRegister()
	{
		return AStates::StaticClass();
	}
	struct Z_Construct_UClass_AStates_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextState_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nextState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStates_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaEngineering,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStates_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStates_getcurrentState, "getcurrentState" }, // 3322474947
		{ &Z_Construct_UFunction_AStates_setNextState, "setNextState" }, // 3098162812
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStates_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "States.h" },
		{ "ModuleRelativePath", "Public/States.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStates_Statics::NewProp_currentState_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "//Properties\n" },
		{ "ModuleRelativePath", "Public/States.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStates_Statics::NewProp_currentState = { "currentState", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStates, currentState), METADATA_PARAMS(Z_Construct_UClass_AStates_Statics::NewProp_currentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStates_Statics::NewProp_currentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStates_Statics::NewProp_nextState_MetaData[] = {
		{ "Category", "States" },
		{ "ModuleRelativePath", "Public/States.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStates_Statics::NewProp_nextState = { "nextState", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStates, nextState), METADATA_PARAMS(Z_Construct_UClass_AStates_Statics::NewProp_nextState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStates_Statics::NewProp_nextState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStates_Statics::NewProp_currentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStates_Statics::NewProp_nextState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStates_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStates>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStates_Statics::ClassParams = {
		&AStates::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStates_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStates_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStates_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStates_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStates()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStates_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStates, 3474568050);
	template<> MEDIAENGINEERING_API UClass* StaticClass<AStates>()
	{
		return AStates::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStates(Z_Construct_UClass_AStates, &AStates::StaticClass, TEXT("/Script/MediaEngineering"), TEXT("AStates"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStates);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
