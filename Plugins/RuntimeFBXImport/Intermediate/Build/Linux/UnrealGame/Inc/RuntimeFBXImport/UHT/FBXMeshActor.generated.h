// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/FBXMeshActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UMeshNode;
class UPrimitiveComponent;
class UProceduralMeshComponent;
class UTexture2D;
struct FLinearColor;
struct FMaterialInfo;
struct FProceduralMeshData;
struct FTextureInfo;
#ifdef RUNTIMEFBXIMPORT_FBXMeshActor_generated_h
#error "FBXMeshActor.generated.h already included, missing '#pragma once' in FBXMeshActor.h"
#endif
#define RUNTIMEFBXIMPORT_FBXMeshActor_generated_h

#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_SPARSE_DATA
#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateVectorParameter); \
	DECLARE_FUNCTION(execUpdateScalarParameter); \
	DECLARE_FUNCTION(execUpdateTextureParameter); \
	DECLARE_FUNCTION(execUpdateSectionMaterial); \
	DECLARE_FUNCTION(execSelectComponentFromMeshNode); \
	DECLARE_FUNCTION(execSelectComponent); \
	DECLARE_FUNCTION(execDeSelectCurrentComponents); \
	DECLARE_FUNCTION(execResetActorSelection); \
	DECLARE_FUNCTION(execHoverAtComponent); \
	DECLARE_FUNCTION(execResetActorHover); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execGetMeshNodeFromComponent); \
	DECLARE_FUNCTION(execGetRootNodes);


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateVectorParameter); \
	DECLARE_FUNCTION(execUpdateScalarParameter); \
	DECLARE_FUNCTION(execUpdateTextureParameter); \
	DECLARE_FUNCTION(execUpdateSectionMaterial); \
	DECLARE_FUNCTION(execSelectComponentFromMeshNode); \
	DECLARE_FUNCTION(execSelectComponent); \
	DECLARE_FUNCTION(execDeSelectCurrentComponents); \
	DECLARE_FUNCTION(execResetActorSelection); \
	DECLARE_FUNCTION(execHoverAtComponent); \
	DECLARE_FUNCTION(execResetActorHover); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execGetMeshNodeFromComponent); \
	DECLARE_FUNCTION(execGetRootNodes);


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_ACCESSORS
#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_CALLBACK_WRAPPERS
#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFBXMeshActor(); \
	friend struct Z_Construct_UClass_AFBXMeshActor_Statics; \
public: \
	DECLARE_CLASS(AFBXMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXMeshActor)


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAFBXMeshActor(); \
	friend struct Z_Construct_UClass_AFBXMeshActor_Statics; \
public: \
	DECLARE_CLASS(AFBXMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXMeshActor)


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFBXMeshActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFBXMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXMeshActor(AFBXMeshActor&&); \
	NO_API AFBXMeshActor(const AFBXMeshActor&); \
public: \
	NO_API virtual ~AFBXMeshActor();


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXMeshActor(AFBXMeshActor&&); \
	NO_API AFBXMeshActor(const AFBXMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXMeshActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFBXMeshActor) \
	NO_API virtual ~AFBXMeshActor();


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_27_PROLOG
#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_SPARSE_DATA \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_RPC_WRAPPERS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_ACCESSORS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_CALLBACK_WRAPPERS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_INCLASS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_SPARSE_DATA \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_ACCESSORS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_CALLBACK_WRAPPERS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_INCLASS_NO_PURE_DECLS \
	FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class AFBXMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgramingWorks_Unreal_GenAi_Housing_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Actors_FBXMeshActor_h


#define FOREACH_ENUM_EMESHCOLLISIONTYPE(op) \
	op(EMeshCollisionType::NoCollision) \
	op(EMeshCollisionType::MeshCollision) \
	op(EMeshCollisionType::MeshCollisionFromSource) \
	op(EMeshCollisionType::CustomCollisionFromSource) 

enum class EMeshCollisionType : uint8;
template<> struct TIsUEnumClass<EMeshCollisionType> { enum { Value = true }; };
template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EMeshCollisionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
