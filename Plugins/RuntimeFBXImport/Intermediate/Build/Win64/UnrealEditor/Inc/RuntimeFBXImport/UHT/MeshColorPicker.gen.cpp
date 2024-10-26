// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Widgets/MeshColorPicker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshColorPicker() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshColorPicker();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshColorPicker_NoRegister();
	RUNTIMEFBXIMPORT_API UFunction* Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics
	{
		struct MeshColorPicker_eventOnLinearColorChanged_Parms
		{
			FLinearColor NewColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshColorPicker_eventOnLinearColorChanged_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::NewProp_NewColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::NewProp_NewColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MeshColorPicker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshColorPicker, nullptr, "OnLinearColorChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::MeshColorPicker_eventOnLinearColorChanged_Parms), Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMeshColorPicker::FOnLinearColorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLinearColorChanged, FLinearColor const& NewColor)
{
	struct MeshColorPicker_eventOnLinearColorChanged_Parms
	{
		FLinearColor NewColor;
	};
	MeshColorPicker_eventOnLinearColorChanged_Parms Parms;
	Parms.NewColor=NewColor;
	OnLinearColorChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMeshColorPicker::execSetColorPicker)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InitialColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorPicker(Z_Param_InitialColor);
		P_NATIVE_END;
	}
	void UMeshColorPicker::StaticRegisterNativesUMeshColorPicker()
	{
		UClass* Class = UMeshColorPicker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetColorPicker", &UMeshColorPicker::execSetColorPicker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics
	{
		struct MeshColorPicker_eventSetColorPicker_Parms
		{
			FLinearColor InitialColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics::NewProp_InitialColor = { "InitialColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshColorPicker_eventSetColorPicker_Parms, InitialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics::NewProp_InitialColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics::Function_MetaDataParams[] = {
		{ "Category", "ColorPicker" },
		{ "Comment", "/**\n\x09* Set Initial Color value of the Color Picker.\n\x09* @param\x09InitialColor  The color to set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Widgets/MeshColorPicker.h" },
		{ "ToolTip", "Set Initial Color value of the Color Picker.\n@param        InitialColor  The color to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshColorPicker, nullptr, "SetColorPicker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics::MeshColorPicker_eventSetColorPicker_Parms), Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshColorPicker_SetColorPicker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshColorPicker_SetColorPicker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshColorPicker);
	UClass* Z_Construct_UClass_UMeshColorPicker_NoRegister()
	{
		return UMeshColorPicker::StaticClass();
	}
	struct Z_Construct_UClass_UMeshColorPicker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnColorValueChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorValueChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshColorPicker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshColorPicker_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature, "OnLinearColorChanged__DelegateSignature" }, // 925709976
		{ &Z_Construct_UFunction_UMeshColorPicker_SetColorPicker, "SetColorPicker" }, // 942097289
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPicker_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/MeshColorPicker.h" },
		{ "ModuleRelativePath", "Public/Widgets/MeshColorPicker.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPicker_Statics::NewProp_BorderColorAndOpacity_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Background color of the color picker. */" },
		{ "ModuleRelativePath", "Public/Widgets/MeshColorPicker.h" },
		{ "ToolTip", "Background color of the color picker." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshColorPicker_Statics::NewProp_BorderColorAndOpacity = { "BorderColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshColorPicker, BorderColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeshColorPicker_Statics::NewProp_BorderColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPicker_Statics::NewProp_BorderColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPicker_Statics::NewProp_OnColorValueChanged_MetaData[] = {
		{ "Category", "ColorPicker" },
		{ "Comment", "/** A delegate being called when the Color value is changed. */" },
		{ "ModuleRelativePath", "Public/Widgets/MeshColorPicker.h" },
		{ "ToolTip", "A delegate being called when the Color value is changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeshColorPicker_Statics::NewProp_OnColorValueChanged = { "OnColorValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshColorPicker, OnColorValueChanged), Z_Construct_UDelegateFunction_UMeshColorPicker_OnLinearColorChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeshColorPicker_Statics::NewProp_OnColorValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPicker_Statics::NewProp_OnColorValueChanged_MetaData)) }; // 925709976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshColorPicker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshColorPicker_Statics::NewProp_BorderColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshColorPicker_Statics::NewProp_OnColorValueChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshColorPicker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshColorPicker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshColorPicker_Statics::ClassParams = {
		&UMeshColorPicker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeshColorPicker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPicker_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshColorPicker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPicker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshColorPicker()
	{
		if (!Z_Registration_Info_UClass_UMeshColorPicker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshColorPicker.OuterSingleton, Z_Construct_UClass_UMeshColorPicker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshColorPicker.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UMeshColorPicker>()
	{
		return UMeshColorPicker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshColorPicker);
	UMeshColorPicker::~UMeshColorPicker() {}
	struct Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshColorPicker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshColorPicker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshColorPicker, UMeshColorPicker::StaticClass, TEXT("UMeshColorPicker"), &Z_Registration_Info_UClass_UMeshColorPicker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshColorPicker), 2121968266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshColorPicker_h_2942482040(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshColorPicker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshColorPicker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
