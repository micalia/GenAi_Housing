// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpRequestActor.h"
#include "..\..\..\Plugins\MySqlConnect\Source\MySqlConnect\Public\MySQLDatabase.h"
#include "..\Public\MainMenu.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/EditableTextBox.h"
#include "Components/WidgetSwitcher.h"
#include "..\Public\RoomSlot.h"
#include "Components/TextBlock.h"
#include "Components/ScrollBox.h"
#include "..\Public\GenAiGameInstance.h"
#include <OnlineSessionSettings.h>
#include <Interfaces\IHttpRequest.h>
#include "..\Public\GenAiPlayerController.h"
#include "..\Public\JsonParseLibrary.h"
#include "..\Public\InGameWidget.h"
#include <Interfaces\IHttpResponse.h>
#include "..\Public\HousingWidget.h"
#include "..\Public\NetPlayerState.h"
#include "..\Public\ObjSlot.h"
#include <GenericPlatform\GenericPlatformHttp.h>
#include <ImageUtils.h>
#include <UMG\Public\Components\Image.h>
#include "..\Public\CustomFBXMeshActor.h"
#include "..\Public\GenAiGameState.h"
#include <UMG\Public\Components\CircularThrobber.h>

// Sets default values
AHttpRequestActor::AHttpRequestActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FClassFinder<URoomSlot> RoomSlotBPClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprints/Widget/Menu/WB_RoomSlot.WB_RoomSlot_C'"));
	if (ensure(RoomSlotBPClass.Class != nullptr)) {
		RoomSlotFactory = RoomSlotBPClass.Class;
	}
}

// Called when the game starts or when spawned
void AHttpRequestActor::BeginPlay()
{
	Super::BeginPlay();

	gi = Cast<UGenAiGameInstance>(GetGameInstance());
	gi->onCreateSlot.AddDynamic(this, &AHttpRequestActor::OnSlotCreated);

	httpModule = FHttpModule::Get();
	PostURL = AI_IP + ":" + AI_PORT + TEXT("/text2obj");

	FString LoadObjSlotClass = TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprints/Widget/InGame/WB_ObjSlot.WB_ObjSlot_C'");
	UClass* loadedObject = StaticLoadClass(UObject::StaticClass(), nullptr, *LoadObjSlotClass);

	objSlotFactory = loadedObject;
}

// Called every frame
void AHttpRequestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHttpRequestActor::SignUp()
{
	UMainMenu* MainMenuPtr = GetMainMenuWidget();
	if (MainMenuPtr) {
		OnMySQLInitConnection();
		FString SelectQuery = L"SELECT nickName FROM userInfo WHERE nickName= '" +
			MainMenuPtr->signUpNickTxt->GetText().ToString() + "'";
		FMySQLConnectoreQueryResult SelectResult = MySqlDB->MySQLConnectorGetData(SelectQuery, Conn);
		if (SelectResult.ResultRows.Num() > 0) {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("already exist user name")), true, FVector2D(2, 2));
			return;
		}

		FString InsertQuery = L"INSERT INTO userInfo VALUES('" +
			MainMenuPtr->signUpNickTxt->GetText().ToString() +
			"', '" +
			MainMenuPtr->signUpPwdTxt->GetText().ToString() + "')";
		if (MySqlDB->MySQLConnectorExecuteQuery(InsertQuery, Conn)) {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Join Success!!")), true, FVector2D(2, 2));
			MainMenuPtr->WidgetSwitcher->SetActiveWidgetIndex(0);
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Join Fail.........")), true, FVector2D(2, 2));
		}
	}
}

