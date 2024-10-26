// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Actors/PivotActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePivotActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActor();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	void APivotActor::StaticRegisterNativesAPivotActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APivotActor);
	UClass* Z_Construct_UClass_APivotActor_NoRegister()
	{
		return APivotActor::StaticClass();
	}
	struct Z_Construct_UClass_APivotActor_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle2DXY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Handle2DXY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle2DXZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Handle2DXZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle2DYZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Handle2DYZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleScaleRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandleScaleRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsuleX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionCapsuleX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsuleY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionCapsuleY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsuleZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionCapsuleZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBoxXY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBoxXY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBoxXZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBoxXZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBoxYZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBoxYZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphereCenter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphereCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMousePressed_MetaData[];
#endif
		static void NewProp_bMousePressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMousePressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTouchedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTouchedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APivotActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PivotActor.h" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_MainScene_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_MainScene = { "MainScene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, MainScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_MainScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_MainScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_CenterMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_CenterMesh = { "CenterMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, CenterMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_CenterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_CenterMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowX_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowX = { "ArrowX", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, ArrowX), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowY_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowY = { "ArrowY", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, ArrowY), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowZ_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowZ = { "ArrowZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, ArrowZ), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DXY_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DXY = { "Handle2DXY", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, Handle2DXY), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DXY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DXZ_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DXZ = { "Handle2DXZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, Handle2DXZ), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DXZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DXZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DYZ_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DYZ = { "Handle2DYZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, Handle2DYZ), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DYZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DYZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_PivotSize_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_PivotSize = { "PivotSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, PivotSize), METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_PivotSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_PivotSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_HandleScaleRatio_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_HandleScaleRatio = { "HandleScaleRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, HandleScaleRatio), METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_HandleScaleRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_HandleScaleRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_Sensitivity_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, Sensitivity), METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_Sensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_Sensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleX = { "CollisionCapsuleX", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, CollisionCapsuleX), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleY_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleY = { "CollisionCapsuleY", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, CollisionCapsuleY), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleZ_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleZ = { "CollisionCapsuleZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, CollisionCapsuleZ), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxXY_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxXY = { "CollisionBoxXY", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, CollisionBoxXY), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxXY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxXZ_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxXZ = { "CollisionBoxXZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, CollisionBoxXZ), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxXZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxXZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxYZ_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxYZ = { "CollisionBoxYZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, CollisionBoxYZ), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxYZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxYZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionSphereCenter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionSphereCenter = { "CollisionSphereCenter", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, CollisionSphereCenter), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionSphereCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionSphereCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialX_MetaData[] = {
		{ "Comment", "// Materials\n" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
		{ "ToolTip", "Materials" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialX = { "MaterialX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, MaterialX), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialY = { "MaterialY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, MaterialY), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialZ = { "MaterialZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, MaterialZ), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_bMousePressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	void Z_Construct_UClass_APivotActor_Statics::NewProp_bMousePressed_SetBit(void* Obj)
	{
		((APivotActor*)Obj)->bMousePressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_bMousePressed = { "bMousePressed", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APivotActor), &Z_Construct_UClass_APivotActor_Statics::NewProp_bMousePressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_bMousePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_bMousePressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActor_Statics::NewProp_CurrentTouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActor_Statics::NewProp_CurrentTouchedComponent = { "CurrentTouchedComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActor, CurrentTouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::NewProp_CurrentTouchedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::NewProp_CurrentTouchedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APivotActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_MainScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_CenterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_ArrowZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DXZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_Handle2DYZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_PivotSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_HandleScaleRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_Sensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionCapsuleZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxXZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionBoxYZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_CollisionSphereCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_MaterialZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_bMousePressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActor_Statics::NewProp_CurrentTouchedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APivotActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APivotActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APivotActor_Statics::ClassParams = {
		&APivotActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APivotActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APivotActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APivotActor()
	{
		if (!Z_Registration_Info_UClass_APivotActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APivotActor.OuterSingleton, Z_Construct_UClass_APivotActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APivotActor.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<APivotActor>()
	{
		return APivotActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APivotActor);
	APivotActor::~APivotActor() {}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APivotActor, APivotActor::StaticClass, TEXT("APivotActor"), &Z_Registration_Info_UClass_APivotActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APivotActor), 4130987213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActor_h_401989732(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
