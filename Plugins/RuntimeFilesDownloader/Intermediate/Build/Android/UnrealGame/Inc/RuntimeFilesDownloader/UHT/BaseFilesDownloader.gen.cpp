// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFilesDownloader/Public/BaseFilesDownloader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFilesDownloader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UBaseFilesDownloader();
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UBaseFilesDownloader_NoRegister();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RuntimeFilesDownloader();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics
	{
		struct _Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms
		{
			int64 BytesReceived;
			int64 ContentLength;
			float ProgressRatio;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesReceived;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ContentLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms, BytesReceived), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms, ContentLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::NewProp_ProgressRatio = { "ProgressRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms, ProgressRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::NewProp_BytesReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::NewProp_ContentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::NewProp_ProgressRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate to track download progress */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Dynamic delegate to track download progress" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnDownloadProgress__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDownloadProgress_DelegateWrapper(const FScriptDelegate& OnDownloadProgress, int64 BytesReceived, int64 ContentLength, float ProgressRatio)
{
	struct _Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms
	{
		int64 BytesReceived;
		int64 ContentLength;
		float ProgressRatio;
	};
	_Script_RuntimeFilesDownloader_eventOnDownloadProgress_Parms Parms;
	Parms.BytesReceived=BytesReceived;
	Parms.ContentLength=ContentLength;
	Parms.ProgressRatio=ProgressRatio;
	OnDownloadProgress.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics
	{
		struct _Script_RuntimeFilesDownloader_eventOnGetDownloadContentLength_Parms
		{
			int64 ContentLength;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ContentLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnGetDownloadContentLength_Parms, ContentLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics::NewProp_ContentLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate to obtain download content length */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Dynamic delegate to obtain download content length" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnGetDownloadContentLength__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnGetDownloadContentLength_Parms), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetDownloadContentLength_DelegateWrapper(const FScriptDelegate& OnGetDownloadContentLength, int64 ContentLength)
{
	struct _Script_RuntimeFilesDownloader_eventOnGetDownloadContentLength_Parms
	{
		int64 ContentLength;
	};
	_Script_RuntimeFilesDownloader_eventOnGetDownloadContentLength_Parms Parms;
	Parms.ContentLength=ContentLength;
	OnGetDownloadContentLength.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UBaseFilesDownloader::execIsFileExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBaseFilesDownloader::IsFileExist(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execSaveStringToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBaseFilesDownloader::SaveStringToFile(Z_Param_String,Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execLoadFileToString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBaseFilesDownloader::LoadFileToString(Z_Param_Out_Result,Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execSaveArrayToFile)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBaseFilesDownloader::SaveArrayToFile(Z_Param_Out_Bytes,Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execLoadFileToArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBaseFilesDownloader::LoadFileToArray(Z_Param_FilePath,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execBytesToTexture)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UBaseFilesDownloader::BytesToTexture(Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execBytesToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBaseFilesDownloader::BytesToString(Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execGetContentSize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBaseFilesDownloader::GetContentSize(Z_Param_URL,Z_Param_Timeout,FOnGetDownloadContentLength(Z_Param_Out_OnComplete));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseFilesDownloader::execCancelDownload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CancelDownload();
		P_NATIVE_END;
	}
	void UBaseFilesDownloader::StaticRegisterNativesUBaseFilesDownloader()
	{
		UClass* Class = UBaseFilesDownloader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BytesToString", &UBaseFilesDownloader::execBytesToString },
			{ "BytesToTexture", &UBaseFilesDownloader::execBytesToTexture },
			{ "CancelDownload", &UBaseFilesDownloader::execCancelDownload },
			{ "GetContentSize", &UBaseFilesDownloader::execGetContentSize },
			{ "IsFileExist", &UBaseFilesDownloader::execIsFileExist },
			{ "LoadFileToArray", &UBaseFilesDownloader::execLoadFileToArray },
			{ "LoadFileToString", &UBaseFilesDownloader::execLoadFileToString },
			{ "SaveArrayToFile", &UBaseFilesDownloader::execSaveArrayToFile },
			{ "SaveStringToFile", &UBaseFilesDownloader::execSaveStringToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics
	{
		struct BaseFilesDownloader_eventBytesToString_Parms
		{
			TArray<uint8> Bytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventBytesToString_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventBytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Convert bytes to string\n\x09 *\n\x09 * @param Bytes Byte array to convert to string\n\x09 * @return Converted string, empty on failure\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Convert bytes to string\n\n@param Bytes Byte array to convert to string\n@return Converted string, empty on failure" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "BytesToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::BaseFilesDownloader_eventBytesToString_Parms), Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_BytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_BytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics
	{
		struct BaseFilesDownloader_eventBytesToTexture_Parms
		{
			TArray<uint8> Bytes;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventBytesToTexture_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventBytesToTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Convert bytes to texture. This is fully engine-based functionality and may not be well optimized\n\x09 *\n\x09 * @param Bytes Byte array to convert to texture\n\x09 * @return Converted texture or nullptr on failure\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Convert bytes to texture. This is fully engine-based functionality and may not be well optimized\n\n@param Bytes Byte array to convert to texture\n@return Converted texture or nullptr on failure" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "BytesToTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::BaseFilesDownloader_eventBytesToTexture_Parms), Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics
	{
		struct BaseFilesDownloader_eventCancelDownload_Parms
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
	void Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFilesDownloader_eventCancelDownload_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseFilesDownloader_eventCancelDownload_Parms), &Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Main" },
		{ "Comment", "/**\n\x09 * Canceling the current download\n\x09 *\n\x09 * @return Whether the cancellation was successful or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Canceling the current download\n\n@return Whether the cancellation was successful or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "CancelDownload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::BaseFilesDownloader_eventCancelDownload_Parms), Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics
	{
		struct BaseFilesDownloader_eventGetContentSize_Parms
		{
			FString URL;
			float Timeout;
			FScriptDelegate OnComplete;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventGetContentSize_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventGetContentSize_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventGetContentSize_Parms, OnComplete), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_OnComplete_MetaData)) }; // 192128752
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::NewProp_OnComplete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Main" },
		{ "Comment", "/**\n\x09 * Get the content length of the file to be downloaded\n\x09 *\n\x09 * @param URL The URL of the file to be downloaded\n\x09 * @param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n\x09 * @param OnComplete Delegate for broadcasting the completion of the download \n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Get the content length of the file to be downloaded\n\n@param URL The URL of the file to be downloaded\n@param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n@param OnComplete Delegate for broadcasting the completion of the download" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "GetContentSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::BaseFilesDownloader_eventGetContentSize_Parms), Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics
	{
		struct BaseFilesDownloader_eventIsFileExist_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventIsFileExist_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFilesDownloader_eventIsFileExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseFilesDownloader_eventIsFileExist_Parms), &Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Returns true if this file was found, false otherwise\n\x09 *\n\x09 * @param FilePath Path to the file to check\n\x09 * @return Whether the operation was successful or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Returns true if this file was found, false otherwise\n\n@param FilePath Path to the file to check\n@return Whether the operation was successful or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "IsFileExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::BaseFilesDownloader_eventIsFileExist_Parms), Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics
	{
		struct BaseFilesDownloader_eventLoadFileToArray_Parms
		{
			FString FilePath;
			TArray<uint8> Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventLoadFileToArray_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventLoadFileToArray_Parms, Result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFilesDownloader_eventLoadFileToArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseFilesDownloader_eventLoadFileToArray_Parms), &Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Result_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Load a binary file to a dynamic array with two uninitialized bytes at end as padding\n\x09 *\n\x09 * @param FilePath Path to the file to load\n\x09 * @param Result Bytes representation of the loaded file\n\x09 * @return Whether the operation was successful or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Load a binary file to a dynamic array with two uninitialized bytes at end as padding\n\n@param FilePath Path to the file to load\n@param Result Bytes representation of the loaded file\n@return Whether the operation was successful or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "LoadFileToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::BaseFilesDownloader_eventLoadFileToArray_Parms), Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics
	{
		struct BaseFilesDownloader_eventLoadFileToString_Parms
		{
			FString Result;
			FString FilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventLoadFileToString_Parms, Result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventLoadFileToString_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFilesDownloader_eventLoadFileToString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseFilesDownloader_eventLoadFileToString_Parms), &Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Load a text file to an FString.\n\x09 * Supports all combination of ANSI/Unicode files and platforms\n\x09 * \n\x09 * @param Result String representation of the loaded file\n\x09 * @param FilePath Path to the file to load\n\x09 * @return Whether the operation was successful or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Load a text file to an FString.\nSupports all combination of ANSI/Unicode files and platforms\n\n@param Result String representation of the loaded file\n@param FilePath Path to the file to load\n@return Whether the operation was successful or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "LoadFileToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::BaseFilesDownloader_eventLoadFileToString_Parms), Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics
	{
		struct BaseFilesDownloader_eventSaveArrayToFile_Parms
		{
			TArray<uint8> Bytes;
			FString FilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventSaveArrayToFile_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventSaveArrayToFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFilesDownloader_eventSaveArrayToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseFilesDownloader_eventSaveArrayToFile_Parms), &Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Save a binary array to a file\n\x09 *\n\x09 * @param Bytes Byte array to save to file\n\x09 * @param FilePath Path to the file to save\n\x09 * @return Whether the operation was successful or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Save a binary array to a file\n\n@param Bytes Byte array to save to file\n@param FilePath Path to the file to save\n@return Whether the operation was successful or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "SaveArrayToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::BaseFilesDownloader_eventSaveArrayToFile_Parms), Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics
	{
		struct BaseFilesDownloader_eventSaveStringToFile_Parms
		{
			FString String;
			FString FilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventSaveStringToFile_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseFilesDownloader_eventSaveStringToFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFilesDownloader_eventSaveStringToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseFilesDownloader_eventSaveStringToFile_Parms), &Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Utilities" },
		{ "Comment", "/**\n\x09 * Write the string to a file.\n\x09 * Supports all combination of ANSI/Unicode files and platforms\n\x09 *\n\x09 * @param String String to save to file\n\x09 * @param FilePath Path to the file to save\n\x09 * @return Whether the operation was successful or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Write the string to a file.\nSupports all combination of ANSI/Unicode files and platforms\n\n@param String String to save to file\n@param FilePath Path to the file to save\n@return Whether the operation was successful or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFilesDownloader, nullptr, "SaveStringToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::BaseFilesDownloader_eventSaveStringToFile_Parms), Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFilesDownloader);
	UClass* Z_Construct_UClass_UBaseFilesDownloader_NoRegister()
	{
		return UBaseFilesDownloader::StaticClass();
	}
	struct Z_Construct_UClass_UBaseFilesDownloader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseFilesDownloader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseFilesDownloader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseFilesDownloader_BytesToString, "BytesToString" }, // 3425570108
		{ &Z_Construct_UFunction_UBaseFilesDownloader_BytesToTexture, "BytesToTexture" }, // 3379820887
		{ &Z_Construct_UFunction_UBaseFilesDownloader_CancelDownload, "CancelDownload" }, // 3453150949
		{ &Z_Construct_UFunction_UBaseFilesDownloader_GetContentSize, "GetContentSize" }, // 678841766
		{ &Z_Construct_UFunction_UBaseFilesDownloader_IsFileExist, "IsFileExist" }, // 3214135553
		{ &Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToArray, "LoadFileToArray" }, // 1121320239
		{ &Z_Construct_UFunction_UBaseFilesDownloader_LoadFileToString, "LoadFileToString" }, // 1958826526
		{ &Z_Construct_UFunction_UBaseFilesDownloader_SaveArrayToFile, "SaveArrayToFile" }, // 4289943266
		{ &Z_Construct_UFunction_UBaseFilesDownloader_SaveStringToFile, "SaveStringToFile" }, // 2456792406
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFilesDownloader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Files Downloader" },
		{ "Comment", "/**\n * Base class for downloading files. It also contains some helper functions\n */" },
		{ "IncludePath", "BaseFilesDownloader.h" },
		{ "ModuleRelativePath", "Public/BaseFilesDownloader.h" },
		{ "ToolTip", "Base class for downloading files. It also contains some helper functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseFilesDownloader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFilesDownloader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFilesDownloader_Statics::ClassParams = {
		&UBaseFilesDownloader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseFilesDownloader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFilesDownloader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseFilesDownloader()
	{
		if (!Z_Registration_Info_UClass_UBaseFilesDownloader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFilesDownloader.OuterSingleton, Z_Construct_UClass_UBaseFilesDownloader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseFilesDownloader.OuterSingleton;
	}
	template<> RUNTIMEFILESDOWNLOADER_API UClass* StaticClass<UBaseFilesDownloader>()
	{
		return UBaseFilesDownloader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFilesDownloader);
	UBaseFilesDownloader::~UBaseFilesDownloader() {}
	struct Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFilesDownloader, UBaseFilesDownloader::StaticClass, TEXT("UBaseFilesDownloader"), &Z_Registration_Info_UClass_UBaseFilesDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFilesDownloader), 15604999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_70625009(TEXT("/Script/RuntimeFilesDownloader"),
		Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
