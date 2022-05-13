// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEGEND_HeroController_generated_h
#error "HeroController.generated.h already included, missing '#pragma once' in HeroController.h"
#endif
#define LEGEND_HeroController_generated_h

#define Legend_Source_Legend_Hero_HeroController_h_15_SPARSE_DATA
#define Legend_Source_Legend_Hero_HeroController_h_15_RPC_WRAPPERS
#define Legend_Source_Legend_Hero_HeroController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Legend_Source_Legend_Hero_HeroController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroController(); \
	friend struct Z_Construct_UClass_AHeroController_Statics; \
public: \
	DECLARE_CLASS(AHeroController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(AHeroController)


#define Legend_Source_Legend_Hero_HeroController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHeroController(); \
	friend struct Z_Construct_UClass_AHeroController_Statics; \
public: \
	DECLARE_CLASS(AHeroController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(AHeroController)


#define Legend_Source_Legend_Hero_HeroController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroController(AHeroController&&); \
	NO_API AHeroController(const AHeroController&); \
public:


#define Legend_Source_Legend_Hero_HeroController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroController(AHeroController&&); \
	NO_API AHeroController(const AHeroController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroController)


#define Legend_Source_Legend_Hero_HeroController_h_15_PRIVATE_PROPERTY_OFFSET
#define Legend_Source_Legend_Hero_HeroController_h_12_PROLOG
#define Legend_Source_Legend_Hero_HeroController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_HeroController_h_15_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_HeroController_h_15_SPARSE_DATA \
	Legend_Source_Legend_Hero_HeroController_h_15_RPC_WRAPPERS \
	Legend_Source_Legend_Hero_HeroController_h_15_INCLASS \
	Legend_Source_Legend_Hero_HeroController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Legend_Source_Legend_Hero_HeroController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_HeroController_h_15_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_HeroController_h_15_SPARSE_DATA \
	Legend_Source_Legend_Hero_HeroController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_HeroController_h_15_INCLASS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_HeroController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEGEND_API UClass* StaticClass<class AHeroController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Legend_Source_Legend_Hero_HeroController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
