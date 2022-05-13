// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Legend/Hero/HeroController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroController() {}
// Cross Module References
	LEGEND_API UClass* Z_Construct_UClass_AHeroController_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_AHeroController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Legend();
// End Cross Module References
	void AHeroController::StaticRegisterNativesAHeroController()
	{
	}
	UClass* Z_Construct_UClass_AHeroController_NoRegister()
	{
		return AHeroController::StaticClass();
	}
	struct Z_Construct_UClass_AHeroController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeroController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Legend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Hero/HeroController.h" },
		{ "ModuleRelativePath", "Hero/HeroController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeroController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHeroController_Statics::ClassParams = {
		&AHeroController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHeroController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeroController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHeroController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeroController, 3947057216);
	template<> LEGEND_API UClass* StaticClass<AHeroController>()
	{
		return AHeroController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeroController(Z_Construct_UClass_AHeroController, &AHeroController::StaticClass, TEXT("/Script/Legend"), TEXT("AHeroController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
