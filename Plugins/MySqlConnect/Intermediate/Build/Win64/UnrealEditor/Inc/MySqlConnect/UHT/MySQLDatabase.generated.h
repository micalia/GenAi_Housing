// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MySQLDatabase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UMySQLConnection;
struct FMySQLConnectoreQueryResult;
struct FMySQLConnectorTable;
struct FMySQLConnectorTableField;
#ifdef MYSQLCONNECT_MySQLDatabase_generated_h
#error "MySQLDatabase.generated.h already included, missing '#pragma once' in MySQLDatabase.h"
#endif
#define MYSQLCONNECT_MySQLDatabase_generated_h

#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLConnectorConnectionStruct_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MYSQLCONNECT_API UScriptStruct* StaticStruct<struct FMySQLConnectorConnectionStruct>();

#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLConnectorKeyValuePair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MYSQLCONNECT_API UScriptStruct* StaticStruct<struct FMySQLConnectorKeyValuePair>();

#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLConnectorQueryResultRow_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MYSQLCONNECT_API UScriptStruct* StaticStruct<struct FMySQLConnectorQueryResultRow>();

#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLConnectoreQueryResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MYSQLCONNECT_API UScriptStruct* StaticStruct<struct FMySQLConnectoreQueryResult>();

#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_SPARSE_DATA
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMySQLConnectorGetData); \
	DECLARE_FUNCTION(execMySQLConnectorGetPlayerControllerIP); \
	DECLARE_FUNCTION(execMySQLConnectorInsertTest); \
	DECLARE_FUNCTION(execMySQLConnectorVARCHAR); \
	DECLARE_FUNCTION(execMySQLConnectorINT); \
	DECLARE_FUNCTION(execCreateTable); \
	DECLARE_FUNCTION(execTruncateTable); \
	DECLARE_FUNCTION(execDropTable); \
	DECLARE_FUNCTION(execMySQLConnectorExecuteQuery); \
	DECLARE_FUNCTION(execMySQLInitConnection);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMySQLConnectorGetData); \
	DECLARE_FUNCTION(execMySQLConnectorGetPlayerControllerIP); \
	DECLARE_FUNCTION(execMySQLConnectorInsertTest); \
	DECLARE_FUNCTION(execMySQLConnectorVARCHAR); \
	DECLARE_FUNCTION(execMySQLConnectorINT); \
	DECLARE_FUNCTION(execCreateTable); \
	DECLARE_FUNCTION(execTruncateTable); \
	DECLARE_FUNCTION(execDropTable); \
	DECLARE_FUNCTION(execMySQLConnectorExecuteQuery); \
	DECLARE_FUNCTION(execMySQLInitConnection);


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_ACCESSORS
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMySQLDatabase(); \
	friend struct Z_Construct_UClass_UMySQLDatabase_Statics; \
public: \
	DECLARE_CLASS(UMySQLDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MySqlConnect"), NO_API) \
	DECLARE_SERIALIZER(UMySQLDatabase)


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_INCLASS \
private: \
	static void StaticRegisterNativesUMySQLDatabase(); \
	friend struct Z_Construct_UClass_UMySQLDatabase_Statics; \
public: \
	DECLARE_CLASS(UMySQLDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MySqlConnect"), NO_API) \
	DECLARE_SERIALIZER(UMySQLDatabase)


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLDatabase(UMySQLDatabase&&); \
	NO_API UMySQLDatabase(const UMySQLDatabase&); \
public: \
	NO_API virtual ~UMySQLDatabase();


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySQLDatabase(UMySQLDatabase&&); \
	NO_API UMySQLDatabase(const UMySQLDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLDatabase) \
	NO_API virtual ~UMySQLDatabase();


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_121_PROLOG
#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_SPARSE_DATA \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_RPC_WRAPPERS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_ACCESSORS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_INCLASS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_SPARSE_DATA \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_ACCESSORS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_INCLASS_NO_PURE_DECLS \
	FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h_124_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MySQLDatabase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSQLCONNECT_API UClass* StaticClass<class UMySQLDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProgrammingWorks_GenAi_Git_GenAi_Housing_Plugins_MySqlConnect_Source_MySqlConnect_Public_MySQLDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
