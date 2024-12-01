// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Actors/PivotActorScale.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePivotActorScale() {}
// Cross Module References
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorBase();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorScale();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorScale_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	void APivotActorScale::StaticRegisterNativesAPivotActorScale()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APivotActorScale);
	UClass* Z_Construct_UClass_APivotActorScale_NoRegister()
	{
		return APivotActorScale::StaticClass();
	}
	struct Z_Construct_UClass_APivotActorScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APivotActorScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APivotActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotActorScale_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actors/PivotActorScale.h" },
		{ "ModuleRelativePath", "Public/Actors/PivotActorScale.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APivotActorScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APivotActorScale>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APivotActorScale_Statics::ClassParams = {
		&APivotActorScale::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APivotActorScale_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APivotActorScale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APivotActorScale()
	{
		if (!Z_Registration_Info_UClass_APivotActorScale.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APivotActorScale.OuterSingleton, Z_Construct_UClass_APivotActorScale_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APivotActorScale.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<APivotActorScale>()
	{
		return APivotActorScale::StaticClass();
	}
	APivotActorScale::APivotActorScale() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APivotActorScale);
	APivotActorScale::~APivotActorScale() {}
	struct Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorScale_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorScale_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APivotActorScale, APivotActorScale::StaticClass, TEXT("APivotActorScale"), &Z_Registration_Info_UClass_APivotActorScale, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APivotActorScale), 3908102161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorScale_h_253502824(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorScale_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_PivotActorScale_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
