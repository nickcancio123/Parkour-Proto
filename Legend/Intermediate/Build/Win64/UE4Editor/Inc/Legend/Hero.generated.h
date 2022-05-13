// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEGEND_Hero_generated_h
#error "Hero.generated.h already included, missing '#pragma once' in Hero.h"
#endif
#define LEGEND_Hero_generated_h

#define Legend_Source_Legend_Hero_Hero_h_12_SPARSE_DATA
#define Legend_Source_Legend_Hero_Hero_h_12_RPC_WRAPPERS
#define Legend_Source_Legend_Hero_Hero_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Legend_Source_Legend_Hero_Hero_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHero(); \
	friend struct Z_Construct_UClass_AHero_Statics; \
public: \
	DECLARE_CLASS(AHero, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(AHero)


#define Legend_Source_Legend_Hero_Hero_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHero(); \
	friend struct Z_Construct_UClass_AHero_Statics; \
public: \
	DECLARE_CLASS(AHero, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(AHero)


#define Legend_Source_Legend_Hero_Hero_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHero(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHero) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHero); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHero); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHero(AHero&&); \
	NO_API AHero(const AHero&); \
public:


#define Legend_Source_Legend_Hero_Hero_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHero(AHero&&); \
	NO_API AHero(const AHero&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHero); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHero); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHero)


#define Legend_Source_Legend_Hero_Hero_h_12_PRIVATE_PROPERTY_OFFSET
#define Legend_Source_Legend_Hero_Hero_h_9_PROLOG
#define Legend_Source_Legend_Hero_Hero_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_Hero_h_12_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_Hero_h_12_SPARSE_DATA \
	Legend_Source_Legend_Hero_Hero_h_12_RPC_WRAPPERS \
	Legend_Source_Legend_Hero_Hero_h_12_INCLASS \
	Legend_Source_Legend_Hero_Hero_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Legend_Source_Legend_Hero_Hero_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_Hero_h_12_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_Hero_h_12_SPARSE_DATA \
	Legend_Source_Legend_Hero_Hero_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_Hero_h_12_INCLASS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_Hero_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEGEND_API UClass* StaticClass<class AHero>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Legend_Source_Legend_Hero_Hero_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
