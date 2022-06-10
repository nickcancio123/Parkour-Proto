// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEGEND_ParkourComponent_generated_h
#error "ParkourComponent.generated.h already included, missing '#pragma once' in ParkourComponent.h"
#endif
#define LEGEND_ParkourComponent_generated_h

#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParkourVariant_Statics; \
	LEGEND_API static class UScriptStruct* StaticStruct();


template<> LEGEND_API UScriptStruct* StaticStruct<struct FParkourVariant>();

#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_SPARSE_DATA
#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_RPC_WRAPPERS
#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParkourComponent(); \
	friend struct Z_Construct_UClass_UParkourComponent_Statics; \
public: \
	DECLARE_CLASS(UParkourComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(UParkourComponent)


#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUParkourComponent(); \
	friend struct Z_Construct_UClass_UParkourComponent_Statics; \
public: \
	DECLARE_CLASS(UParkourComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Legend"), NO_API) \
	DECLARE_SERIALIZER(UParkourComponent)


#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParkourComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParkourComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParkourComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParkourComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParkourComponent(UParkourComponent&&); \
	NO_API UParkourComponent(const UParkourComponent&); \
public:


#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParkourComponent(UParkourComponent&&); \
	NO_API UParkourComponent(const UParkourComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParkourComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParkourComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UParkourComponent)


#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_PRIVATE_PROPERTY_OFFSET
#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_35_PROLOG
#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_SPARSE_DATA \
	Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_RPC_WRAPPERS \
	Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_INCLASS \
	Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_SPARSE_DATA \
	Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_INCLASS_NO_PURE_DECLS \
	Legend_Source_Legend_Hero_Components_ParkourComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEGEND_API UClass* StaticClass<class UParkourComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Legend_Source_Legend_Hero_Components_ParkourComponent_h


#define FOREACH_ENUM_EPARKOURMOVETYPE(op) \
	op(Climb) \
	op(Vault) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
