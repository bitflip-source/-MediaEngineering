// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaEngineering/Public/Life.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLife() {}
// Cross Module References
	MEDIAENGINEERING_API UClass* Z_Construct_UClass_ALife_NoRegister();
	MEDIAENGINEERING_API UClass* Z_Construct_UClass_ALife();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_MediaEngineering();
// End Cross Module References
	DEFINE_FUNCTION(ALife::execfullLifes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->fullLifes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALife::execdecreaseLife)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_sublifes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->decreaseLife(Z_Param_sublifes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALife::execincreaseLife)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_addlifes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->increaseLife(Z_Param_addlifes);
		P_NATIVE_END;
	}
	void ALife::StaticRegisterNativesALife()
	{
		UClass* Class = ALife::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decreaseLife", &ALife::execdecreaseLife },
			{ "fullLifes", &ALife::execfullLifes },
			{ "increaseLife", &ALife::execincreaseLife },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALife_decreaseLife_Statics
	{
		struct Life_eventdecreaseLife_Parms
		{
			int32 sublifes;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sublifes;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALife_decreaseLife_Statics::NewProp_sublifes = { "sublifes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Life_eventdecreaseLife_Parms, sublifes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALife_decreaseLife_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Life_eventdecreaseLife_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALife_decreaseLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALife_decreaseLife_Statics::NewProp_sublifes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALife_decreaseLife_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALife_decreaseLife_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Life.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALife_decreaseLife_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALife, nullptr, "decreaseLife", nullptr, nullptr, sizeof(Life_eventdecreaseLife_Parms), Z_Construct_UFunction_ALife_decreaseLife_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALife_decreaseLife_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALife_decreaseLife_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALife_decreaseLife_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALife_decreaseLife()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALife_decreaseLife_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALife_fullLifes_Statics
	{
		struct Life_eventfullLifes_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALife_fullLifes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Life_eventfullLifes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALife_fullLifes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALife_fullLifes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALife_fullLifes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Life.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALife_fullLifes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALife, nullptr, "fullLifes", nullptr, nullptr, sizeof(Life_eventfullLifes_Parms), Z_Construct_UFunction_ALife_fullLifes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALife_fullLifes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALife_fullLifes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALife_fullLifes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALife_fullLifes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALife_fullLifes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALife_increaseLife_Statics
	{
		struct Life_eventincreaseLife_Parms
		{
			int32 addlifes;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_addlifes;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALife_increaseLife_Statics::NewProp_addlifes = { "addlifes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Life_eventincreaseLife_Parms, addlifes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALife_increaseLife_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Life_eventincreaseLife_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALife_increaseLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALife_increaseLife_Statics::NewProp_addlifes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALife_increaseLife_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALife_increaseLife_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Functions\n" },
		{ "ModuleRelativePath", "Public/Life.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALife_increaseLife_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALife, nullptr, "increaseLife", nullptr, nullptr, sizeof(Life_eventincreaseLife_Parms), Z_Construct_UFunction_ALife_increaseLife_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALife_increaseLife_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALife_increaseLife_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALife_increaseLife_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALife_increaseLife()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALife_increaseLife_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALife_NoRegister()
	{
		return ALife::StaticClass();
	}
	struct Z_Construct_UClass_ALife_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lifes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_lifes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isalive_MetaData[];
#endif
		static void NewProp_isalive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isalive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaEngineering,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALife_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALife_decreaseLife, "decreaseLife" }, // 3304574714
		{ &Z_Construct_UFunction_ALife_fullLifes, "fullLifes" }, // 485935814
		{ &Z_Construct_UFunction_ALife_increaseLife, "increaseLife" }, // 3466325210
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALife_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Life.h" },
		{ "ModuleRelativePath", "Public/Life.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALife_Statics::NewProp_lifes_MetaData[] = {
		{ "Category", "Life" },
		{ "Comment", "//Properties\n" },
		{ "ModuleRelativePath", "Public/Life.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALife_Statics::NewProp_lifes = { "lifes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALife, lifes), METADATA_PARAMS(Z_Construct_UClass_ALife_Statics::NewProp_lifes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALife_Statics::NewProp_lifes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALife_Statics::NewProp_isalive_MetaData[] = {
		{ "Category", "Life" },
		{ "ModuleRelativePath", "Public/Life.h" },
	};
#endif
	void Z_Construct_UClass_ALife_Statics::NewProp_isalive_SetBit(void* Obj)
	{
		((ALife*)Obj)->isalive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALife_Statics::NewProp_isalive = { "isalive", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALife), &Z_Construct_UClass_ALife_Statics::NewProp_isalive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALife_Statics::NewProp_isalive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALife_Statics::NewProp_isalive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALife_Statics::NewProp_lifes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALife_Statics::NewProp_isalive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALife>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALife_Statics::ClassParams = {
		&ALife::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALife_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALife_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALife_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALife_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALife, 1479527260);
	template<> MEDIAENGINEERING_API UClass* StaticClass<ALife>()
	{
		return ALife::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALife(Z_Construct_UClass_ALife, &ALife::StaticClass, TEXT("/Script/MediaEngineering"), TEXT("ALife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
