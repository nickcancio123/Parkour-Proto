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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActorHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClimbTraceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowTraceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowTraceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MidTraceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MidTraceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighTraceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighTraceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthTraceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthTraceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthTraceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVaultTrigger_MetaData[];
#endif
		static void NewProp_bVaultTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVaultTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_ActorHeight_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// GENERAL\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "GENERAL" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_ActorHeight = { "ActorHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, ActorHeight), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_ActorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_ActorHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_RootHeight_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_RootHeight = { "RootHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, RootHeight), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_RootHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_RootHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClimbTraceRange_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// The trace range for low, mid, and high forward traces\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "The trace range for low, mid, and high forward traces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClimbTraceRange = { "ClimbTraceRange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, ClimbTraceRange), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClimbTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClimbTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_LowTraceHeight_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// Low Trace: searches for obstacles present ahead at waist height\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "Low Trace: searches for obstacles present ahead at waist height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_LowTraceHeight = { "LowTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, LowTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_LowTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_LowTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_MidTraceHeight_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// Mid Trace: searches for obstacles present ahead at face height\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "Mid Trace: searches for obstacles present ahead at face height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_MidTraceHeight = { "MidTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, MidTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_MidTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_MidTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_HighTraceHeight_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// High Trace: searches for obstacles present ahead at above face height\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "High Trace: searches for obstacles present ahead at above face height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_HighTraceHeight = { "HighTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, HighTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_HighTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_HighTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceHeight_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// Depth Trace: checks the depth of the object ahead of actor (goes downward)\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "Depth Trace: checks the depth of the object ahead of actor (goes downward)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceHeight = { "DepthTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, DepthTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceRange_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// How far down the trace should go from starting point\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "How far down the trace should go from starting point" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceRange = { "DepthTraceRange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, DepthTraceRange), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceDistance_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// How far from obstacle impact point should the traced start from\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "How far from obstacle impact point should the traced start from" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceDistance = { "DepthTraceDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, DepthTraceDistance), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_bVaultTrigger_MetaData[] = {
		{ "Category", "Climbing" },
		{ "Comment", "// Used to trigger vault animation\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "Used to trigger vault animation" },
	};
#endif
	void Z_Construct_UClass_UClimbComponent_Statics::NewProp_bVaultTrigger_SetBit(void* Obj)
	{
		((UClimbComponent*)Obj)->bVaultTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_bVaultTrigger = { "bVaultTrigger", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClimbComponent), &Z_Construct_UClass_UClimbComponent_Statics::NewProp_bVaultTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_bVaultTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_bVaultTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClimbComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_ActorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_RootHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClimbTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_LowTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_MidTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_HighTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_DepthTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_bVaultTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClimbComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClimbComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClimbComponent_Statics::ClassParams = {
		&UClimbComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClimbComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UClimbComponent, 2540251762);
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
