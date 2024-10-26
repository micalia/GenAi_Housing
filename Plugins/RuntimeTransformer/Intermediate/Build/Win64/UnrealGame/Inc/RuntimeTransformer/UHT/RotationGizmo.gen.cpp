// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeTransformer/Public/Gizmos/RotationGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotationGizmo() {}
// Cross Module References
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ABaseGizmo();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ARotationGizmo();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ARotationGizmo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeTransformer();
// End Cross Module References
	void ARotationGizmo::StaticRegisterNativesARotationGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotationGizmo);
	UClass* Z_Construct_UClass_ARotationGizmo_NoRegister()
	{
		return ARotationGizmo::StaticClass();
	}
	struct Z_Construct_UClass_ARotationGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotationGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeTransformer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotationGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Gizmos/RotationGizmo.h" },
		{ "ModuleRelativePath", "Public/Gizmos/RotationGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotationGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotationGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotationGizmo_Statics::ClassParams = {
		&ARotationGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARotationGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARotationGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotationGizmo()
	{
		if (!Z_Registration_Info_UClass_ARotationGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotationGizmo.OuterSingleton, Z_Construct_UClass_ARotationGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARotationGizmo.OuterSingleton;
	}
	template<> RUNTIMETRANSFORMER_API UClass* StaticClass<ARotationGizmo>()
	{
		return ARotationGizmo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotationGizmo);
	ARotationGizmo::~ARotationGizmo() {}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_RotationGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_RotationGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARotationGizmo, ARotationGizmo::StaticClass, TEXT("ARotationGizmo"), &Z_Registration_Info_UClass_ARotationGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotationGizmo), 1880330538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_RotationGizmo_h_3223928504(TEXT("/Script/RuntimeTransformer"),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_RotationGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_RotationGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
