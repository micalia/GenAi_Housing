// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonParseLibrary.h"

FString UJsonParseLibrary::JsonParse(const FString& originData)
{
	FString parsedData;

	//Reader를 만든다.
	TSharedRef<TJsonReader<TCHAR>> reader = TJsonReaderFactory<TCHAR>::Create(originData);

	//reader로 파싱된 결과를 담을 json Object선언
	TSharedPtr<FJsonObject> result = MakeShareable(new FJsonObject());

	if (FJsonSerializer::Deserialize(reader, result)) {
		TArray<TSharedPtr<FJsonValue>> parsedDataArr = result->GetArrayField("items");

		for (TSharedPtr<FJsonValue> pd : parsedDataArr)
		{
			FString bookName = pd->AsObject()->GetStringField("bk_nm");
			FString authorName = pd->AsObject()->GetStringField("aut_nm");
			parsedData.Append(FString::Printf(TEXT("Book Name: %s\nAuthor Name: %s\n\n"), *bookName, *authorName));
		}
	}

	return parsedData;
}

FString UJsonParseLibrary::MakeJson(const TMap<FString, FString> source)
{
	TSharedPtr<FJsonObject> JsonObj = MakeShareable(new FJsonObject());

	for (TPair<FString, FString> kv : source)
	{
		JsonObj->SetStringField(kv.Key, kv.Value);
	}

	FString JsonData;
	TSharedRef<TJsonWriter<TCHAR>> writer = TJsonWriterFactory<TCHAR>::Create(&JsonData);
	FJsonSerializer::Serialize(JsonObj.ToSharedRef(), writer);

	return JsonData;
}
