// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/FBXImportManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFBXMeshActor;
class UFBXSceneImporter;
class UMeshNode_Geometry;
class UPrimitiveComponent;
enum class EFBXAxis : uint8;
enum class EFBXCoordinate : uint8;
struct FMaterialInfo;
struct FTextureInfo;
#ifdef RUNTIMEFBXIMPORT_FBXImportManager_generated_h
#error "FBXImportManager.generated.h already included, missing '#pragma once' in FBXImportManager.h"
#endif
#define RUNTIMEFBXIMPORT_FBXImportManager_generated_h

#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_SPARSE_DATA
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadMeshActors); \
	DECLARE_FUNCTION(execSaveMeshActors); \
	DECLARE_FUNCTION(execImportFBXFile); \
	DECLARE_FUNCTION(execHandleImportCompleted); \
	DECLARE_FUNCTION(execHandleMeshNodeCreated); \
	DECLARE_FUNCTION(execHandleNodeProcessingChanged); \
	DECLARE_FUNCTION(execHandleImportProgressChanged); \
	DECLARE_FUNCTION(execResetActorSelection); \
	DECLARE_FUNCTION(execResetHoveredActor); \
	DECLARE_FUNCTION(execHoverAtActor); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execInitializeFBXLoad); \
	DECLARE_FUNCTION(execLoadTexturesFromType); \
	DECLARE_FUNCTION(execLoadMaterialsFromType);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadMeshActors); \
	DECLARE_FUNCTION(execSaveMeshActors); \
	DECLARE_FUNCTION(execImportFBXFile); \
	DECLARE_FUNCTION(execHandleImportCompleted); \
	DECLARE_FUNCTION(execHandleMeshNodeCreated); \
	DECLARE_FUNCTION(execHandleNodeProcessingChanged); \
	DECLARE_FUNCTION(execHandleImportProgressChanged); \
	DECLARE_FUNCTION(execResetActorSelection); \
	DECLARE_FUNCTION(execResetHoveredActor); \
	DECLARE_FUNCTION(execHoverAtActor); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execInitializeFBXLoad); \
	DECLARE_FUNCTION(execLoadTexturesFromType); \
	DECLARE_FUNCTION(execLoadMaterialsFromType);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_ACCESSORS
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_CALLBACK_WRAPPERS
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFBXImportManager(); \
	friend struct Z_Construct_UClass_AFBXImportManager_Statics; \
public: \
	DECLARE_CLASS(AFBXImportManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXImportManager)


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAFBXImportManager(); \
	friend struct Z_Construct_UClass_AFBXImportManager_Statics; \
public: \
	DECLARE_CLASS(AFBXImportManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXImportManager)


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFBXImportManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFBXImportManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXImportManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXImportManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXImportManager(AFBXImportManager&&); \
	NO_API AFBXImportManager(const AFBXImportManager&); \
public: \
	NO_API virtual ~AFBXImportManager();


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXImportManager(AFBXImportManager&&); \
	NO_API AFBXImportManager(const AFBXImportManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXImportManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXImportManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFBXImportManager) \
	NO_API virtual ~AFBXImportManager();


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_39_PROLOG
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_SPARSE_DATA \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_RPC_WRAPPERS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_ACCESSORS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_CALLBACK_WRAPPERS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_INCLASS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_SPARSE_DATA \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_ACCESSORS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_CALLBACK_WRAPPERS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_INCLASS_NO_PURE_DECLS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class AFBXImportManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXImportManager_h


#define FOREACH_ENUM_EFBXCOORDINATE(op) \
	op(EFBXCoordinate::RightHanded) \
	op(EFBXCoordinate::LeftHanded) 

enum class EFBXCoordinate : uint8;
template<> struct TIsUEnumClass<EFBXCoordinate> { enum { Value = true }; };
template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EFBXCoordinate>();

#define FOREACH_ENUM_EFBXAXIS(op) \
	op(EFBXAxis::Front) \
	op(EFBXAxis::Right) \
	op(EFBXAxis::Up) 

enum class EFBXAxis : uint8;
template<> struct TIsUEnumClass<EFBXAxis> { enum { Value = true }; };
template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EFBXAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
