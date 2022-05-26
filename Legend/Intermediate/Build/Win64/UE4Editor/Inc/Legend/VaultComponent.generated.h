// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEGEND_VaultComponent_generated_h
#error "VaultComponent.generated.h already included, missing '#pragma once' in VaultComponent.h"
#endif
#define LEGEND_VaultComponent_generated_h

#define Legend_Source_Legend_Hero_VaultComponent_h_23_SPARSE_DATA
#define Legend_Source_Legend_Hero_VaultComponent_h_23_RPC_WRAPPERS
#define Legend_Source_Legend_Hero_VaultComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Legend_Source_Legend_Hero_VaultComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaultComponent(); \
	friend struct Z_Construct_UClass_UVaultComponent_Statics; \
public: \
	DECLARE_CLASS(UVaultComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(UVaultComponent)


#define Legend_Source_Legend_Hero_VaultComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUVaultComponent(); \
	friend struct Z_Construct_UClass_UVaultComponent_Statics; \
public: \
	DECLARE_CLASS(UVaultComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(UVaultComponent)


#define Legend_Source_Legend_Hero_VaultComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaultComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaultComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaultComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaultComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaultComponent(UVaultComponent&&); \
	NO_API UVaultComponent(const UVaultComponent&); \
public:


#define Legend_Source_Legend_Hero_VaultComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaultComponent(UVaultComponent&&); \
	NO_API UVaultComponent(const UVaultComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaultComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaultComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVaultComponent)


#define Legend_Source_Legend_Hero_VaultComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define Legend_Source_Legend_Hero_VaultComponent_h_20_PROLOG
#define Legend_Source_Legend_Hero_VaultComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_VaultComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_VaultComponent_h_23_SPARSE_DATA \
	Legend_Source_Legend_Hero_VaultComponent_h_23_RPC_WRAPPERS \
	Legend_Source_Legend_Hero_VaultComponent_h_23_INCLASS \
	Legend_Source_Legend_Hero_VaultComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Legend_Source_Legend_Hero_VaultComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_VaultComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_VaultComponent_h_23_SPARSE_DATA \
	Legend_Source_Legend_Hero_VaultComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_VaultComponent_h_23_INCLASS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_VaultComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEGEND_API UClass* StaticClass<class UVaultComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Legend_Source_Legend_Hero_VaultComponent_h


#define FOREACH_ENUM_EVAULTTYPE(op) \
	op(Short) \
	op(Tall) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS