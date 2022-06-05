// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Legend/Hero/AnimNotifies/ResetJumpTriggerNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResetJumpTriggerNotify() {}
// Cross Module References
	LEGEND_API UClass* Z_Construct_UClass_UResetJumpTriggerNotify_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_UResetJumpTriggerNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Legend();
// End Cross Module References
	void UResetJumpTriggerNotify::StaticRegisterNativesUResetJumpTriggerNotify()
	{
	}
	UClass* Z_Construct_UClass_UResetJumpTriggerNotify_NoRegister()
	{
		return UResetJumpTriggerNotify::StaticClass();
	}
	struct Z_Construct_UClass_UResetJumpTriggerNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResetJumpTriggerNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Legend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetJumpTriggerNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Hero/AnimNotifies/ResetJumpTriggerNotify.h" },
		{ "ModuleRelativePath", "Hero/AnimNotifies/ResetJumpTriggerNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResetJumpTriggerNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResetJumpTriggerNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResetJumpTriggerNotify_Statics::ClassParams = {
		&UResetJumpTriggerNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResetJumpTriggerNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResetJumpTriggerNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResetJumpTriggerNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResetJumpTriggerNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResetJumpTriggerNotify, 1227745662);
	template<> LEGEND_API UClass* StaticClass<UResetJumpTriggerNotify>()
	{
		return UResetJumpTriggerNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResetJumpTriggerNotify(Z_Construct_UClass_UResetJumpTriggerNotify, &UResetJumpTriggerNotify::StaticClass, TEXT("/Script/Legend"), TEXT("UResetJumpTriggerNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResetJumpTriggerNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
