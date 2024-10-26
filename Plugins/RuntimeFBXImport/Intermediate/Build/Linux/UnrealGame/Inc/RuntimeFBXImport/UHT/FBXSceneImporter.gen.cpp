// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/FBXCore/FBXSceneImporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBXSceneImporter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXSceneImporter();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXSceneImporter_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMaterialImportSettings_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNode_Geometry_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNode_NoRegister();
	RUNTIMEFBXIMPORT_API UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature();
	RUNTIMEFBXIMPORT_API UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature();
	RUNTIMEFBXIMPORT_API UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature();
	RUNTIMEFBXIMPORT_API UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FFBXImportSettings();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics
	{
		struct _Script_RuntimeFBXImport_eventOnImportProgressChanged_Parms
		{
			int32 ImportID;
			float Progress;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::NewProp_ImportID = { "ImportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFBXImport_eventOnImportProgressChanged_Parms, ImportID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFBXImport_eventOnImportProgressChanged_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::NewProp_ImportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport, nullptr, "OnImportProgressChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::_Script_RuntimeFBXImport_eventOnImportProgressChanged_Parms), Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportProgressChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnImportProgressChanged_DelegateWrapper(const FMulticastScriptDelegate& OnImportProgressChanged, int32 ImportID, float Progress)
{
	struct _Script_RuntimeFBXImport_eventOnImportProgressChanged_Parms
	{
		int32 ImportID;
		float Progress;
	};
	_Script_RuntimeFBXImport_eventOnImportProgressChanged_Parms Parms;
	Parms.ImportID=ImportID;
	Parms.Progress=Progress;
	OnImportProgressChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics
	{
		struct _Script_RuntimeFBXImport_eventOnImportStarted_Parms
		{
			int32 ImportID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics::NewProp_ImportID = { "ImportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFBXImport_eventOnImportStarted_Parms, ImportID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics::NewProp_ImportID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport, nullptr, "OnImportStarted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics::_Script_RuntimeFBXImport_eventOnImportStarted_Parms), Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFBXImport_OnImportStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnImportStarted_DelegateWrapper(const FMulticastScriptDelegate& OnImportStarted, int32 ImportID)
{
	struct _Script_RuntimeFBXImport_eventOnImportStarted_Parms
	{
		int32 ImportID;
	};
	_Script_RuntimeFBXImport_eventOnImportStarted_Parms Parms;
	Parms.ImportID=ImportID;
	OnImportStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics
	{
		struct _Script_RuntimeFBXImport_eventOnNodeProcessingChanged_Parms
		{
			int32 ImportID;
			FString NodeName;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::NewProp_ImportID = { "ImportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFBXImport_eventOnNodeProcessingChanged_Parms, ImportID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFBXImport_eventOnNodeProcessingChanged_Parms, NodeName), METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::NewProp_NodeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::NewProp_ImportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::NewProp_NodeName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport, nullptr, "OnNodeProcessingChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::_Script_RuntimeFBXImport_eventOnNodeProcessingChanged_Parms), Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFBXImport_OnNodeProcessingChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNodeProcessingChanged_DelegateWrapper(const FMulticastScriptDelegate& OnNodeProcessingChanged, int32 ImportID, const FString& NodeName)
{
	struct _Script_RuntimeFBXImport_eventOnNodeProcessingChanged_Parms
	{
		int32 ImportID;
		FString NodeName;
	};
	_Script_RuntimeFBXImport_eventOnNodeProcessingChanged_Parms Parms;
	Parms.ImportID=ImportID;
	Parms.NodeName=NodeName;
	OnNodeProcessingChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics
	{
		struct _Script_RuntimeFBXImport_eventOnMeshNodeCreated_Parms
		{
			int32 ImportID;
			UMeshNode_Geometry* NewMeshNode;
			FTransform SpawnTransform;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMeshNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::NewProp_ImportID = { "ImportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFBXImport_eventOnMeshNodeCreated_Parms, ImportID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::NewProp_NewMeshNode = { "NewMeshNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFBXImport_eventOnMeshNodeCreated_Parms, NewMeshNode), Z_Construct_UClass_UMeshNode_Geometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFBXImport_eventOnMeshNodeCreated_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::NewProp_SpawnTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::NewProp_ImportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::NewProp_NewMeshNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::NewProp_SpawnTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport, nullptr, "OnMeshNodeCreated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::_Script_RuntimeFBXImport_eventOnMeshNodeCreated_Parms), Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFBXImport_OnMeshNodeCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMeshNodeCreated_DelegateWrapper(const FMulticastScriptDelegate& OnMeshNodeCreated, int32 ImportID, UMeshNode_Geometry* NewMeshNode, FTransform const& SpawnTransform)
{
	struct _Script_RuntimeFBXImport_eventOnMeshNodeCreated_Parms
	{
		int32 ImportID;
		UMeshNode_Geometry* NewMeshNode;
		FTransform SpawnTransform;
	};
	_Script_RuntimeFBXImport_eventOnMeshNodeCreated_Parms Parms;
	Parms.ImportID=ImportID;
	Parms.NewMeshNode=NewMeshNode;
	Parms.SpawnTransform=SpawnTransform;
	OnMeshNodeCreated.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBXImportSettings;
class UScriptStruct* FFBXImportSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBXImportSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBXImportSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBXImportSettings, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("FBXImportSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FBXImportSettings.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FFBXImportSettings>()
{
	return FFBXImportSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFBXImportSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FBXAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FBXAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialImportSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialImportSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransformVertexToAbsolute_MetaData[];
#endif
		static void NewProp_bTransformVertexToAbsolute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformVertexToAbsolute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filepath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filepath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnFBXActor_MetaData[];
#endif
		static void NewProp_SpawnFBXActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnFBXActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXImportSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBXImportSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_ImportID_MetaData[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_ImportID = { "ImportID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBXImportSettings, ImportID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_ImportID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_ImportID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_FBXAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_FBXAxis = { "FBXAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBXImportSettings, FBXAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_FBXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_FBXAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBXImportSettings, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_MaterialImportSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_MaterialImportSettings = { "MaterialImportSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBXImportSettings, MaterialImportSettings), Z_Construct_UClass_UMaterialImportSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_MaterialImportSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_MaterialImportSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_bTransformVertexToAbsolute_MetaData[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_bTransformVertexToAbsolute_SetBit(void* Obj)
	{
		((FFBXImportSettings*)Obj)->bTransformVertexToAbsolute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_bTransformVertexToAbsolute = { "bTransformVertexToAbsolute", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBXImportSettings), &Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_bTransformVertexToAbsolute_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_bTransformVertexToAbsolute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_bTransformVertexToAbsolute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_Filepath_MetaData[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_Filepath = { "Filepath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBXImportSettings, Filepath), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_Filepath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_Filepath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnFBXActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnFBXActor_SetBit(void* Obj)
	{
		((FFBXImportSettings*)Obj)->SpawnFBXActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnFBXActor = { "SpawnFBXActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBXImportSettings), &Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnFBXActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnFBXActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnFBXActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBXImportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_ImportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_FBXAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_MaterialImportSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_bTransformVertexToAbsolute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_Filepath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewProp_SpawnFBXActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBXImportSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"FBXImportSettings",
		sizeof(FFBXImportSettings),
		alignof(FFBXImportSettings),
		Z_Construct_UScriptStruct_FFBXImportSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBXImportSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBXImportSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FBXImportSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBXImportSettings.InnerSingleton, Z_Construct_UScriptStruct_FFBXImportSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FBXImportSettings.InnerSingleton;
	}
	void UFBXSceneImporter::StaticRegisterNativesUFBXSceneImporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFBXSceneImporter);
	UClass* Z_Construct_UClass_UFBXSceneImporter_NoRegister()
	{
		return UFBXSceneImporter::StaticClass();
	}
	struct Z_Construct_UClass_UFBXSceneImporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestDestroy_MetaData[];
#endif
		static void NewProp_RequestDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RequestDestroy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBXSceneImporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXSceneImporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FBXCore/FBXSceneImporter.h" },
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RequestDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	void Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RequestDestroy_SetBit(void* Obj)
	{
		((UFBXSceneImporter*)Obj)->RequestDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RequestDestroy = { "RequestDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFBXSceneImporter), &Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RequestDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RequestDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RequestDestroy_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RootNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFBXSceneImporter, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RootNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RootNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/FBXCore/FBXSceneImporter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFBXSceneImporter, ErrorMessage), METADATA_PARAMS(Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFBXSceneImporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RequestDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RootNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_RootNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXSceneImporter_Statics::NewProp_ErrorMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBXSceneImporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBXSceneImporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFBXSceneImporter_Statics::ClassParams = {
		&UFBXSceneImporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFBXSceneImporter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFBXSceneImporter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFBXSceneImporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXSceneImporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBXSceneImporter()
	{
		if (!Z_Registration_Info_UClass_UFBXSceneImporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFBXSceneImporter.OuterSingleton, Z_Construct_UClass_UFBXSceneImporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFBXSceneImporter.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UFBXSceneImporter>()
	{
		return UFBXSceneImporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBXSceneImporter);
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_Statics::ScriptStructInfo[] = {
		{ FFBXImportSettings::StaticStruct, Z_Construct_UScriptStruct_FFBXImportSettings_Statics::NewStructOps, TEXT("FBXImportSettings"), &Z_Registration_Info_UScriptStruct_FBXImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFBXImportSettings), 567548692U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFBXSceneImporter, UFBXSceneImporter::StaticClass, TEXT("UFBXSceneImporter"), &Z_Registration_Info_UClass_UFBXSceneImporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFBXSceneImporter), 3212731341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_1590214013(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
