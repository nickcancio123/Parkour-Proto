// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Legend/Hero/VaultComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaultComponent() {}
// Cross Module References
	LEGEND_API UEnum* Z_Construct_UEnum_Legend_EVaultOntoType();
	UPackage* Z_Construct_UPackage__Script_Legend();
	LEGEND_API UEnum* Z_Construct_UEnum_Legend_EVaultOverType();
	LEGEND_API UClass* Z_Construct_UClass_UVaultComponent_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_UVaultComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* EVaultOntoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Legend_EVaultOntoType, Z_Construct_UPackage__Script_Legend(), TEXT("EVaultOntoType"));
		}
		return Singleton;
	}
	template<> LEGEND_API UEnum* StaticEnum<EVaultOntoType>()
	{
		return EVaultOntoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVaultOntoType(EVaultOntoType_StaticEnum, TEXT("/Script/Legend"), TEXT("EVaultOntoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Legend_EVaultOntoType_Hash() { return 3506891027U; }
	UEnum* Z_Construct_UEnum_Legend_EVaultOntoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Legend();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVaultOntoType"), 0, Get_Z_Construct_UEnum_Legend_EVaultOntoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Onto_Short", (int64)Onto_Short },
				{ "Onto_Mid", (int64)Onto_Mid },
				{ "Onto_Tall", (int64)Onto_Tall },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Enum type used to determine which vault-onto animation to play\n" },
				{ "ModuleRelativePath", "Hero/VaultComponent.h" },
				{ "Onto_Mid.DisplayName", "Mid" },
				{ "Onto_Mid.Name", "Onto_Mid" },
				{ "Onto_Short.DisplayName", "Short" },
				{ "Onto_Short.Name", "Onto_Short" },
				{ "Onto_Tall.DisplayName", "Tall" },
				{ "Onto_Tall.Name", "Onto_Tall" },
				{ "ToolTip", "Enum type used to determine which vault-onto animation to play" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Legend,
				nullptr,
				"EVaultOntoType",
				"EVaultOntoType",
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
	static UEnum* EVaultOverType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Legend_EVaultOverType, Z_Construct_UPackage__Script_Legend(), TEXT("EVaultOverType"));
		}
		return Singleton;
	}
	template<> LEGEND_API UEnum* StaticEnum<EVaultOverType>()
	{
		return EVaultOverType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVaultOverType(EVaultOverType_StaticEnum, TEXT("/Script/Legend"), TEXT("EVaultOverType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Legend_EVaultOverType_Hash() { return 1864308424U; }
	UEnum* Z_Construct_UEnum_Legend_EVaultOverType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Legend();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVaultOverType"), 0, Get_Z_Construct_UEnum_Legend_EVaultOverType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Over_Short", (int64)Over_Short },
				{ "Over_Tall", (int64)Over_Tall },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Enum type used to determine which vault-over animation to play\n" },
				{ "ModuleRelativePath", "Hero/VaultComponent.h" },
				{ "Over_Short.DisplayName", "Short" },
				{ "Over_Short.Name", "Over_Short" },
				{ "Over_Tall.DisplayName", "Tall" },
				{ "Over_Tall.Name", "Over_Tall" },
				{ "ToolTip", "Enum type used to determine which vault-over animation to play" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Legend,
				nullptr,
				"EVaultOverType",
				"EVaultOverType",
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
	void UVaultComponent::StaticRegisterNativesUVaultComponent()
	{
	}
	UClass* Z_Construct_UClass_UVaultComponent_NoRegister()
	{
		return UVaultComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVaultComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VaultTraceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVaultHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVaultHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVaultHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVaultHeight;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VAULT_OVER_SHORT_MAX_HEIGHT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VAULT_OVER_SHORT_MAX_HEIGHT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VAULT_OVER_TALL_MAX_HEIGHT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VAULT_OVER_TALL_MAX_HEIGHT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultOverType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VaultOverType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVaultOverTrigger_MetaData[];
#endif
		static void NewProp_bVaultOverTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVaultOverTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VAULT_ONTO_SHORT_MAX_HEIGHT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VAULT_ONTO_SHORT_MAX_HEIGHT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VAULT_ONTO_MID_MAX_HEIGHT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VAULT_ONTO_MID_MAX_HEIGHT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VAULT_ONTO_TALL_MAX_HEIGHT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VAULT_ONTO_TALL_MAX_HEIGHT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultOntoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VaultOntoType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVaultOntoTrigger_MetaData[];
#endif
		static void NewProp_bVaultOntoTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVaultOntoTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaultComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Legend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// The vault component handles character traversal of short objects.\n// This means allowing the character to jump over or on top of shorter objects.\n" },
		{ "IncludePath", "Hero/VaultComponent.h" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "The vault component handles character traversal of short objects.\nThis means allowing the character to jump over or on top of shorter objects." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_ActorHeight_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_ActorHeight = { "ActorHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, ActorHeight), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_ActorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_ActorHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_RootHeight_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_RootHeight = { "RootHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, RootHeight), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_RootHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_RootHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug_SetBit(void* Obj)
	{
		((UVaultComponent*)Obj)->bUseDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug = { "bUseDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVaultComponent), &Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultTraceRange_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// The trace range for low and mid forward traces\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "The trace range for low and mid forward traces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultTraceRange = { "VaultTraceRange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, VaultTraceRange), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_MinVaultHeight_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// Low Trace: searches for obstacles present ahead at waist height\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "Low Trace: searches for obstacles present ahead at waist height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_MinVaultHeight = { "MinVaultHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, MinVaultHeight), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_MinVaultHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_MinVaultHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_MaxVaultHeight_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// Mid Trace: searches for obstacles present ahead at face height\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "Mid Trace: searches for obstacles present ahead at face height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_MaxVaultHeight = { "MaxVaultHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, MaxVaultHeight), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_MaxVaultHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_MaxVaultHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceHeight_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// Depth Trace: checks the depth of the object ahead of actor (goes downward)\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "Depth Trace: checks the depth of the object ahead of actor (goes downward)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceHeight = { "DepthTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, DepthTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceRange_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// How far down the trace should go from starting point\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "How far down the trace should go from starting point" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceRange = { "DepthTraceRange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, DepthTraceRange), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceDistance_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// How far from obstacle impact point should the traced start from\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "How far from obstacle impact point should the traced start from" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceDistance = { "DepthTraceDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, DepthTraceDistance), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_OVER_SHORT_MAX_HEIGHT_MetaData[] = {
		{ "Category", "Vault Over" },
		{ "Comment", "// For when vaulting over short object. Should be above low trace height\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "For when vaulting over short object. Should be above low trace height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_OVER_SHORT_MAX_HEIGHT = { "VAULT_OVER_SHORT_MAX_HEIGHT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, VAULT_OVER_SHORT_MAX_HEIGHT), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_OVER_SHORT_MAX_HEIGHT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_OVER_SHORT_MAX_HEIGHT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_OVER_TALL_MAX_HEIGHT_MetaData[] = {
		{ "Category", "Vault Over" },
		{ "Comment", "// For when vaulting over taller object. Should be above low trace height\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "For when vaulting over taller object. Should be above low trace height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_OVER_TALL_MAX_HEIGHT = { "VAULT_OVER_TALL_MAX_HEIGHT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, VAULT_OVER_TALL_MAX_HEIGHT), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_OVER_TALL_MAX_HEIGHT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_OVER_TALL_MAX_HEIGHT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOverType_MetaData[] = {
		{ "Category", "Vault Over" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOverType = { "VaultOverType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, VaultOverType), Z_Construct_UEnum_Legend_EVaultOverType, METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOverType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOverType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOverTrigger_MetaData[] = {
		{ "Category", "Vault Over" },
		{ "Comment", "// Used to trigger vault animation\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "Used to trigger vault animation" },
	};
#endif
	void Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOverTrigger_SetBit(void* Obj)
	{
		((UVaultComponent*)Obj)->bVaultOverTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOverTrigger = { "bVaultOverTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVaultComponent), &Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOverTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOverTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOverTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_SHORT_MAX_HEIGHT_MetaData[] = {
		{ "Category", "Vault Onto" },
		{ "Comment", "// The thresholds for various vault-onto heights, which dictate animations\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "The thresholds for various vault-onto heights, which dictate animations" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_SHORT_MAX_HEIGHT = { "VAULT_ONTO_SHORT_MAX_HEIGHT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, VAULT_ONTO_SHORT_MAX_HEIGHT), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_SHORT_MAX_HEIGHT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_SHORT_MAX_HEIGHT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_MID_MAX_HEIGHT_MetaData[] = {
		{ "Category", "Vault Onto" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_MID_MAX_HEIGHT = { "VAULT_ONTO_MID_MAX_HEIGHT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, VAULT_ONTO_MID_MAX_HEIGHT), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_MID_MAX_HEIGHT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_MID_MAX_HEIGHT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_TALL_MAX_HEIGHT_MetaData[] = {
		{ "Category", "Vault Onto" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_TALL_MAX_HEIGHT = { "VAULT_ONTO_TALL_MAX_HEIGHT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, VAULT_ONTO_TALL_MAX_HEIGHT), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_TALL_MAX_HEIGHT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_TALL_MAX_HEIGHT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOntoType_MetaData[] = {
		{ "Category", "Vault Onto" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOntoType = { "VaultOntoType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, VaultOntoType), Z_Construct_UEnum_Legend_EVaultOntoType, METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOntoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOntoType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger_MetaData[] = {
		{ "Category", "Vault Onto" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger_SetBit(void* Obj)
	{
		((UVaultComponent*)Obj)->bVaultOntoTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger = { "bVaultOntoTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVaultComponent), &Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaultComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_ActorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_RootHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_MinVaultHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_MaxVaultHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_OVER_SHORT_MAX_HEIGHT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_OVER_TALL_MAX_HEIGHT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOverType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOverTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_SHORT_MAX_HEIGHT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_MID_MAX_HEIGHT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_VAULT_ONTO_TALL_MAX_HEIGHT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOntoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaultComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaultComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaultComponent_Statics::ClassParams = {
		&UVaultComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVaultComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaultComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaultComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaultComponent, 4143196843);
	template<> LEGEND_API UClass* StaticClass<UVaultComponent>()
	{
		return UVaultComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaultComponent(Z_Construct_UClass_UVaultComponent, &UVaultComponent::StaticClass, TEXT("/Script/Legend"), TEXT("UVaultComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaultComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
