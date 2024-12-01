// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Actors/FBXMeshActor.h"
#include "RuntimeFBXImport/Public/DataAssets/MaterialLibraryAsset.h"
#include "RuntimeFBXImport/Public/MeshNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBXMeshActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXMeshActor();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFBXMeshActor_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UMeshNode_NoRegister();
	RUNTIMEFBXIMPORT_API UEnum* Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInfo();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshData();
	RUNTIMEFBXIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FTextureInfo();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshCollisionType;
	static UEnum* EMeshCollisionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshCollisionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshCollisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType, (UObject*)Z_Construct_UPackage__Script_RuntimeFBXImport(), TEXT("EMeshCollisionType"));
		}
		return Z_Registration_Info_UEnum_EMeshCollisionType.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EMeshCollisionType>()
	{
		return EMeshCollisionType_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType_Statics::Enumerators[] = {
		{ "EMeshCollisionType::NoCollision", (int64)EMeshCollisionType::NoCollision },
		{ "EMeshCollisionType::MeshCollision", (int64)EMeshCollisionType::MeshCollision },
		{ "EMeshCollisionType::MeshCollisionFromSource", (int64)EMeshCollisionType::MeshCollisionFromSource },
		{ "EMeshCollisionType::CustomCollisionFromSource", (int64)EMeshCollisionType::CustomCollisionFromSource },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCollisionFromSource.DisplayName", "CustomCollisionFromSource" },
		{ "CustomCollisionFromSource.Name", "EMeshCollisionType::CustomCollisionFromSource" },
		{ "MeshCollision.DisplayName", "MeshCollision" },
		{ "MeshCollision.Name", "EMeshCollisionType::MeshCollision" },
		{ "MeshCollisionFromSource.DisplayName", "MeshCollisionFromSource" },
		{ "MeshCollisionFromSource.Name", "EMeshCollisionType::MeshCollisionFromSource" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
		{ "NoCollision.DisplayName", "NoCollision" },
		{ "NoCollision.Name", "EMeshCollisionType::NoCollision" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
		nullptr,
		"EMeshCollisionType",
		"EMeshCollisionType",
		Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType()
	{
		if (!Z_Registration_Info_UEnum_EMeshCollisionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshCollisionType.InnerSingleton, Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshCollisionType.InnerSingleton;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execUpdateVectorParameter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_MeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVectorParameter(Z_Param_SectionId,Z_Param_ParameterName,Z_Param_Value,Z_Param_MeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execUpdateScalarParameter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_MeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateScalarParameter(Z_Param_SectionId,Z_Param_ParameterName,Z_Param_Value,Z_Param_MeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execUpdateTextureParameter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_MeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTextureParameter(Z_Param_SectionId,Z_Param_ParameterName,Z_Param_Texture,Z_Param_MeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execUpdateSectionMaterial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_MeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSectionMaterial(Z_Param_SectionId,Z_Param_Material,Z_Param_MeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execSelectComponentFromMeshNode)
	{
		P_GET_OBJECT(UMeshNode,Z_Param_MeshNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectComponentFromMeshNode(Z_Param_MeshNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execSelectComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_TARRAY(FMaterialInfo,Z_Param_MaterialInfo);
		P_GET_TARRAY(FTextureInfo,Z_Param_TextureInfo);
		P_GET_UBOOL(Z_Param_bDeselectRest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectComponent(Z_Param_HitComponent,Z_Param_MaterialInfo,Z_Param_TextureInfo,Z_Param_bDeselectRest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execDeSelectCurrentComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeSelectCurrentComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execResetActorSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetActorSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execHoverAtComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HoveredComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HoverAtComponent(Z_Param_HoveredComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execResetActorHover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetActorHover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execSelectActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execGetMeshNodeFromComponent)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_MeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshNode**)Z_Param__Result=P_THIS->GetMeshNodeFromComponent(Z_Param_MeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFBXMeshActor::execGetRootNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMeshNode*>*)Z_Param__Result=P_THIS->GetRootNodes();
		P_NATIVE_END;
	}
	struct FBXMeshActor_eventOnComponentHovered_Parms
	{
		UProceduralMeshComponent* MeshComponent;
	};
	struct FBXMeshActor_eventOnComponentSelected_Parms
	{
		UProceduralMeshComponent* MeshComponent;
	};
	struct FBXMeshActor_eventOnSectionReceived_Parms
	{
		TArray<FProceduralMeshData> SectionData;
		TArray<FMaterialInfo> MaterialInfo;
		TArray<FTextureInfo> TextureInfo;
	};
	static FName NAME_AFBXMeshActor_OnActorSelected = FName(TEXT("OnActorSelected"));
	void AFBXMeshActor::OnActorSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFBXMeshActor_OnActorSelected),NULL);
	}
	static FName NAME_AFBXMeshActor_OnActorSelectionReset = FName(TEXT("OnActorSelectionReset"));
	void AFBXMeshActor::OnActorSelectionReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFBXMeshActor_OnActorSelectionReset),NULL);
	}
	static FName NAME_AFBXMeshActor_OnComponentHovered = FName(TEXT("OnComponentHovered"));
	void AFBXMeshActor::OnComponentHovered(UProceduralMeshComponent* MeshComponent)
	{
		FBXMeshActor_eventOnComponentHovered_Parms Parms;
		Parms.MeshComponent=MeshComponent;
		ProcessEvent(FindFunctionChecked(NAME_AFBXMeshActor_OnComponentHovered),&Parms);
	}
	static FName NAME_AFBXMeshActor_OnComponentSelected = FName(TEXT("OnComponentSelected"));
	void AFBXMeshActor::OnComponentSelected(UProceduralMeshComponent* MeshComponent)
	{
		FBXMeshActor_eventOnComponentSelected_Parms Parms;
		Parms.MeshComponent=MeshComponent;
		ProcessEvent(FindFunctionChecked(NAME_AFBXMeshActor_OnComponentSelected),&Parms);
	}
	static FName NAME_AFBXMeshActor_OnSectionReceived = FName(TEXT("OnSectionReceived"));
	void AFBXMeshActor::OnSectionReceived(TArray<FProceduralMeshData> const& SectionData, TArray<FMaterialInfo> const& MaterialInfo, TArray<FTextureInfo> const& TextureInfo)
	{
		FBXMeshActor_eventOnSectionReceived_Parms Parms;
		Parms.SectionData=SectionData;
		Parms.MaterialInfo=MaterialInfo;
		Parms.TextureInfo=TextureInfo;
		ProcessEvent(FindFunctionChecked(NAME_AFBXMeshActor_OnSectionReceived),&Parms);
	}
	void AFBXMeshActor::StaticRegisterNativesAFBXMeshActor()
	{
		UClass* Class = AFBXMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeSelectCurrentComponents", &AFBXMeshActor::execDeSelectCurrentComponents },
			{ "GetMeshNodeFromComponent", &AFBXMeshActor::execGetMeshNodeFromComponent },
			{ "GetRootNodes", &AFBXMeshActor::execGetRootNodes },
			{ "HoverAtComponent", &AFBXMeshActor::execHoverAtComponent },
			{ "ResetActorHover", &AFBXMeshActor::execResetActorHover },
			{ "ResetActorSelection", &AFBXMeshActor::execResetActorSelection },
			{ "SelectActor", &AFBXMeshActor::execSelectActor },
			{ "SelectComponent", &AFBXMeshActor::execSelectComponent },
			{ "SelectComponentFromMeshNode", &AFBXMeshActor::execSelectComponentFromMeshNode },
			{ "UpdateScalarParameter", &AFBXMeshActor::execUpdateScalarParameter },
			{ "UpdateSectionMaterial", &AFBXMeshActor::execUpdateSectionMaterial },
			{ "UpdateTextureParameter", &AFBXMeshActor::execUpdateTextureParameter },
			{ "UpdateVectorParameter", &AFBXMeshActor::execUpdateVectorParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFBXMeshActor_DeSelectCurrentComponents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_DeSelectCurrentComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_DeSelectCurrentComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "DeSelectCurrentComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_DeSelectCurrentComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_DeSelectCurrentComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_DeSelectCurrentComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_DeSelectCurrentComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics
	{
		struct FBXMeshActor_eventGetMeshNodeFromComponent_Parms
		{
			const UProceduralMeshComponent* MeshComponent;
			UMeshNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventGetMeshNodeFromComponent_Parms, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventGetMeshNodeFromComponent_Parms, ReturnValue), Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "GetMeshNodeFromComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::FBXMeshActor_eventGetMeshNodeFromComponent_Parms), Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics
	{
		struct FBXMeshActor_eventGetRootNodes_Parms
		{
			TArray<UMeshNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventGetRootNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "GetRootNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::FBXMeshActor_eventGetRootNodes_Parms), Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_GetRootNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_GetRootNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics
	{
		struct FBXMeshActor_eventHoverAtComponent_Parms
		{
			UPrimitiveComponent* HoveredComponent;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::NewProp_HoveredComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::NewProp_HoveredComponent = { "HoveredComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventHoverAtComponent_Parms, HoveredComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::NewProp_HoveredComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::NewProp_HoveredComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::NewProp_HoveredComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "HoverAtComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::FBXMeshActor_eventHoverAtComponent_Parms), Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_OnActorSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_OnActorSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_OnActorSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "OnActorSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_OnActorSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnActorSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_OnActorSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_OnActorSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_OnActorSelectionReset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_OnActorSelectionReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_OnActorSelectionReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "OnActorSelectionReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_OnActorSelectionReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnActorSelectionReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_OnActorSelectionReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_OnActorSelectionReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventOnComponentHovered_Parms, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::NewProp_MeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "OnComponentHovered", nullptr, nullptr, sizeof(FBXMeshActor_eventOnComponentHovered_Parms), Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventOnComponentSelected_Parms, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::NewProp_MeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "OnComponentSelected", nullptr, nullptr, sizeof(FBXMeshActor_eventOnComponentSelected_Parms), Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_SectionData_Inner = { "SectionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProceduralMeshData, METADATA_PARAMS(nullptr, 0) }; // 3864625350
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_SectionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_SectionData = { "SectionData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventOnSectionReceived_Parms, SectionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_SectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_SectionData_MetaData)) }; // 3864625350
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_MaterialInfo_Inner = { "MaterialInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialInfo, METADATA_PARAMS(nullptr, 0) }; // 3087683991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_MaterialInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_MaterialInfo = { "MaterialInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventOnSectionReceived_Parms, MaterialInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_MaterialInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_MaterialInfo_MetaData)) }; // 3087683991
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_TextureInfo_Inner = { "TextureInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTextureInfo, METADATA_PARAMS(nullptr, 0) }; // 2370527516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_TextureInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_TextureInfo = { "TextureInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventOnSectionReceived_Parms, TextureInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_TextureInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_TextureInfo_MetaData)) }; // 2370527516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_SectionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_SectionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_MaterialInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_MaterialInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_TextureInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::NewProp_TextureInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "OnSectionReceived", nullptr, nullptr, sizeof(FBXMeshActor_eventOnSectionReceived_Parms), Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_ResetActorHover_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_ResetActorHover_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_ResetActorHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "ResetActorHover", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_ResetActorHover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_ResetActorHover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_ResetActorHover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_ResetActorHover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_ResetActorSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_ResetActorSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_ResetActorSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "ResetActorSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_ResetActorSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_ResetActorSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_ResetActorSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_ResetActorSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_SelectActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_SelectActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_SelectActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "SelectActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_SelectActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_SelectActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_SelectActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_SelectActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics
	{
		struct FBXMeshActor_eventSelectComponent_Parms
		{
			UPrimitiveComponent* HitComponent;
			TArray<FMaterialInfo> MaterialInfo;
			TArray<FTextureInfo> TextureInfo;
			bool bDeselectRest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialInfo_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureInfo_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureInfo;
		static void NewProp_bDeselectRest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeselectRest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventSelectComponent_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_MaterialInfo_Inner = { "MaterialInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialInfo, METADATA_PARAMS(nullptr, 0) }; // 3087683991
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_MaterialInfo = { "MaterialInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventSelectComponent_Parms, MaterialInfo), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3087683991
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_TextureInfo_Inner = { "TextureInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTextureInfo, METADATA_PARAMS(nullptr, 0) }; // 2370527516
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_TextureInfo = { "TextureInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventSelectComponent_Parms, TextureInfo), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2370527516
	void Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_bDeselectRest_SetBit(void* Obj)
	{
		((FBXMeshActor_eventSelectComponent_Parms*)Obj)->bDeselectRest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_bDeselectRest = { "bDeselectRest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBXMeshActor_eventSelectComponent_Parms), &Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_bDeselectRest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_MaterialInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_MaterialInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_TextureInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_TextureInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::NewProp_bDeselectRest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "CPP_Default_bDeselectRest", "true" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "SelectComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::FBXMeshActor_eventSelectComponent_Parms), Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_SelectComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_SelectComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics
	{
		struct FBXMeshActor_eventSelectComponentFromMeshNode_Parms
		{
			UMeshNode* MeshNode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics::NewProp_MeshNode = { "MeshNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventSelectComponentFromMeshNode_Parms, MeshNode), Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics::NewProp_MeshNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "SelectComponentFromMeshNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics::FBXMeshActor_eventSelectComponentFromMeshNode_Parms), Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics
	{
		struct FBXMeshActor_eventUpdateScalarParameter_Parms
		{
			int32 SectionId;
			FName ParameterName;
			float Value;
			UProceduralMeshComponent* MeshComponent;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateScalarParameter_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateScalarParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateScalarParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateScalarParameter_Parms, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::NewProp_SectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::NewProp_MeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "UpdateScalarParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::FBXMeshActor_eventUpdateScalarParameter_Parms), Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics
	{
		struct FBXMeshActor_eventUpdateSectionMaterial_Parms
		{
			int32 SectionId;
			UMaterialInterface* Material;
			UProceduralMeshComponent* MeshComponent;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateSectionMaterial_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateSectionMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateSectionMaterial_Parms, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_SectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::NewProp_MeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "UpdateSectionMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::FBXMeshActor_eventUpdateSectionMaterial_Parms), Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics
	{
		struct FBXMeshActor_eventUpdateTextureParameter_Parms
		{
			int32 SectionId;
			FName ParameterName;
			UTexture2D* Texture;
			UProceduralMeshComponent* MeshComponent;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateTextureParameter_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateTextureParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateTextureParameter_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateTextureParameter_Parms, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::NewProp_SectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::NewProp_MeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "UpdateTextureParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::FBXMeshActor_eventUpdateTextureParameter_Parms), Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics
	{
		struct FBXMeshActor_eventUpdateVectorParameter_Parms
		{
			int32 SectionId;
			FName ParameterName;
			FLinearColor Value;
			UProceduralMeshComponent* MeshComponent;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateVectorParameter_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateVectorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateVectorParameter_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBXMeshActor_eventUpdateVectorParameter_Parms, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::NewProp_SectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::NewProp_MeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFBXMeshActor, nullptr, "UpdateVectorParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::FBXMeshActor_eventUpdateVectorParameter_Parms), Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFBXMeshActor);
	UClass* Z_Construct_UClass_AFBXMeshActor_NoRegister()
	{
		return AFBXMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AFBXMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLibraryTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialLibraryTypeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureLibraryTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextureLibraryTypeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsImportCompleted_MetaData[];
#endif
		static void NewProp_bIsImportCompleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsImportCompleted;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshNodeMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshNodeMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshNodeMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MeshNodeMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFBXMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFBXMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFBXMeshActor_DeSelectCurrentComponents, "DeSelectCurrentComponents" }, // 1484169554
		{ &Z_Construct_UFunction_AFBXMeshActor_GetMeshNodeFromComponent, "GetMeshNodeFromComponent" }, // 2769983764
		{ &Z_Construct_UFunction_AFBXMeshActor_GetRootNodes, "GetRootNodes" }, // 35436142
		{ &Z_Construct_UFunction_AFBXMeshActor_HoverAtComponent, "HoverAtComponent" }, // 737711987
		{ &Z_Construct_UFunction_AFBXMeshActor_OnActorSelected, "OnActorSelected" }, // 2892466659
		{ &Z_Construct_UFunction_AFBXMeshActor_OnActorSelectionReset, "OnActorSelectionReset" }, // 4098850496
		{ &Z_Construct_UFunction_AFBXMeshActor_OnComponentHovered, "OnComponentHovered" }, // 2403096421
		{ &Z_Construct_UFunction_AFBXMeshActor_OnComponentSelected, "OnComponentSelected" }, // 419085499
		{ &Z_Construct_UFunction_AFBXMeshActor_OnSectionReceived, "OnSectionReceived" }, // 3061505069
		{ &Z_Construct_UFunction_AFBXMeshActor_ResetActorHover, "ResetActorHover" }, // 3195784527
		{ &Z_Construct_UFunction_AFBXMeshActor_ResetActorSelection, "ResetActorSelection" }, // 2941332210
		{ &Z_Construct_UFunction_AFBXMeshActor_SelectActor, "SelectActor" }, // 1783084193
		{ &Z_Construct_UFunction_AFBXMeshActor_SelectComponent, "SelectComponent" }, // 452315132
		{ &Z_Construct_UFunction_AFBXMeshActor_SelectComponentFromMeshNode, "SelectComponentFromMeshNode" }, // 3331842078
		{ &Z_Construct_UFunction_AFBXMeshActor_UpdateScalarParameter, "UpdateScalarParameter" }, // 2805160945
		{ &Z_Construct_UFunction_AFBXMeshActor_UpdateSectionMaterial, "UpdateSectionMaterial" }, // 876938354
		{ &Z_Construct_UFunction_AFBXMeshActor_UpdateTextureParameter, "UpdateTextureParameter" }, // 2829805598
		{ &Z_Construct_UFunction_AFBXMeshActor_UpdateVectorParameter, "UpdateVectorParameter" }, // 3722288043
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actors/FBXMeshActor.h" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_RootNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXMeshActor, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_RootNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_RootNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXMeshActor, MeshIndex), METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXMeshActor, CollisionType), Z_Construct_UEnum_RuntimeFBXImport_EMeshCollisionType, METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CollisionType_MetaData)) }; // 1576740151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshPath_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshPath = { "MeshPath", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXMeshActor, MeshPath), METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MaterialLibraryTypeName_MetaData[] = {
		{ "Category", "MateriaLibrary" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MaterialLibraryTypeName = { "MaterialLibraryTypeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXMeshActor, MaterialLibraryTypeName), METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MaterialLibraryTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MaterialLibraryTypeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_TextureLibraryTypeName_MetaData[] = {
		{ "Category", "MateriaLibrary" },
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_TextureLibraryTypeName = { "TextureLibraryTypeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXMeshActor, TextureLibraryTypeName), METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_TextureLibraryTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_TextureLibraryTypeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_bIsImportCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	void Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_bIsImportCompleted_SetBit(void* Obj)
	{
		((AFBXMeshActor*)Obj)->bIsImportCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_bIsImportCompleted = { "bIsImportCompleted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFBXMeshActor), &Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_bIsImportCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_bIsImportCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_bIsImportCompleted_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshNodeMap_ValueProp = { "MeshNodeMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMeshNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshNodeMap_Key_KeyProp = { "MeshNodeMap_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshNodeMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/FBXMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshNodeMap = { "MeshNodeMap", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFBXMeshActor, MeshNodeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshNodeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshNodeMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFBXMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_RootNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_RootNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MaterialLibraryTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_TextureLibraryTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_bIsImportCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshNodeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshNodeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFBXMeshActor_Statics::NewProp_MeshNodeMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFBXMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFBXMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFBXMeshActor_Statics::ClassParams = {
		&AFBXMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFBXMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFBXMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFBXMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFBXMeshActor()
	{
		if (!Z_Registration_Info_UClass_AFBXMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFBXMeshActor.OuterSingleton, Z_Construct_UClass_AFBXMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFBXMeshActor.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<AFBXMeshActor>()
	{
		return AFBXMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFBXMeshActor);
	AFBXMeshActor::~AFBXMeshActor() {}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_Statics::EnumInfo[] = {
		{ EMeshCollisionType_StaticEnum, TEXT("EMeshCollisionType"), &Z_Registration_Info_UEnum_EMeshCollisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1576740151U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFBXMeshActor, AFBXMeshActor::StaticClass, TEXT("AFBXMeshActor"), &Z_Registration_Info_UClass_AFBXMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFBXMeshActor), 4003175821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_2419943513(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
