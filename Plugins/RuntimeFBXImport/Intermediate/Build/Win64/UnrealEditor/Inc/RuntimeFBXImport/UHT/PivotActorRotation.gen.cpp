// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Actors/PivotActorRotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePivotActorRotation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorBase();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorRotation();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorRotation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	void APivotActorRotation::StaticRegisterNativesAPivotActorRotation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APivotActorRotation);
	UClass* Z_Construct_UClass_APivotActorRotation_NoRegister()
	{
		return APivotActorRotation::StaticClass();
	}
	struct Z_Construct_UClass_APivotActorRotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMeshX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationMeshX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMeshY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationMeshY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMeshZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationMeshZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APivotActorRotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APivotActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorRotation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actors/PivotActorRotation.h" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorRotation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshX_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorRotation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshX = { "RotationMeshX", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorRotation, RotationMeshX), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshY_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorRotation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshY = { "RotationMeshY", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorRotation, RotationMeshY), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshZ_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorRotation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshZ = { "RotationMeshZ", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotActorRotation, RotationMeshZ), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APivotActorRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotActorRotation_Statics::NewProp_RotationMeshZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APivotActorRotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APivotActorRotation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APivotActorRotation_Statics::ClassParams = {
		&APivotActorRotation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APivotActorRotation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorRotation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APivotActorRotation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorRotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APivotActorRotation()
	{
		if (!Z_Registration_Info_UClass_APivotActorRotation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APivotActorRotation.OuterSingleton, Z_Construct_UClass_APivotActorRotation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APivotActorRotation.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<APivotActorRotation>()
	{
		return APivotActorRotation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APivotActorRotation);
	APivotActorRotation::~APivotActorRotation() {}
	struct Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorRotation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorRotation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APivotActorRotation, APivotActorRotation::StaticClass, TEXT("APivotActorRotation"), &Z_Registration_Info_UClass_APivotActorRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APivotActorRotation), 3187437181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorRotation_h_1482115530(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorRotation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
