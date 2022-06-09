// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Legend/Hero/AnimNotifies/ResetParkourNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResetParkourNotify() {}
// Cross Module References
	LEGEND_API UClass* Z_Construct_UClass_UResetParkourNotify_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_UResetParkourNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Legend();
// End Cross Module References
	void UResetParkourNotify::StaticRegisterNativesUResetParkourNotify()
	{
	}
	UClass* Z_Construct_UClass_UResetParkourNotify_NoRegister()
	{
		return UResetParkourNotify::StaticClass();
	}
	struct Z_Construct_UClass_UResetParkourNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResetParkourNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Legend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetParkourNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Hero/AnimNotifies/ResetParkourNotify.h" },
		{ "ModuleRelativePath", "Hero/AnimNotifies/ResetParkourNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResetParkourNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResetParkourNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResetParkourNotify_Statics::ClassParams = {
		&UResetParkourNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UResetParkourNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResetParkourNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResetParkourNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResetParkourNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResetParkourNotify, 2076039687);
	template<> LEGEND_API UClass* StaticClass<UResetParkourNotify>()
	{
		return UResetParkourNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResetParkourNotify(Z_Construct_UClass_UResetParkourNotify, &UResetParkourNotify::StaticClass, TEXT("/Script/Legend"), TEXT("UResetParkourNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResetParkourNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
