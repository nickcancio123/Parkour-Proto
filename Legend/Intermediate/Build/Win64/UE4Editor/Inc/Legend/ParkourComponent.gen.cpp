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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinObstacleTraceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinObstacleTraceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxObstacleTraceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxObstacleTraceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightTraceDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightTraceDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxObstacleDepthToVault_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxObstacleDepthToVault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAutoClimb_MetaData[];
#endif
		static void NewProp_bCanAutoClimb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAutoClimb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinClimbHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinClimbHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClimbHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxClimbHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxObstacleHeightToAutoClimb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxObstacleHeightToAutoClimb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbLedgeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbLedgeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClimbMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAutoVault_MetaData[];
#endif
		static void NewProp_bCanAutoVault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAutoVault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVaultHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVaultHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVaultHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVaultHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxObstacleHeightToAutoVault_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxObstacleHeightToAutoVault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultLedgeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VaultLedgeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VaultMontage;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleTraceHeight_MetaData[] = {
		{ "Category", "Obstacle Traces" },
		{ "Comment", "// Used for the obstacle trace low\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "Used for the obstacle trace low" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleTraceHeight = { "MinObstacleTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MinObstacleTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleTraceHeight_MetaData[] = {
		{ "Category", "Obstacle Traces" },
		{ "Comment", "// Used for the obstacle trace high\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "Used for the obstacle trace high" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleTraceHeight = { "MaxObstacleTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxObstacleTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleTraceHeight_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleDepthToVault_MetaData[] = {
		{ "Category", "Depth Trace" },
		{ "Comment", "//===Depth Trace===\n// Used for depth trace: if obstacle depth is greater than -> climb, less than -> vault\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "===Depth Trace===\n Used for depth trace: if obstacle depth is greater than -> climb, less than -> vault" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleDepthToVault = { "MaxObstacleDepthToVault", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxObstacleDepthToVault), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleDepthToVault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleDepthToVault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb_SetBit(void* Obj)
	{
		((UParkourComponent*)Obj)->bCanAutoClimb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb = { "bCanAutoClimb", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParkourComponent), &Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinClimbHeight_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinClimbHeight = { "MinClimbHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MinClimbHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinClimbHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinClimbHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxClimbHeight_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxClimbHeight = { "MaxClimbHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxClimbHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxClimbHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxClimbHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToAutoClimb_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToAutoClimb = { "MaxObstacleHeightToAutoClimb", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxObstacleHeightToAutoClimb), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToAutoClimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToAutoClimb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbLedgeOffset_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbLedgeOffset = { "ClimbLedgeOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, ClimbLedgeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbLedgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbLedgeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbMontage_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbMontage = { "ClimbMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, ClimbMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault_SetBit(void* Obj)
	{
		((UParkourComponent*)Obj)->bCanAutoVault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault = { "bCanAutoVault", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParkourComponent), &Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinVaultHeight_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinVaultHeight = { "MinVaultHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MinVaultHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinVaultHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinVaultHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxVaultHeight_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxVaultHeight = { "MaxVaultHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxVaultHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxVaultHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxVaultHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToAutoVault_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToAutoVault = { "MaxObstacleHeightToAutoVault", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxObstacleHeightToAutoVault), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToAutoVault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToAutoVault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultLedgeOffset_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultLedgeOffset = { "VaultLedgeOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, VaultLedgeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultLedgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultLedgeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultMontage_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultMontage = { "VaultMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, VaultMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParkourComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_ActorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_RootHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_bUseDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_HeightTraceDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleDepthToVault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinClimbHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxClimbHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToAutoClimb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbLedgeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinVaultHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxVaultHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleHeightToAutoVault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultLedgeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultMontage,
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
	IMPLEMENT_CLASS(UParkourComponent, 1946483667);
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
