// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Widgets/MeshNodeView.h"
#include "RuntimeFBXImport/Public/Widgets/MeshNodeStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshNodeView() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNode_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNodeView();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNodeView_NoRegister();
	RUNTIMEFBXIMPORT_API UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature();
	RUNTIMEFBXIMPORT_API UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNodeStyle();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics
	{
		struct _Script_RuntimeFBXImport_eventOnRowGeneratedEvent_Parms
		{
			UUserWidget* RowWidget;
			UMeshNode* NodeData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RowWidget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::NewProp_RowWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::NewProp_RowWidget = { "RowWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFBXImport_eventOnRowGeneratedEvent_Parms, RowWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::NewProp_RowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::NewProp_RowWidget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFBXImport_eventOnRowGeneratedEvent_Parms, NodeData), Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::NewProp_RowWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::NewProp_NodeData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport, nullptr, "OnRowGeneratedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::_Script_RuntimeFBXImport_eventOnRowGeneratedEvent_Parms), Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRowGeneratedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnRowGeneratedEvent, UUserWidget* RowWidget, UMeshNode* NodeData)
{
	struct _Script_RuntimeFBXImport_eventOnRowGeneratedEvent_Parms
	{
		UUserWidget* RowWidget;
		UMeshNode* NodeData;
	};
	_Script_RuntimeFBXImport_eventOnRowGeneratedEvent_Parms Parms;
	Parms.RowWidget=RowWidget;
	Parms.NodeData=NodeData;
	OnRowGeneratedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics
	{
		struct _Script_RuntimeFBXImport_eventOnRowSelectedEvent_Parms
		{
			UMeshNode* SelectedNode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics::NewProp_SelectedNode = { "SelectedNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFBXImport_eventOnRowSelectedEvent_Parms, SelectedNode), Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics::NewProp_SelectedNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport, nullptr, "OnRowSelectedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics::_Script_RuntimeFBXImport_eventOnRowSelectedEvent_Parms), Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRowSelectedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnRowSelectedEvent, UMeshNode* SelectedNode)
{
	struct _Script_RuntimeFBXImport_eventOnRowSelectedEvent_Parms
	{
		UMeshNode* SelectedNode;
	};
	_Script_RuntimeFBXImport_eventOnRowSelectedEvent_Parms Parms;
	Parms.SelectedNode=SelectedNode;
	OnRowSelectedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMeshNodeView::execHighlightAndExpandNode)
	{
		P_GET_OBJECT(UMeshNode,Z_Param_SelectedMeshNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HighlightAndExpandNode(Z_Param_SelectedMeshNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshNodeView::execSetRootNodes)
	{
		P_GET_TARRAY_REF(UMeshNode*,Z_Param_Out_InRootNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootNodes(Z_Param_Out_InRootNodes);
		P_NATIVE_END;
	}
	void UMeshNodeView::StaticRegisterNativesUMeshNodeView()
	{
		UClass* Class = UMeshNodeView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HighlightAndExpandNode", &UMeshNodeView::execHighlightAndExpandNode },
			{ "SetRootNodes", &UMeshNodeView::execSetRootNodes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics
	{
		struct MeshNodeView_eventHighlightAndExpandNode_Parms
		{
			UMeshNode* SelectedMeshNode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMeshNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics::NewProp_SelectedMeshNode = { "SelectedMeshNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshNodeView_eventHighlightAndExpandNode_Parms, SelectedMeshNode), Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics::NewProp_SelectedMeshNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Node" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshNodeView, nullptr, "HighlightAndExpandNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics::MeshNodeView_eventHighlightAndExpandNode_Parms), Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics
	{
		struct MeshNodeView_eventSetRootNodes_Parms
		{
			TArray<UMeshNode*> InRootNodes;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRootNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRootNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InRootNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::NewProp_InRootNodes_Inner = { "InRootNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::NewProp_InRootNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::NewProp_InRootNodes = { "InRootNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshNodeView_eventSetRootNodes_Parms, InRootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::NewProp_InRootNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::NewProp_InRootNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::NewProp_InRootNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::NewProp_InRootNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Node" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshNodeView, nullptr, "SetRootNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::MeshNodeView_eventSetRootNodes_Parms), Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshNodeView_SetRootNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshNodeView_SetRootNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshNodeView);
	UClass* Z_Construct_UClass_UMeshNodeView_NoRegister()
	{
		return UMeshNodeView::StaticClass();
	}
	struct Z_Construct_UClass_UMeshNodeView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RowWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshNodeStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshNodeStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshNodeStyleHovered_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshNodeStyleHovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshNodeStyleSelected_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshNodeStyleSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRowGenerated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRowGenerated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRowSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRowSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshNodeView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshNodeView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshNodeView_HighlightAndExpandNode, "HighlightAndExpandNode" }, // 2129481164
		{ &Z_Construct_UFunction_UMeshNodeView_SetRootNodes, "SetRootNodes" }, // 1226434061
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNodeView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/MeshNodeView.h" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNodeView_Statics::NewProp_RowWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeView.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMeshNodeView_Statics::NewProp_RowWidgetClass = { "RowWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshNodeView, RowWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_RowWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_RowWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyle_MetaData[] = {
		{ "Category", "Styles" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeView.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyle = { "MeshNodeStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshNodeView, MeshNodeStyle), Z_Construct_UScriptStruct_FMeshNodeStyle, METADATA_PARAMS(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyle_MetaData)) }; // 2254043368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyleHovered_MetaData[] = {
		{ "Category", "Styles" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeView.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyleHovered = { "MeshNodeStyleHovered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshNodeView, MeshNodeStyleHovered), Z_Construct_UScriptStruct_FMeshNodeStyle, METADATA_PARAMS(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyleHovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyleHovered_MetaData)) }; // 2254043368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyleSelected_MetaData[] = {
		{ "Category", "Styles" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeView.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyleSelected = { "MeshNodeStyleSelected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshNodeView, MeshNodeStyleSelected), Z_Construct_UScriptStruct_FMeshNodeStyle, METADATA_PARAMS(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyleSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyleSelected_MetaData)) }; // 2254043368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNodeView_Statics::NewProp_OnRowGenerated_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeshNodeView_Statics::NewProp_OnRowGenerated = { "OnRowGenerated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshNodeView, OnRowGenerated), Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowGeneratedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_OnRowGenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_OnRowGenerated_MetaData)) }; // 2626298279
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNodeView_Statics::NewProp_OnRowSelected_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Widgets/MeshNodeView.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeshNodeView_Statics::NewProp_OnRowSelected = { "OnRowSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshNodeView, OnRowSelected), Z_Construct_UDelegateFunction_RuntimeFBXImport_OnRowSelectedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_OnRowSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNodeView_Statics::NewProp_OnRowSelected_MetaData)) }; // 118997989
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshNodeView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNodeView_Statics::NewProp_RowWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyleHovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNodeView_Statics::NewProp_MeshNodeStyleSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNodeView_Statics::NewProp_OnRowGenerated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNodeView_Statics::NewProp_OnRowSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshNodeView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshNodeView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshNodeView_Statics::ClassParams = {
		&UMeshNodeView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeshNodeView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNodeView_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshNodeView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshNodeView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshNodeView()
	{
		if (!Z_Registration_Info_UClass_UMeshNodeView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshNodeView.OuterSingleton, Z_Construct_UClass_UMeshNodeView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshNodeView.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UMeshNodeView>()
	{
		return UMeshNodeView::StaticClass();
	}
	UMeshNodeView::UMeshNodeView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshNodeView);
	UMeshNodeView::~UMeshNodeView() {}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshNodeView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshNodeView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshNodeView, UMeshNodeView::StaticClass, TEXT("UMeshNodeView"), &Z_Registration_Info_UClass_UMeshNodeView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshNodeView), 3744838324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshNodeView_h_1935359504(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshNodeView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_MeshNodeView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
