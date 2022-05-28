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
	LEGEND_API UEnum* Z_Construct_UEnum_Legend_EVaultType();
	UPackage* Z_Construct_UPackage__Script_Legend();
	LEGEND_API UClass* Z_Construct_UClass_UVaultComponent_NoRegister();
	LEGEND_API UClass* Z_Construct_UClass_UVaultComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* EVaultType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Legend_EVaultType, Z_Construct_UPackage__Script_Legend(), TEXT("EVaultType"));
		}
		return Singleton;
	}
	template<> LEGEND_API UEnum* StaticEnum<EVaultType>()
	{
		return EVaultType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVaultType(EVaultType_StaticEnum, TEXT("/Script/Legend"), TEXT("EVaultType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Legend_EVaultType_Hash() { return 1421884710U; }
	UEnum* Z_Construct_UEnum_Legend_EVaultType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Legend();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVaultType"), 0, Get_Z_Construct_UEnum_Legend_EVaultType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Short", (int64)Short },
				{ "Tall", (int64)Tall },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// Enum type used to determine which vault animation to play\n" },
				{ "ModuleRelativePath", "Hero/VaultComponent.h" },
				{ "Short.DisplayName", "Short" },
				{ "Short.Name", "Short" },
				{ "Tall.DisplayName", "Tall" },
				{ "Tall.Name", "Tall" },
				{ "ToolTip", "Enum type used to determine which vault animation to play" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Legend,
				nullptr,
				"EVaultType",
				"EVaultType",
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortVaultMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShortVaultMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TallVaultMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TallVaultMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultOntoDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VaultOntoDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VaultType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVaultOverTrigger_MetaData[];
#endif
		static void NewProp_bVaultOverTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVaultOverTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVaultOntoTrigger_MetaData[];
#endif
		static void NewProp_bVaultOntoTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVaultOntoTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VaultTraceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowTraceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowTraceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MidTraceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MidTraceHeight;
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
		{ "Comment", "// General\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "General" },
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
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug_SetBit(void* Obj)
	{
		((UVaultComponent*)Obj)->bUseDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug = { "bUseDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVaultComponent), &Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_ShortVaultMaxHeight_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "Comment", "// Vaulting \n// For when vaulting over short object. Should be above low trace height\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "Vaulting\nFor when vaulting over short object. Should be above low trace height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_ShortVaultMaxHeight = { "ShortVaultMaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, ShortVaultMaxHeight), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_ShortVaultMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_ShortVaultMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_TallVaultMaxHeight_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "Comment", "// For when vaulting over taller object. Should be above low trace height\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "For when vaulting over taller object. Should be above low trace height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_TallVaultMaxHeight = { "TallVaultMaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, TallVaultMaxHeight), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_TallVaultMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_TallVaultMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOntoDistance_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "Comment", "// Specificies the post-vault-onto distance\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "Specificies the post-vault-onto distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOntoDistance = { "VaultOntoDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, VaultOntoDistance), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOntoDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOntoDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultType_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultType = { "VaultType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, VaultType), Z_Construct_UEnum_Legend_EVaultType, METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOverTrigger_MetaData[] = {
		{ "Category", "Vaulting" },
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger_MetaData[] = {
		{ "Category", "Vaulting" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger_SetBit(void* Obj)
	{
		((UVaultComponent*)Obj)->bVaultOntoTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger = { "bVaultOntoTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVaultComponent), &Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultTraceRange_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// The trace range for low, mid, and high forward traces\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "The trace range for low, mid, and high forward traces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultTraceRange = { "VaultTraceRange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, VaultTraceRange), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_LowTraceHeight_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// Low Trace: searches for obstacles present ahead at waist height\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "Low Trace: searches for obstacles present ahead at waist height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_LowTraceHeight = { "LowTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, LowTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_LowTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_LowTraceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaultComponent_Statics::NewProp_MidTraceHeight_MetaData[] = {
		{ "Category", "Traces" },
		{ "Comment", "// Mid Trace: searches for obstacles present ahead at face height\n" },
		{ "ModuleRelativePath", "Hero/VaultComponent.h" },
		{ "ToolTip", "Mid Trace: searches for obstacles present ahead at face height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVaultComponent_Statics::NewProp_MidTraceHeight = { "MidTraceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaultComponent, MidTraceHeight), METADATA_PARAMS(Z_Construct_UClass_UVaultComponent_Statics::NewProp_MidTraceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaultComponent_Statics::NewProp_MidTraceHeight_MetaData)) };
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaultComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_ActorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_RootHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_bUseDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_ShortVaultMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_TallVaultMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultOntoDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOverTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_bVaultOntoTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_VaultTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_LowTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_MidTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaultComponent_Statics::NewProp_DepthTraceDistance,
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
	IMPLEMENT_CLASS(UVaultComponent, 1230845293);
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
