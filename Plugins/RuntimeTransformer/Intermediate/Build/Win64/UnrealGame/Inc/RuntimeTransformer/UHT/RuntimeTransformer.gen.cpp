// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeTransformer/Public/RuntimeTransformer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeTransformer() {}
// Cross Module References
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_ESpaceType();
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain();
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationType();
	UPackage* Z_Construct_UPackage__Script_RuntimeTransformer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformationType;
	static UEnum* ETransformationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransformationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransformationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeTransformer_ETransformationType, (UObject*)Z_Construct_UPackage__Script_RuntimeTransformer(), TEXT("ETransformationType"));
		}
		return Z_Registration_Info_UEnum_ETransformationType.OuterSingleton;
	}
	template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<ETransformationType>()
	{
		return ETransformationType_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeTransformer_ETransformationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeTransformer_ETransformationType_Statics::Enumerators[] = {
		{ "ETransformationType::TT_NoTransform", (int64)ETransformationType::TT_NoTransform },
		{ "ETransformationType::TT_Translation", (int64)ETransformationType::TT_Translation },
		{ "ETransformationType::TT_Rotation", (int64)ETransformationType::TT_Rotation },
		{ "ETransformationType::TT_Scale", (int64)ETransformationType::TT_Scale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeTransformer_ETransformationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeTransformer.h" },
		{ "TT_NoTransform.DisplayName", "None" },
		{ "TT_NoTransform.Name", "ETransformationType::TT_NoTransform" },
		{ "TT_Rotation.DisplayName", "Rotation" },
		{ "TT_Rotation.Name", "ETransformationType::TT_Rotation" },
		{ "TT_Scale.DisplayName", "Scale" },
		{ "TT_Scale.Name", "ETransformationType::TT_Scale" },
		{ "TT_Translation.DisplayName", "Translation" },
		{ "TT_Translation.Name", "ETransformationType::TT_Translation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeTransformer_ETransformationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeTransformer,
		nullptr,
		"ETransformationType",
		"ETransformationType",
		Z_Construct_UEnum_RuntimeTransformer_ETransformationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeTransformer_ETransformationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeTransformer_ETransformationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeTransformer_ETransformationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationType()
	{
		if (!Z_Registration_Info_UEnum_ETransformationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformationType.InnerSingleton, Z_Construct_UEnum_RuntimeTransformer_ETransformationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransformationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpaceType;
	static UEnum* ESpaceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpaceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeTransformer_ESpaceType, (UObject*)Z_Construct_UPackage__Script_RuntimeTransformer(), TEXT("ESpaceType"));
		}
		return Z_Registration_Info_UEnum_ESpaceType.OuterSingleton;
	}
	template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<ESpaceType>()
	{
		return ESpaceType_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeTransformer_ESpaceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeTransformer_ESpaceType_Statics::Enumerators[] = {
		{ "ESpaceType::ST_None", (int64)ESpaceType::ST_None },
		{ "ESpaceType::ST_Local", (int64)ESpaceType::ST_Local },
		{ "ESpaceType::ST_World", (int64)ESpaceType::ST_World },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeTransformer_ESpaceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeTransformer.h" },
		{ "ST_Local.DisplayName", "Local Space" },
		{ "ST_Local.Name", "ESpaceType::ST_Local" },
		{ "ST_None.DisplayName", "None" },
		{ "ST_None.Name", "ESpaceType::ST_None" },
		{ "ST_World.DisplayName", "World Space" },
		{ "ST_World.Name", "ESpaceType::ST_World" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeTransformer_ESpaceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeTransformer,
		nullptr,
		"ESpaceType",
		"ESpaceType",
		Z_Construct_UEnum_RuntimeTransformer_ESpaceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeTransformer_ESpaceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeTransformer_ESpaceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeTransformer_ESpaceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeTransformer_ESpaceType()
	{
		if (!Z_Registration_Info_UEnum_ESpaceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpaceType.InnerSingleton, Z_Construct_UEnum_RuntimeTransformer_ESpaceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpaceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformationDomain;
	static UEnum* ETransformationDomain_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransformationDomain.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransformationDomain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain, (UObject*)Z_Construct_UPackage__Script_RuntimeTransformer(), TEXT("ETransformationDomain"));
		}
		return Z_Registration_Info_UEnum_ETransformationDomain.OuterSingleton;
	}
	template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<ETransformationDomain>()
	{
		return ETransformationDomain_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain_Statics::Enumerators[] = {
		{ "ETransformationDomain::TD_None", (int64)ETransformationDomain::TD_None },
		{ "ETransformationDomain::TD_X_Axis", (int64)ETransformationDomain::TD_X_Axis },
		{ "ETransformationDomain::TD_Y_Axis", (int64)ETransformationDomain::TD_Y_Axis },
		{ "ETransformationDomain::TD_Z_Axis", (int64)ETransformationDomain::TD_Z_Axis },
		{ "ETransformationDomain::TD_XY_Plane", (int64)ETransformationDomain::TD_XY_Plane },
		{ "ETransformationDomain::TD_YZ_Plane", (int64)ETransformationDomain::TD_YZ_Plane },
		{ "ETransformationDomain::TD_XZ_Plane", (int64)ETransformationDomain::TD_XZ_Plane },
		{ "ETransformationDomain::TD_XYZ", (int64)ETransformationDomain::TD_XYZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeTransformer.h" },
		{ "TD_None.DisplayName", "None" },
		{ "TD_None.Name", "ETransformationDomain::TD_None" },
		{ "TD_X_Axis.DisplayName", "X Axis" },
		{ "TD_X_Axis.Name", "ETransformationDomain::TD_X_Axis" },
		{ "TD_XY_Plane.DisplayName", "XY Plane" },
		{ "TD_XY_Plane.Name", "ETransformationDomain::TD_XY_Plane" },
		{ "TD_XYZ.DisplayName", "XYZ" },
		{ "TD_XYZ.Name", "ETransformationDomain::TD_XYZ" },
		{ "TD_XZ_Plane.DisplayName", "XZ Plane" },
		{ "TD_XZ_Plane.Name", "ETransformationDomain::TD_XZ_Plane" },
		{ "TD_Y_Axis.DisplayName", "Y Axis" },
		{ "TD_Y_Axis.Name", "ETransformationDomain::TD_Y_Axis" },
		{ "TD_YZ_Plane.DisplayName", "YZ Plane" },
		{ "TD_YZ_Plane.Name", "ETransformationDomain::TD_YZ_Plane" },
		{ "TD_Z_Axis.DisplayName", "Z Axis" },
		{ "TD_Z_Axis.Name", "ETransformationDomain::TD_Z_Axis" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeTransformer,
		nullptr,
		"ETransformationDomain",
		"ETransformationDomain",
		Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain()
	{
		if (!Z_Registration_Info_UEnum_ETransformationDomain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformationDomain.InnerSingleton, Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransformationDomain.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_RuntimeTransformer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_RuntimeTransformer_h_Statics::EnumInfo[] = {
		{ ETransformationType_StaticEnum, TEXT("ETransformationType"), &Z_Registration_Info_UEnum_ETransformationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4178373524U) },
		{ ESpaceType_StaticEnum, TEXT("ESpaceType"), &Z_Registration_Info_UEnum_ESpaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3759636634U) },
		{ ETransformationDomain_StaticEnum, TEXT("ETransformationDomain"), &Z_Registration_Info_UEnum_ETransformationDomain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2055331375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_RuntimeTransformer_h_1651915463(TEXT("/Script/RuntimeTransformer"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_RuntimeTransformer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_RuntimeTransformer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
