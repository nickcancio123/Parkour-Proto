// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Legend/Hero/Hero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHero() {}
// Cross Module References
	LEGEND_API UClass* Z_Construct_UClass_AHero_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_AHero();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Legend();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_UClimbComponent_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_UVaultComponent_NoRegister();
// End Cross Module References
	void AHero::StaticRegisterNativesAHero()
	{
	}
	UClass* Z_Construct_UClass_AHero_NoRegister()
	{
		return AHero::StaticClass();
	}
	struct Z_Construct_UClass_AHero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClimbComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VaultComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoveInput_MetaData[];
#endif
		static void NewProp_bIsMoveInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoveInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJumpTrigger_MetaData[];
#endif
		static void NewProp_bJumpTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJumpTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Legend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Hero/Hero.h" },
		{ "ModuleRelativePath", "Hero/Hero.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hero/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHero, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hero/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHero, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::NewProp_ClimbComp_MetaData[] = {
		{ "Category", "Climbing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hero/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_ClimbComp = { "ClimbComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHero, ClimbComp), Z_Construct_UClass_UClimbComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::NewProp_ClimbComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::NewProp_ClimbComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::NewProp_VaultComp_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hero/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_VaultComp = { "VaultComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHero, VaultComp), Z_Construct_UClass_UVaultComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::NewProp_VaultComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::NewProp_VaultComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Hero/Hero.h" },
	};
#endif
	void Z_Construct_UClass_AHero_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((AHero*)Obj)->bIsSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHero), &Z_Construct_UClass_AHero_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::NewProp_bIsMoveInput_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Hero/Hero.h" },
	};
#endif
	void Z_Construct_UClass_AHero_Statics::NewProp_bIsMoveInput_SetBit(void* Obj)
	{
		((AHero*)Obj)->bIsMoveInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_bIsMoveInput = { "bIsMoveInput", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHero), &Z_Construct_UClass_AHero_Statics::NewProp_bIsMoveInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::NewProp_bIsMoveInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::NewProp_bIsMoveInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Hero/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHero, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Hero/Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHero, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::NewProp_bJumpTrigger_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Hero/Hero.h" },
	};
#endif
	void Z_Construct_UClass_AHero_Statics::NewProp_bJumpTrigger_SetBit(void* Obj)
	{
		((AHero*)Obj)->bJumpTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_bJumpTrigger = { "bJumpTrigger", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHero), &Z_Construct_UClass_AHero_Statics::NewProp_bJumpTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::NewProp_bJumpTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::NewProp_bJumpTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHero_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_ClimbComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_VaultComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_bIsSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_bIsMoveInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_RunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_SprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_bJumpTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHero_Statics::ClassParams = {
		&AHero::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHero_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHero, 355032200);
	template<> LEGEND_API UClass* StaticClass<AHero>()
	{
		return AHero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHero(Z_Construct_UClass_AHero, &AHero::StaticClass, TEXT("/Script/Legend"), TEXT("AHero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
