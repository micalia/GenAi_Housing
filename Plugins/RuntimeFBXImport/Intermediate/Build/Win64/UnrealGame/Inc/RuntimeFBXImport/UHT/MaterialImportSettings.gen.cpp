// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/DataAssets/MaterialImportSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialImportSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMaterialImportSettings();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMaterialImportSettings_NoRegister();
	RUNTIMEFBXIMPORT_API UEnum* Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType();
	RUNTIMEFBXIMPORT_API UEnum* Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType();
	RUNTIMEFBXIMPORT_API UEnum* Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMeshColorTypeMapping();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMeshScalarTypeMapping();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMeshTextureTypeMapping();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FNodeMaterialMapping();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FTexturePathMapping();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshTextureType;
	static UEnum* EMeshTextureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshTextureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshTextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("EMeshTextureType"));
		}
		return Z_Registration_Info_UEnum_EMeshTextureType.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EMeshTextureType>()
	{
		return EMeshTextureType_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType_Statics::Enumerators[] = {
		{ "EMeshTextureType::Diffuse", (int64)EMeshTextureType::Diffuse },
		{ "EMeshTextureType::Specular", (int64)EMeshTextureType::Specular },
		{ "EMeshTextureType::Ambient", (int64)EMeshTextureType::Ambient },
		{ "EMeshTextureType::Emissive", (int64)EMeshTextureType::Emissive },
		{ "EMeshTextureType::Height", (int64)EMeshTextureType::Height },
		{ "EMeshTextureType::Normal", (int64)EMeshTextureType::Normal },
		{ "EMeshTextureType::Shininess", (int64)EMeshTextureType::Shininess },
		{ "EMeshTextureType::Opacity", (int64)EMeshTextureType::Opacity },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType_Statics::Enum_MetaDataParams[] = {
		{ "Ambient.DisplayName", "Ambient" },
		{ "Ambient.Name", "EMeshTextureType::Ambient" },
		{ "BlueprintType", "true" },
		{ "Diffuse.DisplayName", "Diffuse" },
		{ "Diffuse.Name", "EMeshTextureType::Diffuse" },
		{ "Emissive.DisplayName", "Emissive" },
		{ "Emissive.Name", "EMeshTextureType::Emissive" },
		{ "Height.DisplayName", "Height" },
		{ "Height.Name", "EMeshTextureType::Height" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EMeshTextureType::Normal" },
		{ "Opacity.DisplayName", "Opacity" },
		{ "Opacity.Name", "EMeshTextureType::Opacity" },
		{ "Shininess.DisplayName", "Shininess" },
		{ "Shininess.Name", "EMeshTextureType::Shininess" },
		{ "Specular.DisplayName", "Specular" },
		{ "Specular.Name", "EMeshTextureType::Specular" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		"EMeshTextureType",
		"EMeshTextureType",
		Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType()
	{
		if (!Z_Registration_Info_UEnum_EMeshTextureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshTextureType.InnerSingleton, Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshTextureType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshColorType;
	static UEnum* EMeshColorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshColorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshColorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("EMeshColorType"));
		}
		return Z_Registration_Info_UEnum_EMeshColorType.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EMeshColorType>()
	{
		return EMeshColorType_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType_Statics::Enumerators[] = {
		{ "EMeshColorType::ColorDiffuse", (int64)EMeshColorType::ColorDiffuse },
		{ "EMeshColorType::ColorAmbient", (int64)EMeshColorType::ColorAmbient },
		{ "EMeshColorType::ColorOpacity", (int64)EMeshColorType::ColorOpacity },
		{ "EMeshColorType::ColorSpecular", (int64)EMeshColorType::ColorSpecular },
		{ "EMeshColorType::ColorEmissive", (int64)EMeshColorType::ColorEmissive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ColorAmbient.DisplayName", "Color Ambient" },
		{ "ColorAmbient.Name", "EMeshColorType::ColorAmbient" },
		{ "ColorDiffuse.DisplayName", "Color Diffuse" },
		{ "ColorDiffuse.Name", "EMeshColorType::ColorDiffuse" },
		{ "ColorEmissive.DisplayName", "Color Emissive" },
		{ "ColorEmissive.Name", "EMeshColorType::ColorEmissive" },
		{ "ColorOpacity.DisplayName", "Color Opacity" },
		{ "ColorOpacity.Name", "EMeshColorType::ColorOpacity" },
		{ "ColorSpecular.DisplayName", "Color Specular" },
		{ "ColorSpecular.Name", "EMeshColorType::ColorSpecular" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		"EMeshColorType",
		"EMeshColorType",
		Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType()
	{
		if (!Z_Registration_Info_UEnum_EMeshColorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshColorType.InnerSingleton, Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshColorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshScalarType;
	static UEnum* EMeshScalarType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshScalarType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshScalarType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("EMeshScalarType"));
		}
		return Z_Registration_Info_UEnum_EMeshScalarType.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EMeshScalarType>()
	{
		return EMeshScalarType_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType_Statics::Enumerators[] = {
		{ "EMeshScalarType::Diffuse", (int64)EMeshScalarType::Diffuse },
		{ "EMeshScalarType::Specular", (int64)EMeshScalarType::Specular },
		{ "EMeshScalarType::Ambient", (int64)EMeshScalarType::Ambient },
		{ "EMeshScalarType::Displacement", (int64)EMeshScalarType::Displacement },
		{ "EMeshScalarType::Opacity", (int64)EMeshScalarType::Opacity },
		{ "EMeshScalarType::BumpScaling", (int64)EMeshScalarType::BumpScaling },
		{ "EMeshScalarType::Shininess", (int64)EMeshScalarType::Shininess },
		{ "EMeshScalarType::Reflectivity", (int64)EMeshScalarType::Reflectivity },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType_Statics::Enum_MetaDataParams[] = {
		{ "Ambient.DisplayName", "Ambient" },
		{ "Ambient.Name", "EMeshScalarType::Ambient" },
		{ "BlueprintType", "true" },
		{ "BumpScaling.DisplayName", "BumpScaling" },
		{ "BumpScaling.Name", "EMeshScalarType::BumpScaling" },
		{ "Diffuse.DisplayName", "Diffuse" },
		{ "Diffuse.Name", "EMeshScalarType::Diffuse" },
		{ "Displacement.DisplayName", "Displacement" },
		{ "Displacement.Name", "EMeshScalarType::Displacement" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
		{ "Opacity.DisplayName", "Opacity" },
		{ "Opacity.Name", "EMeshScalarType::Opacity" },
		{ "Reflectivity.DisplayName", "Reflectivity" },
		{ "Reflectivity.Name", "EMeshScalarType::Reflectivity" },
		{ "Shininess.DisplayName", "Shininess" },
		{ "Shininess.Name", "EMeshScalarType::Shininess" },
		{ "Specular.DisplayName", "Specular" },
		{ "Specular.Name", "EMeshScalarType::Specular" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		"EMeshScalarType",
		"EMeshScalarType",
		Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType()
	{
		if (!Z_Registration_Info_UEnum_EMeshScalarType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshScalarType.InnerSingleton, Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshScalarType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshTextureTypeMapping;
class UScriptStruct* FMeshTextureTypeMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshTextureTypeMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshTextureTypeMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshTextureTypeMapping, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MeshTextureTypeMapping"));
	}
	return Z_Registration_Info_UScriptStruct_MeshTextureTypeMapping.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMeshTextureTypeMapping>()
{
	return FMeshTextureTypeMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshTextureTypeMapping>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshTextureTypeMapping, Key), Z_Construct_UEnum_RuntimeFBXImport_EMeshTextureType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Key_MetaData)) }; // 971774930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshTextureTypeMapping, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Key_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"MeshTextureTypeMapping",
		sizeof(FMeshTextureTypeMapping),
		alignof(FMeshTextureTypeMapping),
		Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshTextureTypeMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshTextureTypeMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshTextureTypeMapping.InnerSingleton, Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshTextureTypeMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshColorTypeMapping;
class UScriptStruct* FMeshColorTypeMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshColorTypeMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshColorTypeMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshColorTypeMapping, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MeshColorTypeMapping"));
	}
	return Z_Registration_Info_UScriptStruct_MeshColorTypeMapping.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMeshColorTypeMapping>()
{
	return FMeshColorTypeMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshColorTypeMapping>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshColorTypeMapping, Key), Z_Construct_UEnum_RuntimeFBXImport_EMeshColorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Key_MetaData)) }; // 1044014220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshColorTypeMapping, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Key_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"MeshColorTypeMapping",
		sizeof(FMeshColorTypeMapping),
		alignof(FMeshColorTypeMapping),
		Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshColorTypeMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshColorTypeMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshColorTypeMapping.InnerSingleton, Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshColorTypeMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshScalarTypeMapping;
class UScriptStruct* FMeshScalarTypeMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshScalarTypeMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshScalarTypeMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshScalarTypeMapping, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MeshScalarTypeMapping"));
	}
	return Z_Registration_Info_UScriptStruct_MeshScalarTypeMapping.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMeshScalarTypeMapping>()
{
	return FMeshScalarTypeMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshScalarTypeMapping>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshScalarTypeMapping, Key), Z_Construct_UEnum_RuntimeFBXImport_EMeshScalarType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Key_MetaData)) }; // 3142342402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshScalarTypeMapping, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Key_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"MeshScalarTypeMapping",
		sizeof(FMeshScalarTypeMapping),
		alignof(FMeshScalarTypeMapping),
		Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshScalarTypeMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshScalarTypeMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshScalarTypeMapping.InnerSingleton, Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshScalarTypeMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TexturePathMapping;
class UScriptStruct* FTexturePathMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TexturePathMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TexturePathMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTexturePathMapping, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("TexturePathMapping"));
	}
	return Z_Registration_Info_UScriptStruct_TexturePathMapping.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FTexturePathMapping>()
{
	return FTexturePathMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTexturePathMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RelativePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsolutePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbsolutePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePathMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTexturePathMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewProp_RelativePath_MetaData[] = {
		{ "Category", "FBX Import Settings" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewProp_RelativePath = { "RelativePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTexturePathMapping, RelativePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewProp_RelativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewProp_RelativePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewProp_AbsolutePath_MetaData[] = {
		{ "Category", "FBX Import Settings" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewProp_AbsolutePath = { "AbsolutePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTexturePathMapping, AbsolutePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewProp_AbsolutePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewProp_AbsolutePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTexturePathMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewProp_RelativePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewProp_AbsolutePath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTexturePathMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"TexturePathMapping",
		sizeof(FTexturePathMapping),
		alignof(FTexturePathMapping),
		Z_Construct_UScriptStruct_FTexturePathMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePathMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePathMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePathMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTexturePathMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_TexturePathMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TexturePathMapping.InnerSingleton, Z_Construct_UScriptStruct_FTexturePathMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TexturePathMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeMaterialMapping;
class UScriptStruct* FNodeMaterialMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeMaterialMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeMaterialMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeMaterialMapping, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("NodeMaterialMapping"));
	}
	return Z_Registration_Info_UScriptStruct_NodeMaterialMapping.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FNodeMaterialMapping>()
{
	return FNodeMaterialMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeMaterialMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewProp_NodeName_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeMaterialMapping, NodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewProp_CustomMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewProp_CustomMaterial = { "CustomMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeMaterialMapping, CustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewProp_CustomMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewProp_CustomMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewProp_CustomMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		&NewStructOps,
		"NodeMaterialMapping",
		sizeof(FNodeMaterialMapping),
		alignof(FNodeMaterialMapping),
		Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeMaterialMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeMaterialMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeMaterialMapping.InnerSingleton, Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeMaterialMapping.InnerSingleton;
	}
	void UMaterialImportSettings::StaticRegisterNativesUMaterialImportSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialImportSettings);
	UClass* Z_Construct_UClass_UMaterialImportSettings_NoRegister()
	{
		return UMaterialImportSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialImportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureTypeMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTypeMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureTypeMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorTypeMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorTypeMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorTypeMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarTypeMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarTypeMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarTypeMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TexturePathMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturePathMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TexturePathMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeMaterialMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeMaterialMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeMaterialMappings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterialOpaque_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterialOpaque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterialMasked_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterialMasked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterialTranslucent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterialTranslucent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialImportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DataAssets/MaterialImportSettings.h" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TextureTypeMappings_Inner = { "TextureTypeMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeshTextureTypeMapping, METADATA_PARAMS(nullptr, 0) }; // 1381125324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TextureTypeMappings_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TextureTypeMappings = { "TextureTypeMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialImportSettings, TextureTypeMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TextureTypeMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TextureTypeMappings_MetaData)) }; // 1381125324
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ColorTypeMappings_Inner = { "ColorTypeMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeshColorTypeMapping, METADATA_PARAMS(nullptr, 0) }; // 3289502687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ColorTypeMappings_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ColorTypeMappings = { "ColorTypeMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialImportSettings, ColorTypeMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ColorTypeMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ColorTypeMappings_MetaData)) }; // 3289502687
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ScalarTypeMappings_Inner = { "ScalarTypeMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeshScalarTypeMapping, METADATA_PARAMS(nullptr, 0) }; // 1581039695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ScalarTypeMappings_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ScalarTypeMappings = { "ScalarTypeMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialImportSettings, ScalarTypeMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ScalarTypeMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ScalarTypeMappings_MetaData)) }; // 1581039695
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TexturePathMappings_Inner = { "TexturePathMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTexturePathMapping, METADATA_PARAMS(nullptr, 0) }; // 3082463334
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TexturePathMappings_MetaData[] = {
		{ "Category", "FBX Import Settings" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TexturePathMappings = { "TexturePathMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialImportSettings, TexturePathMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TexturePathMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TexturePathMappings_MetaData)) }; // 3082463334
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_NodeMaterialMappings_Inner = { "NodeMaterialMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNodeMaterialMapping, METADATA_PARAMS(nullptr, 0) }; // 400402129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_NodeMaterialMappings_MetaData[] = {
		{ "Category", "Material Settings" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_NodeMaterialMappings = { "NodeMaterialMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialImportSettings, NodeMaterialMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_NodeMaterialMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_NodeMaterialMappings_MetaData)) }; // 400402129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialOpaque_MetaData[] = {
		{ "Category", "Material Settings" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialOpaque = { "BaseMaterialOpaque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialImportSettings, BaseMaterialOpaque), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialOpaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialOpaque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialMasked_MetaData[] = {
		{ "Category", "Material Settings" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialMasked = { "BaseMaterialMasked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialImportSettings, BaseMaterialMasked), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialMasked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialMasked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialTranslucent_MetaData[] = {
		{ "Category", "Material Settings" },
		{ "ModuleRelativePath", "Public/DataAssets/MaterialImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialTranslucent = { "BaseMaterialTranslucent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialImportSettings, BaseMaterialTranslucent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialTranslucent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialImportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TextureTypeMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TextureTypeMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ColorTypeMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ColorTypeMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ScalarTypeMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_ScalarTypeMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TexturePathMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_TexturePathMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_NodeMaterialMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_NodeMaterialMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialOpaque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialMasked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialImportSettings_Statics::NewProp_BaseMaterialTranslucent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialImportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialImportSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialImportSettings_Statics::ClassParams = {
		&UMaterialImportSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialImportSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialImportSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialImportSettings()
	{
		if (!Z_Registration_Info_UClass_UMaterialImportSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialImportSettings.OuterSingleton, Z_Construct_UClass_UMaterialImportSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialImportSettings.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UMaterialImportSettings>()
	{
		return UMaterialImportSettings::StaticClass();
	}
	UMaterialImportSettings::UMaterialImportSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialImportSettings);
	UMaterialImportSettings::~UMaterialImportSettings() {}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialImportSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialImportSettings_h_Statics::EnumInfo[] = {
		{ EMeshTextureType_StaticEnum, TEXT("EMeshTextureType"), &Z_Registration_Info_UEnum_EMeshTextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 971774930U) },
		{ EMeshColorType_StaticEnum, TEXT("EMeshColorType"), &Z_Registration_Info_UEnum_EMeshColorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1044014220U) },
		{ EMeshScalarType_StaticEnum, TEXT("EMeshScalarType"), &Z_Registration_Info_UEnum_EMeshScalarType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3142342402U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialImportSettings_h_Statics::ScriptStructInfo[] = {
		{ FMeshTextureTypeMapping::StaticStruct, Z_Construct_UScriptStruct_FMeshTextureTypeMapping_Statics::NewStructOps, TEXT("MeshTextureTypeMapping"), &Z_Registration_Info_UScriptStruct_MeshTextureTypeMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshTextureTypeMapping), 1381125324U) },
		{ FMeshColorTypeMapping::StaticStruct, Z_Construct_UScriptStruct_FMeshColorTypeMapping_Statics::NewStructOps, TEXT("MeshColorTypeMapping"), &Z_Registration_Info_UScriptStruct_MeshColorTypeMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshColorTypeMapping), 3289502687U) },
		{ FMeshScalarTypeMapping::StaticStruct, Z_Construct_UScriptStruct_FMeshScalarTypeMapping_Statics::NewStructOps, TEXT("MeshScalarTypeMapping"), &Z_Registration_Info_UScriptStruct_MeshScalarTypeMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshScalarTypeMapping), 1581039695U) },
		{ FTexturePathMapping::StaticStruct, Z_Construct_UScriptStruct_FTexturePathMapping_Statics::NewStructOps, TEXT("TexturePathMapping"), &Z_Registration_Info_UScriptStruct_TexturePathMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTexturePathMapping), 3082463334U) },
		{ FNodeMaterialMapping::StaticStruct, Z_Construct_UScriptStruct_FNodeMaterialMapping_Statics::NewStructOps, TEXT("NodeMaterialMapping"), &Z_Registration_Info_UScriptStruct_NodeMaterialMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeMaterialMapping), 400402129U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialImportSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialImportSettings, UMaterialImportSettings::StaticClass, TEXT("UMaterialImportSettings"), &Z_Registration_Info_UClass_UMaterialImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialImportSettings), 3314540752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialImportSettings_h_1182610540(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialImportSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialImportSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialImportSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialImportSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialImportSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialImportSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
