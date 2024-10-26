// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealTimeImportBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URealTimeImportBPLibrary;
class USoundWaveProcedural;
class UTexture2D;
class UTexture2DDynamic;
class UTexture;
class UTextureRenderTarget2D;
enum class ERTICoordinateSystem : uint8;
enum class ERTIDirectoryType : uint8;
enum class ERTIERGBFormat : uint8;
enum class ERTIExportImageType : uint8;
enum class ERTIFileType : uint8;
enum class ERTIMeshType : uint8;
enum class ERTISoundFileType : uint8;
enum class ERTITextureType : uint8;
struct FColor;
struct FLinearColor;
struct FProcMeshTangent;
struct FRTIMaterialStruct;
struct FRTIMeshStruct;
struct FRTIModelStruct;
struct FRTITextureStruct;
#ifdef REALTIMEIMPORT_RealTimeImportBPLibrary_generated_h
#error "RealTimeImportBPLibrary.generated.h already included, missing '#pragma once' in RealTimeImportBPLibrary.h"
#endif
#define REALTIMEIMPORT_RealTimeImportBPLibrary_generated_h

#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_18_DELEGATE \
static void FLoadFileEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadFileEventDelegate, int32 errorCode, const FString& eventID, TArray<uint8> const& bytes, const FString& fileName, const FString& errorMessage);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_24_DELEGATE \
static void FSaveFileEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SaveFileEventDelegate, int32 errorCode, const FString& eventID, const FString& fileName, const FString& fullPath, const FString& errorMessage);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_30_DELEGATE \
static void FLoadAllFilesFromDirectoryEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadAllFilesFromDirectoryEventDelegate, const FString& eventID, int32 count, TArray<FString> const& files, TArray<FString> const& filePaths);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_39_DELEGATE \
static void FCreateSoundWaveFromFileEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateSoundWaveFromFileEventDelegate, int32 errorCode, const FString& eventID, USoundWaveProcedural* Sound, const FString& fileName, const FString& errorMessage);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_45_DELEGATE \
static void FCreateSoundWaveFromBytesEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateSoundWaveFromBytesEventDelegate, int32 errorCode, const FString& eventID, USoundWaveProcedural* Sound, const FString& errorMessage);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_51_DELEGATE \
static void FPlaySoundEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlaySoundEventDelegate, int32 errorCode, const FString& fileID, const FString& errorMessage, float durationInSeconds);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_57_DELEGATE \
static void FActiveSoundPositionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActiveSoundPositionEventDelegate, const FString& fileID, float positionSecondsStart, float positionSecondsEnd, float positionPercent);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_63_DELEGATE \
static void FActiveSoundEnvelopeValueEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActiveSoundEnvelopeValueEventDelegate, float averageEnvelopeValue, float maxEnvelope, int32 numWaveInstances);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_70_DELEGATE \
static void FStopSoundEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& StopSoundEventDelegate, const FString& fileID);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_77_DELEGATE \
static void FLoadImageFileEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadImageFileEventDelegate, int32 errorCode, const FString& eventID, UTexture2D* texture, const FString& fileName, const FString& errorMessage);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_83_DELEGATE \
static void FLoadImageBytesEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadImageBytesEventDelegate, int32 errorCode, const FString& eventID, UTexture2D* texture, const FString& errorMessage);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_SPARSE_DATA
#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMultiply_VectorArrayFloat); \
	DECLARE_FUNCTION(execbreakTextureStruct); \
	DECLARE_FUNCTION(execbreakMaterialStruct); \
	DECLARE_FUNCTION(execbreakMeshStruct); \
	DECLARE_FUNCTION(execbreakModelStruct); \
	DECLARE_FUNCTION(execLoadMeshFile); \
	DECLARE_FUNCTION(exectextureRenderTarget2D_ToByteArray); \
	DECLARE_FUNCTION(execchangeTexturDestroyThreadSettings); \
	DECLARE_FUNCTION(execemptyTextureCacheAndDestroyTextures); \
	DECLARE_FUNCTION(execremoveTextureFromCacheAndDestroyTexture); \
	DECLARE_FUNCTION(execLoadImageBytesAsync); \
	DECLARE_FUNCTION(execLoadImageBytes); \
	DECLARE_FUNCTION(execLoadImageFileAsync); \
	DECLARE_FUNCTION(execLoadImageFile); \
	DECLARE_FUNCTION(exectexture2DToTexture2DDynamic); \
	DECLARE_FUNCTION(execgetSoundInfo); \
	DECLARE_FUNCTION(execisSoundActive); \
	DECLARE_FUNCTION(execchangeVolumeSound); \
	DECLARE_FUNCTION(execstopAllSounds); \
	DECLARE_FUNCTION(execstopSound); \
	DECLARE_FUNCTION(execresumeSound); \
	DECLARE_FUNCTION(execpauseSound); \
	DECLARE_FUNCTION(execseekWavFileStream); \
	DECLARE_FUNCTION(execstreamWavFile); \
	DECLARE_FUNCTION(execloadAndPlaySoundBytesAsync); \
	DECLARE_FUNCTION(execloadAndPlaySoundFileAsync); \
	DECLARE_FUNCTION(execemptySoundCache); \
	DECLARE_FUNCTION(execremoveSoundFromCache); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytesAsync); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytes); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFileAsync); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFile); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectoryAsync); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectory); \
	DECLARE_FUNCTION(execSaveFileAsync); \
	DECLARE_FUNCTION(execSaveFile); \
	DECLARE_FUNCTION(execLoadFileAsync); \
	DECLARE_FUNCTION(execLoadFile); \
	DECLARE_FUNCTION(execgetRealTimeImportTarget); \
	DECLARE_FUNCTION(execLoadImageBytesEventDelegate); \
	DECLARE_FUNCTION(execLoadImageFileEventDelegate); \
	DECLARE_FUNCTION(execStopSoundEventDelegate); \
	DECLARE_FUNCTION(execActiveSoundEnvelopeValueEventDelegate); \
	DECLARE_FUNCTION(execActiveSoundPositionEventDelegate); \
	DECLARE_FUNCTION(execPlaySoundEventDelegate); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytesEventDelegate); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFileEventDelegate); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectoryEventDelegate); \
	DECLARE_FUNCTION(execSaveFileEventDelegate); \
	DECLARE_FUNCTION(execLoadFileEventDelegate);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMultiply_VectorArrayFloat); \
	DECLARE_FUNCTION(execbreakTextureStruct); \
	DECLARE_FUNCTION(execbreakMaterialStruct); \
	DECLARE_FUNCTION(execbreakMeshStruct); \
	DECLARE_FUNCTION(execbreakModelStruct); \
	DECLARE_FUNCTION(execLoadMeshFile); \
	DECLARE_FUNCTION(exectextureRenderTarget2D_ToByteArray); \
	DECLARE_FUNCTION(execchangeTexturDestroyThreadSettings); \
	DECLARE_FUNCTION(execemptyTextureCacheAndDestroyTextures); \
	DECLARE_FUNCTION(execremoveTextureFromCacheAndDestroyTexture); \
	DECLARE_FUNCTION(execLoadImageBytesAsync); \
	DECLARE_FUNCTION(execLoadImageBytes); \
	DECLARE_FUNCTION(execLoadImageFileAsync); \
	DECLARE_FUNCTION(execLoadImageFile); \
	DECLARE_FUNCTION(exectexture2DToTexture2DDynamic); \
	DECLARE_FUNCTION(execgetSoundInfo); \
	DECLARE_FUNCTION(execisSoundActive); \
	DECLARE_FUNCTION(execchangeVolumeSound); \
	DECLARE_FUNCTION(execstopAllSounds); \
	DECLARE_FUNCTION(execstopSound); \
	DECLARE_FUNCTION(execresumeSound); \
	DECLARE_FUNCTION(execpauseSound); \
	DECLARE_FUNCTION(execseekWavFileStream); \
	DECLARE_FUNCTION(execstreamWavFile); \
	DECLARE_FUNCTION(execloadAndPlaySoundBytesAsync); \
	DECLARE_FUNCTION(execloadAndPlaySoundFileAsync); \
	DECLARE_FUNCTION(execemptySoundCache); \
	DECLARE_FUNCTION(execremoveSoundFromCache); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytesAsync); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytes); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFileAsync); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFile); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectoryAsync); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectory); \
	DECLARE_FUNCTION(execSaveFileAsync); \
	DECLARE_FUNCTION(execSaveFile); \
	DECLARE_FUNCTION(execLoadFileAsync); \
	DECLARE_FUNCTION(execLoadFile); \
	DECLARE_FUNCTION(execgetRealTimeImportTarget); \
	DECLARE_FUNCTION(execLoadImageBytesEventDelegate); \
	DECLARE_FUNCTION(execLoadImageFileEventDelegate); \
	DECLARE_FUNCTION(execStopSoundEventDelegate); \
	DECLARE_FUNCTION(execActiveSoundEnvelopeValueEventDelegate); \
	DECLARE_FUNCTION(execActiveSoundPositionEventDelegate); \
	DECLARE_FUNCTION(execPlaySoundEventDelegate); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytesEventDelegate); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFileEventDelegate); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectoryEventDelegate); \
	DECLARE_FUNCTION(execSaveFileEventDelegate); \
	DECLARE_FUNCTION(execLoadFileEventDelegate);


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_ACCESSORS
#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealTimeImportBPLibrary(); \
	friend struct Z_Construct_UClass_URealTimeImportBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportBPLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportBPLibrary)


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesURealTimeImportBPLibrary(); \
	friend struct Z_Construct_UClass_URealTimeImportBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportBPLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportBPLibrary)


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportBPLibrary(URealTimeImportBPLibrary&&); \
	NO_API URealTimeImportBPLibrary(const URealTimeImportBPLibrary&); \
public: \
	NO_API virtual ~URealTimeImportBPLibrary();


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportBPLibrary(URealTimeImportBPLibrary&&); \
	NO_API URealTimeImportBPLibrary(const URealTimeImportBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportBPLibrary) \
	NO_API virtual ~URealTimeImportBPLibrary();


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_9_PROLOG
#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_SPARSE_DATA \
	FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_RPC_WRAPPERS \
	FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_ACCESSORS \
	FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_INCLASS \
	FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_SPARSE_DATA \
	FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_ACCESSORS \
	FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RealTimeImportBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class URealTimeImportBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
