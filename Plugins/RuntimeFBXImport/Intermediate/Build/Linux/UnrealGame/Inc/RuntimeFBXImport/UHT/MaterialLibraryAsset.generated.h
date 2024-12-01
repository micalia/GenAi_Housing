// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/MaterialLibraryAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMaterialGroup;
struct FMeshTextureGroup;
#ifdef RUNTIMEFBXIMPORT_MaterialLibraryAsset_generated_h
#error "MaterialLibraryAsset.generated.h already included, missing '#pragma once' in MaterialLibraryAsset.h"
#endif
#define RUNTIMEFBXIMPORT_MaterialLibraryAsset_generated_h

#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialInfo_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FMaterialInfo>();

#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureInfo_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FTextureInfo>();

#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialGroup_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FMaterialGroup>();

#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshTextureGroup_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FMeshTextureGroup>();

#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_SPARSE_DATA
#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTextureGroup); \
	DECLARE_FUNCTION(execGetMaterialGroup);


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTextureGroup); \
	DECLARE_FUNCTION(execGetMaterialGroup);


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_ACCESSORS
#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialLibraryAsset(); \
	friend struct Z_Construct_UClass_UMaterialLibraryAsset_Statics; \
public: \
	DECLARE_CLASS(UMaterialLibraryAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(UMaterialLibraryAsset)


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialLibraryAsset(); \
	friend struct Z_Construct_UClass_UMaterialLibraryAsset_Statics; \
public: \
	DECLARE_CLASS(UMaterialLibraryAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(UMaterialLibraryAsset)


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialLibraryAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialLibraryAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialLibraryAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialLibraryAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialLibraryAsset(UMaterialLibraryAsset&&); \
	NO_API UMaterialLibraryAsset(const UMaterialLibraryAsset&); \
public: \
	NO_API virtual ~UMaterialLibraryAsset();


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialLibraryAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialLibraryAsset(UMaterialLibraryAsset&&); \
	NO_API UMaterialLibraryAsset(const UMaterialLibraryAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialLibraryAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialLibraryAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialLibraryAsset) \
	NO_API virtual ~UMaterialLibraryAsset();


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_65_PROLOG
#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_SPARSE_DATA \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_RPC_WRAPPERS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_ACCESSORS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_INCLASS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_SPARSE_DATA \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_ACCESSORS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_INCLASS_NO_PURE_DECLS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class UMaterialLibraryAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_DataAssets_MaterialLibraryAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
