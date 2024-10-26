// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeTransformer/Public/Gizmos/TranslationGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTranslationGizmo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ABaseGizmo();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ATranslationGizmo();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ATranslationGizmo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeTransformer();
// End Cross Module References
	void ATranslationGizmo::StaticRegisterNativesATranslationGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATranslationGizmo);
	UClass* Z_Construct_UClass_ATranslationGizmo_NoRegister()
	{
		return ATranslationGizmo::StaticClass();
	}
	struct Z_Construct_UClass_ATranslationGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XY_PlaneBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_XY_PlaneBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YZ_PlaneBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_YZ_PlaneBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XZ_PlaneBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_XZ_PlaneBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XYZ_Sphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_XYZ_Sphere;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATranslationGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeTransformer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATranslationGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Gizmos/TranslationGizmo.h" },
		{ "ModuleRelativePath", "Public/Gizmos/TranslationGizmo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XY_PlaneBox_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "// The Hit Box for the XY-Plane Translation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/TranslationGizmo.h" },
		{ "ToolTip", "The Hit Box for the XY-Plane Translation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XY_PlaneBox = { "XY_PlaneBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATranslationGizmo, XY_PlaneBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XY_PlaneBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XY_PlaneBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_YZ_PlaneBox_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "// The Hit Box for the YZ-Plane Translation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/TranslationGizmo.h" },
		{ "ToolTip", "The Hit Box for the YZ-Plane Translation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_YZ_PlaneBox = { "YZ_PlaneBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATranslationGizmo, YZ_PlaneBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_YZ_PlaneBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_YZ_PlaneBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XZ_PlaneBox_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "// The Hit Box for the\x09XZ-Plane Translation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/TranslationGizmo.h" },
		{ "ToolTip", "The Hit Box for the    XZ-Plane Translation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XZ_PlaneBox = { "XZ_PlaneBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATranslationGizmo, XZ_PlaneBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XZ_PlaneBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XZ_PlaneBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XYZ_Sphere_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "// The Hit Box for the\x09XYZ Free Translation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/TranslationGizmo.h" },
		{ "ToolTip", "The Hit Box for the    XYZ Free Translation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XYZ_Sphere = { "XYZ_Sphere", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATranslationGizmo, XYZ_Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XYZ_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XYZ_Sphere_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATranslationGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XY_PlaneBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_YZ_PlaneBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XZ_PlaneBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATranslationGizmo_Statics::NewProp_XYZ_Sphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATranslationGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATranslationGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATranslationGizmo_Statics::ClassParams = {
		&ATranslationGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATranslationGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATranslationGizmo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATranslationGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATranslationGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATranslationGizmo()
	{
		if (!Z_Registration_Info_UClass_ATranslationGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATranslationGizmo.OuterSingleton, Z_Construct_UClass_ATranslationGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATranslationGizmo.OuterSingleton;
	}
	template<> RUNTIMETRANSFORMER_API UClass* StaticClass<ATranslationGizmo>()
	{
		return ATranslationGizmo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATranslationGizmo);
	ATranslationGizmo::~ATranslationGizmo() {}
	struct Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_TranslationGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_TranslationGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATranslationGizmo, ATranslationGizmo::StaticClass, TEXT("ATranslationGizmo"), &Z_Registration_Info_UClass_ATranslationGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATranslationGizmo), 2210180896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_TranslationGizmo_h_215331485(TEXT("/Script/RuntimeTransformer"),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_TranslationGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_TranslationGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