void AHttpRequestActor::Login()
{
	UMainMenu* MainMenuPtr = GetMainMenuWidget();
	if (MainMenuPtr) {
		FString inputName = MainMenuPtr->LoginNickTxt->GetText().ToString();
		FString inputPwd = MainMenuPtr->LoginPwdTxt->GetText().ToString();
		FString SelectQuery = L"SELECT nickName FROM userInfo WHERE nickName= '" +
			inputName + "' and " +
			"pwd='" + inputPwd + "'";
		OnMySQLInitConnection();
		FMySQLConnectoreQueryResult SelectResult = MySqlDB->MySQLConnectorGetData(SelectQuery, Conn);
		 
		if (SelectResult.ResultRows.Num() == 0) {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Not Found User")), true, FVector2D(2, 2));
			return;
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Login Complete")), true, FVector2D(2, 2));
		}
		//DBLoadUserRooms();
		gi->SetPlayerName(inputName);
		//auto ps = GetWorld()->GetFirstPlayerController()->GetPlayerState<ANetPlayerState>();
		//ps->SetPlayerName(inputName);
		gi->FindSession();
		MainMenuPtr->WidgetSwitcher->SetActiveWidgetIndex(2);
	}
}


void AHttpRequestActor::OnSlotCreated(FString roomName, int32 currentPlayers, int32 maxPlayers, int32 sessionIdx)
{
	UMainMenu* MainMenuPtr = GetMainMenuWidget();
	if (MainMenuPtr != nullptr && RoomSlotFactory != nullptr)
	{
		if (URoomSlot* RoomSlot = CreateWidget<URoomSlot>(GetWorld(), RoomSlotFactory))
		{
			RoomSlot->SetSessionInfo(roomName, currentPlayers, maxPlayers, sessionIdx);
			MainMenuPtr->RoomList->AddChild(RoomSlot);
		}
	}
}

void AHttpRequestActor::GetObjDataFromDB()
{
	AGenAiPlayerController* pc = Cast<AGenAiPlayerController>(GetWorld()->GetFirstPlayerController());
	if (pc !=nullptr && pc->InGameWidgetPtr != nullptr) {
		OnMySQLInitConnection();
		if (Conn) {
			FString query = L"SELECT * FROM `objInfo`";
			FMySQLConnectoreQueryResult QueryResult = MySqlDB->MySQLConnectorGetData(query, Conn);

			TArray<UUserWidget*> ObjSlotWidgets;
			UWidgetBlueprintLibrary::GetAllWidgetsOfClass(GetWorld(), ObjSlotWidgets, UObjSlot::StaticClass(), false);

			// 각 위젯을 제거합니다.
			for (UUserWidget* Slot : ObjSlotWidgets)
			{
				if (IsValid(Slot) && Cast<UObjSlot>(Slot))
				{
					Slot->RemoveFromParent();
				}
			}

			for (int i = 0; i < QueryResult.ResultRows.Num(); i++) {
				FObjDataInfo row;
				row.objIndex = FCString::Atoi(*QueryResult.ResultRows[i].Fields[0].Value);
				row.objName = QueryResult.ResultRows[i].Fields[1].Value;
				row.objPrompt = QueryResult.ResultRows[i].Fields[2].Value;
				row.makeTimeStamp = QueryResult.ResultRows[i].Fields[3].Value;
				row.maker = QueryResult.ResultRows[i].Fields[4].Value;

				UObjSlot* objSlot = CreateWidget<UObjSlot>(GetWorld(), objSlotFactory);

				if (objSlot) {
					objSlot->objDataInfo = FObjDataInfo(row.objIndex, row.objName, row.objPrompt, row.makeTimeStamp, row.maker);
					objSlot->objNameTxt->SetText(FText::FromString("Name : " + row.objName));
					objSlot->makerNameTxt->SetText(FText::FromString("Maker : " + row.maker));
					GetObjThumbRequest(objSlot, objSlot->objDataInfo.objPrompt, objSlot->objDataInfo.makeTimeStamp);

					pc->InGameWidgetPtr->WB_HousingWidget->ObjSlotScroll->AddChild(objSlot);

				}
			}

		}
		 
	}

}

