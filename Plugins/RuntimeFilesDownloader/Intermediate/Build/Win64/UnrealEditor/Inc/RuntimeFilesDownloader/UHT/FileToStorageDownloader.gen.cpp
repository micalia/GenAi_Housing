// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFilesDownloader/Public/FileToStorageDownloader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileToStorageDownloader() {}
// Cross Module References
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UBaseFilesDownloader();
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToStorageDownloader();
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToStorageDownloader_NoRegister();
	RUNTIMEFILESDOWNLOADER_API UEnum* Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RuntimeFilesDownloader();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDownloadToStorageResult;
	static UEnum* EDownloadToStorageResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDownloadToStorageResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDownloadToStorageResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult, (UObject*)Z_Construct_UPackage__Script_RuntimeFilesDownloader(), TEXT("EDownloadToStorageResult"));
		}
		return Z_Registration_Info_UEnum_EDownloadToStorageResult.OuterSingleton;
	}
	template<> RUNTIMEFILESDOWNLOADER_API UEnum* StaticEnum<EDownloadToStorageResult>()
	{
		return EDownloadToStorageResult_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::Enumerators[] = {
		{ "EDownloadToStorageResult::Success", (int64)EDownloadToStorageResult::Success },
		{ "EDownloadToStorageResult::SucceededByPayload", (int64)EDownloadToStorageResult::SucceededByPayload },
		{ "EDownloadToStorageResult::Cancelled", (int64)EDownloadToStorageResult::Cancelled },
		{ "EDownloadToStorageResult::DownloadFailed", (int64)EDownloadToStorageResult::DownloadFailed },
		{ "EDownloadToStorageResult::SaveFailed", (int64)EDownloadToStorageResult::SaveFailed },
		{ "EDownloadToStorageResult::DirectoryCreationFailed", (int64)EDownloadToStorageResult::DirectoryCreationFailed },
		{ "EDownloadToStorageResult::InvalidURL", (int64)EDownloadToStorageResult::InvalidURL },
		{ "EDownloadToStorageResult::InvalidSavePath", (int64)EDownloadToStorageResult::InvalidSavePath },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "EDownloadToStorageResult::Cancelled" },
		{ "Category", "File To Storage Downloader" },
		{ "Comment", "/** Possible results from a download request */" },
		{ "DirectoryCreationFailed.Name", "EDownloadToStorageResult::DirectoryCreationFailed" },
		{ "DownloadFailed.Name", "EDownloadToStorageResult::DownloadFailed" },
		{ "InvalidSavePath.Name", "EDownloadToStorageResult::InvalidSavePath" },
		{ "InvalidURL.Name", "EDownloadToStorageResult::InvalidURL" },
		{ "ModuleRelativePath", "Public/FileToStorageDownloader.h" },
		{ "SaveFailed.Name", "EDownloadToStorageResult::SaveFailed" },
		{ "SucceededByPayload.Comment", "/** Downloaded successfully, but there was no Content-Length header in the response and thus downloaded by payload */" },
		{ "SucceededByPayload.Name", "EDownloadToStorageResult::SucceededByPayload" },
		{ "SucceededByPayload.ToolTip", "Downloaded successfully, but there was no Content-Length header in the response and thus downloaded by payload" },
		{ "Success.Name", "EDownloadToStorageResult::Success" },
		{ "ToolTip", "Possible results from a download request" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
		nullptr,
		"EDownloadToStorageResult",
		"EDownloadToStorageResult",
		Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult()
	{
		if (!Z_Registration_Info_UEnum_EDownloadToStorageResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDownloadToStorageResult.InnerSingleton, Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDownloadToStorageResult.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics
	{
		struct _Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms
		{
			EDownloadToStorageResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms, Result), Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult, METADATA_PARAMS(nullptr, 0) }; // 2350970283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate broadcast after the download is complete */" },
		{ "ModuleRelativePath", "Public/FileToStorageDownloader.h" },
		{ "ToolTip", "Dynamic delegate broadcast after the download is complete" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnFileToStorageDownloadComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFileToStorageDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToStorageDownloadComplete, EDownloadToStorageResult Result)
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms
	{
		EDownloadToStorageResult Result;
	};
	_Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms Parms;
	Parms.Result=Result;
	OnFileToStorageDownloadComplete.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UFileToStorageDownloader::execDownloadFileToStorage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
		P_GET_UBOOL(Z_Param_bForceByPayload);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnProgress);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFileToStorageDownloader**)Z_Param__Result=UFileToStorageDownloader::DownloadFileToStorage(Z_Param_URL,Z_Param_SavePath,Z_Param_Timeout,Z_Param_ContentType,Z_Param_bForceByPayload,FOnDownloadProgress(Z_Param_Out_OnProgress),FOnFileToStorageDownloadComplete(Z_Param_Out_OnComplete));
		P_NATIVE_END;
	}
	void UFileToStorageDownloader::StaticRegisterNativesUFileToStorageDownloader()
	{
		UClass* Class = UFileToStorageDownloader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadFileToStorage", &UFileToStorageDownloader::execDownloadFileToStorage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics
	{
		struct FileToStorageDownloader_eventDownloadFileToStorage_Parms
		{
			FString URL;
			FString SavePath;
			float Timeout;
			FString ContentType;
			bool bForceByPayload;
			FScriptDelegate OnProgress;
			FScriptDelegate OnComplete;
			UFileToStorageDownloader* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
		static void NewProp_bForceByPayload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceByPayload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, SavePath), METADATA_PARAMS(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_SavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_SavePath_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, ContentType), METADATA_PARAMS(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_ContentType_MetaData)) };
	void Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_bForceByPayload_SetBit(void* Obj)
	{
		((FileToStorageDownloader_eventDownloadFileToStorage_Parms*)Obj)->bForceByPayload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_bForceByPayload = { "bForceByPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileToStorageDownloader_eventDownloadFileToStorage_Parms), &Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_bForceByPayload_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, OnProgress), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnProgress_MetaData)) }; // 3492273758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, OnComplete), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnComplete_MetaData)) }; // 698158
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, ReturnValue), Z_Construct_UClass_UFileToStorageDownloader_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_SavePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_bForceByPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Storage" },
		{ "Comment", "/**\n\x09 * Download the file and save it to storage\n\x09 *\n\x09 * @param URL The URL of the file to be downloaded\n\x09 * @param SavePath The absolute path and file name to save the downloaded file\n\x09 * @param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n\x09 * @param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n\x09 * @param bForceByPayload If true, download the file regardless of the Content-Length header's presence (useful for servers without support for this header)\n\x09 * @param OnProgress Delegate for download progress updates\n\x09 * @param OnComplete Delegate for broadcasting the completion of the download\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileToStorageDownloader.h" },
		{ "ToolTip", "Download the file and save it to storage\n\n@param URL The URL of the file to be downloaded\n@param SavePath The absolute path and file name to save the downloaded file\n@param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n@param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n@param bForceByPayload If true, download the file regardless of the Content-Length header's presence (useful for servers without support for this header)\n@param OnProgress Delegate for download progress updates\n@param OnComplete Delegate for broadcasting the completion of the download" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileToStorageDownloader, nullptr, "DownloadFileToStorage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::FileToStorageDownloader_eventDownloadFileToStorage_Parms), Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileToStorageDownloader);
	UClass* Z_Construct_UClass_UFileToStorageDownloader_NoRegister()
	{
		return UFileToStorageDownloader::StaticClass();
	}
	struct Z_Construct_UClass_UFileToStorageDownloader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileToStorageDownloader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFilesDownloader,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileToStorageDownloader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage, "DownloadFileToStorage" }, // 380041368
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileToStorageDownloader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Files Downloader|Storage" },
		{ "Comment", "/**\n * Downloads a file and saves it to permanent storage\n */" },
		{ "IncludePath", "FileToStorageDownloader.h" },
		{ "ModuleRelativePath", "Public/FileToStorageDownloader.h" },
		{ "ToolTip", "Downloads a file and saves it to permanent storage" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileToStorageDownloader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileToStorageDownloader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileToStorageDownloader_Statics::ClassParams = {
		&UFileToStorageDownloader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFileToStorageDownloader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileToStorageDownloader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileToStorageDownloader()
	{
		if (!Z_Registration_Info_UClass_UFileToStorageDownloader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileToStorageDownloader.OuterSingleton, Z_Construct_UClass_UFileToStorageDownloader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileToStorageDownloader.OuterSingleton;
	}
	template<> RUNTIMEFILESDOWNLOADER_API UClass* StaticClass<UFileToStorageDownloader>()
	{
		return UFileToStorageDownloader::StaticClass();
	}
	UFileToStorageDownloader::UFileToStorageDownloader() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileToStorageDownloader);
	UFileToStorageDownloader::~UFileToStorageDownloader() {}
	struct Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics::EnumInfo[] = {
		{ EDownloadToStorageResult_StaticEnum, TEXT("EDownloadToStorageResult"), &Z_Registration_Info_UEnum_EDownloadToStorageResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2350970283U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileToStorageDownloader, UFileToStorageDownloader::StaticClass, TEXT("UFileToStorageDownloader"), &Z_Registration_Info_UClass_UFileToStorageDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileToStorageDownloader), 2029273871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_459066845(TEXT("/Script/RuntimeFilesDownloader"),
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
