// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Widgets/MeshNodeStyle.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshNodeStyle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNodeStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References

static_assert(std::is_polymorphic<FMeshNodeStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FMeshNodeStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshNodeStyle;
class UScriptStruct* FMeshNodeStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshNodeStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshNodeStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshNodeStyle, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("MeshNodeStyle"));
	}
	return Z_Registration_Info_UScriptStruct_MeshNodeStyle.OuterSingleton;
}
template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<FMeshNodeStyle>()
{
	return FMeshNodeStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshNodeStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndentPerDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndentPerDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshNodeStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshNodeStyle, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_TextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_BackgroundTexture_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshNodeStyle, BackgroundTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_BackgroundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_BackgroundTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowColor_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowColor = { "RowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshNodeStyle, RowColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowBackgroundBrush_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowBackgroundBrush = { "RowBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshNodeStyle, RowBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowPadding_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowPadding = { "RowPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshNodeStyle, RowPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_IndentPerDepth_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_IndentPerDepth = { "IndentPerDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshNodeStyle, IndentPerDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_IndentPerDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_IndentPerDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_TextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_BackgroundTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_RowPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewProp_IndentPerDepth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"MeshNodeStyle",
		sizeof(FMeshNodeStyle),
		alignof(FMeshNodeStyle),
		Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshNodeStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshNodeStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshNodeStyle.InnerSingleton, Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshNodeStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshNodeStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshNodeStyle_h_Statics::ScriptStructInfo[] = {
		{ FMeshNodeStyle::StaticStruct, Z_Construct_UScriptStruct_FMeshNodeStyle_Statics::NewStructOps, TEXT("MeshNodeStyle"), &Z_Registration_Info_UScriptStruct_MeshNodeStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshNodeStyle), 2254043368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshNodeStyle_h_2005874292(TEXT("/Script/RuntimeFBXImport"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshNodeStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshNodeStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
