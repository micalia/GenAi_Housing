// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/DataAssets/MaterialLibraryAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialLibraryAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMaterialLibraryAsset();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMaterialLibraryAsset_NoRegister();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialGroup();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInfo();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMeshTextureGroup();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FTextureInfo();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialInfo;
class UScriptStruct* FMaterialInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInfo, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MaterialInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialInfo.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMaterialInfo>()
{
	return FMaterialInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInfo, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInfo, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"MaterialInfo",
		sizeof(FMaterialInfo),
		alignof(FMaterialInfo),
		Z_Construct_UScriptStruct_FMaterialInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureInfo;
class UScriptStruct* FTextureInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureInfo, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("TextureInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TextureInfo.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FTextureInfo>()
{
	return FTextureInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureInfo_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTextureInfo_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureInfo, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureInfo_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureInfo_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureInfo_Statics::NewProp_Texture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"TextureInfo",
		sizeof(FTextureInfo),
		alignof(FTextureInfo),
		Z_Construct_UScriptStruct_FTextureInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureInfo.InnerSingleton, Z_Construct_UScriptStruct_FTextureInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialGroup;
class UScriptStruct* FMaterialGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialGroup, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MaterialGroup"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialGroup.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMaterialGroup>()
{
	return FMaterialGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_TypeName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialGroup, TypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_TypeName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialInfo, METADATA_PARAMS(nullptr, 0) }; // 3087683991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialGroup, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_Materials_MetaData)) }; // 3087683991
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_TypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewProp_Materials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"MaterialGroup",
		sizeof(FMaterialGroup),
		alignof(FMaterialGroup),
		Z_Construct_UScriptStruct_FMaterialGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialGroup.InnerSingleton, Z_Construct_UScriptStruct_FMaterialGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshTextureGroup;
class UScriptStruct* FMeshTextureGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshTextureGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshTextureGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshTextureGroup, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MeshTextureGroup"));
	}
	return Z_Registration_Info_UScriptStruct_MeshTextureGroup.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMeshTextureGroup>()
{
	return FMeshTextureGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshTextureGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshTextureGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_TypeName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshTextureGroup, TypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_TypeName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTextureInfo, METADATA_PARAMS(nullptr, 0) }; // 2370527516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshTextureGroup, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_Textures_MetaData)) }; // 2370527516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_TypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_Textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewProp_Textures,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"MeshTextureGroup",
		sizeof(FMeshTextureGroup),
		alignof(FMeshTextureGroup),
		Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshTextureGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshTextureGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshTextureGroup.InnerSingleton, Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshTextureGroup.InnerSingleton;
	}
	DEFINE_FUNCTION(UMaterialLibraryAsset::execGetTextureGroup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TypeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMeshTextureGroup*)Z_Param__Result=P_THIS->GetTextureGroup(Z_Param_TypeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialLibraryAsset::execGetMaterialGroup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TypeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMaterialGroup*)Z_Param__Result=P_THIS->GetMaterialGroup(Z_Param_TypeName);
		P_NATIVE_END;
	}
	void UMaterialLibraryAsset::StaticRegisterNativesUMaterialLibraryAsset()
	{
		UClass* Class = UMaterialLibraryAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialGroup", &UMaterialLibraryAsset::execGetMaterialGroup },
			{ "GetTextureGroup", &UMaterialLibraryAsset::execGetTextureGroup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics
	{
		struct MaterialLibraryAsset_eventGetMaterialGroup_Parms
		{
			FString TypeName;
			FMaterialGroup ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialLibraryAsset_eventGetMaterialGroup_Parms, TypeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialLibraryAsset_eventGetMaterialGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FMaterialGroup, METADATA_PARAMS(nullptr, 0) }; // 3813083756
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::NewProp_TypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialLibraryAsset, nullptr, "GetMaterialGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::MaterialLibraryAsset_eventGetMaterialGroup_Parms), Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics
	{
		struct MaterialLibraryAsset_eventGetTextureGroup_Parms
		{
			FString TypeName;
			FMeshTextureGroup ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialLibraryAsset_eventGetTextureGroup_Parms, TypeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialLibraryAsset_eventGetTextureGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FMeshTextureGroup, METADATA_PARAMS(nullptr, 0) }; // 4095215421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::NewProp_TypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Textures" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialLibraryAsset, nullptr, "GetTextureGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::MaterialLibraryAsset_eventGetTextureGroup_Parms), Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialLibraryAsset);
	UClass* Z_Construct_UClass_UMaterialLibraryAsset_NoRegister()
	{
		return UMaterialLibraryAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialLibraryAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialGroups;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialLibraryAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialLibraryAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialLibraryAsset_GetMaterialGroup, "GetMaterialGroup" }, // 2065172447
		{ &Z_Construct_UFunction_UMaterialLibraryAsset_GetTextureGroup, "GetTextureGroup" }, // 1917817148
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialLibraryAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DataAssets/MaterialLibraryAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_MaterialGroups_Inner = { "MaterialGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialGroup, METADATA_PARAMS(nullptr, 0) }; // 3813083756
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_MaterialGroups_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_MaterialGroups = { "MaterialGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialLibraryAsset, MaterialGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_MaterialGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_MaterialGroups_MetaData)) }; // 3813083756
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_TextureGroups_Inner = { "TextureGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeshTextureGroup, METADATA_PARAMS(nullptr, 0) }; // 4095215421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_TextureGroups_MetaData[] = {
		{ "Category", "Textures" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialLibraryAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_TextureGroups = { "TextureGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialLibraryAsset, TextureGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_TextureGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_TextureGroups_MetaData)) }; // 4095215421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialLibraryAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_MaterialGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_MaterialGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_TextureGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialLibraryAsset_Statics::NewProp_TextureGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialLibraryAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialLibraryAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialLibraryAsset_Statics::ClassParams = {
		&UMaterialLibraryAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMaterialLibraryAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialLibraryAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialLibraryAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialLibraryAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialLibraryAsset()
	{
		if (!Z_Registration_Info_UClass_UMaterialLibraryAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialLibraryAsset.OuterSingleton, Z_Construct_UClass_UMaterialLibraryAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialLibraryAsset.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UMaterialLibraryAsset>()
	{
		return UMaterialLibraryAsset::StaticClass();
	}
	UMaterialLibraryAsset::UMaterialLibraryAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialLibraryAsset);
	UMaterialLibraryAsset::~UMaterialLibraryAsset() {}
	struct Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_Statics::ScriptStructInfo[] = {
		{ FMaterialInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialInfo_Statics::NewStructOps, TEXT("MaterialInfo"), &Z_Registration_Info_UScriptStruct_MaterialInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialInfo), 3087683991U) },
		{ FTextureInfo::StaticStruct, Z_Construct_UScriptStruct_FTextureInfo_Statics::NewStructOps, TEXT("TextureInfo"), &Z_Registration_Info_UScriptStruct_TextureInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureInfo), 2370527516U) },
		{ FMaterialGroup::StaticStruct, Z_Construct_UScriptStruct_FMaterialGroup_Statics::NewStructOps, TEXT("MaterialGroup"), &Z_Registration_Info_UScriptStruct_MaterialGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialGroup), 3813083756U) },
		{ FMeshTextureGroup::StaticStruct, Z_Construct_UScriptStruct_FMeshTextureGroup_Statics::NewStructOps, TEXT("MeshTextureGroup"), &Z_Registration_Info_UScriptStruct_MeshTextureGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshTextureGroup), 4095215421U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialLibraryAsset, UMaterialLibraryAsset::StaticClass, TEXT("UMaterialLibraryAsset"), &Z_Registration_Info_UClass_UMaterialLibraryAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialLibraryAsset), 3368537673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_3881795975(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
