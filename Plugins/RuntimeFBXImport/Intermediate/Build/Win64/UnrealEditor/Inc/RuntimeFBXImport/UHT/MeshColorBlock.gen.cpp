// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Widgets/MeshColorBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshColorBlock() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshColorBlock();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshColorBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	void UMeshColorBlock::StaticRegisterNativesUMeshColorBlock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshColorBlock);
	UClass* Z_Construct_UClass_UMeshColorBlock_NoRegister()
	{
		return UMeshColorBlock::StaticClass();
	}
	struct Z_Construct_UClass_UMeshColorBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshColorBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorBlock_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/MeshColorBlock.h" },
		{ "ModuleRelativePath", "Public/Widgets/MeshColorBlock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorBlock_Statics::NewProp_CurrentColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Current color of the color block. */" },
		{ "ModuleRelativePath", "Public/Widgets/MeshColorBlock.h" },
		{ "ToolTip", "Current color of the color block." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshColorBlock_Statics::NewProp_CurrentColor = { "CurrentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshColorBlock, CurrentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeshColorBlock_Statics::NewProp_CurrentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorBlock_Statics::NewProp_CurrentColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshColorBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshColorBlock_Statics::NewProp_CurrentColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshColorBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshColorBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshColorBlock_Statics::ClassParams = {
		&UMeshColorBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshColorBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorBlock_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshColorBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshColorBlock()
	{
		if (!Z_Registration_Info_UClass_UMeshColorBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshColorBlock.OuterSingleton, Z_Construct_UClass_UMeshColorBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshColorBlock.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UMeshColorBlock>()
	{
		return UMeshColorBlock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshColorBlock);
	UMeshColorBlock::~UMeshColorBlock() {}
	struct Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshColorBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshColorBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshColorBlock, UMeshColorBlock::StaticClass, TEXT("UMeshColorBlock"), &Z_Registration_Info_UClass_UMeshColorBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshColorBlock), 2431773874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshColorBlock_h_3527742003(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshColorBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshColorBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
