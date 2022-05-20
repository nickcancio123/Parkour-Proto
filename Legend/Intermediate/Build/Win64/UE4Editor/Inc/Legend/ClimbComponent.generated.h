// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEGEND_ClimbComponent_generated_h
#error "ClimbComponent.generated.h already included, missing '#pragma once' in ClimbComponent.h"
#endif
#define LEGEND_ClimbComponent_generated_h

#define Legend_Source_Legend_Hero_ClimbComponent_h_22_SPARSE_DATA
#define Legend_Source_Legend_Hero_ClimbComponent_h_22_RPC_WRAPPERS
#define Legend_Source_Legend_Hero_ClimbComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Legend_Source_Legend_Hero_ClimbComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClimbComponent(); \
	friend struct Z_Construct_UClass_UClimbComponent_Statics; \
public: \
	DECLARE_CLASS(UClimbComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(UClimbComponent)


#define Legend_Source_Legend_Hero_ClimbComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUClimbComponent(); \
	friend struct Z_Construct_UClass_UClimbComponent_Statics; \
public: \
	DECLARE_CLASS(UClimbComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(UClimbComponent)


#define Legend_Source_Legend_Hero_ClimbComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClimbComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClimbComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClimbComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClimbComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClimbComponent(UClimbComponent&&); \
	NO_API UClimbComponent(const UClimbComponent&); \
public:


#define Legend_Source_Legend_Hero_ClimbComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClimbComponent(UClimbComponent&&); \
	NO_API UClimbComponent(const UClimbComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClimbComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClimbComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClimbComponent)


#define Legend_Source_Legend_Hero_ClimbComponent_h_22_PRIVATE_PROPERTY_OFFSET
#define Legend_Source_Legend_Hero_ClimbComponent_h_19_PROLOG
#define Legend_Source_Legend_Hero_ClimbComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_ClimbComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_ClimbComponent_h_22_SPARSE_DATA \
	Legend_Source_Legend_Hero_ClimbComponent_h_22_RPC_WRAPPERS \
	Legend_Source_Legend_Hero_ClimbComponent_h_22_INCLASS \
	Legend_Source_Legend_Hero_ClimbComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Legend_Source_Legend_Hero_ClimbComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_ClimbComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_ClimbComponent_h_22_SPARSE_DATA \
	Legend_Source_Legend_Hero_ClimbComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_ClimbComponent_h_22_INCLASS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_ClimbComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEGEND_API UClass* StaticClass<class UClimbComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Legend_Source_Legend_Hero_ClimbComponent_h


#define FOREACH_ENUM_EVAULTTYPE(op) \
	op(Short) \
	op(Tall) \
	op(Short_Falling) \
	op(Tall_Falling) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
