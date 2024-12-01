// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeTransformer/Public/Gizmos/BaseGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGizmo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ABaseGizmo();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ABaseGizmo_NoRegister();
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain();
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationType();
	RUNTIMETRANSFORMER_API UFunction* Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RuntimeTransformer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_RuntimeTransformer_eventGizmoStateChangedDelegate_Parms
		{
			ETransformationType GizmoType;
			bool bTransformInProgress;
			ETransformationDomain CurrentDomain;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_GizmoType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GizmoType;
		static void NewProp_bTransformInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformInProgress;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDomain_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDomain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_GizmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_GizmoType = { "GizmoType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeTransformer_eventGizmoStateChangedDelegate_Parms, GizmoType), Z_Construct_UEnum_RuntimeTransformer_ETransformationType, METADATA_PARAMS(nullptr, 0) }; // 4178373524
	void Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_bTransformInProgress_SetBit(void* Obj)
	{
		((_Script_RuntimeTransformer_eventGizmoStateChangedDelegate_Parms*)Obj)->bTransformInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_bTransformInProgress = { "bTransformInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_RuntimeTransformer_eventGizmoStateChangedDelegate_Parms), &Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_bTransformInProgress_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_CurrentDomain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_CurrentDomain = { "CurrentDomain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeTransformer_eventGizmoStateChangedDelegate_Parms, CurrentDomain), Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain, METADATA_PARAMS(nullptr, 0) }; // 2055331375
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_GizmoType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_GizmoType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_bTransformInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_CurrentDomain_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::NewProp_CurrentDomain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeTransformer, nullptr, "GizmoStateChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::_Script_RuntimeTransformer_eventGizmoStateChangedDelegate_Parms), Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGizmoStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GizmoStateChangedDelegate, ETransformationType GizmoType, bool bTransformInProgress, ETransformationDomain CurrentDomain)
{
	struct _Script_RuntimeTransformer_eventGizmoStateChangedDelegate_Parms
	{
		ETransformationType GizmoType;
		bool bTransformInProgress;
		ETransformationDomain CurrentDomain;
	};
	_Script_RuntimeTransformer_eventGizmoStateChangedDelegate_Parms Parms;
	Parms.GizmoType=GizmoType;
	Parms.bTransformInProgress=bTransformInProgress ? true : false;
	Parms.CurrentDomain=CurrentDomain;
	GizmoStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ABaseGizmo::execGetTransformProgressState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTransformProgressState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGizmo::execSetTransformProgressState)
	{
		P_GET_UBOOL(Z_Param_bInProgress);
		P_GET_ENUM(ETransformationDomain,Z_Param_CurrentDomain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransformProgressState(Z_Param_bInProgress,ETransformationDomain(Z_Param_CurrentDomain));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGizmo::execRegisterDomainComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_ENUM(ETransformationDomain,Z_Param_Domain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterDomainComponent(Z_Param_Component,ETransformationDomain(Z_Param_Domain));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGizmo::execGetTransformationDomain)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETransformationDomain*)Z_Param__Result=P_THIS->GetTransformationDomain(Z_Param_ComponentHit);
		P_NATIVE_END;
	}
	void ABaseGizmo::StaticRegisterNativesABaseGizmo()
	{
		UClass* Class = ABaseGizmo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTransformationDomain", &ABaseGizmo::execGetTransformationDomain },
			{ "GetTransformProgressState", &ABaseGizmo::execGetTransformProgressState },
			{ "RegisterDomainComponent", &ABaseGizmo::execRegisterDomainComponent },
			{ "SetTransformProgressState", &ABaseGizmo::execSetTransformProgressState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics
	{
		struct BaseGizmo_eventGetTransformationDomain_Parms
		{
			USceneComponent* ComponentHit;
			ETransformationDomain ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentHit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentHit;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::NewProp_ComponentHit_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::NewProp_ComponentHit = { "ComponentHit", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseGizmo_eventGetTransformationDomain_Parms, ComponentHit), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::NewProp_ComponentHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::NewProp_ComponentHit_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseGizmo_eventGetTransformationDomain_Parms, ReturnValue), Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain, METADATA_PARAMS(nullptr, 0) }; // 2055331375
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::NewProp_ComponentHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGizmo, nullptr, "GetTransformationDomain", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::BaseGizmo_eventGetTransformationDomain_Parms), Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics
	{
		struct BaseGizmo_eventGetTransformProgressState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseGizmo_eventGetTransformProgressState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseGizmo_eventGetTransformProgressState_Parms), &Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGizmo, nullptr, "GetTransformProgressState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::BaseGizmo_eventGetTransformProgressState_Parms), Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics
	{
		struct BaseGizmo_eventRegisterDomainComponent_Parms
		{
			USceneComponent* Component;
			ETransformationDomain Domain;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Domain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseGizmo_eventRegisterDomainComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseGizmo_eventRegisterDomainComponent_Parms, Domain), Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain, METADATA_PARAMS(nullptr, 0) }; // 2055331375
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::NewProp_Domain_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::NewProp_Domain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/**\n\x09 * Adds or modifies an entry to the DomainMap.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
		{ "ToolTip", "Adds or modifies an entry to the DomainMap." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGizmo, nullptr, "RegisterDomainComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::BaseGizmo_eventRegisterDomainComponent_Parms), Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics
	{
		struct BaseGizmo_eventSetTransformProgressState_Parms
		{
			bool bInProgress;
			ETransformationDomain CurrentDomain;
		};
		static void NewProp_bInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInProgress;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDomain_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDomain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::NewProp_bInProgress_SetBit(void* Obj)
	{
		((BaseGizmo_eventSetTransformProgressState_Parms*)Obj)->bInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::NewProp_bInProgress = { "bInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseGizmo_eventSetTransformProgressState_Parms), &Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::NewProp_bInProgress_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::NewProp_CurrentDomain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::NewProp_CurrentDomain = { "CurrentDomain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseGizmo_eventSetTransformProgressState_Parms, CurrentDomain), Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain, METADATA_PARAMS(nullptr, 0) }; // 2055331375
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::NewProp_bInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::NewProp_CurrentDomain_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::NewProp_CurrentDomain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGizmo, nullptr, "SetTransformProgressState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::BaseGizmo_eventSetTransformProgressState_Parms), Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGizmo);
	UClass* Z_Construct_UClass_ABaseGizmo_NoRegister()
	{
		return ABaseGizmo::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGizmoStateChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGizmoStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScalingScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_AxisBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_X_AxisBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_AxisBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Y_AxisBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_AxisBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Z_AxisBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoSceneScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoSceneScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraArcRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraArcRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeTransformer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseGizmo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseGizmo_GetTransformationDomain, "GetTransformationDomain" }, // 2263613853
		{ &Z_Construct_UFunction_ABaseGizmo_GetTransformProgressState, "GetTransformProgressState" }, // 2863938776
		{ &Z_Construct_UFunction_ABaseGizmo_RegisterDomainComponent, "RegisterDomainComponent" }, // 3325405961
		{ &Z_Construct_UFunction_ABaseGizmo_SetTransformProgressState, "SetTransformProgressState" }, // 4269130231
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGizmo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gizmos/BaseGizmo.h" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGizmo_Statics::NewProp_OnGizmoStateChange_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/**\n\x09 * Delegate that is called when the Transform State is changed (when it changes from\n\x09 * in progress = true to false (and viceversa)\n\x09 * Can be used to Change the meshes and visuals of Gizmo while Transform is in Progress\n\x09 */" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
		{ "ToolTip", "Delegate that is called when the Transform State is changed (when it changes from\nin progress = true to false (and viceversa)\nCan be used to Change the meshes and visuals of Gizmo while Transform is in Progress" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseGizmo_Statics::NewProp_OnGizmoStateChange = { "OnGizmoStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGizmo, OnGizmoStateChange), Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_OnGizmoStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_OnGizmoStateChange_MetaData)) }; // 3239689025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGizmo_Statics::NewProp_RootScene_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGizmo_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGizmo, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_RootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_RootScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGizmo_Statics::NewProp_ScalingScene_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/* Scene Component that will go Under the Root Scene\n\x09 * This is so that we can Scale all the things under it without Scaling the Actor itself (i.e. root component)\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
		{ "ToolTip", "Scene Component that will go Under the Root Scene\n       * This is so that we can Scale all the things under it without Scaling the Actor itself (i.e. root component)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGizmo_Statics::NewProp_ScalingScene = { "ScalingScene", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGizmo, ScalingScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_ScalingScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_ScalingScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGizmo_Statics::NewProp_X_AxisBox_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "// The Hit Box for the X-Axis Direction Transform\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
		{ "ToolTip", "The Hit Box for the X-Axis Direction Transform" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGizmo_Statics::NewProp_X_AxisBox = { "X_AxisBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGizmo, X_AxisBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_X_AxisBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_X_AxisBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGizmo_Statics::NewProp_Y_AxisBox_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "// The Hit Box for the X-Axis Direction Transform\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
		{ "ToolTip", "The Hit Box for the X-Axis Direction Transform" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGizmo_Statics::NewProp_Y_AxisBox = { "Y_AxisBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGizmo, Y_AxisBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_Y_AxisBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_Y_AxisBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGizmo_Statics::NewProp_Z_AxisBox_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "// The Hit Box for the X-Axis Direction Transform\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
		{ "ToolTip", "The Hit Box for the X-Axis Direction Transform" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGizmo_Statics::NewProp_Z_AxisBox = { "Z_AxisBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGizmo, Z_AxisBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_Z_AxisBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_Z_AxisBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGizmo_Statics::NewProp_GizmoSceneScaleFactor_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGizmo_Statics::NewProp_GizmoSceneScaleFactor = { "GizmoSceneScaleFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGizmo, GizmoSceneScaleFactor), METADATA_PARAMS(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_GizmoSceneScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_GizmoSceneScaleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGizmo_Statics::NewProp_CameraArcRadius_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/* The Radius of the Arc (FOV) that the Camera covers. The bigger the value, the smaller the Gizmo would look. */" },
		{ "ModuleRelativePath", "Public/Gizmos/BaseGizmo.h" },
		{ "ToolTip", "The Radius of the Arc (FOV) that the Camera covers. The bigger the value, the smaller the Gizmo would look." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGizmo_Statics::NewProp_CameraArcRadius = { "CameraArcRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGizmo, CameraArcRadius), METADATA_PARAMS(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_CameraArcRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGizmo_Statics::NewProp_CameraArcRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGizmo_Statics::NewProp_OnGizmoStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGizmo_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGizmo_Statics::NewProp_ScalingScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGizmo_Statics::NewProp_X_AxisBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGizmo_Statics::NewProp_Y_AxisBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGizmo_Statics::NewProp_Z_AxisBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGizmo_Statics::NewProp_GizmoSceneScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGizmo_Statics::NewProp_CameraArcRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGizmo_Statics::ClassParams = {
		&ABaseGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGizmo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGizmo()
	{
		if (!Z_Registration_Info_UClass_ABaseGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGizmo.OuterSingleton, Z_Construct_UClass_ABaseGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseGizmo.OuterSingleton;
	}
	template<> RUNTIMETRANSFORMER_API UClass* StaticClass<ABaseGizmo>()
	{
		return ABaseGizmo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGizmo);
	ABaseGizmo::~ABaseGizmo() {}
	struct Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGizmo, ABaseGizmo::StaticClass, TEXT("ABaseGizmo"), &Z_Registration_Info_UClass_ABaseGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGizmo), 1354826213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_3163589642(TEXT("/Script/RuntimeTransformer"),
		Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
