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
	FString nickName;
	UPROPERTY()
	int32 objIndex;
	UPROPERTY()
	FString position;
	UPROPERTY()
	FString rotation;
	UPROPERTY()
	FString scale;

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
	FString AI_IP = "192.168.219.105";
	FString AI_PORT = "5001";
	FString AI_FBX_PATH = "/static/output/text3d/fbx/";
	FString AI_TEXTURE_PATH = "/static/output/text3d/texture/";
	UPROPERTY(BlueprintReadOnly)
	FString AI_FBX_FULL_PATH = AI_IP + ":" + AI_PORT + AI_FBX_PATH;
	UPROPERTY(BlueprintReadOnly)
	FString AI_TEXTURE_FULL_PATH = AI_IP + ":" + AI_PORT + AI_TEXTURE_PATH;
	
	FString DB_IP = AI_IP;
	FString DB_USER = "root";
	FString DB_PWD = "1234";
	FString DB_NAME = "housingdb";
	UPROPERTY(EditAnywhere)
	int ConnectionTimeout = 10;
	UPROPERTY(EditAnywhere)
	int ReadTimeout = 10;
	UPROPERTY(EditAnywhere)
	int WriteTimeout = 10;

	UPROPERTY(BlueprintReadWrite)
	class UMySQLDatabase* MySqlDB;

	UPROPERTY(BlueprintReadWrite)
	class UMySQLConnection* Conn;
	
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

	void DBLoadUserRooms(); //사용안함

public:
	//Text to 3d
	class FHttpModule& httpModule = FHttpModule::Get();

	UPROPERTY(EditAnywhere)
	FString PostURL;

	UFUNCTION(BlueprintCallable)
	void PostRequest();
	void OnPostData(TSharedPtr<IHttpRequest> Request, TSharedPtr<IHttpResponse> Response, bool bConnectedSuccessfully);

	FString RuntimeGenereateAIstartTime;
	bool bRuntimeGenerateAI;

	void InsertObjDataToDB(TArray<FRoomInfo> RoomInfoArr);

	void GetFileNamesByIds(TArray<AActor*> fbxActorArr);
};
