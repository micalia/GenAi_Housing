// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/RuntimeMeshFunctionLibrary.h"
#include "RuntimeFBXImport/Public/MeshNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_URuntimeMeshFunctionLibrary();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_URuntimeMeshFunctionLibrary_NoRegister();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FTextureData();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshFunctionLibrary::execLoadTextureDatafromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_RawFileData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTextureData*)Z_Param__Result=URuntimeMeshFunctionLibrary::LoadTextureDatafromPath(Z_Param_FilePath,Z_Param_Out_RawFileData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshFunctionLibrary::execOpenFBXFileDialogue)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeMeshFunctionLibrary::OpenFBXFileDialogue(Z_Param_Out_OutFilePath);
		P_NATIVE_END;
	}
	void URuntimeMeshFunctionLibrary::StaticRegisterNativesURuntimeMeshFunctionLibrary()
	{
		UClass* Class = URuntimeMeshFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadTextureDatafromPath", &URuntimeMeshFunctionLibrary::execLoadTextureDatafromPath },
			{ "OpenFBXFileDialogue", &URuntimeMeshFunctionLibrary::execOpenFBXFileDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics
	{
		struct RuntimeMeshFunctionLibrary_eventLoadTextureDatafromPath_Parms
		{
			FString FilePath;
			TArray<uint8> RawFileData;
			FTextureData ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RawFileData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawFileData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshFunctionLibrary_eventLoadTextureDatafromPath_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::NewProp_RawFileData_Inner = { "RawFileData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::NewProp_RawFileData = { "RawFileData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshFunctionLibrary_eventLoadTextureDatafromPath_Parms, RawFileData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshFunctionLibrary_eventLoadTextureDatafromPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FTextureData, METADATA_PARAMS(nullptr, 0) }; // 2574834115
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::NewProp_RawFileData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::NewProp_RawFileData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/RuntimeMeshFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshFunctionLibrary, nullptr, "LoadTextureDatafromPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::RuntimeMeshFunctionLibrary_eventLoadTextureDatafromPath_Parms), Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics
	{
		struct RuntimeMeshFunctionLibrary_eventOpenFBXFileDialogue_Parms
		{
			FString OutFilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::NewProp_OutFilePath = { "OutFilePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshFunctionLibrary_eventOpenFBXFileDialogue_Parms, OutFilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshFunctionLibrary_eventOpenFBXFileDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshFunctionLibrary_eventOpenFBXFileDialogue_Parms), &Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::NewProp_OutFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FBX" },
		{ "ModuleRelativePath", "Public/RuntimeMeshFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshFunctionLibrary, nullptr, "OpenFBXFileDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::RuntimeMeshFunctionLibrary_eventOpenFBXFileDialogue_Parms), Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshFunctionLibrary);
	UClass* Z_Construct_UClass_URuntimeMeshFunctionLibrary_NoRegister()
	{
		return URuntimeMeshFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshFunctionLibrary_LoadTextureDatafromPath, "LoadTextureDatafromPath" }, // 1008684271
		{ &Z_Construct_UFunction_URuntimeMeshFunctionLibrary_OpenFBXFileDialogue, "OpenFBXFileDialogue" }, // 3380308818
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RuntimeMeshFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshFunctionLibrary_Statics::ClassParams = {
		&URuntimeMeshFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshFunctionLibrary.OuterSingleton, Z_Construct_UClass_URuntimeMeshFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshFunctionLibrary.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<URuntimeMeshFunctionLibrary>()
	{
		return URuntimeMeshFunctionLibrary::StaticClass();
	}
	URuntimeMeshFunctionLibrary::URuntimeMeshFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshFunctionLibrary);
	URuntimeMeshFunctionLibrary::~URuntimeMeshFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeMeshFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeMeshFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshFunctionLibrary, URuntimeMeshFunctionLibrary::StaticClass, TEXT("URuntimeMeshFunctionLibrary"), &Z_Registration_Info_UClass_URuntimeMeshFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshFunctionLibrary), 632702692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeMeshFunctionLibrary_h_2761518879(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeMeshFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeMeshFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