void AHttpRequestActor::GetObjThumbRequest(class UObjSlot* ObjSlot, const FString& ObjPrompt, const FString& MakeTimeStamp)
{
	TSharedRef<IHttpRequest> req = FHttpModule::Get().CreateRequest();

	FString ThumbFileName = MakeTimeStamp + "_" + ObjPrompt + "_thumb.png";
 	FString EncodedFilePath = FGenericPlatformHttp::UrlEncode(ThumbFileName);
	FString ThumbSavePath = "/static/output/text3d/thumb/" + EncodedFilePath;
	FString GenAiThumbUrl = AI_IP +":" + AI_PORT + ThumbSavePath;

	req->SetURL(GenAiThumbUrl);
	req->SetVerb("GET");
	req->SetHeader(TEXT("Content-Type"), TEXT("image/jpeg"));
	req->OnProcessRequestComplete().BindUObject(this, &AHttpRequestActor::OnGetThumbData);
	req->ProcessRequest();

	FString reqURL = req->GetURL();

	spawnGenerateAiIconMap.Add(reqURL, ObjSlot);
}

void AHttpRequestActor::OnGetThumbData(TSharedPtr<IHttpRequest> Request, TSharedPtr<IHttpResponse> Response, bool bConnectedSuccessfully)
{
	if (bConnectedSuccessfully) {
		if (Response->GetResponseCode() == 200) {
			FString reqURL = Request->GetURL();
			TArray<uint8> texBites = Response->GetContent();
			UTexture2D* realTex = FImageUtils::ImportBufferAsTexture2D(texBites);
			SetThumbTexture(realTex, reqURL);
		}
		else {
			FString reqURL = Request->GetURL();
		}
	}
}

void AHttpRequestActor::SetThumbTexture(class UTexture2D* tex, FString fileName)
{
	if (tex != nullptr && !fileName.Equals("")) { 
		UObjSlot* objSlotRef = spawnGenerateAiIconMap.FindRef(fileName);
		objSlotRef->SlotImage->SetBrushFromTexture(tex);
	}
}

TSet<FString>& AHttpRequestActor::DBLoadUserRooms()
{
	SelectUsersArr.Empty();
	
	OnMySQLInitConnection();
	if (Conn) {
		FString SelectQuery = L"SELECT nickName FROM userInfo";
		if (MySqlDB == nullptr) {
			UE_LOG(LogTemp, Warning, TEXT("MySqlDB is Null"))
			return SelectUsersArr;
		}
		FMySQLConnectoreQueryResult SelectResult = MySqlDB->MySQLConnectorGetData(SelectQuery, Conn);

		for (const auto& ResultRow : SelectResult.ResultRows)
		{
			FString UserName = ResultRow.Fields[0].Value;
			SelectUsersArr.Add(UserName);
		}
		 
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Not Init Sql Conn"))
	}

	return SelectUsersArr;
}

void AHttpRequestActor::PostRequest()
{
	if (AGenAiPlayerController* pc = Cast<AGenAiPlayerController>(GetWorld()->GetFirstPlayerController())) {
		TMap<FString, FString> promptTextData;

		FString TimeString = FDateTime::UtcNow().ToString(TEXT("%Y-%m-%d-%H-%M-%S"));

		//TimeString = "2023-11-20-10-35-55";
		RuntimeGenereateAIstartTime = TimeString;
		UE_LOG(LogTemp, Warning, TEXT("Text To 3D_TimeString -  : %s"), *RuntimeGenereateAIstartTime)
			promptTextData.Add("MakeTimeStamp", TimeString);

		FString prompt = pc->InGameWidgetPtr->WB_HousingWidget->prompt_txt->GetText().ToString();
		promptTextData.Add("Prompt", prompt);
		GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("prompt: %s"), *prompt), true, FVector2D(2, 2));

		APawn* pawn = pc->GetPawn();
		FString Maker = pawn->GetPlayerState()->GetPlayerName();
		GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("MakerName: %s"), *Maker), true, FVector2D(2, 2));
		promptTextData.Add("Maker", Maker);

		FString jsonData = UJsonParseLibrary::MakeJson(promptTextData);
		GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Purple, FString::Printf(TEXT("Send: %s"), *jsonData), true, FVector2D(2, 2));
		TSharedRef<IHttpRequest> req = httpModule.CreateRequest();
		req->SetURL(PostURL);
		req->SetVerb(TEXT("POST"));
		req->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
		req->SetContentAsString(jsonData);
		req->OnProcessRequestComplete().BindUObject(this, &AHttpRequestActor::OnPostData);
		req->ProcessRequest();
		
		bRuntimeGenerateAI = true;

		RequestObjName = prompt;
		RequestMakeTime = TimeString;
		ChkGenerateResult();
	}

}

