// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FBXCore/FBXSceneImporter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshNode_Geometry;
#ifdef RUNTIMEFBXIMPORT_FBXSceneImporter_generated_h
#error "FBXSceneImporter.generated.h already included, missing '#pragma once' in FBXSceneImporter.h"
#endif
#define RUNTIMEFBXIMPORT_FBXSceneImporter_generated_h

#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_14_DELEGATE \
RUNTIMEFBXIMPORT_API void FOnImportProgressChanged_DelegateWrapper(const FMulticastScriptDelegate& OnImportProgressChanged, int32 ImportID, float Progress);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_15_DELEGATE \
RUNTIMEFBXIMPORT_API void FOnImportStarted_DelegateWrapper(const FMulticastScriptDelegate& OnImportStarted, int32 ImportID);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_16_DELEGATE \
RUNTIMEFBXIMPORT_API void FOnNodeProcessingChanged_DelegateWrapper(const FMulticastScriptDelegate& OnNodeProcessingChanged, int32 ImportID, const FString& NodeName);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_17_DELEGATE \
RUNTIMEFBXIMPORT_API void FOnMeshNodeCreated_DelegateWrapper(const FMulticastScriptDelegate& OnMeshNodeCreated, int32 ImportID, UMeshNode_Geometry* NewMeshNode, FTransform const& SpawnTransform);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFBXImportSettings_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FFBXImportSettings>();

#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_SPARSE_DATA
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_RPC_WRAPPERS
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_ACCESSORS
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFBXSceneImporter(); \
	friend struct Z_Construct_UClass_UFBXSceneImporter_Statics; \
public: \
	DECLARE_CLASS(UFBXSceneImporter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(UFBXSceneImporter)


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_INCLASS \
private: \
	static void StaticRegisterNativesUFBXSceneImporter(); \
	friend struct Z_Construct_UClass_UFBXSceneImporter_Statics; \
public: \
	DECLARE_CLASS(UFBXSceneImporter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(UFBXSceneImporter)


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFBXSceneImporter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFBXSceneImporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBXSceneImporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBXSceneImporter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBXSceneImporter(UFBXSceneImporter&&); \
	NO_API UFBXSceneImporter(const UFBXSceneImporter&); \
public:


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBXSceneImporter(UFBXSceneImporter&&); \
	NO_API UFBXSceneImporter(const UFBXSceneImporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBXSceneImporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBXSceneImporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFBXSceneImporter)


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_196_PROLOG
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_SPARSE_DATA \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_RPC_WRAPPERS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_ACCESSORS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_INCLASS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_SPARSE_DATA \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_ACCESSORS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_INCLASS_NO_PURE_DECLS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class UFBXSceneImporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXCore_FBXSceneImporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
