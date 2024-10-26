// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/MeshNode.h"
#include "ProceduralMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNode();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNode_Geometry();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNode_Geometry_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNode_NoRegister();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProperties();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialRuntimeInfo();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshData();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FTextureData();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureData;
class UScriptStruct* FTextureData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureData, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("TextureData"));
	}
	return Z_Registration_Info_UScriptStruct_TextureData.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FTextureData>()
{
	return FTextureData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UnCompressedData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnCompressedData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnCompressedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureData, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureData, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_UnCompressedData_Inner = { "UnCompressedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_UnCompressedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_UnCompressedData = { "UnCompressedData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureData, UnCompressedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_UnCompressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_UnCompressedData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_UnCompressedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureData_Statics::NewProp_UnCompressedData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"TextureData",
		sizeof(FTextureData),
		alignof(FTextureData),
		Z_Construct_UScriptStruct_FTextureData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureData()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureData.InnerSingleton, Z_Construct_UScriptStruct_FTextureData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialRuntimeInfo;
class UScriptStruct* FMaterialRuntimeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialRuntimeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialRuntimeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialRuntimeInfo, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MaterialRuntimeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialRuntimeInfo.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMaterialRuntimeInfo>()
{
	return FMaterialRuntimeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Textures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Colors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Colors;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scalars_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Scalars_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scalars_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Scalars;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialRuntimeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialRuntimeInfo, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_BaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_BaseMaterial_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Textures_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialRuntimeInfo, Textures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Textures_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Colors_ValueProp = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Colors_Key_KeyProp = { "Colors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Colors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialRuntimeInfo, Colors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Colors_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Scalars_ValueProp = { "Scalars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Scalars_Key_KeyProp = { "Scalars_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Scalars_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Scalars = { "Scalars", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialRuntimeInfo, Scalars), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Scalars_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Scalars_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_BaseMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Textures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Textures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Colors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Colors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Colors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Scalars_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Scalars_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewProp_Scalars,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"MaterialRuntimeInfo",
		sizeof(FMaterialRuntimeInfo),
		alignof(FMaterialRuntimeInfo),
		Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialRuntimeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialRuntimeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialRuntimeInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialRuntimeInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialProperties;
class UScriptStruct* FMaterialProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialProperties, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MaterialProperties"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialProperties.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMaterialProperties>()
{
	return FMaterialProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Textures_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Textures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Colors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Colors;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scalars_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Scalars_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scalars_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Scalars;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_MaterialName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_MaterialName = { "MaterialName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialProperties, MaterialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_MaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_MaterialName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTextureData, METADATA_PARAMS(nullptr, 0) }; // 2574834115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialProperties, Textures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Textures_MetaData)) }; // 2574834115
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Colors_ValueProp = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Colors_Key_KeyProp = { "Colors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Colors_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialProperties, Colors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Colors_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Scalars_ValueProp = { "Scalars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Scalars_Key_KeyProp = { "Scalars_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Scalars_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Scalars = { "Scalars", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialProperties, Scalars), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Scalars_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Scalars_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialProperties, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_BaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_BaseMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_MaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Textures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Textures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Colors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Colors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Colors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Scalars_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Scalars_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_Scalars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewProp_BaseMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"MaterialProperties",
		sizeof(FMaterialProperties),
		alignof(FMaterialProperties),
		Z_Construct_UScriptStruct_FMaterialProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialProperties.InnerSingleton, Z_Construct_UScriptStruct_FMaterialProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProceduralMeshData;
class UScriptStruct* FProceduralMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProceduralMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralMeshData, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("ProceduralMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_ProceduralMeshData.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FProceduralMeshData>()
{
	return FProceduralMeshData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProceduralMeshData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralMeshData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "Procedural Mesh Data" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralMeshData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "Procedural Mesh Data" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralMeshData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "Procedural Mesh Data" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralMeshData, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_UVs_MetaData[] = {
		{ "Category", "Procedural Mesh Data" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralMeshData, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_UVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_UVs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Category", "Procedural Mesh Data" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralMeshData, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3570636161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Tangents_MetaData[] = {
		{ "Category", "Procedural Mesh Data" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralMeshData, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Tangents_MetaData)) }; // 3570636161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralMeshData, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_MaterialProperties_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_MaterialProperties = { "MaterialProperties", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProceduralMeshData, MaterialProperties), Z_Construct_UScriptStruct_FMaterialProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_MaterialProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_MaterialProperties_MetaData)) }; // 2381419587
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_UVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_UVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewProp_MaterialProperties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"ProceduralMeshData",
		sizeof(FProceduralMeshData),
		alignof(FProceduralMeshData),
		Z_Construct_UScriptStruct_FProceduralMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshData()
	{
		if (!Z_Registration_Info_UScriptStruct_ProceduralMeshData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProceduralMeshData.InnerSingleton, Z_Construct_UScriptStruct_FProceduralMeshData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProceduralMeshData.InnerSingleton;
	}
	DEFINE_FUNCTION(UMeshNode::execGetChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMeshNode*>*)Z_Param__Result=P_THIS->GetChildren();
		P_NATIVE_END;
	}
	void UMeshNode::StaticRegisterNativesUMeshNode()
	{
		UClass* Class = UMeshNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChildren", &UMeshNode::execGetChildren },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshNode_GetChildren_Statics
	{
		struct MeshNode_eventGetChildren_Parms
		{
			TArray<UMeshNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshNode_GetChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNode_GetChildren_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshNode_GetChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshNode_eventGetChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMeshNode_GetChildren_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshNode_GetChildren_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshNode_GetChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNode_GetChildren_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNode_GetChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNode_GetChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Node" },
		{ "Comment", "// Add this function to get the children nodes\n" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
		{ "ToolTip", "Add this function to get the children nodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshNode_GetChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshNode, nullptr, "GetChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshNode_GetChildren_Statics::MeshNode_eventGetChildren_Parms), Z_Construct_UFunction_UMeshNode_GetChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshNode_GetChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshNode_GetChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshNode_GetChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshNode_GetChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshNode_GetChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshNode);
	UClass* Z_Construct_UClass_UMeshNode_NoRegister()
	{
		return UMeshNode::StaticClass();
	}
	struct Z_Construct_UClass_UMeshNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshNode_GetChildren, "GetChildren" }, // 2913756329
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNode_Statics::NewProp_NodeName_MetaData[] = {
		{ "Category", "Mesh Node" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshNode, NodeName), METADATA_PARAMS(Z_Construct_UClass_UMeshNode_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNode_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNode_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Mesh Node" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshNode_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshNode, Parent), Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshNode_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNode_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNode_Statics::NewProp_PivotTransform_MetaData[] = {
		{ "Category", "Mesh Node" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshNode_Statics::NewProp_PivotTransform = { "PivotTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshNode, PivotTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMeshNode_Statics::NewProp_PivotTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNode_Statics::NewProp_PivotTransform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshNode_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNode_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Mesh Node" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshNode_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshNode, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshNode_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNode_Statics::NewProp_Children_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNode_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNode_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNode_Statics::NewProp_PivotTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNode_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNode_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshNode_Statics::ClassParams = {
		&UMeshNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeshNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshNode()
	{
		if (!Z_Registration_Info_UClass_UMeshNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshNode.OuterSingleton, Z_Construct_UClass_UMeshNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshNode.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UMeshNode>()
	{
		return UMeshNode::StaticClass();
	}
	UMeshNode::UMeshNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshNode);
	UMeshNode::~UMeshNode() {}
	void UMeshNode_Geometry::StaticRegisterNativesUMeshNode_Geometry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshNode_Geometry);
	UClass* Z_Construct_UClass_UMeshNode_Geometry_NoRegister()
	{
		return UMeshNode_Geometry::StaticClass();
	}
	struct Z_Construct_UClass_UMeshNode_Geometry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralMeshSectionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshSectionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralMeshSectionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshNode_Geometry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNode_Geometry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshNode_Geometry_Statics::NewProp_ProceduralMeshSectionData_Inner = { "ProceduralMeshSectionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProceduralMeshData, METADATA_PARAMS(nullptr, 0) }; // 3864625350
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNode_Geometry_Statics::NewProp_ProceduralMeshSectionData_MetaData[] = {
		{ "Category", "Mesh Node" },
		{ "ModuleRelativePath", "Public/MeshNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshNode_Geometry_Statics::NewProp_ProceduralMeshSectionData = { "ProceduralMeshSectionData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshNode_Geometry, ProceduralMeshSectionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshNode_Geometry_Statics::NewProp_ProceduralMeshSectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNode_Geometry_Statics::NewProp_ProceduralMeshSectionData_MetaData)) }; // 3864625350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshNode_Geometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNode_Geometry_Statics::NewProp_ProceduralMeshSectionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNode_Geometry_Statics::NewProp_ProceduralMeshSectionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshNode_Geometry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshNode_Geometry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshNode_Geometry_Statics::ClassParams = {
		&UMeshNode_Geometry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshNode_Geometry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNode_Geometry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshNode_Geometry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNode_Geometry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshNode_Geometry()
	{
		if (!Z_Registration_Info_UClass_UMeshNode_Geometry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshNode_Geometry.OuterSingleton, Z_Construct_UClass_UMeshNode_Geometry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshNode_Geometry.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UMeshNode_Geometry>()
	{
		return UMeshNode_Geometry::StaticClass();
	}
	UMeshNode_Geometry::UMeshNode_Geometry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshNode_Geometry);
	UMeshNode_Geometry::~UMeshNode_Geometry() {}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_MeshNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_MeshNode_h_Statics::ScriptStructInfo[] = {
		{ FTextureData::StaticStruct, Z_Construct_UScriptStruct_FTextureData_Statics::NewStructOps, TEXT("TextureData"), &Z_Registration_Info_UScriptStruct_TextureData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureData), 2574834115U) },
		{ FMaterialRuntimeInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialRuntimeInfo_Statics::NewStructOps, TEXT("MaterialRuntimeInfo"), &Z_Registration_Info_UScriptStruct_MaterialRuntimeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialRuntimeInfo), 2002765215U) },
		{ FMaterialProperties::StaticStruct, Z_Construct_UScriptStruct_FMaterialProperties_Statics::NewStructOps, TEXT("MaterialProperties"), &Z_Registration_Info_UScriptStruct_MaterialProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialProperties), 2381419587U) },
		{ FProceduralMeshData::StaticStruct, Z_Construct_UScriptStruct_FProceduralMeshData_Statics::NewStructOps, TEXT("ProceduralMeshData"), &Z_Registration_Info_UScriptStruct_ProceduralMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralMeshData), 3864625350U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_MeshNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshNode, UMeshNode::StaticClass, TEXT("UMeshNode"), &Z_Registration_Info_UClass_UMeshNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshNode), 1940323662U) },
		{ Z_Construct_UClass_UMeshNode_Geometry, UMeshNode_Geometry::StaticClass, TEXT("UMeshNode_Geometry"), &Z_Registration_Info_UClass_UMeshNode_Geometry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshNode_Geometry), 1968616361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_MeshNode_h_2683938845(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_MeshNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_MeshNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_MeshNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_MeshNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