void AHttpRequestActor::OnPostData(TSharedPtr<IHttpRequest> Request, TSharedPtr<IHttpResponse> Response, bool bConnectedSuccessfully)
{
	if (bConnectedSuccessfully) {
		FString receivedData = Response->GetContentAsString();
		//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Purple, FString::Printf(TEXT("ReCeivedData : %s"),  *receivedData), true, FVector2D(1, 1));
	}
	else {
		//요청 전송 상태 확인
		EHttpRequestStatus::Type status = Request->GetStatus();
		switch (status)
		{
		case EHttpRequestStatus::NotStarted:
			break;
		case EHttpRequestStatus::Processing:
			break;
		case EHttpRequestStatus::Failed:
			break;
		case EHttpRequestStatus::Failed_ConnectionError:
			break;
		case EHttpRequestStatus::Succeeded:
			break;
		default:
			break;
		}

		//응답코드 확인
		int32 responseCode = Response->GetResponseCode();
		//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Purple, FString::Printf(TEXT("ResponseCode : %d"),  responseCode), true, FVector2D(1, 1));
	}
}

void AHttpRequestActor::UpdateObjDataToDB(TArray<class ACustomFBXMeshActor*> InRoomInfoArr)
{
	OnMySQLInitConnection();

	if (Conn) {
		for (const ACustomFBXMeshActor* InRoomInfo : InRoomInfoArr)
		{
			FString UpdateObjTransformQuery = L"UPDATE objTransform SET position =  '" + InRoomInfo->GetActorLocation().ToString() + "', rotation = '" +
				InRoomInfo->GetActorRotation().ToString() + "', scale = '" + InRoomInfo->GetActorScale3D().ToString() + 
				"' WHERE roomObjIndex = " + FString::FromInt(InRoomInfo->RoomObjIndex);/*
			FString UpdateQuery = L"UPDATE roomInfo SET position =  '" + InRoomInfo->GetActorLocation().ToString() + "', rotation = '" +
				InRoomInfo->GetActorRotation().ToString() + "', scale = '" + InRoomInfo->GetActorScale3D().ToString() + 
				"' WHERE idx = " + FString::FromInt(InRoomInfo->RoomObjIndex);*/
			if (MySqlDB->MySQLConnectorExecuteQuery(UpdateObjTransformQuery, Conn)) {
				GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple,
					FString::Printf(TEXT("%s > %s > Success Update"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
						*FString(__FUNCTION__)), true, FVector2D(1, 1));
			}
			else {
				GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple,
					FString::Printf(TEXT("%s > %s > Fail Update"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
						*FString(__FUNCTION__)), true, FVector2D(1, 1));
			}
		}
		 
	}
}

