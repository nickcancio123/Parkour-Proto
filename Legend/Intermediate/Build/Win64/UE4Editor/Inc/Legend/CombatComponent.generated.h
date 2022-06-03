// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEGEND_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define LEGEND_CombatComponent_generated_h

#define Legend_Source_Legend_Hero_CombatComponent_h_13_SPARSE_DATA
#define Legend_Source_Legend_Hero_CombatComponent_h_13_RPC_WRAPPERS
#define Legend_Source_Legend_Hero_CombatComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Legend_Source_Legend_Hero_CombatComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent)


#define Legend_Source_Legend_Hero_CombatComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent)


#define Legend_Source_Legend_Hero_CombatComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public:


#define Legend_Source_Legend_Hero_CombatComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent)


#define Legend_Source_Legend_Hero_CombatComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define Legend_Source_Legend_Hero_CombatComponent_h_10_PROLOG
#define Legend_Source_Legend_Hero_CombatComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_CombatComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_CombatComponent_h_13_SPARSE_DATA \
	Legend_Source_Legend_Hero_CombatComponent_h_13_RPC_WRAPPERS \
	Legend_Source_Legend_Hero_CombatComponent_h_13_INCLASS \
	Legend_Source_Legend_Hero_CombatComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Legend_Source_Legend_Hero_CombatComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_CombatComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_CombatComponent_h_13_SPARSE_DATA \
	Legend_Source_Legend_Hero_CombatComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_CombatComponent_h_13_INCLASS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_CombatComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEGEND_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Legend_Source_Legend_Hero_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
