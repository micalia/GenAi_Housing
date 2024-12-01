// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TransformerPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
enum class ESpaceType : uint8;
enum class ETransformationDomain : uint8;
enum class ETransformationType : uint8;
struct FHitResult;
#ifdef RUNTIMETRANSFORMER_TransformerPawn_generated_h
#error "TransformerPawn.generated.h already included, missing '#pragma once' in TransformerPawn.h"
#endif
#define RUNTIMETRANSFORMER_TransformerPawn_generated_h

#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_SPARSE_DATA
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_RPC_WRAPPERS \
	virtual void MulticastSetSelectedComponents_Implementation(TArray<USceneComponent*> const& Components); \
	virtual bool ServerSyncSelectedComponents_Validate(); \
	virtual void ServerSyncSelectedComponents_Implementation(); \
	virtual void MulticastSetDomain_Implementation(ETransformationDomain Domain); \
	virtual bool ServerSetDomain_Validate(ETransformationDomain ); \
	virtual void ServerSetDomain_Implementation(ETransformationDomain Domain); \
	virtual bool ServerCloneSelected_Validate(bool , bool ); \
	virtual void ServerCloneSelected_Implementation(bool bSelectNewClones, bool bAppendToList); \
	virtual void MulticastSetRotateOnLocalAxis_Implementation(bool bRotateLocalAxis); \
	virtual bool ServerSetRotateOnLocalAxis_Validate(bool ); \
	virtual void ServerSetRotateOnLocalAxis_Implementation(bool bRotateLocalAxis); \
	virtual void MulticastSetComponentBased_Implementation(bool bIsComponentBased); \
	virtual bool ServerSetComponentBased_Validate(bool ); \
	virtual void ServerSetComponentBased_Implementation(bool bIsComponentBased); \
	virtual void MulticastSetTransformationType_Implementation(ETransformationType Transformation); \
	virtual bool ServerSetTransformationType_Validate(ETransformationType ); \
	virtual void ServerSetTransformationType_Implementation(ETransformationType Transformation); \
	virtual void MulticastSetSpaceType_Implementation(ESpaceType Space); \
	virtual bool ServerSetSpaceType_Validate(ESpaceType ); \
	virtual void ServerSetSpaceType_Implementation(ESpaceType Space); \
	virtual void MulticastDeselectAll_Implementation(bool bDestroySelected); \
	virtual bool ServerDeselectAll_Validate(bool ); \
	virtual void ServerDeselectAll_Implementation(bool bDestroySelected); \
	virtual void MulticastApplyTransform_Implementation(FTransform const& DeltaTransform); \
	virtual bool ServerApplyTransform_Validate(FTransform const& ); \
	virtual void ServerApplyTransform_Implementation(FTransform const& DeltaTransform); \
	virtual void MulticastClearDomain_Implementation(); \
	virtual bool ServerClearDomain_Validate(); \
	virtual void ServerClearDomain_Implementation(); \
	virtual bool ServerTraceByProfile_Validate(FVector const& , FVector const& , FName const& , bool ); \
	virtual void ServerTraceByProfile_Implementation(FVector const& StartLocation, FVector const& EndLocation, FName const& ProfileName, bool bAppendToList); \
	virtual bool ServerTraceByChannel_Validate(FVector const& , FVector const& , ECollisionChannel , bool ); \
	virtual void ServerTraceByChannel_Implementation(FVector const& StartLocation, FVector const& EndLocation, ECollisionChannel TraceChannel, bool bAppendToList); \
	virtual bool ServerTraceByObjectTypes_Validate(FVector const& , FVector const& , TArray<TEnumAsByte<ECollisionChannel> > const& , bool ); \
	virtual void ServerTraceByObjectTypes_Implementation(FVector const& StartLocation, FVector const& EndLocation, TArray<TEnumAsByte<ECollisionChannel> > const& CollisionChannels, bool bAppendToList); \
	virtual void OnComponentSelectionChange_Implementation(USceneComponent* Component, bool bSelected, bool bImplementsUFocusable); \
	virtual void OnGizmoStateChanged_Implementation(ETransformationType GizmoType, bool bTransformInProgress, ETransformationDomain Domain); \
	virtual bool ShouldSelect_Implementation(AActor* OwnerActor, USceneComponent* Component); \
 \
	DECLARE_FUNCTION(execMulticastSetSelectedComponents); \
	DECLARE_FUNCTION(execServerSyncSelectedComponents); \
	DECLARE_FUNCTION(execMulticastSetDomain); \
	DECLARE_FUNCTION(execServerSetDomain); \
	DECLARE_FUNCTION(execServerCloneSelected); \
	DECLARE_FUNCTION(execMulticastSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execServerSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execMulticastSetComponentBased); \
	DECLARE_FUNCTION(execServerSetComponentBased); \
	DECLARE_FUNCTION(execMulticastSetTransformationType); \
	DECLARE_FUNCTION(execServerSetTransformationType); \
	DECLARE_FUNCTION(execMulticastSetSpaceType); \
	DECLARE_FUNCTION(execServerSetSpaceType); \
	DECLARE_FUNCTION(execMulticastDeselectAll); \
	DECLARE_FUNCTION(execServerDeselectAll); \
	DECLARE_FUNCTION(execReplicateFinishTransform); \
	DECLARE_FUNCTION(execMulticastApplyTransform); \
	DECLARE_FUNCTION(execServerApplyTransform); \
	DECLARE_FUNCTION(execMulticastClearDomain); \
	DECLARE_FUNCTION(execServerClearDomain); \
	DECLARE_FUNCTION(execServerTraceByProfile); \
	DECLARE_FUNCTION(execServerTraceByChannel); \
	DECLARE_FUNCTION(execServerTraceByObjectTypes); \
	DECLARE_FUNCTION(execLogSelectedComponents); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByProfile); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByChannel); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByObjectTypes); \
	DECLARE_FUNCTION(execDeselectAll); \
	DECLARE_FUNCTION(execDeselectActor); \
	DECLARE_FUNCTION(execDeselectComponent); \
	DECLARE_FUNCTION(execSelectMultipleActors); \
	DECLARE_FUNCTION(execSelectMultipleComponents); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execSelectComponent); \
	DECLARE_FUNCTION(execCloneSelected); \
	DECLARE_FUNCTION(execGetSelectedComponents); \
	DECLARE_FUNCTION(execSetSnappingValue); \
	DECLARE_FUNCTION(execSetSnappingEnabled); \
	DECLARE_FUNCTION(execSetTransformationType); \
	DECLARE_FUNCTION(execSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execSetComponentBased); \
	DECLARE_FUNCTION(execOnComponentSelectionChange); \
	DECLARE_FUNCTION(execOnGizmoStateChanged); \
	DECLARE_FUNCTION(execHandleTracedObjects); \
	DECLARE_FUNCTION(execApplyDeltaTransform); \
	DECLARE_FUNCTION(execUpdateTransform); \
	DECLARE_FUNCTION(execTraceByProfile); \
	DECLARE_FUNCTION(execTraceByChannel); \
	DECLARE_FUNCTION(execTraceByObjectTypes); \
	DECLARE_FUNCTION(execMouseTraceByProfile); \
	DECLARE_FUNCTION(execMouseTraceByChannel); \
	DECLARE_FUNCTION(execMouseTraceByObjectTypes); \
	DECLARE_FUNCTION(execClearDomain); \
	DECLARE_FUNCTION(execGetCurrentDomain); \
	DECLARE_FUNCTION(execSetSpaceType); \
	DECLARE_FUNCTION(execShouldSelect);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSetSelectedComponents_Implementation(TArray<USceneComponent*> const& Components); \
	virtual bool ServerSyncSelectedComponents_Validate(); \
	virtual void ServerSyncSelectedComponents_Implementation(); \
	virtual void MulticastSetDomain_Implementation(ETransformationDomain Domain); \
	virtual bool ServerSetDomain_Validate(ETransformationDomain ); \
	virtual void ServerSetDomain_Implementation(ETransformationDomain Domain); \
	virtual bool ServerCloneSelected_Validate(bool , bool ); \
	virtual void ServerCloneSelected_Implementation(bool bSelectNewClones, bool bAppendToList); \
	virtual void MulticastSetRotateOnLocalAxis_Implementation(bool bRotateLocalAxis); \
	virtual bool ServerSetRotateOnLocalAxis_Validate(bool ); \
	virtual void ServerSetRotateOnLocalAxis_Implementation(bool bRotateLocalAxis); \
	virtual void MulticastSetComponentBased_Implementation(bool bIsComponentBased); \
	virtual bool ServerSetComponentBased_Validate(bool ); \
	virtual void ServerSetComponentBased_Implementation(bool bIsComponentBased); \
	virtual void MulticastSetTransformationType_Implementation(ETransformationType Transformation); \
	virtual bool ServerSetTransformationType_Validate(ETransformationType ); \
	virtual void ServerSetTransformationType_Implementation(ETransformationType Transformation); \
	virtual void MulticastSetSpaceType_Implementation(ESpaceType Space); \
	virtual bool ServerSetSpaceType_Validate(ESpaceType ); \
	virtual void ServerSetSpaceType_Implementation(ESpaceType Space); \
	virtual void MulticastDeselectAll_Implementation(bool bDestroySelected); \
	virtual bool ServerDeselectAll_Validate(bool ); \
	virtual void ServerDeselectAll_Implementation(bool bDestroySelected); \
	virtual void MulticastApplyTransform_Implementation(FTransform const& DeltaTransform); \
	virtual bool ServerApplyTransform_Validate(FTransform const& ); \
	virtual void ServerApplyTransform_Implementation(FTransform const& DeltaTransform); \
	virtual void MulticastClearDomain_Implementation(); \
	virtual bool ServerClearDomain_Validate(); \
	virtual void ServerClearDomain_Implementation(); \
	virtual bool ServerTraceByProfile_Validate(FVector const& , FVector const& , FName const& , bool ); \
	virtual void ServerTraceByProfile_Implementation(FVector const& StartLocation, FVector const& EndLocation, FName const& ProfileName, bool bAppendToList); \
	virtual bool ServerTraceByChannel_Validate(FVector const& , FVector const& , ECollisionChannel , bool ); \
	virtual void ServerTraceByChannel_Implementation(FVector const& StartLocation, FVector const& EndLocation, ECollisionChannel TraceChannel, bool bAppendToList); \
	virtual bool ServerTraceByObjectTypes_Validate(FVector const& , FVector const& , TArray<TEnumAsByte<ECollisionChannel> > const& , bool ); \
	virtual void ServerTraceByObjectTypes_Implementation(FVector const& StartLocation, FVector const& EndLocation, TArray<TEnumAsByte<ECollisionChannel> > const& CollisionChannels, bool bAppendToList); \
 \
	DECLARE_FUNCTION(execMulticastSetSelectedComponents); \
	DECLARE_FUNCTION(execServerSyncSelectedComponents); \
	DECLARE_FUNCTION(execMulticastSetDomain); \
	DECLARE_FUNCTION(execServerSetDomain); \
	DECLARE_FUNCTION(execServerCloneSelected); \
	DECLARE_FUNCTION(execMulticastSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execServerSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execMulticastSetComponentBased); \
	DECLARE_FUNCTION(execServerSetComponentBased); \
	DECLARE_FUNCTION(execMulticastSetTransformationType); \
	DECLARE_FUNCTION(execServerSetTransformationType); \
	DECLARE_FUNCTION(execMulticastSetSpaceType); \
	DECLARE_FUNCTION(execServerSetSpaceType); \
	DECLARE_FUNCTION(execMulticastDeselectAll); \
	DECLARE_FUNCTION(execServerDeselectAll); \
	DECLARE_FUNCTION(execReplicateFinishTransform); \
	DECLARE_FUNCTION(execMulticastApplyTransform); \
	DECLARE_FUNCTION(execServerApplyTransform); \
	DECLARE_FUNCTION(execMulticastClearDomain); \
	DECLARE_FUNCTION(execServerClearDomain); \
	DECLARE_FUNCTION(execServerTraceByProfile); \
	DECLARE_FUNCTION(execServerTraceByChannel); \
	DECLARE_FUNCTION(execServerTraceByObjectTypes); \
	DECLARE_FUNCTION(execLogSelectedComponents); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByProfile); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByChannel); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByObjectTypes); \
	DECLARE_FUNCTION(execDeselectAll); \
	DECLARE_FUNCTION(execDeselectActor); \
	DECLARE_FUNCTION(execDeselectComponent); \
	DECLARE_FUNCTION(execSelectMultipleActors); \
	DECLARE_FUNCTION(execSelectMultipleComponents); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execSelectComponent); \
	DECLARE_FUNCTION(execCloneSelected); \
	DECLARE_FUNCTION(execGetSelectedComponents); \
	DECLARE_FUNCTION(execSetSnappingValue); \
	DECLARE_FUNCTION(execSetSnappingEnabled); \
	DECLARE_FUNCTION(execSetTransformationType); \
	DECLARE_FUNCTION(execSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execSetComponentBased); \
	DECLARE_FUNCTION(execOnComponentSelectionChange); \
	DECLARE_FUNCTION(execOnGizmoStateChanged); \
	DECLARE_FUNCTION(execHandleTracedObjects); \
	DECLARE_FUNCTION(execApplyDeltaTransform); \
	DECLARE_FUNCTION(execUpdateTransform); \
	DECLARE_FUNCTION(execTraceByProfile); \
	DECLARE_FUNCTION(execTraceByChannel); \
	DECLARE_FUNCTION(execTraceByObjectTypes); \
	DECLARE_FUNCTION(execMouseTraceByProfile); \
	DECLARE_FUNCTION(execMouseTraceByChannel); \
	DECLARE_FUNCTION(execMouseTraceByObjectTypes); \
	DECLARE_FUNCTION(execClearDomain); \
	DECLARE_FUNCTION(execGetCurrentDomain); \
	DECLARE_FUNCTION(execSetSpaceType); \
	DECLARE_FUNCTION(execShouldSelect);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_ACCESSORS
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_CALLBACK_WRAPPERS
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATransformerPawn(); \
	friend struct Z_Construct_UClass_ATransformerPawn_Statics; \