void AHttpRequestActor::InsertObjDataToDB(TArray<class ACustomFBXMeshActor*> InAddFbxInfoActorArr, TSet<FRoomInfo>& InRoomObjIndexArr)
{
	OnMySQLInitConnection();
	if (gi == nullptr) {
		gi = Cast<UGenAiGameInstance>(GetGameInstance());
	}
	for (ACustomFBXMeshActor* InAddFbxActor: InAddFbxInfoActorArr)
	{
		FRoomInfo roomInfo;
		roomInfo.nickName = gi->GetSessionName();
		roomInfo.objIndex = InAddFbxActor->ObjIndex;
		roomInfo.position = InAddFbxActor->GetActorLocation().ToString();
		roomInfo.rotation = InAddFbxActor->GetActorRotation().ToString();
		roomInfo.scale = InAddFbxActor->GetActorScale3D().ToString();

		/*FString InsertRoomInfoQuery = L"INSERT INTO roomInfo VALUES(null, '" + roomInfo.nickName +
		"', " + FString::FromInt(roomInfo.objIndex) + ", '" + roomInfo.position + "',  '" +
			roomInfo.rotation + "', '" + roomInfo.scale + "')";*/

		FString InsertObjTransformQuery = L"INSERT INTO objTransform VALUES(null, '" +
			roomInfo.position + "',  '" + roomInfo.rotation + "', '" + roomInfo.scale + "')";
		if (MySqlDB->MySQLConnectorExecuteQuery(InsertObjTransformQuery, Conn)) {
			FString GetLastInsertID = "SELECT LAST_INSERT_ID()";
			FMySQLConnectoreQueryResult GetLastInsertIDResult = MySqlDB->MySQLConnectorGetData(GetLastInsertID, Conn);

			if (GetLastInsertIDResult.ResultRows.Num() > 0) {
				int32 idx = FCString::Atoi(*GetLastInsertIDResult.ResultRows[0].Fields[0].Value);
				FString InsertRoomInfoQuery = L"INSERT INTO roomInfo VALUES("+ FString::FromInt(idx) +", " + FString::FromInt(roomInfo.objIndex) +
					", '" + roomInfo.nickName + "')";
				if (MySqlDB->MySQLConnectorExecuteQuery(InsertRoomInfoQuery, Conn)) {
					InAddFbxActor->RoomObjIndex = idx;
					roomInfo.roomObjIndex = idx;
					InRoomObjIndexArr.Add(roomInfo);
					GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple,
						FString::Printf(TEXT("%s > %s > Insert Sucess"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
							*FString(__FUNCTION__)), true, FVector2D(1, 1));
				}
			}
		}
	}
}

TArray<FRoomInfo>& AHttpRequestActor::GetRoomObjDataFromDB()
{
	OnMySQLInitConnection();
	if (gi == nullptr) {
		gi = Cast<UGenAiGameInstance>(GetGameInstance());
	}
	if (Conn) {
		RoomObjArr.Empty();
		if (Conn && gi) {
			FString query = L"SELECT * FROM `roomInfo` A INNER JOIN `objTransform` B ON A.roomObjIndex = B.roomObjIndex INNER JOIN `objInfo` C ON C.objIndex = A.objIndex where nickName = '" + gi->GetSessionName() + "'";
			UE_LOG(LogTemp, Warning, TEXT("Query: %s"), *query)
			FMySQLConnectoreQueryResult QueryResult = MySqlDB->MySQLConnectorGetData(query, Conn);
		
			for (const auto& Result : QueryResult.ResultRows)
			{
				FRoomInfo RoomObj;
				RoomObj.roomObjIndex = FCString::Atoi(*Result.Fields[0].Value);
				RoomObj.nickName = Result.Fields[2].Value;
				RoomObj.objIndex = FCString::Atoi(*Result.Fields[7].Value);
				RoomObj.position = Result.Fields[4].Value;
				RoomObj.rotation = Result.Fields[5].Value;
				RoomObj.scale = Result.Fields[6].Value;
				RoomObj.fileName = Result.Fields[10].Value + "_" + Result.Fields[9].Value;

				RoomObjArr.Add(RoomObj);
			}
		}
		 
	}
	return RoomObjArr;
}

