// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Actors/PivotActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePivotActorBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorBase();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	void APivotActorBase::StaticRegisterNativesAPivotActorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APivotActorBase);
	UClass* Z_Construct_UClass_APivotActorBase_NoRegister()
	{
		return APivotActorBase::StaticClass();
	}
	struct Z_Construct_UClass_APivotActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTouchedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTouchedComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMousePressed_MetaData[];
#endif
		static void NewProp_bMousePressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMousePressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMousePos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousMousePos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APivotActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PivotActorBase.h" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorBase_Statics::NewProp_MainScene_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorBase_Statics::NewProp_MainScene = { "MainScene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorBase, MainScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorBase_Statics::NewProp_MainScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorBase_Statics::NewProp_MainScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorBase_Statics::NewProp_PivotSize_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APivotActorBase_Statics::NewProp_PivotSize = { "PivotSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorBase, PivotSize), METADATA_PARAMS(Z_Construct_UClass_APivotActorBase_Statics::NewProp_PivotSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorBase_Statics::NewProp_PivotSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorBase_Statics::NewProp_Sensitivity_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APivotActorBase_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorBase, Sensitivity), METADATA_PARAMS(Z_Construct_UClass_APivotActorBase_Statics::NewProp_Sensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorBase_Statics::NewProp_Sensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorBase_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APivotActorBase_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorBase, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_APivotActorBase_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorBase_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorBase_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/PivotActorBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorBase_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorBase, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorBase_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorBase_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorBase_Statics::NewProp_CurrentTouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorBase_Statics::NewProp_CurrentTouchedComponent = { "CurrentTouchedComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorBase, CurrentTouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorBase_Statics::NewProp_CurrentTouchedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorBase_Statics::NewProp_CurrentTouchedComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorBase_Statics::NewProp_bMousePressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/PivotActorBase.h" },
	};
#endif
	void Z_Construct_UClass_APivotActorBase_Statics::NewProp_bMousePressed_SetBit(void* Obj)
	{
		((APivotActorBase*)Obj)->bMousePressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APivotActorBase_Statics::NewProp_bMousePressed = { "bMousePressed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APivotActorBase), &Z_Construct_UClass_APivotActorBase_Statics::NewProp_bMousePressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APivotActorBase_Statics::NewProp_bMousePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorBase_Statics::NewProp_bMousePressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorBase_Statics::NewProp_PreviousMousePos_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/PivotActorBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APivotActorBase_Statics::NewProp_PreviousMousePos = { "PreviousMousePos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorBase, PreviousMousePos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_APivotActorBase_Statics::NewProp_PreviousMousePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorBase_Statics::NewProp_PreviousMousePos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APivotActorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorBase_Statics::NewProp_MainScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorBase_Statics::NewProp_PivotSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorBase_Statics::NewProp_Sensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorBase_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorBase_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorBase_Statics::NewProp_CurrentTouchedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorBase_Statics::NewProp_bMousePressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorBase_Statics::NewProp_PreviousMousePos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APivotActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APivotActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APivotActorBase_Statics::ClassParams = {
		&APivotActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APivotActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APivotActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APivotActorBase()
	{
		if (!Z_Registration_Info_UClass_APivotActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APivotActorBase.OuterSingleton, Z_Construct_UClass_APivotActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APivotActorBase.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<APivotActorBase>()
	{
		return APivotActorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APivotActorBase);
	APivotActorBase::~APivotActorBase() {}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APivotActorBase, APivotActorBase::StaticClass, TEXT("APivotActorBase"), &Z_Registration_Info_UClass_APivotActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APivotActorBase), 740252057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorBase_h_1391507941(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
