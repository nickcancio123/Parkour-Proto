// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Legend/Hero/AnimNotifies/EnableMovementNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnableMovementNotify() {}
// Cross Module References
	LEGEND_API UClass* Z_Construct_UClass_UEnableMovementNotify_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_UEnableMovementNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Legend();
// End Cross Module References
	void UEnableMovementNotify::StaticRegisterNativesUEnableMovementNotify()
	{
	}
	UClass* Z_Construct_UClass_UEnableMovementNotify_NoRegister()
	{
		return UEnableMovementNotify::StaticClass();
	}
	struct Z_Construct_UClass_UEnableMovementNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMovement_MetaData[];
#endif
		static void NewProp_bEnableMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnableMovementNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Legend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnableMovementNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Hero/AnimNotifies/EnableMovementNotify.h" },
		{ "ModuleRelativePath", "Hero/AnimNotifies/EnableMovementNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnableMovementNotify_Statics::NewProp_bEnableMovement_MetaData[] = {
		{ "Category", "EnableMovementNotify" },
		{ "ModuleRelativePath", "Hero/AnimNotifies/EnableMovementNotify.h" },
	};
#endif
	void Z_Construct_UClass_UEnableMovementNotify_Statics::NewProp_bEnableMovement_SetBit(void* Obj)
	{
		((UEnableMovementNotify*)Obj)->bEnableMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnableMovementNotify_Statics::NewProp_bEnableMovement = { "bEnableMovement", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnableMovementNotify), &Z_Construct_UClass_UEnableMovementNotify_Statics::NewProp_bEnableMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnableMovementNotify_Statics::NewProp_bEnableMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnableMovementNotify_Statics::NewProp_bEnableMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnableMovementNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnableMovementNotify_Statics::NewProp_bEnableMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnableMovementNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnableMovementNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnableMovementNotify_Statics::ClassParams = {
		&UEnableMovementNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnableMovementNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnableMovementNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnableMovementNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnableMovementNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnableMovementNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnableMovementNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnableMovementNotify, 810061827);
	template<> LEGEND_API UClass* StaticClass<UEnableMovementNotify>()
	{
		return UEnableMovementNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnableMovementNotify(Z_Construct_UClass_UEnableMovementNotify, &UEnableMovementNotify::StaticClass, TEXT("/Script/Legend"), TEXT("UEnableMovementNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnableMovementNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
