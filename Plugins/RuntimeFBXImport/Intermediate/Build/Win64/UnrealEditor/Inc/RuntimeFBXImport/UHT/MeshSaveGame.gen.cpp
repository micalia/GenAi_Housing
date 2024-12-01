// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/SaveGame/MeshSaveGame.h"
#include "RuntimeFBXImport/Public/MeshNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSaveGame() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNode_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshSaveGame();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshSaveGame_NoRegister();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialRuntimeInfo();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMeshComponentSaveData();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSaveData();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshData();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshComponentSaveData;
class UScriptStruct* FMeshComponentSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshComponentSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshComponentSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshComponentSaveData, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MeshComponentSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_MeshComponentSaveData.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMeshComponentSaveData>()
{
	return FMeshComponentSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralMeshSectionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshSectionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralMeshSectionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialRuntimeInfoArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRuntimeInfoArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialRuntimeInfoArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/MeshSaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshComponentSaveData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_ProceduralMeshSectionData_Inner = { "ProceduralMeshSectionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProceduralMeshData, METADATA_PARAMS(nullptr, 0) }; // 3864625350
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_ProceduralMeshSectionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/MeshSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_ProceduralMeshSectionData = { "ProceduralMeshSectionData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshComponentSaveData, ProceduralMeshSectionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_ProceduralMeshSectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_ProceduralMeshSectionData_MetaData)) }; // 3864625350
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/MeshSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshComponentSaveData, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MeshData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/MeshSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshComponentSaveData, MeshData), Z_Construct_UScriptStruct_FProceduralMeshData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MeshData_MetaData)) }; // 3864625350
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MaterialRuntimeInfoArray_Inner = { "MaterialRuntimeInfoArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialRuntimeInfo, METADATA_PARAMS(nullptr, 0) }; // 2002765215
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MaterialRuntimeInfoArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/MeshSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MaterialRuntimeInfoArray = { "MaterialRuntimeInfoArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshComponentSaveData, MaterialRuntimeInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MaterialRuntimeInfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MaterialRuntimeInfoArray_MetaData)) }; // 2002765215
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_ProceduralMeshSectionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_ProceduralMeshSectionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_RelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MaterialRuntimeInfoArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewProp_MaterialRuntimeInfoArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"MeshComponentSaveData",
		sizeof(FMeshComponentSaveData),
		alignof(FMeshComponentSaveData),
		Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshComponentSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshComponentSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshComponentSaveData.InnerSingleton, Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshComponentSaveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshSaveData;
class UScriptStruct* FMeshSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSaveData, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MeshSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_MeshSaveData.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMeshSaveData>()
{
	return FMeshSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshComponentSaveDataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentSaveDataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComponentSaveDataArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/MeshSaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSaveData>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_RootNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/MeshSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshSaveData, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_RootNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_RootNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_ActorTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/MeshSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshSaveData, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_ActorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_ActorTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshComponentSaveDataArray_Inner = { "MeshComponentSaveDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeshComponentSaveData, METADATA_PARAMS(nullptr, 0) }; // 4229585976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshComponentSaveDataArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/MeshSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshComponentSaveDataArray = { "MeshComponentSaveDataArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshSaveData, MeshComponentSaveDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshComponentSaveDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshComponentSaveDataArray_MetaData)) }; // 4229585976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_RootNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_RootNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_ActorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshComponentSaveDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshComponentSaveDataArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"MeshSaveData",
		sizeof(FMeshSaveData),
		alignof(FMeshSaveData),
		Z_Construct_UScriptStruct_FMeshSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshSaveData.InnerSingleton, Z_Construct_UScriptStruct_FMeshSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshSaveData.InnerSingleton;
	}
	void UMeshSaveGame::StaticRegisterNativesUMeshSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSaveGame);
	UClass* Z_Construct_UClass_UMeshSaveGame_NoRegister()
	{
		return UMeshSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedMeshes_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SavedMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SavedMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveGame/MeshSaveGame.h" },
		{ "ModuleRelativePath", "Public/SaveGame/MeshSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshSaveGame_Statics::NewProp_SavedMeshes_ValueProp = { "SavedMeshes", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMeshSaveData, METADATA_PARAMS(nullptr, 0) }; // 1750589219
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSaveGame_Statics::NewProp_SavedMeshes_Key_KeyProp = { "SavedMeshes_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSaveGame_Statics::NewProp_SavedMeshes_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/MeshSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMeshSaveGame_Statics::NewProp_SavedMeshes = { "SavedMeshes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSaveGame, SavedMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSaveGame_Statics::NewProp_SavedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSaveGame_Statics::NewProp_SavedMeshes_MetaData)) }; // 1750589219
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSaveGame_Statics::NewProp_SavedMeshes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSaveGame_Statics::NewProp_SavedMeshes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSaveGame_Statics::NewProp_SavedMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSaveGame_Statics::ClassParams = {
		&UMeshSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSaveGame()
	{
		if (!Z_Registration_Info_UClass_UMeshSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSaveGame.OuterSingleton, Z_Construct_UClass_UMeshSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSaveGame.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UMeshSaveGame>()
	{
		return UMeshSaveGame::StaticClass();
	}
	UMeshSaveGame::UMeshSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSaveGame);
	UMeshSaveGame::~UMeshSaveGame() {}
	struct Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_SaveGame_MeshSaveGame_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_SaveGame_MeshSaveGame_h_Statics::ScriptStructInfo[] = {
		{ FMeshComponentSaveData::StaticStruct, Z_Construct_UScriptStruct_FMeshComponentSaveData_Statics::NewStructOps, TEXT("MeshComponentSaveData"), &Z_Registration_Info_UScriptStruct_MeshComponentSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshComponentSaveData), 4229585976U) },
		{ FMeshSaveData::StaticStruct, Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewStructOps, TEXT("MeshSaveData"), &Z_Registration_Info_UScriptStruct_MeshSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshSaveData), 1750589219U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_SaveGame_MeshSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshSaveGame, UMeshSaveGame::StaticClass, TEXT("UMeshSaveGame"), &Z_Registration_Info_UClass_UMeshSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSaveGame), 1786732114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_SaveGame_MeshSaveGame_h_3746861352(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_SaveGame_MeshSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_SaveGame_MeshSaveGame_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_SaveGame_MeshSaveGame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_SaveGame_MeshSaveGame_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
