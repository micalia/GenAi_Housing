// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFilesDownloader/Public/FileToMemoryDownloader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileToMemoryDownloader() {}
// Cross Module References
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UBaseFilesDownloader();
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToMemoryDownloader();
	RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToMemoryDownloader_NoRegister();
	RUNTIMEFILESDOWNLOADER_API UEnum* Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RuntimeFilesDownloader();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDownloadToMemoryResult;
	static UEnum* EDownloadToMemoryResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDownloadToMemoryResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDownloadToMemoryResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult, (UObject*)Z_Construct_UPackage__Script_RuntimeFilesDownloader(), TEXT("EDownloadToMemoryResult"));
		}
		return Z_Registration_Info_UEnum_EDownloadToMemoryResult.OuterSingleton;
	}
	template<> RUNTIMEFILESDOWNLOADER_API UEnum* StaticEnum<EDownloadToMemoryResult>()
	{
		return EDownloadToMemoryResult_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enumerators[] = {
		{ "EDownloadToMemoryResult::Success", (int64)EDownloadToMemoryResult::Success },
		{ "EDownloadToMemoryResult::SucceededByPayload", (int64)EDownloadToMemoryResult::SucceededByPayload },
		{ "EDownloadToMemoryResult::Cancelled", (int64)EDownloadToMemoryResult::Cancelled },
		{ "EDownloadToMemoryResult::DownloadFailed", (int64)EDownloadToMemoryResult::DownloadFailed },
		{ "EDownloadToMemoryResult::InvalidURL", (int64)EDownloadToMemoryResult::InvalidURL },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "EDownloadToMemoryResult::Cancelled" },
		{ "Category", "File To Memory Downloader" },
		{ "Comment", "/**\n* Possible results from a download request\n*/" },
		{ "DownloadFailed.Name", "EDownloadToMemoryResult::DownloadFailed" },
		{ "InvalidURL.Name", "EDownloadToMemoryResult::InvalidURL" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "SucceededByPayload.Comment", "/** Downloaded successfully, but there was no Content-Length header in the response and thus downloaded by payload */" },
		{ "SucceededByPayload.Name", "EDownloadToMemoryResult::SucceededByPayload" },
		{ "SucceededByPayload.ToolTip", "Downloaded successfully, but there was no Content-Length header in the response and thus downloaded by payload" },
		{ "Success.Name", "EDownloadToMemoryResult::Success" },
		{ "ToolTip", "Possible results from a download request" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
		nullptr,
		"EDownloadToMemoryResult",
		"EDownloadToMemoryResult",
		Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult()
	{
		if (!Z_Registration_Info_UEnum_EDownloadToMemoryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDownloadToMemoryResult.InnerSingleton, Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDownloadToMemoryResult.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics
	{
		struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms
		{
			TArray<uint8> DownloadedContent;
			EDownloadToMemoryResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DownloadedContent_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownloadedContent_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DownloadedContent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_Inner = { "DownloadedContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent = { "DownloadedContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms, DownloadedContent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms, Result), Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult, METADATA_PARAMS(nullptr, 0) }; // 944155382
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate to track download completion */" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Dynamic delegate to track download completion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnFileToMemoryDownloadComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFileToMemoryDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToMemoryDownloadComplete, TArray<uint8> const& DownloadedContent, EDownloadToMemoryResult Result)
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms
	{
		TArray<uint8> DownloadedContent;
		EDownloadToMemoryResult Result;
	};
	_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms Parms;
	Parms.DownloadedContent=DownloadedContent;
	Parms.Result=Result;
	OnFileToMemoryDownloadComplete.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics
	{
		struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms
		{
			TArray<uint8> DownloadedContent;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DownloadedContent_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownloadedContent_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DownloadedContent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_Inner = { "DownloadedContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent = { "DownloadedContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms, DownloadedContent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate to track chunk download completion */" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Dynamic delegate to track chunk download completion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnFileToMemoryChunkDownloadComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFileToMemoryChunkDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToMemoryChunkDownloadComplete, TArray<uint8> const& DownloadedContent)
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms
	{
		TArray<uint8> DownloadedContent;
	};
	_Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms Parms;
	Parms.DownloadedContent=DownloadedContent;
	OnFileToMemoryChunkDownloadComplete.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics
	{
		struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms
		{
			EDownloadToMemoryResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms, Result), Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult, METADATA_PARAMS(nullptr, 0) }; // 944155382
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate to track download completion */" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Dynamic delegate to track download completion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnFileToMemoryAllChunksDownloadComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFileToMemoryAllChunksDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToMemoryAllChunksDownloadComplete, EDownloadToMemoryResult Result)
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms
	{
		EDownloadToMemoryResult Result;
	};
	_Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms Parms;
	Parms.Result=Result;
	OnFileToMemoryAllChunksDownloadComplete.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UFileToMemoryDownloader::execDownloadFileToMemoryPerChunk)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxChunkSize);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnProgress);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnChunkDownloadComplete);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnAllChunksDownloadComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFileToMemoryDownloader**)Z_Param__Result=UFileToMemoryDownloader::DownloadFileToMemoryPerChunk(Z_Param_URL,Z_Param_Timeout,Z_Param_ContentType,Z_Param_MaxChunkSize,FOnDownloadProgress(Z_Param_Out_OnProgress),FOnFileToMemoryChunkDownloadComplete(Z_Param_Out_OnChunkDownloadComplete),FOnFileToMemoryAllChunksDownloadComplete(Z_Param_Out_OnAllChunksDownloadComplete));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileToMemoryDownloader::execDownloadFileToMemory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
		P_GET_UBOOL(Z_Param_bForceByPayload);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnProgress);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFileToMemoryDownloader**)Z_Param__Result=UFileToMemoryDownloader::DownloadFileToMemory(Z_Param_URL,Z_Param_Timeout,Z_Param_ContentType,Z_Param_bForceByPayload,FOnDownloadProgress(Z_Param_Out_OnProgress),FOnFileToMemoryDownloadComplete(Z_Param_Out_OnComplete));
		P_NATIVE_END;
	}
	void UFileToMemoryDownloader::StaticRegisterNativesUFileToMemoryDownloader()
	{
		UClass* Class = UFileToMemoryDownloader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadFileToMemory", &UFileToMemoryDownloader::execDownloadFileToMemory },
			{ "DownloadFileToMemoryPerChunk", &UFileToMemoryDownloader::execDownloadFileToMemoryPerChunk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics
	{
		struct FileToMemoryDownloader_eventDownloadFileToMemory_Parms
		{
			FString URL;
			float Timeout;
			FString ContentType;
			bool bForceByPayload;
			FScriptDelegate OnProgress;
			FScriptDelegate OnComplete;
			UFileToMemoryDownloader* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, ContentType), METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_ContentType_MetaData)) };
	void Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_bForceByPayload_SetBit(void* Obj)
	{
		((FileToMemoryDownloader_eventDownloadFileToMemory_Parms*)Obj)->bForceByPayload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_bForceByPayload = { "bForceByPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileToMemoryDownloader_eventDownloadFileToMemory_Parms), &Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_bForceByPayload_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, OnProgress), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnProgress_MetaData)) }; // 3492273758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, OnComplete), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnComplete_MetaData)) }; // 3731533478
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, ReturnValue), Z_Construct_UClass_UFileToMemoryDownloader_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_bForceByPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Memory" },
		{ "Comment", "/**\n\x09 * Download the file and save it as a byte array in temporary memory (RAM)\n\x09 *\n\x09 * @param URL The URL of the file to be downloaded\n\x09 * @param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n\x09 * @param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n\x09 * @param bForceByPayload If true, download the file regardless of the Content-Length header's presence (useful for servers without support for this header)\n\x09 * @param OnProgress Delegate for download progress updates\n\x09 * @param OnComplete Delegate for broadcasting the completion of the download\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Download the file and save it as a byte array in temporary memory (RAM)\n\n@param URL The URL of the file to be downloaded\n@param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n@param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n@param bForceByPayload If true, download the file regardless of the Content-Length header's presence (useful for servers without support for this header)\n@param OnProgress Delegate for download progress updates\n@param OnComplete Delegate for broadcasting the completion of the download" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileToMemoryDownloader, nullptr, "DownloadFileToMemory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::FileToMemoryDownloader_eventDownloadFileToMemory_Parms), Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics
	{
		struct FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms
		{
			FString URL;
			float Timeout;
			FString ContentType;
			int32 MaxChunkSize;
			FScriptDelegate OnProgress;
			FScriptDelegate OnChunkDownloadComplete;
			FScriptDelegate OnAllChunksDownloadComplete;
			UFileToMemoryDownloader* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChunkSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChunkDownloadComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnChunkDownloadComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAllChunksDownloadComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnAllChunksDownloadComplete;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, ContentType), METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_ContentType_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_MaxChunkSize = { "MaxChunkSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, MaxChunkSize), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, OnProgress), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnProgress_MetaData)) }; // 3492273758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnChunkDownloadComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnChunkDownloadComplete = { "OnChunkDownloadComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, OnChunkDownloadComplete), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnChunkDownloadComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnChunkDownloadComplete_MetaData)) }; // 512224699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnAllChunksDownloadComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnAllChunksDownloadComplete = { "OnAllChunksDownloadComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, OnAllChunksDownloadComplete), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnAllChunksDownloadComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnAllChunksDownloadComplete_MetaData)) }; // 62935708
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, ReturnValue), Z_Construct_UClass_UFileToMemoryDownloader_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_MaxChunkSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnChunkDownloadComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnAllChunksDownloadComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Memory" },
		{ "Comment", "/**\n\x09 * Download the file and save it as a byte array in temporary memory (RAM). Continuously broadcasts the download result per chunk\n\x09 *\n\x09 * @param URL The URL of the file to be downloaded\n\x09 * @param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n\x09 * @param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n\x09 * @param MaxChunkSize The maximum size of each chunk to download in bytes\n\x09 * @param OnProgress Delegate for download progress updates\n\x09 * @param OnChunkDownloadComplete Delegate for broadcasting the completion of the download. Will be called for each chunk\n\x09 * @param OnAllChunksDownloadComplete Delegate for broadcasting the completion of the download of all chunks\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Download the file and save it as a byte array in temporary memory (RAM). Continuously broadcasts the download result per chunk\n\n@param URL The URL of the file to be downloaded\n@param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n@param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n@param MaxChunkSize The maximum size of each chunk to download in bytes\n@param OnProgress Delegate for download progress updates\n@param OnChunkDownloadComplete Delegate for broadcasting the completion of the download. Will be called for each chunk\n@param OnAllChunksDownloadComplete Delegate for broadcasting the completion of the download of all chunks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileToMemoryDownloader, nullptr, "DownloadFileToMemoryPerChunk", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms), Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileToMemoryDownloader);
	UClass* Z_Construct_UClass_UFileToMemoryDownloader_NoRegister()
	{
		return UFileToMemoryDownloader::StaticClass();
	}
	struct Z_Construct_UClass_UFileToMemoryDownloader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileToMemoryDownloader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFilesDownloader,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileToMemoryDownloader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory, "DownloadFileToMemory" }, // 1183149638
		{ &Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk, "DownloadFileToMemoryPerChunk" }, // 3646731489
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileToMemoryDownloader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Files Downloader|Memory" },
		{ "Comment", "/**\n * Downloads a file into temporary memory (RAM) and outputs a byte array\n */" },
		{ "IncludePath", "FileToMemoryDownloader.h" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Downloads a file into temporary memory (RAM) and outputs a byte array" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileToMemoryDownloader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileToMemoryDownloader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileToMemoryDownloader_Statics::ClassParams = {
		&UFileToMemoryDownloader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFileToMemoryDownloader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileToMemoryDownloader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileToMemoryDownloader()
	{
		if (!Z_Registration_Info_UClass_UFileToMemoryDownloader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileToMemoryDownloader.OuterSingleton, Z_Construct_UClass_UFileToMemoryDownloader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileToMemoryDownloader.OuterSingleton;
	}
	template<> RUNTIMEFILESDOWNLOADER_API UClass* StaticClass<UFileToMemoryDownloader>()
	{
		return UFileToMemoryDownloader::StaticClass();
	}
	UFileToMemoryDownloader::UFileToMemoryDownloader() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileToMemoryDownloader);
	UFileToMemoryDownloader::~UFileToMemoryDownloader() {}
	struct Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::EnumInfo[] = {
		{ EDownloadToMemoryResult_StaticEnum, TEXT("EDownloadToMemoryResult"), &Z_Registration_Info_UEnum_EDownloadToMemoryResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 944155382U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileToMemoryDownloader, UFileToMemoryDownloader::StaticClass, TEXT("UFileToMemoryDownloader"), &Z_Registration_Info_UClass_UFileToMemoryDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileToMemoryDownloader), 1021901101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_1961777040(TEXT("/Script/RuntimeFilesDownloader"),
		Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