void AHttpRequestActor::DeleteRoomObjInfo(TArray<int32>& InDeleteArr)
{
	OnMySQLInitConnection();

	if (Conn) {
		for (const int32& DeleteObjIdx : InDeleteArr)
		{
			FString DeleteRoomInfoQuery = L"DELETE FROM roomInfo WHERE roomObjIndex = "+ FString::FromInt(DeleteObjIdx);
			if (MySqlDB->MySQLConnectorExecuteQuery(DeleteRoomInfoQuery, Conn)) {
				FString DeleteObjTransformQuery = L"DELETE FROM objTransform WHERE roomObjIndex = "+ FString::FromInt(DeleteObjIdx);
				if (MySqlDB->MySQLConnectorExecuteQuery(DeleteObjTransformQuery, Conn)) {
					GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple,
						FString::Printf(TEXT("%s > %s > Success Delete"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
							*FString(__FUNCTION__)), true, FVector2D(1, 1));
				}
			}
			else {
				GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple,
					FString::Printf(TEXT("%s > %s > Fail Delete"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
						*FString(__FUNCTION__)), true, FVector2D(1, 1));
			}
		}
		InDeleteArr.Empty();

	}
	
}

void AHttpRequestActor::ChkGenerateResult()
{
	OnMySQLInitConnection();
	if (Conn) {
		GEngine->AddOnScreenDebugMessage(-1, 0.5, FColor::Purple,
			FString::Printf(TEXT("%s > %s > ChkGenerateResult"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
				*FString(__FUNCTION__)), true, FVector2D(1, 1));
		FString GetCountQuery = L"SELECT COUNT(*) FROM objInfo WHERE objName='" + RequestObjName +
			"' AND makeTimeStamp='" + RequestMakeTime + "'";
		
		FMySQLConnectoreQueryResult CountResult = MySqlDB->MySQLConnectorGetData(GetCountQuery, Conn);
		if (CountResult.Success) {
			int32 ObjCount = FCString::Atoi(*CountResult.ResultRows[0].Fields[0].Value);
			if (ObjCount > 0) {
				AGenAiGameState* Gs = Cast<AGenAiGameState>(GetWorld()->GetGameState());
				if (Gs) {
					if (UInGameWidget* GameWidget = Gs->GetInGameWidget()) { 
						GameWidget->WB_HousingWidget->NotifyIcon->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
						GameWidget->WB_HousingWidget->GeneratingMark->SetVisibility(ESlateVisibility::Hidden);
						return;
					}
				}
			}
		}

	}
	GetWorldTimerManager().SetTimer(ChkGenerateTimer, this, &AHttpRequestActor::ChkGenerateResult, 1, false);
}

void AHttpRequestActor::OnMySQLInitConnection()
{
	if (MySqlDB == nullptr) {
		MySqlDB = NewObject<UMySQLDatabase>();
	}
	if (Conn == nullptr) {
		Conn = MySqlDB->MySQLInitConnection(
			DB_IP,
			DB_USER,
			DB_PWD,
			DB_NAME,
			ConnectionTimeout,
			ReadTimeout,
			WriteTimeout);
	}
	if (Conn && Conn->MySQLCheckConnection()) {
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Purple,
			FString::Printf(TEXT("%s > %s > Success Conn"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
		*FString(__FUNCTION__)), true, FVector2D(1, 1));
	}
	else {
GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple,
	FString::Printf(TEXT("%s > %s > Fail Conn"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
		*FString(__FUNCTION__)), true, FVector2D(1, 1));

	}
}

UMainMenu* AHttpRequestActor::GetMainMenuWidget()
{
	TArray<UUserWidget*> ActiveWidgets;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(GetWorld(), ActiveWidgets, UUserWidget::StaticClass(), false);

	for (UUserWidget* Widget : ActiveWidgets)
	{
		UMainMenu* MainMenuPtr = Cast<UMainMenu>(Widget);
		if (IsValid(MainMenuPtr) && Widget->IsInViewport())
		{
			return MainMenuPtr;
		}
	}
	return nullptr;
}

