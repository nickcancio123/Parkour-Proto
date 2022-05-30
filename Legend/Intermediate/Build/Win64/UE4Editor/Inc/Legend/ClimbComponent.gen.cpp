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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDebug_MetaData[];
#endif
		static void NewProp_bUseDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClimbTraceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallTraceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallTraceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearanceTraceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClearanceTraceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroLedgeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeroLedgeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClimbTrigger_MetaData[];
#endif
		static void NewProp_bClimbTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClimbTrigger;
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
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_bUseDebug_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
	};
#endif
	void Z_Construct_UClass_UClimbComponent_Statics::NewProp_bUseDebug_SetBit(void* Obj)
	{
		((UClimbComponent*)Obj)->bUseDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_bUseDebug = { "bUseDebug", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClimbComponent), &Z_Construct_UClass_UClimbComponent_Statics::NewProp_bUseDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_bUseDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_bUseDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClimbTraceRange_MetaData[] = {
		{ "Category", "Climbing" },
		{ "Comment", "//Variables:\n// The trace range for low, mid, and high forward traces\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "Variables:\n The trace range for low, mid, and high forward traces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClimbTraceRange = { "ClimbTraceRange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, ClimbTraceRange), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClimbTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClimbTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_WallTraceHeight_MetaData[] = {
		{ "Category", "Climbing" },
		{ "Comment", "// Wall Trace: looking for wall at just below where hands would go\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "Wall Trace: looking for wall at just below where hands would go" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_WallTraceHeight = { "WallTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, WallTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_WallTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_WallTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClearanceTraceHeight_MetaData[] = {
		{ "Category", "Climbing" },
		{ "Comment", "// Clearance Trace: looking for wall at just above where hands would go\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "Clearance Trace: looking for wall at just above where hands would go" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClearanceTraceHeight = { "ClearanceTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, ClearanceTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClearanceTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClearanceTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_HeroLedgeOffset_MetaData[] = {
		{ "Category", "Climbing" },
		{ "Comment", "// The offset from the ledge that the hero is snapped to prior to climbinh\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "The offset from the ledge that the hero is snapped to prior to climbinh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_HeroLedgeOffset = { "HeroLedgeOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbComponent, HeroLedgeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_HeroLedgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_HeroLedgeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbComponent_Statics::NewProp_bClimbTrigger_MetaData[] = {
		{ "Category", "Climbing" },
		{ "Comment", "// Used to trigger climb animation\n" },
		{ "ModuleRelativePath", "Hero/ClimbComponent.h" },
		{ "ToolTip", "Used to trigger climb animation" },
	};
#endif
	void Z_Construct_UClass_UClimbComponent_Statics::NewProp_bClimbTrigger_SetBit(void* Obj)
	{
		((UClimbComponent*)Obj)->bClimbTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClimbComponent_Statics::NewProp_bClimbTrigger = { "bClimbTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClimbComponent), &Z_Construct_UClass_UClimbComponent_Statics::NewProp_bClimbTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClimbComponent_Statics::NewProp_bClimbTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::NewProp_bClimbTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClimbComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_ActorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_RootHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_bUseDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClimbTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_WallTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_ClearanceTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_HeroLedgeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbComponent_Statics::NewProp_bClimbTrigger,
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
	IMPLEMENT_CLASS(UClimbComponent, 3780281403);
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
