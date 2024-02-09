// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <HttpModule.h>
#include "HttpRequestActor.generated.h"

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

	UPROPERTY(EditAnywhere)
	FString AI_IP = "192.168.219.103";
	UPROPERTY(EditAnywhere)
	FString AI_PORT = "5001";

	UPROPERTY(EditAnywhere)
	FString DB_IP = "192.168.219.103";
	UPROPERTY(EditAnywhere)
	FString DB_USER = "root";
	UPROPERTY(EditAnywhere)
	FString DB_PWD = "1234";
	UPROPERTY(EditAnywhere)
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
};
