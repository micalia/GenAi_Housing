// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <HttpModule.h>
#include "HttpRequestActor.generated.h"

USTRUCT()
struct FRoomInfo {
	GENERATED_BODY()

	UPROPERTY()
		FString nickName = TEXT("");
	UPROPERTY()
		int32 objIndex = -1;
	UPROPERTY()
		FString position = TEXT("");
	UPROPERTY()
		FString rotation = TEXT("");
	UPROPERTY()
		FString scale = TEXT("");
	UPROPERTY()
		FString fileName = TEXT("");
	UPROPERTY()
		int32 roomObjIndex = -1;

	bool operator==(const FRoomInfo& InRoomInfo) const
	{
		return roomObjIndex == InRoomInfo.roomObjIndex;
	}

	friend FORCEINLINE uint32 GetTypeHash(const FRoomInfo& InRoomInfoData)
	{
		return GetTypeHash(InRoomInfoData.roomObjIndex);
	}
};

UCLASS()
class GENAI_HOUSING_API AHttpRequestActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHttpRequestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FString AI_IP = TEXT("122.45.102.22");
	//FString AI_IP = TEXT("192.168.219.103");
	FString AI_PORT = TEXT("5001");
	FString AI_FBX_PATH = TEXT("/static/output/text3d/fbx/");
	FString AI_TEXTURE_PATH = TEXT("/static/output/text3d/texture/");
	UPROPERTY(BlueprintReadOnly)
		FString AI_FBX_FULL_PATH = AI_IP + ":" + AI_PORT + AI_FBX_PATH;
	UPROPERTY(BlueprintReadOnly)
		FString AI_TEXTURE_FULL_PATH = AI_IP + ":" + AI_PORT + AI_TEXTURE_PATH;

	FString DB_IP = AI_IP;
	FString DB_USER = TEXT("root");
	FString DB_PWD = TEXT("rhkddnseo"); // �����
	FString DB_NAME = TEXT("housingdb");
	UPROPERTY(EditAnywhere)
		int ConnectionTimeout = 230;
	UPROPERTY(EditAnywhere)
		int ReadTimeout = 230;
	UPROPERTY(EditAnywhere)
		int WriteTimeout = 230;

	UPROPERTY(BlueprintReadWrite)
		class UMySQLDatabase* MySqlDB;

	UPROPERTY(BlueprintReadWrite)
		class UMySQLConnection* Conn;

	void OnMySQLInitConnection();

	UFUNCTION(BlueprintCallable)
		class UMainMenu* GetMainMenuWidget();

	UFUNCTION()
		void SignUp();

	void Login();

	UPROPERTY()
		class UGenAiGameInstance* gi;

	UFUNCTION()
		void OnSlotCreated(FString roomName, int32 currentPlayers, int32 maxPlayers, int32 sessionIdx);

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UObjSlot> objSlotFactory;

	UFUNCTION(BlueprintCallable)
		void GetObjDataFromDB();
	void GetObjThumbRequest(class UObjSlot* ObjSlot, const FString& ObjPrompt, const FString& MakeTimeStamp);
	void OnGetThumbData(TSharedPtr<IHttpRequest> Request, TSharedPtr<IHttpResponse> Response, bool bConnectedSuccessfully);
	void SetThumbTexture(class UTexture2D* tex, FString fileName);

	UPROPERTY()
		TMap<FString, class UObjSlot*> spawnGenerateAiIconMap;
public:
	TSubclassOf<class URoomSlot> RoomSlotFactory;

	TSet<FString> SelectUsersArr;
	TSet<FString>& GetAllUserNameFromDB();

public:
	//Text to 3d
	class FHttpModule& httpModule = FHttpModule::Get();

	UPROPERTY(EditAnywhere)
		FString PostURL;

	UFUNCTION(BlueprintCallable)
		void CreateGenAiObj();
	void OnPostData(TSharedPtr<IHttpRequest> Request, TSharedPtr<IHttpResponse> Response, bool bConnectedSuccessfully);

	FString RuntimeGenereateAIstartTime;
	bool bRuntimeGenerateAI;

	void UpdateObjDataToDB(TArray<class ACustomFBXMeshActor*> InRoomInfoArr);
	void InsertObjDataToDB(TArray<class ACustomFBXMeshActor*> InAddFbxInfoActorArr);
	void InsertObjDataToDB(TArray<class ACustomFBXMeshActor*> InAddFbxInfoActorArr, TSet<FRoomInfo>& InRoomObjIndexArr);

public:
	TArray<FRoomInfo> RoomObjArr;
	TArray<FRoomInfo>& GetRoomObjDataFromDB();

	void DeleteRoomObjInfo(TArray<int32>& InDeleteArr);
private:
	FTimerHandle ChkGenerateTimer;
	void ChkGenerateResult();
	FString RequestMakeTime;
	FString RequestObjName;
};
