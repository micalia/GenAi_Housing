// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Actors/FBXImportManager.h"
#include "RuntimeFBXImport/Public/DataAssets/MaterialLibraryAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBXImportManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXImportManager();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXImportManager_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXMeshActor_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActor_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorRotation_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorScale_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_APivotActorTranslation_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXSceneImporter_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMaterialImportSettings_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMaterialLibraryAsset_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNode_Geometry_NoRegister();
	RUNTIMEFBXIMPORT_API UEnum* Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis();
	RUNTIMEFBXIMPORT_API UEnum* Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInfo();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FTextureInfo();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXCoordinate;
	static UEnum* EFBXCoordinate_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXCoordinate.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXCoordinate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("EFBXCoordinate"));
		}
		return Z_Registration_Info_UEnum_EFBXCoordinate.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EFBXCoordinate>()
	{
		return EFBXCoordinate_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate_Statics::Enumerators[] = {
		{ "EFBXCoordinate::RightHanded", (int64)EFBXCoordinate::RightHanded },
		{ "EFBXCoordinate::LeftHanded", (int64)EFBXCoordinate::LeftHanded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LeftHanded.DisplayName", "LeftHanded" },
		{ "LeftHanded.Name", "EFBXCoordinate::LeftHanded" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
		{ "RightHanded.DisplayName", "RightHanded" },
		{ "RightHanded.Name", "EFBXCoordinate::RightHanded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		"EFBXCoordinate",
		"EFBXCoordinate",
		Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate()
	{
		if (!Z_Registration_Info_UEnum_EFBXCoordinate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXCoordinate.InnerSingleton, Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXCoordinate.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXAxis;
	static UEnum* EFBXAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("EFBXAxis"));
		}
		return Z_Registration_Info_UEnum_EFBXAxis.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EFBXAxis>()
	{
		return EFBXAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis_Statics::Enumerators[] = {
		{ "EFBXAxis::Front", (int64)EFBXAxis::Front },
		{ "EFBXAxis::Right", (int64)EFBXAxis::Right },
		{ "EFBXAxis::Up", (int64)EFBXAxis::Up },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Front.DisplayName", "Front" },
		{ "Front.Name", "EFBXAxis::Front" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EFBXAxis::Right" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "EFBXAxis::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		"EFBXAxis",
		"EFBXAxis",
		Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis()
	{
		if (!Z_Registration_Info_UEnum_EFBXAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXAxis.InnerSingleton, Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXAxis.InnerSingleton;
	}
	DEFINE_FUNCTION(AFBXImportManager::execLoadMeshActors)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveSlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SaveGameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMeshActors(Z_Param_SaveSlotName,Z_Param_SaveGameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execSaveMeshActors)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveSlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SaveGameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveMeshActors(Z_Param_SaveSlotName,Z_Param_SaveGameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execImportFBXFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_SpawnFBXActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportFBXFile(Z_Param_FilePath,Z_Param_Location,Z_Param_SpawnFBXActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execHandleImportCompleted)
	{
		P_GET_OBJECT(UFBXSceneImporter,Z_Param_SceneImporter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleImportCompleted(Z_Param_SceneImporter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execHandleMeshNodeCreated)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ImportID);
		P_GET_OBJECT(UMeshNode_Geometry,Z_Param_NewMeshNode);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMeshNodeCreated(Z_Param_ImportID,Z_Param_NewMeshNode,Z_Param_Out_SpawnTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execHandleNodeProcessingChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ImportID);
		P_GET_PROPERTY(FStrProperty,Z_Param_node_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleNodeProcessingChanged(Z_Param_ImportID,Z_Param_node_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execHandleImportProgressChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ImportID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleImportProgressChanged(Z_Param_ImportID,Z_Param_progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execResetActorSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetActorSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execResetHoveredActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHoveredActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execHoverAtActor)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_ActorToHover);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HoveredComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HoverAtActor(Z_Param_ActorToHover,Z_Param_HoveredComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execSelectActor)
	{
		P_GET_OBJECT(AFBXMeshActor,Z_Param_ActorToSelect);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_SelectedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectActor(Z_Param_ActorToSelect,Z_Param_SelectedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execInitializeFBXLoad)
	{
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_TransformVertexToAbsolute);
		P_GET_ENUM(EFBXCoordinate,Z_Param_Coordinate);
		P_GET_ENUM(EFBXAxis,Z_Param_FrontVector);
		P_GET_ENUM(EFBXAxis,Z_Param_UpVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeFBXLoad(Z_Param_Scale,Z_Param_TransformVertexToAbsolute,EFBXCoordinate(Z_Param_Coordinate),EFBXAxis(Z_Param_FrontVector),EFBXAxis(Z_Param_UpVector));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execLoadTexturesFromType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TypeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTextureInfo>*)Z_Param__Result=P_THIS->LoadTexturesFromType(Z_Param_TypeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXImportManager::execLoadMaterialsFromType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TypeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMaterialInfo>*)Z_Param__Result=P_THIS->LoadMaterialsFromType(Z_Param_TypeName);
		P_NATIVE_END;
	}
	struct FBXImportManager_eventOnFBXActorCreated_Parms
	{
		AFBXMeshActor* MeshActor;
	};
	struct FBXImportManager_eventOnImportCompleted_Parms
	{
		AFBXMeshActor* MeshActor;
	};
	struct FBXImportManager_eventOnImportProgressChanged_Parms
	{
		int32 ImportID;
		float Progress;
	};
	struct FBXImportManager_eventOnImportStarted_Parms
	{
		int32 ImportID;
		FString FileName;
	};
	struct FBXImportManager_eventOnNodeProcessingChanged_Parms
	{
		int32 ImportID;
		FString NodeName;
	};
	static FName NAME_AFBXImportManager_OnFBXActorCreated = FName(TEXT("OnFBXActorCreated"));
	void AFBXImportManager::OnFBXActorCreated(AFBXMeshActor* MeshActor)
	{
		FBXImportManager_eventOnFBXActorCreated_Parms Parms;
		Parms.MeshActor=MeshActor;
		ProcessEvent(FindFunctionChecked(NAME_AFBXImportManager_OnFBXActorCreated),&Parms);
	}
	static FName NAME_AFBXImportManager_OnImportCompleted = FName(TEXT("OnImportCompleted"));
	void AFBXImportManager::OnImportCompleted(AFBXMeshActor* MeshActor)
	{
		FBXImportManager_eventOnImportCompleted_Parms Parms;
		Parms.MeshActor=MeshActor;
		ProcessEvent(FindFunctionChecked(NAME_AFBXImportManager_OnImportCompleted),&Parms);
	}
	static FName NAME_AFBXImportManager_OnImportProgressChanged = FName(TEXT("OnImportProgressChanged"));
	void AFBXImportManager::OnImportProgressChanged(int32 ImportID, float Progress)
	{
		FBXImportManager_eventOnImportProgressChanged_Parms Parms;
		Parms.ImportID=ImportID;
		Parms.Progress=Progress;
		ProcessEvent(FindFunctionChecked(NAME_AFBXImportManager_OnImportProgressChanged),&Parms);
	}
	static FName NAME_AFBXImportManager_OnImportStarted = FName(TEXT("OnImportStarted"));
	void AFBXImportManager::OnImportStarted(int32 ImportID, const FString& FileName)
	{
		FBXImportManager_eventOnImportStarted_Parms Parms;
		Parms.ImportID=ImportID;
		Parms.FileName=FileName;
		ProcessEvent(FindFunctionChecked(NAME_AFBXImportManager_OnImportStarted),&Parms);
	}
	static FName NAME_AFBXImportManager_OnNodeProcessingChanged = FName(TEXT("OnNodeProcessingChanged"));
	void AFBXImportManager::OnNodeProcessingChanged(int32 ImportID, const FString& NodeName)
	{
		FBXImportManager_eventOnNodeProcessingChanged_Parms Parms;
		Parms.ImportID=ImportID;
		Parms.NodeName=NodeName;
		ProcessEvent(FindFunctionChecked(NAME_AFBXImportManager_OnNodeProcessingChanged),&Parms);
	}
	void AFBXImportManager::StaticRegisterNativesAFBXImportManager()
	{
		UClass* Class = AFBXImportManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleImportCompleted", &AFBXImportManager::execHandleImportCompleted },
			{ "HandleImportProgressChanged", &AFBXImportManager::execHandleImportProgressChanged },
			{ "HandleMeshNodeCreated", &AFBXImportManager::execHandleMeshNodeCreated },
			{ "HandleNodeProcessingChanged", &AFBXImportManager::execHandleNodeProcessingChanged },
			{ "HoverAtActor", &AFBXImportManager::execHoverAtActor },
			{ "ImportFBXFile", &AFBXImportManager::execImportFBXFile },
			{ "InitializeFBXLoad", &AFBXImportManager::execInitializeFBXLoad },
			{ "LoadMaterialsFromType", &AFBXImportManager::execLoadMaterialsFromType },
			{ "LoadMeshActors", &AFBXImportManager::execLoadMeshActors },
			{ "LoadTexturesFromType", &AFBXImportManager::execLoadTexturesFromType },
			{ "ResetActorSelection", &AFBXImportManager::execResetActorSelection },
			{ "ResetHoveredActor", &AFBXImportManager::execResetHoveredActor },
			{ "SaveMeshActors", &AFBXImportManager::execSaveMeshActors },
			{ "SelectActor", &AFBXImportManager::execSelectActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics
	{
		struct FBXImportManager_eventHandleImportCompleted_Parms
		{
			UFBXSceneImporter* SceneImporter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneImporter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics::NewProp_SceneImporter = { "SceneImporter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventHandleImportCompleted_Parms, SceneImporter), Z_Construct_UClass_UFBXSceneImporter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics::NewProp_SceneImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "HandleImportCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics::FBXImportManager_eventHandleImportCompleted_Parms), Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics
	{
		struct FBXImportManager_eventHandleImportProgressChanged_Parms
		{
			int32 ImportID;
			float progress;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_progress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::NewProp_ImportID = { "ImportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventHandleImportProgressChanged_Parms, ImportID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventHandleImportProgressChanged_Parms, progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::NewProp_ImportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::NewProp_progress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "HandleImportProgressChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::FBXImportManager_eventHandleImportProgressChanged_Parms), Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics
	{
		struct FBXImportManager_eventHandleMeshNodeCreated_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::NewProp_ImportID = { "ImportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventHandleMeshNodeCreated_Parms, ImportID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::NewProp_NewMeshNode = { "NewMeshNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventHandleMeshNodeCreated_Parms, NewMeshNode), Z_Construct_UClass_UMeshNode_Geometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventHandleMeshNodeCreated_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::NewProp_SpawnTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::NewProp_ImportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::NewProp_NewMeshNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::NewProp_SpawnTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "HandleMeshNodeCreated", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::FBXImportManager_eventHandleMeshNodeCreated_Parms), Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics
	{
		struct FBXImportManager_eventHandleNodeProcessingChanged_Parms
		{
			int32 ImportID;
			FString node_name;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_node_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_node_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::NewProp_ImportID = { "ImportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventHandleNodeProcessingChanged_Parms, ImportID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::NewProp_node_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::NewProp_node_name = { "node_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventHandleNodeProcessingChanged_Parms, node_name), METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::NewProp_node_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::NewProp_node_name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::NewProp_ImportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::NewProp_node_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "HandleNodeProcessingChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::FBXImportManager_eventHandleNodeProcessingChanged_Parms), Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics
	{
		struct FBXImportManager_eventHoverAtActor_Parms
		{
			AFBXMeshActor* ActorToHover;
			UPrimitiveComponent* HoveredComponent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToHover;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::NewProp_ActorToHover = { "ActorToHover", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventHoverAtActor_Parms, ActorToHover), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::NewProp_HoveredComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::NewProp_HoveredComponent = { "HoveredComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventHoverAtActor_Parms, HoveredComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::NewProp_HoveredComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::NewProp_HoveredComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::NewProp_ActorToHover,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::NewProp_HoveredComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "HoverAtActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::FBXImportManager_eventHoverAtActor_Parms), Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_HoverAtActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_HoverAtActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics
	{
		struct FBXImportManager_eventImportFBXFile_Parms
		{
			FString FilePath;
			FVector Location;
			bool SpawnFBXActor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_SpawnFBXActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnFBXActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventImportFBXFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventImportFBXFile_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_SpawnFBXActor_SetBit(void* Obj)
	{
		((FBXImportManager_eventImportFBXFile_Parms*)Obj)->SpawnFBXActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_SpawnFBXActor = { "SpawnFBXActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBXImportManager_eventImportFBXFile_Parms), &Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_SpawnFBXActor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::NewProp_SpawnFBXActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Import" },
		{ "CPP_Default_SpawnFBXActor", "true" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "ImportFBXFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::FBXImportManager_eventImportFBXFile_Parms), Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_ImportFBXFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_ImportFBXFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics
	{
		struct FBXImportManager_eventInitializeFBXLoad_Parms
		{
			FVector Scale;
			bool TransformVertexToAbsolute;
			EFBXCoordinate Coordinate;
			EFBXAxis FrontVector;
			EFBXAxis UpVector;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static void NewProp_TransformVertexToAbsolute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TransformVertexToAbsolute;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Coordinate_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Coordinate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrontVector_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FrontVector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpVector_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UpVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventInitializeFBXLoad_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_TransformVertexToAbsolute_SetBit(void* Obj)
	{
		((FBXImportManager_eventInitializeFBXLoad_Parms*)Obj)->TransformVertexToAbsolute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_TransformVertexToAbsolute = { "TransformVertexToAbsolute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBXImportManager_eventInitializeFBXLoad_Parms), &Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_TransformVertexToAbsolute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_Coordinate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventInitializeFBXLoad_Parms, Coordinate), Z_Construct_UEnum_RuntimeFBXImport_EFBXCoordinate, METADATA_PARAMS(nullptr, 0) }; // 2112692041
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_FrontVector_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_FrontVector = { "FrontVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventInitializeFBXLoad_Parms, FrontVector), Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis, METADATA_PARAMS(nullptr, 0) }; // 686072365
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_UpVector_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventInitializeFBXLoad_Parms, UpVector), Z_Construct_UEnum_RuntimeFBXImport_EFBXAxis, METADATA_PARAMS(nullptr, 0) }; // 686072365
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_TransformVertexToAbsolute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_Coordinate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_FrontVector_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_FrontVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_UpVector_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::NewProp_UpVector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Import" },
		{ "CPP_Default_Coordinate", "RightHanded" },
		{ "CPP_Default_FrontVector", "Front" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "CPP_Default_TransformVertexToAbsolute", "true" },
		{ "CPP_Default_UpVector", "Up" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "InitializeFBXLoad", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::FBXImportManager_eventInitializeFBXLoad_Parms), Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics
	{
		struct FBXImportManager_eventLoadMaterialsFromType_Parms
		{
			FString TypeName;
			TArray<FMaterialInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventLoadMaterialsFromType_Parms, TypeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialInfo, METADATA_PARAMS(nullptr, 0) }; // 3087683991
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventLoadMaterialsFromType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3087683991
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::NewProp_TypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "LoadMaterialsFromType", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::FBXImportManager_eventLoadMaterialsFromType_Parms), Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics
	{
		struct FBXImportManager_eventLoadMeshActors_Parms
		{
			FString SaveSlotName;
			int32 SaveGameIndex;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SaveGameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventLoadMeshActors_Parms, SaveSlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::NewProp_SaveGameIndex = { "SaveGameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventLoadMeshActors_Parms, SaveGameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::NewProp_SaveGameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "LoadMeshActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::FBXImportManager_eventLoadMeshActors_Parms), Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_LoadMeshActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_LoadMeshActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics
	{
		struct FBXImportManager_eventLoadTexturesFromType_Parms
		{
			FString TypeName;
			TArray<FTextureInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventLoadTexturesFromType_Parms, TypeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTextureInfo, METADATA_PARAMS(nullptr, 0) }; // 2370527516
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventLoadTexturesFromType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2370527516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::NewProp_TypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "LoadTexturesFromType", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::FBXImportManager_eventLoadTexturesFromType_Parms), Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventOnFBXActorCreated_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated_Statics::NewProp_MeshActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "OnFBXActorCreated", nullptr, nullptr, sizeof(FBXImportManager_eventOnFBXActorCreated_Parms), Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::NewProp_MeshActor = { "MeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventOnImportCompleted_Parms, MeshActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::NewProp_MeshActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "OnImportCompleted", nullptr, nullptr, sizeof(FBXImportManager_eventOnImportCompleted_Parms), Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_OnImportCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_OnImportCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::NewProp_ImportID = { "ImportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventOnImportProgressChanged_Parms, ImportID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventOnImportProgressChanged_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::NewProp_ImportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "OnImportProgressChanged", nullptr, nullptr, sizeof(FBXImportManager_eventOnImportProgressChanged_Parms), Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::NewProp_ImportID = { "ImportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventOnImportStarted_Parms, ImportID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventOnImportStarted_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::NewProp_ImportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "OnImportStarted", nullptr, nullptr, sizeof(FBXImportManager_eventOnImportStarted_Parms), Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_OnImportStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_OnImportStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics
	{
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::NewProp_ImportID = { "ImportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventOnNodeProcessingChanged_Parms, ImportID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventOnNodeProcessingChanged_Parms, NodeName), METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::NewProp_NodeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::NewProp_ImportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::NewProp_NodeName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "OnNodeProcessingChanged", nullptr, nullptr, sizeof(FBXImportManager_eventOnNodeProcessingChanged_Parms), Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_ResetActorSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_ResetActorSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_ResetActorSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "ResetActorSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_ResetActorSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_ResetActorSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_ResetActorSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_ResetActorSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_ResetHoveredActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_ResetHoveredActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_ResetHoveredActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "ResetHoveredActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_ResetHoveredActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_ResetHoveredActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_ResetHoveredActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_ResetHoveredActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics
	{
		struct FBXImportManager_eventSaveMeshActors_Parms
		{
			FString SaveSlotName;
			int32 SaveGameIndex;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SaveGameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventSaveMeshActors_Parms, SaveSlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::NewProp_SaveGameIndex = { "SaveGameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventSaveMeshActors_Parms, SaveGameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::NewProp_SaveGameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "SaveMeshActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::FBXImportManager_eventSaveMeshActors_Parms), Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_SaveMeshActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_SaveMeshActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics
	{
		struct FBXImportManager_eventSelectActor_Parms
		{
			AFBXMeshActor* ActorToSelect;
			UPrimitiveComponent* SelectedComponent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToSelect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::NewProp_ActorToSelect = { "ActorToSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventSelectActor_Parms, ActorToSelect), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::NewProp_SelectedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::NewProp_SelectedComponent = { "SelectedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXImportManager_eventSelectActor_Parms, SelectedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::NewProp_SelectedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::NewProp_SelectedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::NewProp_ActorToSelect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::NewProp_SelectedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXImportManager, nullptr, "SelectActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::FBXImportManager_eventSelectActor_Parms), Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXImportManager_SelectActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXImportManager_SelectActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFBXImportManager);
	UClass* Z_Construct_UClass_AFBXImportManager_NoRegister()
	{
		return AFBXImportManager::StaticClass();
	}
	struct Z_Construct_UClass_AFBXImportManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSelectedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSelectedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPivotActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPivotActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportActorMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportActorMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportActorMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ImportActorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialImportSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialImportSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FBXActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FBXActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPivot_MetaData[];
#endif
		static void NewProp_bShowPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotTranslationClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PivotTranslationClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotRotationClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PivotRotationClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotScaleClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PivotScaleClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialLibrary;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FBXSceneImporters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FBXSceneImporters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FBXSceneImporters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFBXImportManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFBXImportManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFBXImportManager_HandleImportCompleted, "HandleImportCompleted" }, // 548989301
		{ &Z_Construct_UFunction_AFBXImportManager_HandleImportProgressChanged, "HandleImportProgressChanged" }, // 568116926
		{ &Z_Construct_UFunction_AFBXImportManager_HandleMeshNodeCreated, "HandleMeshNodeCreated" }, // 2843687290
		{ &Z_Construct_UFunction_AFBXImportManager_HandleNodeProcessingChanged, "HandleNodeProcessingChanged" }, // 4091162613
		{ &Z_Construct_UFunction_AFBXImportManager_HoverAtActor, "HoverAtActor" }, // 1851654834
		{ &Z_Construct_UFunction_AFBXImportManager_ImportFBXFile, "ImportFBXFile" }, // 3118889657
		{ &Z_Construct_UFunction_AFBXImportManager_InitializeFBXLoad, "InitializeFBXLoad" }, // 2819731794
		{ &Z_Construct_UFunction_AFBXImportManager_LoadMaterialsFromType, "LoadMaterialsFromType" }, // 589013851
		{ &Z_Construct_UFunction_AFBXImportManager_LoadMeshActors, "LoadMeshActors" }, // 2708354716
		{ &Z_Construct_UFunction_AFBXImportManager_LoadTexturesFromType, "LoadTexturesFromType" }, // 1090757572
		{ &Z_Construct_UFunction_AFBXImportManager_OnFBXActorCreated, "OnFBXActorCreated" }, // 1768711150
		{ &Z_Construct_UFunction_AFBXImportManager_OnImportCompleted, "OnImportCompleted" }, // 3792175032
		{ &Z_Construct_UFunction_AFBXImportManager_OnImportProgressChanged, "OnImportProgressChanged" }, // 2009009053
		{ &Z_Construct_UFunction_AFBXImportManager_OnImportStarted, "OnImportStarted" }, // 945208414
		{ &Z_Construct_UFunction_AFBXImportManager_OnNodeProcessingChanged, "OnNodeProcessingChanged" }, // 1310011850
		{ &Z_Construct_UFunction_AFBXImportManager_ResetActorSelection, "ResetActorSelection" }, // 1452730174
		{ &Z_Construct_UFunction_AFBXImportManager_ResetHoveredActor, "ResetHoveredActor" }, // 3816938099
		{ &Z_Construct_UFunction_AFBXImportManager_SaveMeshActors, "SaveMeshActors" }, // 3617011318
		{ &Z_Construct_UFunction_AFBXImportManager_SelectActor, "SelectActor" }, // 3742630449
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/FBXImportManager.h" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentSelectedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentSelectedActor = { "CurrentSelectedActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXImportManager, CurrentSelectedActor), Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentSelectedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentSelectedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentPivotActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentPivotActor = { "CurrentPivotActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXImportManager, CurrentPivotActor), Z_Construct_UClass_APivotActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentPivotActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentPivotActor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_ImportActorMap_ValueProp = { "ImportActorMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_ImportActorMap_Key_KeyProp = { "ImportActorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_ImportActorMap_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_ImportActorMap = { "ImportActorMap", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXImportManager, ImportActorMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_ImportActorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_ImportActorMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_MaterialImportSettings_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_MaterialImportSettings = { "MaterialImportSettings", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXImportManager, MaterialImportSettings), Z_Construct_UClass_UMaterialImportSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_MaterialImportSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_MaterialImportSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXActorClass_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXActorClass = { "FBXActorClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXImportManager, FBXActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFBXMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_bShowPivot_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	void Z_Construct_UClass_AFBXImportManager_Statics::NewProp_bShowPivot_SetBit(void* Obj)
	{
		((AFBXImportManager*)Obj)->bShowPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_bShowPivot = { "bShowPivot", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFBXImportManager), &Z_Construct_UClass_AFBXImportManager_Statics::NewProp_bShowPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_bShowPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_bShowPivot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotTranslationClass_MetaData[] = {
		{ "Category", "Pivot" },
		{ "EditCondition", "bShowPivot" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotTranslationClass = { "PivotTranslationClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXImportManager, PivotTranslationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APivotActorTranslation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotTranslationClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotTranslationClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotRotationClass_MetaData[] = {
		{ "Category", "Pivot" },
		{ "EditCondition", "bShowPivot" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotRotationClass = { "PivotRotationClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXImportManager, PivotRotationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APivotActorRotation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotRotationClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotRotationClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotScaleClass_MetaData[] = {
		{ "Category", "Pivot" },
		{ "EditCondition", "bShowPivot" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotScaleClass = { "PivotScaleClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXImportManager, PivotScaleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APivotActorScale_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotScaleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotScaleClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_MaterialLibrary_MetaData[] = {
		{ "Category", "Library" },
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_MaterialLibrary = { "MaterialLibrary", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXImportManager, MaterialLibrary), Z_Construct_UClass_UMaterialLibraryAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_MaterialLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_MaterialLibrary_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXSceneImporters_Inner = { "FBXSceneImporters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFBXSceneImporter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXSceneImporters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXImportManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXSceneImporters = { "FBXSceneImporters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXImportManager, FBXSceneImporters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXSceneImporters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXSceneImporters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFBXImportManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentSelectedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_CurrentPivotActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_ImportActorMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_ImportActorMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_ImportActorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_MaterialImportSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_bShowPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotTranslationClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotRotationClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_PivotScaleClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_MaterialLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXSceneImporters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXImportManager_Statics::NewProp_FBXSceneImporters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFBXImportManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFBXImportManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFBXImportManager_Statics::ClassParams = {
		&AFBXImportManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFBXImportManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFBXImportManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXImportManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFBXImportManager()
	{
		if (!Z_Registration_Info_UClass_AFBXImportManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFBXImportManager.OuterSingleton, Z_Construct_UClass_AFBXImportManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFBXImportManager.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<AFBXImportManager>()
	{
		return AFBXImportManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFBXImportManager);
	AFBXImportManager::~AFBXImportManager() {}
	struct Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_Statics::EnumInfo[] = {
		{ EFBXCoordinate_StaticEnum, TEXT("EFBXCoordinate"), &Z_Registration_Info_UEnum_EFBXCoordinate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2112692041U) },
		{ EFBXAxis_StaticEnum, TEXT("EFBXAxis"), &Z_Registration_Info_UEnum_EFBXAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 686072365U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFBXImportManager, AFBXImportManager::StaticClass, TEXT("AFBXImportManager"), &Z_Registration_Info_UClass_AFBXImportManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFBXImportManager), 9381991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_2639307685(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
