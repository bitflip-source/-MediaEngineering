// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAENGINEERING_States_generated_h
#error "States.generated.h already included, missing '#pragma once' in States.h"
#endif
#define MEDIAENGINEERING_States_generated_h

#define MediaEngineering_Source_MediaEngineering_Public_States_h_16_SPARSE_DATA
#define MediaEngineering_Source_MediaEngineering_Public_States_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetcurrentState); \
	DECLARE_FUNCTION(execsetNextState);


#define MediaEngineering_Source_MediaEngineering_Public_States_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetcurrentState); \
	DECLARE_FUNCTION(execsetNextState);


#define MediaEngineering_Source_MediaEngineering_Public_States_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStates(); \
	friend struct Z_Construct_UClass_AStates_Statics; \
public: \
	DECLARE_CLASS(AStates, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaEngineering"), NO_API) \
	DECLARE_SERIALIZER(AStates)


#define MediaEngineering_Source_MediaEngineering_Public_States_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAStates(); \
	friend struct Z_Construct_UClass_AStates_Statics; \
public: \
	DECLARE_CLASS(AStates, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaEngineering"), NO_API) \
	DECLARE_SERIALIZER(AStates)


#define MediaEngineering_Source_MediaEngineering_Public_States_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStates(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStates) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStates); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStates(AStates&&); \
	NO_API AStates(const AStates&); \
public:


#define MediaEngineering_Source_MediaEngineering_Public_States_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStates(AStates&&); \
	NO_API AStates(const AStates&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStates); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStates)


#define MediaEngineering_Source_MediaEngineering_Public_States_h_16_PRIVATE_PROPERTY_OFFSET
#define MediaEngineering_Source_MediaEngineering_Public_States_h_13_PROLOG
#define MediaEngineering_Source_MediaEngineering_Public_States_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaEngineering_Source_MediaEngineering_Public_States_h_16_PRIVATE_PROPERTY_OFFSET \
	MediaEngineering_Source_MediaEngineering_Public_States_h_16_SPARSE_DATA \
	MediaEngineering_Source_MediaEngineering_Public_States_h_16_RPC_WRAPPERS \
	MediaEngineering_Source_MediaEngineering_Public_States_h_16_INCLASS \
	MediaEngineering_Source_MediaEngineering_Public_States_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaEngineering_Source_MediaEngineering_Public_States_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaEngineering_Source_MediaEngineering_Public_States_h_16_PRIVATE_PROPERTY_OFFSET \
	MediaEngineering_Source_MediaEngineering_Public_States_h_16_SPARSE_DATA \
	MediaEngineering_Source_MediaEngineering_Public_States_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MediaEngineering_Source_MediaEngineering_Public_States_h_16_INCLASS_NO_PURE_DECLS \
	MediaEngineering_Source_MediaEngineering_Public_States_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAENGINEERING_API UClass* StaticClass<class AStates>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MediaEngineering_Source_MediaEngineering_Public_States_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
