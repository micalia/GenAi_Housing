// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Actors/PivotActorTranslation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePivotActorTranslation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorBase();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorTranslation();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorTranslation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	void APivotActorTranslation::StaticRegisterNativesAPivotActorTranslation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APivotActorTranslation);
	UClass* Z_Construct_UClass_APivotActorTranslation_NoRegister()
	{
		return APivotActorTranslation::StaticClass();
	}
	struct Z_Construct_UClass_APivotActorTranslation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleScaleRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandleScaleRatio;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APivotActorTranslation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APivotActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PivotActorTranslation.h" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_HandleScaleRatio_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_HandleScaleRatio = { "HandleScaleRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, HandleScaleRatio), METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_HandleScaleRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_HandleScaleRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CenterMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CenterMesh = { "CenterMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, CenterMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CenterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CenterMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowX_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowX = { "ArrowX", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, ArrowX), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowY_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowY = { "ArrowY", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, ArrowY), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowZ_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowZ = { "ArrowZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, ArrowZ), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DXY_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DXY = { "Handle2DXY", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, Handle2DXY), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DXY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DXZ_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DXZ = { "Handle2DXZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, Handle2DXZ), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DXZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DXZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DYZ_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DYZ = { "Handle2DYZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, Handle2DYZ), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DYZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DYZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleX = { "CollisionCapsuleX", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, CollisionCapsuleX), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleY_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleY = { "CollisionCapsuleY", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, CollisionCapsuleY), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleZ_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleZ = { "CollisionCapsuleZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, CollisionCapsuleZ), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxXY_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxXY = { "CollisionBoxXY", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, CollisionBoxXY), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxXY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxXZ_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxXZ = { "CollisionBoxXZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, CollisionBoxXZ), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxXZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxXZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxYZ_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxYZ = { "CollisionBoxYZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, CollisionBoxYZ), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxYZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxYZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionSphereCenter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorTranslation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionSphereCenter = { "CollisionSphereCenter", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorTranslation, CollisionSphereCenter), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionSphereCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionSphereCenter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APivotActorTranslation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_HandleScaleRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CenterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_ArrowZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DXZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_Handle2DYZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionCapsuleZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxXZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionBoxYZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorTranslation_Statics::NewProp_CollisionSphereCenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APivotActorTranslation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APivotActorTranslation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APivotActorTranslation_Statics::ClassParams = {
		&APivotActorTranslation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APivotActorTranslation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APivotActorTranslation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorTranslation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APivotActorTranslation()
	{
		if (!Z_Registration_Info_UClass_APivotActorTranslation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APivotActorTranslation.OuterSingleton, Z_Construct_UClass_APivotActorTranslation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APivotActorTranslation.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<APivotActorTranslation>()
	{
		return APivotActorTranslation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APivotActorTranslation);
	APivotActorTranslation::~APivotActorTranslation() {}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorTranslation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorTranslation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APivotActorTranslation, APivotActorTranslation::StaticClass, TEXT("APivotActorTranslation"), &Z_Registration_Info_UClass_APivotActorTranslation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APivotActorTranslation), 433702046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorTranslation_h_705797843(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorTranslation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorTranslation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
