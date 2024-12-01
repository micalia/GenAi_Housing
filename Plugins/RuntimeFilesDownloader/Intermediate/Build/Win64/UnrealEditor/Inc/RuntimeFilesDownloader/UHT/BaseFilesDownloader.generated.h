// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseFilesDownloader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef RUNTIMEFILESDOWNLOADER_BaseFilesDownloader_generated_h
#error "BaseFilesDownloader.generated.h already included, missing '#pragma once' in BaseFilesDownloader.h"
#endif
#define RUNTIMEFILESDOWNLOADER_BaseFilesDownloader_generated_h

#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_11_DELEGATE \
RUNTIMEFILESDOWNLOADER_API void FOnDownloadProgress_DelegateWrapper(const FScriptDelegate& OnDownloadProgress, int64 BytesReceived, int64 ContentLength, float ProgressRatio);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_17_DELEGATE \
RUNTIMEFILESDOWNLOADER_API void FOnGetDownloadContentLength_DelegateWrapper(const FScriptDelegate& OnGetDownloadContentLength, int64 ContentLength);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_SPARSE_DATA
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsFileExist); \
	DECLARE_FUNCTION(execSaveStringToFile); \
	DECLARE_FUNCTION(execLoadFileToString); \
	DECLARE_FUNCTION(execSaveArrayToFile); \
	DECLARE_FUNCTION(execLoadFileToArray); \
	DECLARE_FUNCTION(execBytesToTexture); \
	DECLARE_FUNCTION(execBytesToString); \
	DECLARE_FUNCTION(execGetContentSize); \
	DECLARE_FUNCTION(execCancelDownload);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsFileExist); \
	DECLARE_FUNCTION(execSaveStringToFile); \
	DECLARE_FUNCTION(execLoadFileToString); \
	DECLARE_FUNCTION(execSaveArrayToFile); \
	DECLARE_FUNCTION(execLoadFileToArray); \
	DECLARE_FUNCTION(execBytesToTexture); \
	DECLARE_FUNCTION(execBytesToString); \
	DECLARE_FUNCTION(execGetContentSize); \
	DECLARE_FUNCTION(execCancelDownload);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_ACCESSORS
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseFilesDownloader(); \
	friend struct Z_Construct_UClass_UBaseFilesDownloader_Statics; \
public: \
	DECLARE_CLASS(UBaseFilesDownloader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFilesDownloader"), NO_API) \
	DECLARE_SERIALIZER(UBaseFilesDownloader)


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUBaseFilesDownloader(); \
	friend struct Z_Construct_UClass_UBaseFilesDownloader_Statics; \
public: \
	DECLARE_CLASS(UBaseFilesDownloader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFilesDownloader"), NO_API) \
	DECLARE_SERIALIZER(UBaseFilesDownloader)


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseFilesDownloader(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseFilesDownloader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseFilesDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseFilesDownloader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseFilesDownloader(UBaseFilesDownloader&&); \
	NO_API UBaseFilesDownloader(const UBaseFilesDownloader&); \
public: \
	NO_API virtual ~UBaseFilesDownloader();


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseFilesDownloader(UBaseFilesDownloader&&); \
	NO_API UBaseFilesDownloader(const UBaseFilesDownloader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseFilesDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseFilesDownloader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseFilesDownloader) \
	NO_API virtual ~UBaseFilesDownloader();


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_27_PROLOG
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_SPARSE_DATA \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_RPC_WRAPPERS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_ACCESSORS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_INCLASS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_SPARSE_DATA \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_ACCESSORS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_INCLASS_NO_PURE_DECLS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFILESDOWNLOADER_API UClass* StaticClass<class UBaseFilesDownloader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
