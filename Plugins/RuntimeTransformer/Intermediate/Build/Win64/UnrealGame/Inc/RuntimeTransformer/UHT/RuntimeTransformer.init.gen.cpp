// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeTransformer_init() {}
	RUNTIMETRANSFORMER_API UFunction* Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RuntimeTransformer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RuntimeTransformer()
	{
		if (!Z_Registration_Info_UPackage__Script_RuntimeTransformer.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeTransformer_GizmoStateChangedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RuntimeTransformer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x02A2C84C,
				0x030C02C1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RuntimeTransformer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RuntimeTransformer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RuntimeTransformer(Z_Construct_UPackage__Script_RuntimeTransformer, TEXT("/Script/RuntimeTransformer"), Z_Registration_Info_UPackage__Script_RuntimeTransformer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x02A2C84C, 0x030C02C1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
