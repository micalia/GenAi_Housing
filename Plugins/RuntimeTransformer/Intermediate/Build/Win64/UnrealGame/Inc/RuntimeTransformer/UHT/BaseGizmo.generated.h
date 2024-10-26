// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gizmos/BaseGizmo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
enum class ETransformationDomain : uint8;
enum class ETransformationType : uint8;
#ifdef RUNTIMETRANSFORMER_BaseGizmo_generated_h
#error "BaseGizmo.generated.h already included, missing '#pragma once' in BaseGizmo.h"
#endif
#define RUNTIMETRANSFORMER_BaseGizmo_generated_h

#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_10_DELEGATE \
RUNTIMETRANSFORMER_API void FGizmoStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GizmoStateChangedDelegate, ETransformationType GizmoType, bool bTransformInProgress, ETransformationDomain CurrentDomain);


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_SPARSE_DATA
#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTransformProgressState); \
	DECLARE_FUNCTION(execSetTransformProgressState); \
	DECLARE_FUNCTION(execRegisterDomainComponent); \
	DECLARE_FUNCTION(execGetTransformationDomain);


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTransformProgressState); \
	DECLARE_FUNCTION(execSetTransformProgressState); \
	DECLARE_FUNCTION(execRegisterDomainComponent); \
	DECLARE_FUNCTION(execGetTransformationDomain);


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_ACCESSORS
#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGizmo(); \
	friend struct Z_Construct_UClass_ABaseGizmo_Statics; \
public: \
	DECLARE_CLASS(ABaseGizmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeTransformer"), NO_API) \
	DECLARE_SERIALIZER(ABaseGizmo)


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseGizmo(); \
	friend struct Z_Construct_UClass_ABaseGizmo_Statics; \
public: \
	DECLARE_CLASS(ABaseGizmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeTransformer"), NO_API) \
	DECLARE_SERIALIZER(ABaseGizmo)


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGizmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGizmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGizmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGizmo(ABaseGizmo&&); \
	NO_API ABaseGizmo(const ABaseGizmo&); \
public: \
	NO_API virtual ~ABaseGizmo();


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGizmo(ABaseGizmo&&); \
	NO_API ABaseGizmo(const ABaseGizmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGizmo) \
	NO_API virtual ~ABaseGizmo();


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_12_PROLOG
#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_SPARSE_DATA \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_RPC_WRAPPERS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_ACCESSORS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_INCLASS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_SPARSE_DATA \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_ACCESSORS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMETRANSFORMER_API UClass* StaticClass<class ABaseGizmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_Gizmos_BaseGizmo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
