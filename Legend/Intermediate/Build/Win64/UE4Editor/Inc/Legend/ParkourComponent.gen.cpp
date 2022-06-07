// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Legend/Hero/Components/ParkourComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParkourComponent() {}
// Cross Module References
	LEGEND_API UClass* Z_Construct_UClass_UParkourComponent_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_UParkourComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Legend();
// End Cross Module References
	void UParkourComponent::StaticRegisterNativesUParkourComponent()
	{
	}
	UClass* Z_Construct_UClass_UParkourComponent_NoRegister()
	{
		return UParkourComponent::StaticClass();
	}
	struct Z_Construct_UClass_UParkourComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ObstacleTraceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinObstacleHeightToParkour_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinObstacleHeightToParkour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleTraceHeightHigh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ObstacleTraceHeightHigh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxObstacleHeightToParkour_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxObstacleHeightToParkour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightTraceDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightTraceDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowHeightTraceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowHeightTraceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthTraceDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthTraceDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParkourComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Legend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Hero/Components/ParkourComponent.h" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_ActorHeight_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_ActorHeight = { "ActorHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, ActorHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ActorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ActorHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_RootHeight_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_RootHeight = { "RootHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, RootHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_RootHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_RootHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_bUseDebug_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParkourComponent_Statics::NewProp_bUseDebug_SetBit(void* Obj)
	{
		((UParkourComponent*)Obj)->bUseDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_bUseDebug = { "bUseDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParkourComponent), &Z_Construct_UClass_UParkourComponent_Statics::NewProp_bUseDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bUseDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bUseDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceRange_MetaData[] = {
		{ "Category", "Obstacle Traces" },
		{ "Comment", "//===OBSTACLE TRACES===\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "===OBSTACLE TRACES===" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceRange = { "ObstacleTraceRange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, ObstacleTraceRange), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleHeightToParkour_MetaData[] = {
		{ "Category", "Obstacle Traces" },
		{ "Comment", "// Used for the obstacle trace low\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "Used for the obstacle trace low" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleHeightToParkour = { "MinObstacleHeightToParkour", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MinObstacleHeightToParkour), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleHeightToParkour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleHeightToParkour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceHeightHigh_MetaData[] = {
		{ "Category", "Obstacle Traces" },
		{ "Comment", "// Used to detect objects at around head height\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "Used to detect objects at around head height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceHeightHigh = { "ObstacleTraceHeightHigh", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, ObstacleTraceHeightHigh), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceHeightHigh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceHeightHigh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToParkour_MetaData[] = {
		{ "Category", "Obstacle Traces" },
		{ "Comment", "// Used for the clearance trace\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "Used for the clearance trace" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToParkour = { "MaxObstacleHeightToParkour", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxObstacleHeightToParkour), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToParkour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToParkour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_HeightTraceDepth_MetaData[] = {
		{ "Category", "Height Trace" },
		{ "Comment", "//===Height Trace===\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "===Height Trace===" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_HeightTraceDepth = { "HeightTraceDepth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, HeightTraceDepth), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_HeightTraceDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_HeightTraceDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_LowHeightTraceHeight_MetaData[] = {
		{ "Category", "Height Trace" },
		{ "Comment", "// Used for height trace when obstacle is hit by low obstacle trace\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "Used for height trace when obstacle is hit by low obstacle trace" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_LowHeightTraceHeight = { "LowHeightTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, LowHeightTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_LowHeightTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_LowHeightTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_DepthTraceDepth_MetaData[] = {
		{ "Category", "Depth Trace" },
		{ "Comment", "//===Depth Trace===\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "===Depth Trace===" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_DepthTraceDepth = { "DepthTraceDepth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, DepthTraceDepth), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_DepthTraceDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_DepthTraceDepth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParkourComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_ActorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_RootHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_bUseDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleHeightToParkour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceHeightHigh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToParkour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_HeightTraceDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_LowHeightTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_DepthTraceDepth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParkourComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParkourComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParkourComponent_Statics::ClassParams = {
		&UParkourComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParkourComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParkourComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParkourComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParkourComponent, 2150016213);
	template<> LEGEND_API UClass* StaticClass<UParkourComponent>()
	{
		return UParkourComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParkourComponent(Z_Construct_UClass_UParkourComponent, &UParkourComponent::StaticClass, TEXT("/Script/Legend"), TEXT("UParkourComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParkourComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