public: \
	DECLARE_CLASS(ATransformerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeTransformer"), NO_API) \
	DECLARE_SERIALIZER(ATransformerPawn)


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATransformerPawn(); \
	friend struct Z_Construct_UClass_ATransformerPawn_Statics; \
public: \
	DECLARE_CLASS(ATransformerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeTransformer"), NO_API) \
	DECLARE_SERIALIZER(ATransformerPawn)


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATransformerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATransformerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATransformerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATransformerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATransformerPawn(ATransformerPawn&&); \
	NO_API ATransformerPawn(const ATransformerPawn&); \
public: \
	NO_API virtual ~ATransformerPawn();


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATransformerPawn(ATransformerPawn&&); \
	NO_API ATransformerPawn(const ATransformerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATransformerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATransformerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATransformerPawn) \
	NO_API virtual ~ATransformerPawn();


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_18_PROLOG
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_SPARSE_DATA \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_RPC_WRAPPERS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_ACCESSORS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_CALLBACK_WRAPPERS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_INCLASS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_SPARSE_DATA \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_ACCESSORS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_CALLBACK_WRAPPERS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_INCLASS_NO_PURE_DECLS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMETRANSFORMER_API UClass* StaticClass<class ATransformerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h


#define FOREACH_ENUM_EGIZMOPLACEMENT(op) \
	op(EGizmoPlacement::GP_None) \
	op(EGizmoPlacement::GP_OnFirstSelection) \
	op(EGizmoPlacement::GP_OnLastSelection) 

enum class EGizmoPlacement : uint8;
template<> struct TIsUEnumClass<EGizmoPlacement> { enum { Value = true }; };
template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<EGizmoPlacement>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
