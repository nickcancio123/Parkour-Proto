// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Legend/Hero/ClimbComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbComponent() {}
// Cross Module References
	LEGEND_API UClass* Z_Construct_UClass_UClimbComponent_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_UClimbComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Legend();
// End Cross Module References
	void UClimbComponent::StaticRegisterNativesUClimbComponent()
	{
	}
	UClass* Z_Construct_UClass_UClimbComponent_NoRegister()
	{
		return UClimbComponent::StaticClass();
	}
	struct Z_Construct_UClass_UClimbComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClimbComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Legend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Hero/ClimbComponent.h" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClimbComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClimbComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClimbComponent_Statics::ClassParams = {
		&UClimbComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClimbComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClimbComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClimbComponent, 4175218264);
	template<> LEGEND_API UClass* StaticClass<UClimbComponent>()
	{
		return UClimbComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClimbComponent(Z_Construct_UClass_UClimbComponent, &UClimbComponent::StaticClass, TEXT("/Script/Legend"), TEXT("UClimbComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClimbComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
