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
	LEGEND_API UEnum* Z_Construct_UEnum_Legend_EParkourMoveType();
	UPackage* Z_Construct_UPackage__Script_Legend();
	LEGEND_API UScriptStruct* Z_Construct_UScriptStruct_FParkourVariant();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_UParkourComponent_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_UParkourComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* EParkourMoveType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Legend_EParkourMoveType, Z_Construct_UPackage__Script_Legend(), TEXT("EParkourMoveType"));
		}
		return Singleton;
	}
	template<> LEGEND_API UEnum* StaticEnum<EParkourMoveType>()
	{
		return EParkourMoveType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParkourMoveType(EParkourMoveType_StaticEnum, TEXT("/Script/Legend"), TEXT("EParkourMoveType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Legend_EParkourMoveType_Hash() { return 16751191U; }
	UEnum* Z_Construct_UEnum_Legend_EParkourMoveType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Legend();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParkourMoveType"), 0, Get_Z_Construct_UEnum_Legend_EParkourMoveType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Climb", (int64)Climb },
				{ "Vault", (int64)Vault },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Climb.DisplayName", "Climb" },
				{ "Climb.Name", "Climb" },
				{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
				{ "Vault.DisplayName", "Vault" },
				{ "Vault.Name", "Vault" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Legend,
				nullptr,
				"EParkourMoveType",
				"EParkourMoveType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FParkourVariant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEGEND_API uint32 Get_Z_Construct_UScriptStruct_FParkourVariant_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParkourVariant, Z_Construct_UPackage__Script_Legend(), TEXT("ParkourVariant"), sizeof(FParkourVariant), Get_Z_Construct_UScriptStruct_FParkourVariant_Hash());
	}
	return Singleton;
}
template<> LEGEND_API UScriptStruct* StaticStruct<FParkourVariant>()
{
	return FParkourVariant::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParkourVariant(FParkourVariant::StaticStruct, TEXT("/Script/Legend"), TEXT("ParkourVariant"), false, nullptr, nullptr);
static struct FScriptStruct_Legend_StaticRegisterNativesFParkourVariant
{
	FScriptStruct_Legend_StaticRegisterNativesFParkourVariant()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParkourVariant")),new UScriptStruct::TCppStructOps<FParkourVariant>);
	}
} ScriptStruct_Legend_StaticRegisterNativesFParkourVariant;
	struct Z_Construct_UScriptStruct_FParkourVariant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ObstacleHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLedgeOffset_MetaData[];
#endif
		static void NewProp_bUseLedgeOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLedgeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LedgeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LedgeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParkourVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParkourVariant>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_ObstacleHeight_MetaData[] = {
		{ "Category", "ParkourVariant" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_ObstacleHeight = { "ObstacleHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParkourVariant, ObstacleHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_ObstacleHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_ObstacleHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_bUseLedgeOffset_MetaData[] = {
		{ "Category", "ParkourVariant" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_bUseLedgeOffset_SetBit(void* Obj)
	{
		((FParkourVariant*)Obj)->bUseLedgeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_bUseLedgeOffset = { "bUseLedgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FParkourVariant), &Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_bUseLedgeOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_bUseLedgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_bUseLedgeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_LedgeOffset_MetaData[] = {
		{ "Category", "ParkourVariant" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_LedgeOffset = { "LedgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParkourVariant, LedgeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_LedgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_LedgeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "ParkourVariant" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParkourVariant, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParkourVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_ObstacleHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_bUseLedgeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_LedgeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParkourVariant_Statics::NewProp_Montage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParkourVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Legend,
		nullptr,
		&NewStructOps,
		"ParkourVariant",
		sizeof(FParkourVariant),
		alignof(FParkourVariant),
		Z_Construct_UScriptStruct_FParkourVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParkourVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParkourVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParkourVariant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParkourVariant_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Legend();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParkourVariant"), sizeof(FParkourVariant), Get_Z_Construct_UScriptStruct_FParkourVariant_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParkourVariant_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParkourVariant_Hash() { return 1532335113U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoClimbWhileFalling_MetaData[];
#endif
		static void NewProp_bAutoClimbWhileFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoClimbWhileFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAutoClimbHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAutoClimbHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAutoClimbHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAutoClimbHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAutoClimbHeightFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAutoClimbHeightFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAutoClimbHeightFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAutoClimbHeightFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinClimbHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinClimbHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClimbHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxClimbHeight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbVariants_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbVariants_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClimbVariants;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAutoVault_MetaData[];
#endif
		static void NewProp_bCanAutoVault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAutoVault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoVaultWhileFalling_MetaData[];
#endif
		static void NewProp_bAutoVaultWhileFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoVaultWhileFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAutoVaultHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAutoVaultHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAutoVaultHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAutoVaultHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAutoVaultHeightFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAutoVaultHeightFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAutoVaultHeightFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAutoVaultHeightFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVaultHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVaultHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVaultHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVaultHeight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VaultVariants_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultVariants_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VaultVariants;
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
		{ "Category", "Traces|Obstacle" },
		{ "Comment", "//===OBSTACLE TRACES===\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "===OBSTACLE TRACES===" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceRange = { "ObstacleTraceRange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, ObstacleTraceRange), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ObstacleTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleTraceHeight_MetaData[] = {
		{ "Category", "Traces|Obstacle" },
		{ "Comment", "// Used for the obstacle trace low\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "Used for the obstacle trace low" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleTraceHeight = { "MinObstacleTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MinObstacleTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinObstacleTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleTraceHeight_MetaData[] = {
		{ "Category", "Traces|Obstacle" },
		{ "Comment", "// Used for the obstacle trace high\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "Used for the obstacle trace high" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleTraceHeight = { "MaxObstacleTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxObstacleTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_HeightTraceDepth_MetaData[] = {
		{ "Category", "Traces|Height" },
		{ "Comment", "//===Height Trace===\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "===Height Trace===" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_HeightTraceDepth = { "HeightTraceDepth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, HeightTraceDepth), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_HeightTraceDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_HeightTraceDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleDepthToVault_MetaData[] = {
		{ "Category", "Traces|Depth" },
		{ "Comment", "//===Depth Trace===\n// Used for depth trace: if obstacle depth is greater than -> climb, less than -> vault\n" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
		{ "ToolTip", "===Depth Trace===\n Used for depth trace: if obstacle depth is greater than -> climb, less than -> vault" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleDepthToVault = { "MaxObstacleDepthToVault", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxObstacleDepthToVault), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleDepthToVault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxObstacleDepthToVault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb_MetaData[] = {
		{ "Category", "Climbing|Auto Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb_SetBit(void* Obj)
	{
		((UParkourComponent*)Obj)->bCanAutoClimb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb = { "bCanAutoClimb", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParkourComponent), &Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoClimb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoClimbWhileFalling_MetaData[] = {
		{ "Category", "Climbing|Auto Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoClimbWhileFalling_SetBit(void* Obj)
	{
		((UParkourComponent*)Obj)->bAutoClimbWhileFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoClimbWhileFalling = { "bAutoClimbWhileFalling", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParkourComponent), &Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoClimbWhileFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoClimbWhileFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoClimbWhileFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoClimbHeight_MetaData[] = {
		{ "Category", "Climbing|Auto Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoClimbHeight = { "MinAutoClimbHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MinAutoClimbHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoClimbHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoClimbHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoClimbHeight_MetaData[] = {
		{ "Category", "Climbing|Auto Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoClimbHeight = { "MaxAutoClimbHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxAutoClimbHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoClimbHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoClimbHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoClimbHeightFalling_MetaData[] = {
		{ "Category", "Climbing|Auto Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoClimbHeightFalling = { "MinAutoClimbHeightFalling", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MinAutoClimbHeightFalling), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoClimbHeightFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoClimbHeightFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoClimbHeightFalling_MetaData[] = {
		{ "Category", "Climbing|Auto Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoClimbHeightFalling = { "MaxAutoClimbHeightFalling", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxAutoClimbHeightFalling), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoClimbHeightFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoClimbHeightFalling_MetaData)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbVariants_Inner = { "ClimbVariants", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParkourVariant, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbVariants_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbVariants = { "ClimbVariants", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, ClimbVariants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbVariants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbVariants_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault_MetaData[] = {
		{ "Category", "Vaulting|Auto Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault_SetBit(void* Obj)
	{
		((UParkourComponent*)Obj)->bCanAutoVault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault = { "bCanAutoVault", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParkourComponent), &Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoVaultWhileFalling_MetaData[] = {
		{ "Category", "Vaulting|Auto Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoVaultWhileFalling_SetBit(void* Obj)
	{
		((UParkourComponent*)Obj)->bAutoVaultWhileFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoVaultWhileFalling = { "bAutoVaultWhileFalling", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParkourComponent), &Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoVaultWhileFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoVaultWhileFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoVaultWhileFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoVaultHeight_MetaData[] = {
		{ "Category", "Vaulting|Auto Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoVaultHeight = { "MinAutoVaultHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MinAutoVaultHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoVaultHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoVaultHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoVaultHeight_MetaData[] = {
		{ "Category", "Vaulting|Auto Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoVaultHeight = { "MaxAutoVaultHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxAutoVaultHeight), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoVaultHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoVaultHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoVaultHeightFalling_MetaData[] = {
		{ "Category", "Vaulting|Auto Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoVaultHeightFalling = { "MinAutoVaultHeightFalling", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MinAutoVaultHeightFalling), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoVaultHeightFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoVaultHeightFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoVaultHeightFalling_MetaData[] = {
		{ "Category", "Vaulting|Auto Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoVaultHeightFalling = { "MaxAutoVaultHeightFalling", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, MaxAutoVaultHeightFalling), METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoVaultHeightFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoVaultHeightFalling_MetaData)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultVariants_Inner = { "VaultVariants", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParkourVariant, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultVariants_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "ModuleRelativePath", "Hero/Components/ParkourComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultVariants = { "VaultVariants", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParkourComponent, VaultVariants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultVariants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultVariants_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoClimbWhileFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoClimbHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoClimbHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoClimbHeightFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoClimbHeightFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinClimbHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxClimbHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbVariants_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_ClimbVariants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_bCanAutoVault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_bAutoVaultWhileFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoVaultHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoVaultHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinAutoVaultHeightFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxAutoVaultHeightFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MinVaultHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_MaxVaultHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultVariants_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourComponent_Statics::NewProp_VaultVariants,
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
	IMPLEMENT_CLASS(UParkourComponent, 87160355);
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
