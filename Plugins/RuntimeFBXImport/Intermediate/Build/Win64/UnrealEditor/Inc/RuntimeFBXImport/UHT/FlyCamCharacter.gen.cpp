// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/FlyCamCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyCamCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFlyCamCharacter();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_AFlyCamCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
// End Cross Module References
	DEFINE_FUNCTION(AFlyCamCharacter::execDetectMouseMoveAtLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetectMouseMoveAtLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlyCamCharacter::execDetectMouseHitLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetectMouseHitLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlyCamCharacter::execTilt)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tilt(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlyCamCharacter::execLookUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUp(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlyCamCharacter::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlyCamCharacter::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlyCamCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlyCamCharacter::execDestroyIndicator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyIndicator();
		P_NATIVE_END;
	}
	struct FlyCamCharacter_eventOnHitActorDetected_Parms
	{
		AActor* HitActor;
		UPrimitiveComponent* HitComponent;
	};
	struct FlyCamCharacter_eventOnHitLocationDetected_Parms
	{
		FVector HitLocation;
	};
	struct FlyCamCharacter_eventOnHoverActorDetected_Parms
	{
		AActor* HoverActor;
		UPrimitiveComponent* HoveredComponent;
	};
	static FName NAME_AFlyCamCharacter_OnHitActorDetected = FName(TEXT("OnHitActorDetected"));
	void AFlyCamCharacter::OnHitActorDetected(AActor* HitActor, UPrimitiveComponent* HitComponent)
	{
		FlyCamCharacter_eventOnHitActorDetected_Parms Parms;
		Parms.HitActor=HitActor;
		Parms.HitComponent=HitComponent;
		ProcessEvent(FindFunctionChecked(NAME_AFlyCamCharacter_OnHitActorDetected),&Parms);
	}
	static FName NAME_AFlyCamCharacter_OnHitLocationDetected = FName(TEXT("OnHitLocationDetected"));
	void AFlyCamCharacter::OnHitLocationDetected(FVector HitLocation)
	{
		FlyCamCharacter_eventOnHitLocationDetected_Parms Parms;
		Parms.HitLocation=HitLocation;
		ProcessEvent(FindFunctionChecked(NAME_AFlyCamCharacter_OnHitLocationDetected),&Parms);
	}
	static FName NAME_AFlyCamCharacter_OnHoverActorDetected = FName(TEXT("OnHoverActorDetected"));
	void AFlyCamCharacter::OnHoverActorDetected(AActor* HoverActor, UPrimitiveComponent* HoveredComponent)
	{
		FlyCamCharacter_eventOnHoverActorDetected_Parms Parms;
		Parms.HoverActor=HoverActor;
		Parms.HoveredComponent=HoveredComponent;
		ProcessEvent(FindFunctionChecked(NAME_AFlyCamCharacter_OnHoverActorDetected),&Parms);
	}
	void AFlyCamCharacter::StaticRegisterNativesAFlyCamCharacter()
	{
		UClass* Class = AFlyCamCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyIndicator", &AFlyCamCharacter::execDestroyIndicator },
			{ "DetectMouseHitLocation", &AFlyCamCharacter::execDetectMouseHitLocation },
			{ "DetectMouseMoveAtLocation", &AFlyCamCharacter::execDetectMouseMoveAtLocation },
			{ "LookUp", &AFlyCamCharacter::execLookUp },
			{ "MoveForward", &AFlyCamCharacter::execMoveForward },
			{ "MoveRight", &AFlyCamCharacter::execMoveRight },
			{ "Tilt", &AFlyCamCharacter::execTilt },
			{ "Turn", &AFlyCamCharacter::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlyCamCharacter_DestroyIndicator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_DestroyIndicator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Indicator" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyCamCharacter_DestroyIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyCamCharacter, nullptr, "DestroyIndicator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_DestroyIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_DestroyIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyCamCharacter_DestroyIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyCamCharacter_DestroyIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlyCamCharacter_DetectMouseHitLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_DetectMouseHitLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlyCamCharacter" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyCamCharacter_DetectMouseHitLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyCamCharacter, nullptr, "DetectMouseHitLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_DetectMouseHitLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_DetectMouseHitLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyCamCharacter_DetectMouseHitLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyCamCharacter_DetectMouseHitLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlyCamCharacter_DetectMouseMoveAtLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_DetectMouseMoveAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlyCamCharacter" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyCamCharacter_DetectMouseMoveAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyCamCharacter, nullptr, "DetectMouseMoveAtLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_DetectMouseMoveAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_DetectMouseMoveAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyCamCharacter_DetectMouseMoveAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyCamCharacter_DetectMouseMoveAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics
	{
		struct FlyCamCharacter_eventLookUp_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyCamCharacter_eventLookUp_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlyCamCharacter" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyCamCharacter, nullptr, "LookUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics::FlyCamCharacter_eventLookUp_Parms), Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyCamCharacter_LookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyCamCharacter_LookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics
	{
		struct FlyCamCharacter_eventMoveForward_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyCamCharacter_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlyCamCharacter" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyCamCharacter, nullptr, "MoveForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics::FlyCamCharacter_eventMoveForward_Parms), Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyCamCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyCamCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics
	{
		struct FlyCamCharacter_eventMoveRight_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyCamCharacter_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlyCamCharacter" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyCamCharacter, nullptr, "MoveRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics::FlyCamCharacter_eventMoveRight_Parms), Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyCamCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyCamCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyCamCharacter_eventOnHitActorDetected_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyCamCharacter_eventOnHitActorDetected_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::NewProp_HitActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyCamCharacter, nullptr, "OnHitActorDetected", nullptr, nullptr, sizeof(FlyCamCharacter_eventOnHitActorDetected_Parms), Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyCamCharacter_eventOnHitLocationDetected_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected_Statics::NewProp_HitLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyCamCharacter, nullptr, "OnHitLocationDetected", nullptr, nullptr, sizeof(FlyCamCharacter_eventOnHitLocationDetected_Parms), Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverActor;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::NewProp_HoverActor = { "HoverActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyCamCharacter_eventOnHoverActorDetected_Parms, HoverActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::NewProp_HoveredComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::NewProp_HoveredComponent = { "HoveredComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyCamCharacter_eventOnHoverActorDetected_Parms, HoveredComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::NewProp_HoveredComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::NewProp_HoveredComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::NewProp_HoverActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::NewProp_HoveredComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyCamCharacter, nullptr, "OnHoverActorDetected", nullptr, nullptr, sizeof(FlyCamCharacter_eventOnHoverActorDetected_Parms), Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics
	{
		struct FlyCamCharacter_eventTilt_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyCamCharacter_eventTilt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlyCamCharacter" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyCamCharacter, nullptr, "Tilt", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics::FlyCamCharacter_eventTilt_Parms), Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyCamCharacter_Tilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyCamCharacter_Tilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics
	{
		struct FlyCamCharacter_eventTurn_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyCamCharacter_eventTurn_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlyCamCharacter" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyCamCharacter, nullptr, "Turn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics::FlyCamCharacter_eventTurn_Parms), Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyCamCharacter_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyCamCharacter_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlyCamCharacter);
	UClass* Z_Construct_UClass_AFlyCamCharacter_NoRegister()
	{
		return AFlyCamCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFlyCamCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IndicatorActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorMarkerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IndicatorMarkerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PanSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TiltSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TiltSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumMovementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlyCamCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlyCamCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlyCamCharacter_DestroyIndicator, "DestroyIndicator" }, // 1492050827
		{ &Z_Construct_UFunction_AFlyCamCharacter_DetectMouseHitLocation, "DetectMouseHitLocation" }, // 926449856
		{ &Z_Construct_UFunction_AFlyCamCharacter_DetectMouseMoveAtLocation, "DetectMouseMoveAtLocation" }, // 3376341202
		{ &Z_Construct_UFunction_AFlyCamCharacter_LookUp, "LookUp" }, // 2133173048
		{ &Z_Construct_UFunction_AFlyCamCharacter_MoveForward, "MoveForward" }, // 388551841
		{ &Z_Construct_UFunction_AFlyCamCharacter_MoveRight, "MoveRight" }, // 3624517813
		{ &Z_Construct_UFunction_AFlyCamCharacter_OnHitActorDetected, "OnHitActorDetected" }, // 1163269231
		{ &Z_Construct_UFunction_AFlyCamCharacter_OnHitLocationDetected, "OnHitLocationDetected" }, // 3553401052
		{ &Z_Construct_UFunction_AFlyCamCharacter_OnHoverActorDetected, "OnHoverActorDetected" }, // 2562286533
		{ &Z_Construct_UFunction_AFlyCamCharacter_Tilt, "Tilt" }, // 3962380501
		{ &Z_Construct_UFunction_AFlyCamCharacter_Turn, "Turn" }, // 221842997
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyCamCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FlyCamCharacter.h" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlyCamCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_IndicatorActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_IndicatorActor = { "IndicatorActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlyCamCharacter, IndicatorActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_IndicatorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_IndicatorActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_IndicatorMarkerMesh_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_IndicatorMarkerMesh = { "IndicatorMarkerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlyCamCharacter, IndicatorMarkerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_IndicatorMarkerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_IndicatorMarkerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_FlySpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_FlySpeed = { "FlySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlyCamCharacter, FlySpeed), METADATA_PARAMS(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_FlySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_FlySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_PanSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_PanSpeed = { "PanSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlyCamCharacter, PanSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_PanSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_PanSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_TiltSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_TiltSpeed = { "TiltSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlyCamCharacter, TiltSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_TiltSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_TiltSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlyCamCharacter, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_MaximumMovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FlyCamCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_MaximumMovementSpeed = { "MaximumMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlyCamCharacter, MaximumMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_MaximumMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_MaximumMovementSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlyCamCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_IndicatorActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_IndicatorMarkerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_FlySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_PanSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_TiltSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyCamCharacter_Statics::NewProp_MaximumMovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlyCamCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlyCamCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlyCamCharacter_Statics::ClassParams = {
		&AFlyCamCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlyCamCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlyCamCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlyCamCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyCamCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlyCamCharacter()
	{
		if (!Z_Registration_Info_UClass_AFlyCamCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlyCamCharacter.OuterSingleton, Z_Construct_UClass_AFlyCamCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlyCamCharacter.OuterSingleton;
	}
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<AFlyCamCharacter>()
	{
		return AFlyCamCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlyCamCharacter);
	AFlyCamCharacter::~AFlyCamCharacter() {}
	struct Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FlyCamCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FlyCamCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlyCamCharacter, AFlyCamCharacter::StaticClass, TEXT("AFlyCamCharacter"), &Z_Registration_Info_UClass_AFlyCamCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlyCamCharacter), 2277991843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FlyCamCharacter_h_2568137677(TEXT("/Script/RuntimeFBXImport"),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FlyCamCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FlyCamCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
