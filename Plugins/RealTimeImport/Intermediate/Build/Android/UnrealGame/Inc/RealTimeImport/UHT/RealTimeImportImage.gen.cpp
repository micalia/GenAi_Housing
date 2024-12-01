// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/ProgrammingWorks/Unreal/Bibimpang/Plugins/RealTimeImport/Source/RealTimeImport/Public/RealTimeImportImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealTimeImportImage() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportImage();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportImage_NoRegister();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTITextureToDeleteStruct();
	UPackage* Z_Construct_UPackage__Script_RealTimeImport();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTITextureToDeleteStruct;
class UScriptStruct* FRTITextureToDeleteStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTITextureToDeleteStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTITextureToDeleteStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTITextureToDeleteStruct, (UObject*)Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTITextureToDeleteStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTITextureToDeleteStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTITextureToDeleteStruct>()
{
	return FRTITextureToDeleteStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTITextureToDeleteStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTITextureToDeleteStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImportImage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTITextureToDeleteStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTITextureToDeleteStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTITextureToDeleteStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTITextureToDeleteStruct",
		sizeof(FRTITextureToDeleteStruct),
		alignof(FRTITextureToDeleteStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTITextureToDeleteStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTITextureToDeleteStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTITextureToDeleteStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTITextureToDeleteStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTITextureToDeleteStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTITextureToDeleteStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTITextureToDeleteStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(URealTimeImportImage::execgetImageColors)
	{
		P_GET_TARRAY(uint8,Z_Param_imageBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FColor>*)Z_Param__Result=URealTimeImportImage::getImageColors(Z_Param_imageBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportImage::execgetRealTimeImportImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportImage**)Z_Param__Result=URealTimeImportImage::getRealTimeImportImage();
		P_NATIVE_END;
	}
	void URealTimeImportImage::StaticRegisterNativesURealTimeImportImage()
	{
		UClass* Class = URealTimeImportImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getImageColors", &URealTimeImportImage::execgetImageColors },
			{ "getRealTimeImportImage", &URealTimeImportImage::execgetRealTimeImportImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics
	{
		struct RealTimeImportImage_eventgetImageColors_Parms
		{
			TArray<uint8> imageBytes;
			TArray<FColor> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_imageBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_imageBytes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::NewProp_imageBytes_Inner = { "imageBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::NewProp_imageBytes = { "imageBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportImage_eventgetImageColors_Parms, imageBytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportImage_eventgetImageColors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::NewProp_imageBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::NewProp_imageBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Image" },
		{ "ModuleRelativePath", "Public/RealTimeImportImage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportImage, nullptr, "getImageColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::RealTimeImportImage_eventgetImageColors_Parms), Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportImage_getImageColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportImage_getImageColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics
	{
		struct RealTimeImportImage_eventgetRealTimeImportImage_Parms
		{
			URealTimeImportImage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportImage_eventgetRealTimeImportImage_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportImage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportImage, nullptr, "getRealTimeImportImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics::RealTimeImportImage_eventgetRealTimeImportImage_Parms), Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportImage);
	UClass* Z_Construct_UClass_URealTimeImportImage_NoRegister()
	{
		return URealTimeImportImage::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealTimeImportImage_getImageColors, "getImageColors" }, // 3672302523
		{ &Z_Construct_UFunction_URealTimeImportImage_getRealTimeImportImage, "getRealTimeImportImage" }, // 3277246527
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RealTimeImportImage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImportImage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportImage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportImage_Statics::ClassParams = {
		&URealTimeImportImage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportImage()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportImage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportImage.OuterSingleton, Z_Construct_UClass_URealTimeImportImage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportImage.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportImage>()
	{
		return URealTimeImportImage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportImage);
	URealTimeImportImage::~URealTimeImportImage() {}
	struct Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_Statics::ScriptStructInfo[] = {
		{ FRTITextureToDeleteStruct::StaticStruct, Z_Construct_UScriptStruct_FRTITextureToDeleteStruct_Statics::NewStructOps, TEXT("RTITextureToDeleteStruct"), &Z_Registration_Info_UScriptStruct_RTITextureToDeleteStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTITextureToDeleteStruct), 1649865725U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealTimeImportImage, URealTimeImportImage::StaticClass, TEXT("URealTimeImportImage"), &Z_Registration_Info_UClass_URealTimeImportImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportImage), 1286052790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_2574511429(TEXT("/Script/RealTimeImport"),
		Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bibimpang_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
